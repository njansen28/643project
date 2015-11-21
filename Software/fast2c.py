# This script generates a header used by the Xilinx SDK program which runs on
# the Zynq. We pre-process the genome sequences into a binary format.

filename_ref_genome = 'long_reference.fasta'
filename_reads      = 'long_sequences.fastq'
filename_out        = 'data.h'

def next_base_pair(stream):
    while True:
        c = stream.read(1)
        if c in ['A', 'G', 'C', 'T', '']:
            return c

def base_pair_idx(base_pair):
    if base_pair == 'A':
        return 0
    elif base_pair == 'G':
        return 1
    elif base_pair == 'C':
        return 2
    elif base_pair == 'T':
        return 3
    else:
        raise ValueError

def base_pair_quartet(string):
    num = 0
    i = 0
    for base_pair in string:
        num |= base_pair_idx(base_pair) << i;
        i += 2
    return num

with open(filename_out, 'w') as file_out:

    file_out.write('#ifndef _DATA_H_\n')
    file_out.write('#define _DATA_H_\n')

    file_out.write('\n')

    file_out.write('#define REF_SIZE 1000000\n')
    file_out.write('#define READ_SIZE 100\n')
    file_out.write('#define NUM_READS 10000\n')

    file_out.write('\n')

    file_out.write('unsigned char __attribute__((aligned(128))) ref_genome[REF_SIZE/4] = {\n')
    with open(filename_ref_genome, 'r') as file_ref_genome:
        while True:
            string = ''
            for i in range(4):
                base_pair = next_base_pair(file_ref_genome)
                string += base_pair
            if string == '':
                break
            num = base_pair_quartet(string)
            file_out.write('  0x%02x, // %s\n'%(num, string))
    file_out.write('};\n')

    file_out.write('\n')

    file_out.write('unsigned int reads[NUM_READS][(READ_SIZE-1)/16+1] = {\n')
    with open(filename_reads, 'r') as file_reads:
        for line in file_reads:
            line = line.strip()
            if line[0] == '@':
                file_out.write('  //%s\n'%line[1:])
            else:
                file_out.write('  {\n')
                i = 0
                while i < len(line):
                    string = line[i:min(i+16,len(line))]
                    num = base_pair_quartet(string)
                    file_out.write('    0x%08x, // %s\n'%(num, string))
                    i += 16
                file_out.write('  },\n')
    file_out.write('};\n')

    file_out.write('\n')

    file_out.write('#endif\n')
