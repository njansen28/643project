#include "needlemanWunsch.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void needlemanWunsch::thread_tmp_49_98_fu_20595_p2() {
    tmp_49_98_fu_20595_p2 = (!prev_score_out_6_98_reg_35065.read().is_01() || !tmp_27_98_reg_35048.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_6_98_reg_35065.read()) < sc_bigint<8>(tmp_27_98_reg_35048.read()));
}

void needlemanWunsch::thread_tmp_49_9_fu_5281_p2() {
    tmp_49_9_fu_5281_p2 = (!prev_score_out_6_9_reg_25100.read().is_01() || !tmp_27_9_reg_25209.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_6_9_reg_25100.read()) < sc_bigint<8>(tmp_27_9_reg_25209.read()));
}

void needlemanWunsch::thread_tmp_49_s_fu_5440_p2() {
    tmp_49_s_fu_5440_p2 = (!prev_score_out_6_s_reg_25216.read().is_01() || !tmp_27_s_fu_5423_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_6_s_reg_25216.read()) < sc_bigint<8>(tmp_27_s_fu_5423_p3.read()));
}

void needlemanWunsch::thread_tmp_4_fu_2986_p2() {
    tmp_4_fu_2986_p2 = (tmp_9_fu_2978_p3.read() | ap_const_lv3_1);
}

void needlemanWunsch::thread_tmp_52_10_fu_5606_p2() {
    tmp_52_10_fu_5606_p2 = (!prev_score_out_0_op_i1_10_fu_5591_p2.read().is_01() || !prev_score_out_6_10_reg_25320.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_10_fu_5591_p2.read()) < sc_bigint<8>(prev_score_out_6_10_reg_25320.read()));
}

void needlemanWunsch::thread_tmp_52_11_fu_5767_p2() {
    tmp_52_11_fu_5767_p2 = (!prev_score_out_0_op_i1_11_fu_5752_p2.read().is_01() || !prev_score_out_6_11_reg_25435.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_11_fu_5752_p2.read()) < sc_bigint<8>(prev_score_out_6_11_reg_25435.read()));
}

void needlemanWunsch::thread_tmp_52_12_fu_5927_p2() {
    tmp_52_12_fu_5927_p2 = (!prev_score_out_0_op_i1_12_fu_5913_p2.read().is_01() || !prev_score_out_6_12_reg_25556.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_12_fu_5913_p2.read()) < sc_bigint<8>(prev_score_out_6_12_reg_25556.read()));
}

void needlemanWunsch::thread_tmp_52_13_fu_6086_p2() {
    tmp_52_13_fu_6086_p2 = (!prev_score_out_0_op_i1_13_fu_6071_p2.read().is_01() || !prev_score_out_6_13_reg_25684.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_13_fu_6071_p2.read()) < sc_bigint<8>(prev_score_out_6_13_reg_25684.read()));
}

void needlemanWunsch::thread_tmp_52_14_fu_6246_p2() {
    tmp_52_14_fu_6246_p2 = (!prev_score_out_0_op_i1_14_fu_6232_p2.read().is_01() || !prev_score_out_6_14_reg_25805.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_14_fu_6232_p2.read()) < sc_bigint<8>(prev_score_out_6_14_reg_25805.read()));
}

void needlemanWunsch::thread_tmp_52_15_fu_6405_p2() {
    tmp_52_15_fu_6405_p2 = (!prev_score_out_0_op_i1_15_fu_6390_p2.read().is_01() || !prev_score_out_6_15_reg_25933.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_15_fu_6390_p2.read()) < sc_bigint<8>(prev_score_out_6_15_reg_25933.read()));
}

void needlemanWunsch::thread_tmp_52_16_fu_6565_p2() {
    tmp_52_16_fu_6565_p2 = (!prev_score_out_0_op_i1_16_fu_6551_p2.read().is_01() || !prev_score_out_6_16_reg_26054.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_16_fu_6551_p2.read()) < sc_bigint<8>(prev_score_out_6_16_reg_26054.read()));
}

void needlemanWunsch::thread_tmp_52_17_fu_6725_p2() {
    tmp_52_17_fu_6725_p2 = (!prev_score_out_0_op_i1_17_fu_6710_p2.read().is_01() || !prev_score_out_6_17_reg_26182.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_17_fu_6710_p2.read()) < sc_bigint<8>(prev_score_out_6_17_reg_26182.read()));
}

void needlemanWunsch::thread_tmp_52_18_fu_6885_p2() {
    tmp_52_18_fu_6885_p2 = (!prev_score_out_0_op_i1_18_fu_6871_p2.read().is_01() || !prev_score_out_6_18_reg_26298.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_18_fu_6871_p2.read()) < sc_bigint<8>(prev_score_out_6_18_reg_26298.read()));
}

void needlemanWunsch::thread_tmp_52_19_fu_7051_p2() {
    tmp_52_19_fu_7051_p2 = (!prev_score_out_0_op_i1_19_fu_7036_p2.read().is_01() || !prev_score_out_6_19_reg_26426.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_19_fu_7036_p2.read()) < sc_bigint<8>(prev_score_out_6_19_reg_26426.read()));
}

void needlemanWunsch::thread_tmp_52_1_fu_3311_p2() {
    tmp_52_1_fu_3311_p2 = (!prev_score_out_0_op_i1_1_fu_3296_p2.read().is_01() || !prev_score_out_6_1_reg_22813.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_1_fu_3296_p2.read()) < sc_bigint<8>(prev_score_out_6_1_reg_22813.read()));
}

void needlemanWunsch::thread_tmp_52_20_fu_7223_p2() {
    tmp_52_20_fu_7223_p2 = (!prev_score_out_0_op_i1_20_fu_7208_p2.read().is_01() || !prev_score_out_6_20_reg_26536.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_20_fu_7208_p2.read()) < sc_bigint<8>(prev_score_out_6_20_reg_26536.read()));
}

void needlemanWunsch::thread_tmp_52_21_fu_7388_p2() {
    tmp_52_21_fu_7388_p2 = (!prev_score_out_0_op_i1_21_fu_7373_p2.read().is_01() || !prev_score_out_6_21_reg_26651.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_21_fu_7373_p2.read()) < sc_bigint<8>(prev_score_out_6_21_reg_26651.read()));
}

void needlemanWunsch::thread_tmp_52_22_fu_7560_p2() {
    tmp_52_22_fu_7560_p2 = (!prev_score_out_0_op_i1_22_fu_7545_p2.read().is_01() || !prev_score_out_6_22_reg_26783.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_22_fu_7545_p2.read()) < sc_bigint<8>(prev_score_out_6_22_reg_26783.read()));
}

void needlemanWunsch::thread_tmp_52_23_fu_7726_p2() {
    tmp_52_23_fu_7726_p2 = (!prev_score_out_0_op_i1_23_fu_7711_p2.read().is_01() || !prev_score_out_6_23_reg_26903.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_23_fu_7711_p2.read()) < sc_bigint<8>(prev_score_out_6_23_reg_26903.read()));
}

void needlemanWunsch::thread_tmp_52_24_fu_7892_p2() {
    tmp_52_24_fu_7892_p2 = (!prev_score_out_0_op_i1_24_fu_7877_p2.read().is_01() || !prev_score_out_6_24_reg_27024.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_24_fu_7877_p2.read()) < sc_bigint<8>(prev_score_out_6_24_reg_27024.read()));
}

void needlemanWunsch::thread_tmp_52_25_fu_8066_p2() {
    tmp_52_25_fu_8066_p2 = (!prev_score_out_0_op_i1_25_fu_8051_p2.read().is_01() || !prev_score_out_6_25_reg_27150.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_25_fu_8051_p2.read()) < sc_bigint<8>(prev_score_out_6_25_reg_27150.read()));
}

void needlemanWunsch::thread_tmp_52_26_fu_8237_p2() {
    tmp_52_26_fu_8237_p2 = (!prev_score_out_0_op_i1_26_fu_8222_p2.read().is_01() || !prev_score_out_6_26_reg_27269.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_26_fu_8222_p2.read()) < sc_bigint<8>(prev_score_out_6_26_reg_27269.read()));
}

void needlemanWunsch::thread_tmp_52_27_fu_8400_p2() {
    tmp_52_27_fu_8400_p2 = (!prev_score_out_0_op_i1_27_fu_8385_p2.read().is_01() || !prev_score_out_6_27_reg_27383.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_27_fu_8385_p2.read()) < sc_bigint<8>(prev_score_out_6_27_reg_27383.read()));
}

void needlemanWunsch::thread_tmp_52_28_fu_8575_p2() {
    tmp_52_28_fu_8575_p2 = (!prev_score_out_0_op_i1_28_fu_8560_p2.read().is_01() || !prev_score_out_6_28_reg_27503.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_28_fu_8560_p2.read()) < sc_bigint<8>(prev_score_out_6_28_reg_27503.read()));
}

void needlemanWunsch::thread_tmp_52_29_fu_8745_p2() {
    tmp_52_29_fu_8745_p2 = (!prev_score_out_0_op_i1_29_fu_8731_p2.read().is_01() || !prev_score_out_6_29_reg_27622.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_29_fu_8731_p2.read()) < sc_bigint<8>(prev_score_out_6_29_reg_27622.read()));
}

void needlemanWunsch::thread_tmp_52_2_fu_3430_p2() {
    tmp_52_2_fu_3430_p2 = (!prev_score_out_0_op_i1_2_fu_3415_p2.read().is_01() || !prev_score_out_6_2_reg_22821.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_2_fu_3415_p2.read()) < sc_bigint<8>(prev_score_out_6_2_reg_22821.read()));
}

void needlemanWunsch::thread_tmp_52_30_fu_8907_p2() {
    tmp_52_30_fu_8907_p2 = (!prev_score_out_0_op_i1_30_fu_8893_p2.read().is_01() || !prev_score_out_6_30_reg_27749.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_30_fu_8893_p2.read()) < sc_bigint<8>(prev_score_out_6_30_reg_27749.read()));
}

void needlemanWunsch::thread_tmp_52_31_fu_9081_p2() {
    tmp_52_31_fu_9081_p2 = (!prev_score_out_0_op_i1_31_fu_9067_p2.read().is_01() || !prev_score_out_6_31_reg_27860.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_31_fu_9067_p2.read()) < sc_bigint<8>(prev_score_out_6_31_reg_27860.read()));
}

void needlemanWunsch::thread_tmp_52_32_fu_9245_p2() {
    tmp_52_32_fu_9245_p2 = (!prev_score_out_0_op_i1_32_fu_9231_p2.read().is_01() || !prev_score_out_6_32_reg_27982.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_32_fu_9231_p2.read()) < sc_bigint<8>(prev_score_out_6_32_reg_27982.read()));
}

void needlemanWunsch::thread_tmp_52_33_fu_9413_p2() {
    tmp_52_33_fu_9413_p2 = (!prev_score_out_0_op_i1_33_fu_9398_p2.read().is_01() || !prev_score_out_6_33_reg_28093.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_33_fu_9398_p2.read()) < sc_bigint<8>(prev_score_out_6_33_reg_28093.read()));
}

void needlemanWunsch::thread_tmp_52_34_fu_9588_p2() {
    tmp_52_34_fu_9588_p2 = (!prev_score_out_0_op_i1_34_fu_9574_p2.read().is_01() || !prev_score_out_6_34_reg_28208.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_34_fu_9574_p2.read()) < sc_bigint<8>(prev_score_out_6_34_reg_28208.read()));
}

void needlemanWunsch::thread_tmp_52_35_fu_9757_p2() {
    tmp_52_35_fu_9757_p2 = (!prev_score_out_0_op_i1_35_fu_9743_p2.read().is_01() || !prev_score_out_6_35_reg_28329.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_35_fu_9743_p2.read()) < sc_bigint<8>(prev_score_out_6_35_reg_28329.read()));
}

void needlemanWunsch::thread_tmp_52_36_fu_9919_p2() {
    tmp_52_36_fu_9919_p2 = (!prev_score_out_0_op_i1_36_fu_9904_p2.read().is_01() || !prev_score_out_6_36_reg_28451.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_36_fu_9904_p2.read()) < sc_bigint<8>(prev_score_out_6_36_reg_28451.read()));
}

void needlemanWunsch::thread_tmp_52_37_fu_10093_p2() {
    tmp_52_37_fu_10093_p2 = (!prev_score_out_0_op_i1_37_fu_10078_p2.read().is_01() || !prev_score_out_6_37_reg_28565.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_37_fu_10078_p2.read()) < sc_bigint<8>(prev_score_out_6_37_reg_28565.read()));
}

void needlemanWunsch::thread_tmp_52_38_fu_10259_p2() {
    tmp_52_38_fu_10259_p2 = (!prev_score_out_0_op_i1_38_fu_10244_p2.read().is_01() || !prev_score_out_6_38_reg_28690.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_38_fu_10244_p2.read()) < sc_bigint<8>(prev_score_out_6_38_reg_28690.read()));
}

void needlemanWunsch::thread_tmp_52_39_fu_10428_p2() {
    tmp_52_39_fu_10428_p2 = (!prev_score_out_0_op_i1_39_fu_10413_p2.read().is_01() || !prev_score_out_6_39_reg_28799.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_39_fu_10413_p2.read()) < sc_bigint<8>(prev_score_out_6_39_reg_28799.read()));
}

void needlemanWunsch::thread_tmp_52_3_fu_3572_p2() {
    tmp_52_3_fu_3572_p2 = (!prev_score_out_0_op_i1_3_fu_3557_p2.read().is_01() || !prev_score_out_6_3_reg_23088.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_3_fu_3557_p2.read()) < sc_bigint<8>(prev_score_out_6_3_reg_23088.read()));
}

void needlemanWunsch::thread_tmp_52_40_fu_10597_p2() {
    tmp_52_40_fu_10597_p2 = (!prev_score_out_0_op_i1_40_fu_10583_p2.read().is_01() || !prev_score_out_6_40_reg_28924.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_40_fu_10583_p2.read()) < sc_bigint<8>(prev_score_out_6_40_reg_28924.read()));
}

void needlemanWunsch::thread_tmp_52_41_fu_10767_p2() {
    tmp_52_41_fu_10767_p2 = (!prev_score_out_0_op_i1_41_fu_10753_p2.read().is_01() || !prev_score_out_6_41_reg_29040.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_41_fu_10753_p2.read()) < sc_bigint<8>(prev_score_out_6_41_reg_29040.read()));
}

void needlemanWunsch::thread_tmp_52_42_fu_10935_p2() {
    tmp_52_42_fu_10935_p2 = (!prev_score_out_0_op_i1_42_fu_10920_p2.read().is_01() || !prev_score_out_6_42_reg_29157.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_42_fu_10920_p2.read()) < sc_bigint<8>(prev_score_out_6_42_reg_29157.read()));
}

void needlemanWunsch::thread_tmp_52_43_fu_11109_p2() {
    tmp_52_43_fu_11109_p2 = (!prev_score_out_0_op_i1_43_fu_11094_p2.read().is_01() || !prev_score_out_6_43_reg_29271.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_43_fu_11094_p2.read()) < sc_bigint<8>(prev_score_out_6_43_reg_29271.read()));
}

void needlemanWunsch::thread_tmp_52_44_fu_11274_p2() {
    tmp_52_44_fu_11274_p2 = (!prev_score_out_0_op_i1_44_fu_11259_p2.read().is_01() || !prev_score_out_6_44_reg_29396.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_44_fu_11259_p2.read()) < sc_bigint<8>(prev_score_out_6_44_reg_29396.read()));
}

void needlemanWunsch::thread_tmp_52_45_fu_11443_p2() {
    tmp_52_45_fu_11443_p2 = (!prev_score_out_0_op_i1_45_fu_11429_p2.read().is_01() || !prev_score_out_6_45_reg_29510.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_45_fu_11429_p2.read()) < sc_bigint<8>(prev_score_out_6_45_reg_29510.read()));
}

void needlemanWunsch::thread_tmp_52_46_fu_11612_p2() {
    tmp_52_46_fu_11612_p2 = (!prev_score_out_0_op_i1_46_fu_11597_p2.read().is_01() || !prev_score_out_6_46_reg_29632.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_46_fu_11597_p2.read()) < sc_bigint<8>(prev_score_out_6_46_reg_29632.read()));
}

void needlemanWunsch::thread_tmp_52_47_fu_11789_p2() {
    tmp_52_47_fu_11789_p2 = (!prev_score_out_0_op_i1_47_fu_11774_p2.read().is_01() || !prev_score_out_6_47_reg_29741.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_47_fu_11774_p2.read()) < sc_bigint<8>(prev_score_out_6_47_reg_29741.read()));
}

void needlemanWunsch::thread_tmp_52_48_fu_11952_p2() {
    tmp_52_48_fu_11952_p2 = (!prev_score_out_0_op_i1_48_fu_11937_p2.read().is_01() || !prev_score_out_6_48_reg_29861.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_48_fu_11937_p2.read()) < sc_bigint<8>(prev_score_out_6_48_reg_29861.read()));
}

void needlemanWunsch::thread_tmp_52_49_fu_12123_p2() {
    tmp_52_49_fu_12123_p2 = (!prev_score_out_0_op_i1_49_fu_12108_p2.read().is_01() || !prev_score_out_6_49_reg_29975.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_49_fu_12108_p2.read()) < sc_bigint<8>(prev_score_out_6_49_reg_29975.read()));
}

void needlemanWunsch::thread_tmp_52_4_fu_3772_p2() {
    tmp_52_4_fu_3772_p2 = (!prev_score_out_0_op_i1_4_fu_3758_p2.read().is_01() || !prev_score_out_6_4_reg_23393.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_4_fu_3758_p2.read()) < sc_bigint<8>(prev_score_out_6_4_reg_23393.read()));
}

void needlemanWunsch::thread_tmp_52_50_fu_12297_p2() {
    tmp_52_50_fu_12297_p2 = (!prev_score_out_0_op_i1_50_fu_12283_p2.read().is_01() || !prev_score_out_6_50_reg_30100.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_50_fu_12283_p2.read()) < sc_bigint<8>(prev_score_out_6_50_reg_30100.read()));
}

void needlemanWunsch::thread_tmp_52_51_fu_12462_p2() {
    tmp_52_51_fu_12462_p2 = (!prev_score_out_0_op_i1_51_fu_12447_p2.read().is_01() || !prev_score_out_6_51_reg_30209.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_51_fu_12447_p2.read()) < sc_bigint<8>(prev_score_out_6_51_reg_30209.read()));
}

void needlemanWunsch::thread_tmp_52_52_fu_12642_p2() {
    tmp_52_52_fu_12642_p2 = (!prev_score_out_0_op_i1_52_fu_12627_p2.read().is_01() || !prev_score_out_6_52_reg_30313.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_52_fu_12627_p2.read()) < sc_bigint<8>(prev_score_out_6_52_reg_30313.read()));
}

void needlemanWunsch::thread_tmp_52_53_fu_12811_p2() {
    tmp_52_53_fu_12811_p2 = (!prev_score_out_0_op_i1_53_fu_12796_p2.read().is_01() || !prev_score_out_6_53_reg_30425.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_53_fu_12796_p2.read()) < sc_bigint<8>(prev_score_out_6_53_reg_30425.read()));
}

void needlemanWunsch::thread_tmp_52_54_fu_12976_p2() {
    tmp_52_54_fu_12976_p2 = (!prev_score_out_0_op_i1_54_fu_12962_p2.read().is_01() || !prev_score_out_6_54_reg_30527.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_54_fu_12962_p2.read()) < sc_bigint<8>(prev_score_out_6_54_reg_30527.read()));
}

void needlemanWunsch::thread_tmp_52_55_fu_13141_p2() {
    tmp_52_55_fu_13141_p2 = (!prev_score_out_0_op_i1_55_fu_13126_p2.read().is_01() || !prev_score_out_6_55_reg_30636.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_55_fu_13126_p2.read()) < sc_bigint<8>(prev_score_out_6_55_reg_30636.read()));
}

void needlemanWunsch::thread_tmp_52_56_fu_13316_p2() {
    tmp_52_56_fu_13316_p2 = (!prev_score_out_0_op_i1_56_fu_13301_p2.read().is_01() || !prev_score_out_6_56_reg_30728.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_56_fu_13301_p2.read()) < sc_bigint<8>(prev_score_out_6_56_reg_30728.read()));
}

void needlemanWunsch::thread_tmp_52_57_fu_13496_p2() {
    tmp_52_57_fu_13496_p2 = (!prev_score_out_0_op_i1_57_fu_13481_p2.read().is_01() || !prev_score_out_6_57_reg_30830.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_57_fu_13481_p2.read()) < sc_bigint<8>(prev_score_out_6_57_reg_30830.read()));
}

void needlemanWunsch::thread_tmp_52_58_fu_13667_p2() {
    tmp_52_58_fu_13667_p2 = (!prev_score_out_0_op_i1_58_fu_13652_p2.read().is_01() || !prev_score_out_6_58_reg_30937.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_58_fu_13652_p2.read()) < sc_bigint<8>(prev_score_out_6_58_reg_30937.read()));
}

void needlemanWunsch::thread_tmp_52_59_fu_13841_p2() {
    tmp_52_59_fu_13841_p2 = (!prev_score_out_0_op_i1_59_fu_13826_p2.read().is_01() || !prev_score_out_6_59_reg_31039.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_59_fu_13826_p2.read()) < sc_bigint<8>(prev_score_out_6_59_reg_31039.read()));
}

void needlemanWunsch::thread_tmp_52_5_fu_3957_p2() {
    tmp_52_5_fu_3957_p2 = (!prev_score_out_0_op_i1_5_fu_3942_p2.read().is_01() || !prev_score_out_6_5_reg_23519.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_5_fu_3942_p2.read()) < sc_bigint<8>(prev_score_out_6_5_reg_23519.read()));
}

void needlemanWunsch::thread_tmp_52_60_fu_14015_p2() {
    tmp_52_60_fu_14015_p2 = (!prev_score_out_0_op_i1_60_fu_14000_p2.read().is_01() || !prev_score_out_6_60_reg_31146.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_60_fu_14000_p2.read()) < sc_bigint<8>(prev_score_out_6_60_reg_31146.read()));
}

void needlemanWunsch::thread_tmp_52_61_fu_14184_p2() {
    tmp_52_61_fu_14184_p2 = (!prev_score_out_0_op_i1_61_fu_14170_p2.read().is_01() || !prev_score_out_6_61_reg_31253.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_61_fu_14170_p2.read()) < sc_bigint<8>(prev_score_out_6_61_reg_31253.read()));
}

void needlemanWunsch::thread_tmp_52_62_fu_14358_p2() {
    tmp_52_62_fu_14358_p2 = (!prev_score_out_0_op_i1_62_fu_14343_p2.read().is_01() || !prev_score_out_6_62_reg_31357.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_62_fu_14343_p2.read()) < sc_bigint<8>(prev_score_out_6_62_reg_31357.read()));
}

void needlemanWunsch::thread_tmp_52_63_fu_14533_p2() {
    tmp_52_63_fu_14533_p2 = (!prev_score_out_0_op_i1_63_fu_14519_p2.read().is_01() || !prev_score_out_6_63_reg_31454.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_63_fu_14519_p2.read()) < sc_bigint<8>(prev_score_out_6_63_reg_31454.read()));
}

void needlemanWunsch::thread_tmp_52_64_fu_14707_p2() {
    tmp_52_64_fu_14707_p2 = (!prev_score_out_0_op_i1_64_fu_14692_p2.read().is_01() || !prev_score_out_6_64_reg_31558.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_64_fu_14692_p2.read()) < sc_bigint<8>(prev_score_out_6_64_reg_31558.read()));
}

void needlemanWunsch::thread_tmp_52_65_fu_14882_p2() {
    tmp_52_65_fu_14882_p2 = (!prev_score_out_0_op_i1_65_fu_14867_p2.read().is_01() || !prev_score_out_6_65_reg_31655.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_65_fu_14867_p2.read()) < sc_bigint<8>(prev_score_out_6_65_reg_31655.read()));
}

void needlemanWunsch::thread_tmp_52_66_fu_15057_p2() {
    tmp_52_66_fu_15057_p2 = (!prev_score_out_0_op_i1_66_fu_15042_p2.read().is_01() || !prev_score_out_6_66_reg_31757.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_66_fu_15042_p2.read()) < sc_bigint<8>(prev_score_out_6_66_reg_31757.read()));
}

void needlemanWunsch::thread_tmp_52_67_fu_15232_p2() {
    tmp_52_67_fu_15232_p2 = (!prev_score_out_0_op_i1_67_fu_15217_p2.read().is_01() || !prev_score_out_6_67_reg_31859.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_67_fu_15217_p2.read()) < sc_bigint<8>(prev_score_out_6_67_reg_31859.read()));
}

void needlemanWunsch::thread_tmp_52_68_fu_15407_p2() {
    tmp_52_68_fu_15407_p2 = (!prev_score_out_0_op_i1_68_fu_15392_p2.read().is_01() || !prev_score_out_6_68_reg_31961.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_68_fu_15392_p2.read()) < sc_bigint<8>(prev_score_out_6_68_reg_31961.read()));
}

void needlemanWunsch::thread_tmp_52_69_fu_15582_p2() {
    tmp_52_69_fu_15582_p2 = (!prev_score_out_0_op_i1_69_fu_15567_p2.read().is_01() || !prev_score_out_6_69_reg_32063.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_69_fu_15567_p2.read()) < sc_bigint<8>(prev_score_out_6_69_reg_32063.read()));
}

void needlemanWunsch::thread_tmp_52_6_fu_4792_p2() {
    tmp_52_6_fu_4792_p2 = (!prev_score_out_0_op_i1_6_fu_4777_p2.read().is_01() || !prev_score_out_6_6_reg_23751.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_6_fu_4777_p2.read()) < sc_bigint<8>(prev_score_out_6_6_reg_23751.read()));
}

void needlemanWunsch::thread_tmp_52_70_fu_15757_p2() {
    tmp_52_70_fu_15757_p2 = (!prev_score_out_0_op_i1_70_fu_15742_p2.read().is_01() || !prev_score_out_6_70_reg_32165.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_70_fu_15742_p2.read()) < sc_bigint<8>(prev_score_out_6_70_reg_32165.read()));
}

void needlemanWunsch::thread_tmp_52_71_fu_15932_p2() {
    tmp_52_71_fu_15932_p2 = (!prev_score_out_0_op_i1_71_fu_15917_p2.read().is_01() || !prev_score_out_6_71_reg_32267.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_71_fu_15917_p2.read()) < sc_bigint<8>(prev_score_out_6_71_reg_32267.read()));
}

void needlemanWunsch::thread_tmp_52_72_fu_16107_p2() {
    tmp_52_72_fu_16107_p2 = (!prev_score_out_0_op_i1_72_fu_16093_p2.read().is_01() || !prev_score_out_6_72_reg_32369.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_72_fu_16093_p2.read()) < sc_bigint<8>(prev_score_out_6_72_reg_32369.read()));
}

void needlemanWunsch::thread_tmp_52_73_fu_16281_p2() {
    tmp_52_73_fu_16281_p2 = (!prev_score_out_0_op_i1_73_fu_16267_p2.read().is_01() || !prev_score_out_6_73_reg_32473.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_73_fu_16267_p2.read()) < sc_bigint<8>(prev_score_out_6_73_reg_32473.read()));
}

void needlemanWunsch::thread_tmp_52_74_fu_16455_p2() {
    tmp_52_74_fu_16455_p2 = (!prev_score_out_0_op_i1_74_fu_16440_p2.read().is_01() || !prev_score_out_6_74_reg_32572.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_74_fu_16440_p2.read()) < sc_bigint<8>(prev_score_out_6_74_reg_32572.read()));
}

void needlemanWunsch::thread_tmp_52_75_fu_16630_p2() {
    tmp_52_75_fu_16630_p2 = (!prev_score_out_0_op_i1_75_fu_16615_p2.read().is_01() || !prev_score_out_6_75_reg_32669.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_75_fu_16615_p2.read()) < sc_bigint<8>(prev_score_out_6_75_reg_32669.read()));
}

void needlemanWunsch::thread_tmp_52_76_fu_16810_p2() {
    tmp_52_76_fu_16810_p2 = (!prev_score_out_0_op_i1_76_fu_16796_p2.read().is_01() || !prev_score_out_6_76_reg_32771.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_76_fu_16796_p2.read()) < sc_bigint<8>(prev_score_out_6_76_reg_32771.read()));
}

void needlemanWunsch::thread_tmp_52_77_fu_16983_p2() {
    tmp_52_77_fu_16983_p2 = (!prev_score_out_0_op_i1_77_fu_16969_p2.read().is_01() || !prev_score_out_6_77_reg_32880.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_77_fu_16969_p2.read()) < sc_bigint<8>(prev_score_out_6_77_reg_32880.read()));
}

void needlemanWunsch::thread_tmp_52_78_fu_17151_p2() {
    tmp_52_78_fu_17151_p2 = (!prev_score_out_0_op_i1_78_fu_17136_p2.read().is_01() || !prev_score_out_6_78_reg_32984.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_78_fu_17136_p2.read()) < sc_bigint<8>(prev_score_out_6_78_reg_32984.read()));
}

void needlemanWunsch::thread_tmp_52_79_fu_17331_p2() {
    tmp_52_79_fu_17331_p2 = (!prev_score_out_0_op_i1_79_fu_17316_p2.read().is_01() || !prev_score_out_6_79_reg_33081.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_79_fu_17316_p2.read()) < sc_bigint<8>(prev_score_out_6_79_reg_33081.read()));
}

void needlemanWunsch::thread_tmp_52_7_fu_4964_p2() {
    tmp_52_7_fu_4964_p2 = (!prev_score_out_0_op_i1_7_fu_4949_p2.read().is_01() || !prev_score_out_6_7_reg_23981.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_7_fu_4949_p2.read()) < sc_bigint<8>(prev_score_out_6_7_reg_23981.read()));
}

void needlemanWunsch::thread_tmp_52_80_fu_17505_p2() {
    tmp_52_80_fu_17505_p2 = (!prev_score_out_0_op_i1_80_fu_17491_p2.read().is_01() || !prev_score_out_6_80_reg_33188.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_80_fu_17491_p2.read()) < sc_bigint<8>(prev_score_out_6_80_reg_33188.read()));
}

void needlemanWunsch::thread_tmp_52_81_fu_17678_p2() {
    tmp_52_81_fu_17678_p2 = (!prev_score_out_0_op_i1_81_fu_17663_p2.read().is_01() || !prev_score_out_6_81_reg_33297.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_81_fu_17663_p2.read()) < sc_bigint<8>(prev_score_out_6_81_reg_33297.read()));
}

void needlemanWunsch::thread_tmp_52_82_fu_17852_p2() {
    tmp_52_82_fu_17852_p2 = (!prev_score_out_0_op_i1_82_fu_17838_p2.read().is_01() || !prev_score_out_6_82_reg_33399.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_82_fu_17838_p2.read()) < sc_bigint<8>(prev_score_out_6_82_reg_33399.read()));
}

void needlemanWunsch::thread_tmp_52_83_fu_18020_p2() {
    tmp_52_83_fu_18020_p2 = (!prev_score_out_0_op_i1_83_fu_18006_p2.read().is_01() || !prev_score_out_6_83_reg_33508.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_83_fu_18006_p2.read()) < sc_bigint<8>(prev_score_out_6_83_reg_33508.read()));
}

void needlemanWunsch::thread_tmp_52_84_fu_18194_p2() {
    tmp_52_84_fu_18194_p2 = (!prev_score_out_0_op_i1_84_fu_18179_p2.read().is_01() || !prev_score_out_6_84_reg_33607.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_84_fu_18179_p2.read()) < sc_bigint<8>(prev_score_out_6_84_reg_33607.read()));
}

void needlemanWunsch::thread_tmp_52_85_fu_18369_p2() {
    tmp_52_85_fu_18369_p2 = (!prev_score_out_0_op_i1_85_fu_18354_p2.read().is_01() || !prev_score_out_6_85_reg_33704.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_85_fu_18354_p2.read()) < sc_bigint<8>(prev_score_out_6_85_reg_33704.read()));
}

void needlemanWunsch::thread_tmp_52_86_fu_18544_p2() {
    tmp_52_86_fu_18544_p2 = (!prev_score_out_0_op_i1_86_fu_18529_p2.read().is_01() || !prev_score_out_6_86_reg_33806.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_86_fu_18529_p2.read()) < sc_bigint<8>(prev_score_out_6_86_reg_33806.read()));
}

void needlemanWunsch::thread_tmp_52_87_fu_18719_p2() {
    tmp_52_87_fu_18719_p2 = (!prev_score_out_0_op_i1_87_fu_18705_p2.read().is_01() || !prev_score_out_6_87_reg_33908.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_87_fu_18705_p2.read()) < sc_bigint<8>(prev_score_out_6_87_reg_33908.read()));
}

void needlemanWunsch::thread_tmp_52_88_fu_18898_p2() {
    tmp_52_88_fu_18898_p2 = (!prev_score_out_0_op_i1_88_fu_18884_p2.read().is_01() || !prev_score_out_6_88_reg_34012.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_88_fu_18884_p2.read()) < sc_bigint<8>(prev_score_out_6_88_reg_34012.read()));
}

void needlemanWunsch::thread_tmp_52_89_fu_19066_p2() {
    tmp_52_89_fu_19066_p2 = (!prev_score_out_0_op_i1_89_fu_19051_p2.read().is_01() || !prev_score_out_6_89_reg_34116.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_89_fu_19051_p2.read()) < sc_bigint<8>(prev_score_out_6_89_reg_34116.read()));
}

void needlemanWunsch::thread_tmp_52_8_fu_5125_p2() {
    tmp_52_8_fu_5125_p2 = (!prev_score_out_0_op_i1_8_fu_5110_p2.read().is_01() || !prev_score_out_6_8_reg_24991.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_8_fu_5110_p2.read()) < sc_bigint<8>(prev_score_out_6_8_reg_24991.read()));
}

void needlemanWunsch::thread_tmp_52_90_fu_19241_p2() {
    tmp_52_90_fu_19241_p2 = (!prev_score_out_0_op_i1_90_fu_19226_p2.read().is_01() || !prev_score_out_6_90_reg_34213.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_90_fu_19226_p2.read()) < sc_bigint<8>(prev_score_out_6_90_reg_34213.read()));
}

void needlemanWunsch::thread_tmp_52_91_fu_19421_p2() {
    tmp_52_91_fu_19421_p2 = (!prev_score_out_0_op_i1_91_fu_19407_p2.read().is_01() || !prev_score_out_6_91_reg_34315.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_91_fu_19407_p2.read()) < sc_bigint<8>(prev_score_out_6_91_reg_34315.read()));
}

void needlemanWunsch::thread_tmp_52_92_fu_19589_p2() {
    tmp_52_92_fu_19589_p2 = (!prev_score_out_0_op_i1_92_fu_19574_p2.read().is_01() || !prev_score_out_6_92_reg_34424.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_92_fu_19574_p2.read()) < sc_bigint<8>(prev_score_out_6_92_reg_34424.read()));
}

void needlemanWunsch::thread_tmp_52_93_fu_19764_p2() {
    tmp_52_93_fu_19764_p2 = (!prev_score_out_0_op_i1_93_fu_19749_p2.read().is_01() || !prev_score_out_6_93_reg_34521.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_93_fu_19749_p2.read()) < sc_bigint<8>(prev_score_out_6_93_reg_34521.read()));
}

void needlemanWunsch::thread_tmp_52_94_fu_19939_p2() {
    tmp_52_94_fu_19939_p2 = (!prev_score_out_0_op_i1_94_fu_19924_p2.read().is_01() || !prev_score_out_6_94_reg_34623.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_94_fu_19924_p2.read()) < sc_bigint<8>(prev_score_out_6_94_reg_34623.read()));
}

void needlemanWunsch::thread_tmp_52_95_fu_20119_p2() {
    tmp_52_95_fu_20119_p2 = (!prev_score_out_0_op_i1_95_fu_20104_p2.read().is_01() || !prev_score_out_6_95_reg_34725.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_95_fu_20104_p2.read()) < sc_bigint<8>(prev_score_out_6_95_reg_34725.read()));
}

void needlemanWunsch::thread_tmp_52_96_fu_20288_p2() {
    tmp_52_96_fu_20288_p2 = (!prev_score_out_0_op_i1_96_fu_20273_p2.read().is_01() || !prev_score_out_6_96_reg_34832.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_96_fu_20273_p2.read()) < sc_bigint<8>(prev_score_out_6_96_reg_34832.read()));
}

void needlemanWunsch::thread_tmp_52_97_fu_20469_p2() {
    tmp_52_97_fu_20469_p2 = (!prev_score_out_0_op_i1_97_fu_20455_p2.read().is_01() || !prev_score_out_6_97_reg_34934.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_97_fu_20455_p2.read()) < sc_bigint<8>(prev_score_out_6_97_reg_34934.read()));
}

void needlemanWunsch::thread_tmp_52_98_fu_20599_p2() {
    tmp_52_98_fu_20599_p2 = (!prev_score_out_0_op_i1_98_fu_20585_p2.read().is_01() || !prev_score_out_6_98_reg_35065.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_98_fu_20585_p2.read()) < sc_bigint<8>(prev_score_out_6_98_reg_35065.read()));
}

void needlemanWunsch::thread_tmp_52_9_fu_5285_p2() {
    tmp_52_9_fu_5285_p2 = (!prev_score_out_0_op_i1_9_fu_5271_p2.read().is_01() || !prev_score_out_6_9_reg_25100.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_9_fu_5271_p2.read()) < sc_bigint<8>(prev_score_out_6_9_reg_25100.read()));
}

void needlemanWunsch::thread_tmp_52_fu_3035_p3() {
    tmp_52_fu_3035_p3 = (!tmp_16_reg_22210.read()[0].is_01())? sc_lv<4>(): ((tmp_16_reg_22210.read()[0].to_bool())? tmp_36_reg_22224.read(): tmp_20_reg_22217.read());
}

void needlemanWunsch::thread_tmp_52_s_fu_5445_p2() {
    tmp_52_s_fu_5445_p2 = (!prev_score_out_0_op_i1_s_fu_5430_p2.read().is_01() || !prev_score_out_6_s_reg_25216.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_s_fu_5430_p2.read()) < sc_bigint<8>(prev_score_out_6_s_reg_25216.read()));
}

void needlemanWunsch::thread_tmp_53_10_fu_5611_p2() {
    tmp_53_10_fu_5611_p2 = (!prev_score_out_0_op_i1_10_fu_5591_p2.read().is_01() || !tmp_27_10_fu_5584_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_10_fu_5591_p2.read()) < sc_bigint<8>(tmp_27_10_fu_5584_p3.read()));
}

void needlemanWunsch::thread_tmp_53_11_fu_5772_p2() {
    tmp_53_11_fu_5772_p2 = (!prev_score_out_0_op_i1_11_fu_5752_p2.read().is_01() || !tmp_27_11_fu_5745_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_11_fu_5752_p2.read()) < sc_bigint<8>(tmp_27_11_fu_5745_p3.read()));
}

void needlemanWunsch::thread_tmp_53_12_fu_5932_p2() {
    tmp_53_12_fu_5932_p2 = (!prev_score_out_0_op_i1_12_fu_5913_p2.read().is_01() || !tmp_27_12_reg_25677.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_12_fu_5913_p2.read()) < sc_bigint<8>(tmp_27_12_reg_25677.read()));
}

void needlemanWunsch::thread_tmp_53_13_fu_6091_p2() {
    tmp_53_13_fu_6091_p2 = (!prev_score_out_0_op_i1_13_fu_6071_p2.read().is_01() || !tmp_27_13_fu_6065_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_13_fu_6071_p2.read()) < sc_bigint<8>(tmp_27_13_fu_6065_p3.read()));
}

void needlemanWunsch::thread_tmp_53_14_fu_6251_p2() {
    tmp_53_14_fu_6251_p2 = (!prev_score_out_0_op_i1_14_fu_6232_p2.read().is_01() || !tmp_27_14_reg_25926.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_14_fu_6232_p2.read()) < sc_bigint<8>(tmp_27_14_reg_25926.read()));
}

void needlemanWunsch::thread_tmp_53_15_fu_6410_p2() {
    tmp_53_15_fu_6410_p2 = (!prev_score_out_0_op_i1_15_fu_6390_p2.read().is_01() || !tmp_27_15_fu_6384_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_15_fu_6390_p2.read()) < sc_bigint<8>(tmp_27_15_fu_6384_p3.read()));
}

void needlemanWunsch::thread_tmp_53_16_fu_6570_p2() {
    tmp_53_16_fu_6570_p2 = (!prev_score_out_0_op_i1_16_fu_6551_p2.read().is_01() || !tmp_27_16_reg_26175.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_16_fu_6551_p2.read()) < sc_bigint<8>(tmp_27_16_reg_26175.read()));
}

void needlemanWunsch::thread_tmp_53_17_fu_6730_p2() {
    tmp_53_17_fu_6730_p2 = (!prev_score_out_0_op_i1_17_fu_6710_p2.read().is_01() || !tmp_27_17_fu_6703_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_17_fu_6710_p2.read()) < sc_bigint<8>(tmp_27_17_fu_6703_p3.read()));
}

void needlemanWunsch::thread_tmp_53_18_fu_6890_p2() {
    tmp_53_18_fu_6890_p2 = (!prev_score_out_0_op_i1_18_fu_6871_p2.read().is_01() || !tmp_27_18_reg_26419.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_18_fu_6871_p2.read()) < sc_bigint<8>(tmp_27_18_reg_26419.read()));
}

void needlemanWunsch::thread_tmp_53_19_fu_7056_p2() {
    tmp_53_19_fu_7056_p2 = (!prev_score_out_0_op_i1_19_fu_7036_p2.read().is_01() || !tmp_27_19_fu_7029_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_19_fu_7036_p2.read()) < sc_bigint<8>(tmp_27_19_fu_7029_p3.read()));
}

void needlemanWunsch::thread_tmp_53_1_fu_3316_p2() {
    tmp_53_1_fu_3316_p2 = (!prev_score_out_0_op_i1_1_fu_3296_p2.read().is_01() || !tmp_27_1_fu_3289_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_1_fu_3296_p2.read()) < sc_bigint<8>(tmp_27_1_fu_3289_p3.read()));
}

void needlemanWunsch::thread_tmp_53_20_fu_7228_p2() {
    tmp_53_20_fu_7228_p2 = (!prev_score_out_0_op_i1_20_fu_7208_p2.read().is_01() || !tmp_27_20_fu_7201_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_20_fu_7208_p2.read()) < sc_bigint<8>(tmp_27_20_fu_7201_p3.read()));
}

void needlemanWunsch::thread_tmp_53_21_fu_7393_p2() {
    tmp_53_21_fu_7393_p2 = (!prev_score_out_0_op_i1_21_fu_7373_p2.read().is_01() || !tmp_27_21_fu_7367_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_21_fu_7373_p2.read()) < sc_bigint<8>(tmp_27_21_fu_7367_p3.read()));
}

void needlemanWunsch::thread_tmp_53_22_fu_7565_p2() {
    tmp_53_22_fu_7565_p2 = (!prev_score_out_0_op_i1_22_fu_7545_p2.read().is_01() || !tmp_27_22_fu_7538_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_22_fu_7545_p2.read()) < sc_bigint<8>(tmp_27_22_fu_7538_p3.read()));
}

void needlemanWunsch::thread_tmp_53_23_fu_7731_p2() {
    tmp_53_23_fu_7731_p2 = (!prev_score_out_0_op_i1_23_fu_7711_p2.read().is_01() || !tmp_27_23_fu_7704_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_23_fu_7711_p2.read()) < sc_bigint<8>(tmp_27_23_fu_7704_p3.read()));
}

void needlemanWunsch::thread_tmp_53_24_fu_7897_p2() {
    tmp_53_24_fu_7897_p2 = (!prev_score_out_0_op_i1_24_fu_7877_p2.read().is_01() || !tmp_27_24_fu_7870_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_24_fu_7877_p2.read()) < sc_bigint<8>(tmp_27_24_fu_7870_p3.read()));
}

void needlemanWunsch::thread_tmp_53_25_fu_8071_p2() {
    tmp_53_25_fu_8071_p2 = (!prev_score_out_0_op_i1_25_fu_8051_p2.read().is_01() || !tmp_27_25_fu_8045_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_25_fu_8051_p2.read()) < sc_bigint<8>(tmp_27_25_fu_8045_p3.read()));
}

void needlemanWunsch::thread_tmp_53_26_fu_8242_p2() {
    tmp_53_26_fu_8242_p2 = (!prev_score_out_0_op_i1_26_fu_8222_p2.read().is_01() || !tmp_27_26_fu_8215_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_26_fu_8222_p2.read()) < sc_bigint<8>(tmp_27_26_fu_8215_p3.read()));
}

void needlemanWunsch::thread_tmp_53_27_fu_8405_p2() {
    tmp_53_27_fu_8405_p2 = (!prev_score_out_0_op_i1_27_fu_8385_p2.read().is_01() || !tmp_27_27_fu_8379_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_27_fu_8385_p2.read()) < sc_bigint<8>(tmp_27_27_fu_8379_p3.read()));
}

void needlemanWunsch::thread_tmp_53_28_fu_8580_p2() {
    tmp_53_28_fu_8580_p2 = (!prev_score_out_0_op_i1_28_fu_8560_p2.read().is_01() || !tmp_27_28_fu_8554_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_28_fu_8560_p2.read()) < sc_bigint<8>(tmp_27_28_fu_8554_p3.read()));
}

void needlemanWunsch::thread_tmp_53_29_fu_8750_p2() {
    tmp_53_29_fu_8750_p2 = (!prev_score_out_0_op_i1_29_fu_8731_p2.read().is_01() || !tmp_27_29_reg_27737.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_29_fu_8731_p2.read()) < sc_bigint<8>(tmp_27_29_reg_27737.read()));
}

void needlemanWunsch::thread_tmp_53_2_fu_3435_p2() {
    tmp_53_2_fu_3435_p2 = (!prev_score_out_0_op_i1_2_fu_3415_p2.read().is_01() || !tmp_27_2_fu_3408_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_2_fu_3415_p2.read()) < sc_bigint<8>(tmp_27_2_fu_3408_p3.read()));
}

void needlemanWunsch::thread_tmp_53_30_fu_8912_p2() {
    tmp_53_30_fu_8912_p2 = (!prev_score_out_0_op_i1_30_fu_8893_p2.read().is_01() || !tmp_27_30_reg_27853.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_30_fu_8893_p2.read()) < sc_bigint<8>(tmp_27_30_reg_27853.read()));
}

void needlemanWunsch::thread_tmp_53_31_fu_9086_p2() {
    tmp_53_31_fu_9086_p2 = (!prev_score_out_0_op_i1_31_fu_9067_p2.read().is_01() || !tmp_27_31_reg_27970.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_31_fu_9067_p2.read()) < sc_bigint<8>(tmp_27_31_reg_27970.read()));
}

void needlemanWunsch::thread_tmp_53_32_fu_9250_p2() {
    tmp_53_32_fu_9250_p2 = (!prev_score_out_0_op_i1_32_fu_9231_p2.read().is_01() || !tmp_27_32_reg_28086.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_32_fu_9231_p2.read()) < sc_bigint<8>(tmp_27_32_reg_28086.read()));
}

void needlemanWunsch::thread_tmp_53_33_fu_9418_p2() {
    tmp_53_33_fu_9418_p2 = (!prev_score_out_0_op_i1_33_fu_9398_p2.read().is_01() || !tmp_27_33_fu_9392_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_33_fu_9398_p2.read()) < sc_bigint<8>(tmp_27_33_fu_9392_p3.read()));
}

void needlemanWunsch::thread_tmp_53_34_fu_9593_p2() {
    tmp_53_34_fu_9593_p2 = (!prev_score_out_0_op_i1_34_fu_9574_p2.read().is_01() || !tmp_27_34_reg_28317.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_34_fu_9574_p2.read()) < sc_bigint<8>(tmp_27_34_reg_28317.read()));
}

void needlemanWunsch::thread_tmp_53_35_fu_9762_p2() {
    tmp_53_35_fu_9762_p2 = (!prev_score_out_0_op_i1_35_fu_9743_p2.read().is_01() || !tmp_27_35_reg_28439.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_35_fu_9743_p2.read()) < sc_bigint<8>(tmp_27_35_reg_28439.read()));
}

void needlemanWunsch::thread_tmp_53_36_fu_9924_p2() {
    tmp_53_36_fu_9924_p2 = (!prev_score_out_0_op_i1_36_fu_9904_p2.read().is_01() || !tmp_27_36_fu_9898_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_36_fu_9904_p2.read()) < sc_bigint<8>(tmp_27_36_fu_9898_p3.read()));
}

void needlemanWunsch::thread_tmp_53_37_fu_10098_p2() {
    tmp_53_37_fu_10098_p2 = (!prev_score_out_0_op_i1_37_fu_10078_p2.read().is_01() || !tmp_27_37_fu_10072_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_37_fu_10078_p2.read()) < sc_bigint<8>(tmp_27_37_fu_10072_p3.read()));
}

void needlemanWunsch::thread_tmp_53_38_fu_10264_p2() {
    tmp_53_38_fu_10264_p2 = (!prev_score_out_0_op_i1_38_fu_10244_p2.read().is_01() || !tmp_27_38_fu_10237_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_38_fu_10244_p2.read()) < sc_bigint<8>(tmp_27_38_fu_10237_p3.read()));
}

void needlemanWunsch::thread_tmp_53_39_fu_10433_p2() {
    tmp_53_39_fu_10433_p2 = (!prev_score_out_0_op_i1_39_fu_10413_p2.read().is_01() || !tmp_27_39_fu_10407_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_39_fu_10413_p2.read()) < sc_bigint<8>(tmp_27_39_fu_10407_p3.read()));
}

void needlemanWunsch::thread_tmp_53_3_fu_3577_p2() {
    tmp_53_3_fu_3577_p2 = (!prev_score_out_0_op_i1_3_fu_3557_p2.read().is_01() || !tmp_27_3_fu_3551_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_3_fu_3557_p2.read()) < sc_bigint<8>(tmp_27_3_fu_3551_p3.read()));
}

void needlemanWunsch::thread_tmp_53_40_fu_10602_p2() {
    tmp_53_40_fu_10602_p2 = (!prev_score_out_0_op_i1_40_fu_10583_p2.read().is_01() || !tmp_27_40_reg_29033.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_40_fu_10583_p2.read()) < sc_bigint<8>(tmp_27_40_reg_29033.read()));
}

void needlemanWunsch::thread_tmp_53_41_fu_10772_p2() {
    tmp_53_41_fu_10772_p2 = (!prev_score_out_0_op_i1_41_fu_10753_p2.read().is_01() || !tmp_27_41_reg_29150.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_41_fu_10753_p2.read()) < sc_bigint<8>(tmp_27_41_reg_29150.read()));
}

void needlemanWunsch::thread_tmp_53_42_fu_10940_p2() {
    tmp_53_42_fu_10940_p2 = (!prev_score_out_0_op_i1_42_fu_10920_p2.read().is_01() || !tmp_27_42_fu_10914_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_42_fu_10920_p2.read()) < sc_bigint<8>(tmp_27_42_fu_10914_p3.read()));
}

void needlemanWunsch::thread_tmp_53_43_fu_11114_p2() {
    tmp_53_43_fu_11114_p2 = (!prev_score_out_0_op_i1_43_fu_11094_p2.read().is_01() || !tmp_27_43_fu_11088_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_43_fu_11094_p2.read()) < sc_bigint<8>(tmp_27_43_fu_11088_p3.read()));
}

void needlemanWunsch::thread_tmp_53_44_fu_11279_p2() {
    tmp_53_44_fu_11279_p2 = (!prev_score_out_0_op_i1_44_fu_11259_p2.read().is_01() || !tmp_27_44_fu_11253_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_44_fu_11259_p2.read()) < sc_bigint<8>(tmp_27_44_fu_11253_p3.read()));
}

void needlemanWunsch::thread_tmp_53_45_fu_11448_p2() {
    tmp_53_45_fu_11448_p2 = (!prev_score_out_0_op_i1_45_fu_11429_p2.read().is_01() || !tmp_27_45_reg_29625.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_45_fu_11429_p2.read()) < sc_bigint<8>(tmp_27_45_reg_29625.read()));
}

void needlemanWunsch::thread_tmp_53_46_fu_11617_p2() {
    tmp_53_46_fu_11617_p2 = (!prev_score_out_0_op_i1_46_fu_11597_p2.read().is_01() || !tmp_27_46_fu_11591_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_46_fu_11597_p2.read()) < sc_bigint<8>(tmp_27_46_fu_11591_p3.read()));
}

void needlemanWunsch::thread_tmp_53_47_fu_11794_p2() {
    tmp_53_47_fu_11794_p2 = (!prev_score_out_0_op_i1_47_fu_11774_p2.read().is_01() || !tmp_27_47_fu_11767_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_47_fu_11774_p2.read()) < sc_bigint<8>(tmp_27_47_fu_11767_p3.read()));
}

void needlemanWunsch::thread_tmp_53_48_fu_11957_p2() {
    tmp_53_48_fu_11957_p2 = (!prev_score_out_0_op_i1_48_fu_11937_p2.read().is_01() || !tmp_27_48_fu_11931_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_48_fu_11937_p2.read()) < sc_bigint<8>(tmp_27_48_fu_11931_p3.read()));
}

void needlemanWunsch::thread_tmp_53_49_fu_12128_p2() {
    tmp_53_49_fu_12128_p2 = (!prev_score_out_0_op_i1_49_fu_12108_p2.read().is_01() || !tmp_27_49_fu_12102_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_49_fu_12108_p2.read()) < sc_bigint<8>(tmp_27_49_fu_12102_p3.read()));
}

void needlemanWunsch::thread_tmp_53_4_fu_3777_p2() {
    tmp_53_4_fu_3777_p2 = (!prev_score_out_0_op_i1_4_fu_3758_p2.read().is_01() || !tmp_27_4_reg_23512.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_4_fu_3758_p2.read()) < sc_bigint<8>(tmp_27_4_reg_23512.read()));
}

void needlemanWunsch::thread_tmp_53_50_fu_12302_p2() {
    tmp_53_50_fu_12302_p2 = (!prev_score_out_0_op_i1_50_fu_12283_p2.read().is_01() || !tmp_27_50_reg_30197.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_50_fu_12283_p2.read()) < sc_bigint<8>(tmp_27_50_reg_30197.read()));
}

void needlemanWunsch::thread_tmp_53_51_fu_12467_p2() {
    tmp_53_51_fu_12467_p2 = (!prev_score_out_0_op_i1_51_fu_12447_p2.read().is_01() || !tmp_27_51_fu_12440_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_51_fu_12447_p2.read()) < sc_bigint<8>(tmp_27_51_fu_12440_p3.read()));
}

void needlemanWunsch::thread_tmp_53_52_fu_12647_p2() {
    tmp_53_52_fu_12647_p2 = (!prev_score_out_0_op_i1_52_fu_12627_p2.read().is_01() || !tmp_27_52_fu_12621_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_52_fu_12627_p2.read()) < sc_bigint<8>(tmp_27_52_fu_12621_p3.read()));
}

void needlemanWunsch::thread_tmp_53_53_fu_12816_p2() {
    tmp_53_53_fu_12816_p2 = (!prev_score_out_0_op_i1_53_fu_12796_p2.read().is_01() || !tmp_27_53_fu_12790_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_53_fu_12796_p2.read()) < sc_bigint<8>(tmp_27_53_fu_12790_p3.read()));
}

void needlemanWunsch::thread_tmp_53_54_fu_12981_p2() {
    tmp_53_54_fu_12981_p2 = (!prev_score_out_0_op_i1_54_fu_12962_p2.read().is_01() || !tmp_27_54_reg_30624.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_54_fu_12962_p2.read()) < sc_bigint<8>(tmp_27_54_reg_30624.read()));
}

void needlemanWunsch::thread_tmp_53_55_fu_13146_p2() {
    tmp_53_55_fu_13146_p2 = (!prev_score_out_0_op_i1_55_fu_13126_p2.read().is_01() || !tmp_27_55_fu_13119_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_55_fu_13126_p2.read()) < sc_bigint<8>(tmp_27_55_fu_13119_p3.read()));
}

void needlemanWunsch::thread_tmp_53_56_fu_13321_p2() {
    tmp_53_56_fu_13321_p2 = (!prev_score_out_0_op_i1_56_fu_13301_p2.read().is_01() || !tmp_27_56_fu_13295_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_56_fu_13301_p2.read()) < sc_bigint<8>(tmp_27_56_fu_13295_p3.read()));
}

void needlemanWunsch::thread_tmp_53_57_fu_13501_p2() {
    tmp_53_57_fu_13501_p2 = (!prev_score_out_0_op_i1_57_fu_13481_p2.read().is_01() || !tmp_27_57_fu_13475_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_57_fu_13481_p2.read()) < sc_bigint<8>(tmp_27_57_fu_13475_p3.read()));
}

void needlemanWunsch::thread_tmp_53_58_fu_13672_p2() {
    tmp_53_58_fu_13672_p2 = (!prev_score_out_0_op_i1_58_fu_13652_p2.read().is_01() || !tmp_27_58_fu_13645_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_58_fu_13652_p2.read()) < sc_bigint<8>(tmp_27_58_fu_13645_p3.read()));
}

void needlemanWunsch::thread_tmp_53_59_fu_13846_p2() {
    tmp_53_59_fu_13846_p2 = (!prev_score_out_0_op_i1_59_fu_13826_p2.read().is_01() || !tmp_27_59_fu_13820_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_59_fu_13826_p2.read()) < sc_bigint<8>(tmp_27_59_fu_13820_p3.read()));
}

void needlemanWunsch::thread_tmp_53_5_fu_3962_p2() {
    tmp_53_5_fu_3962_p2 = (!prev_score_out_0_op_i1_5_fu_3942_p2.read().is_01() || !tmp_27_5_fu_3935_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_5_fu_3942_p2.read()) < sc_bigint<8>(tmp_27_5_fu_3935_p3.read()));
}

void needlemanWunsch::thread_tmp_53_60_fu_14020_p2() {
    tmp_53_60_fu_14020_p2 = (!prev_score_out_0_op_i1_60_fu_14000_p2.read().is_01() || !tmp_27_60_fu_13994_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_60_fu_14000_p2.read()) < sc_bigint<8>(tmp_27_60_fu_13994_p3.read()));
}

void needlemanWunsch::thread_tmp_53_61_fu_14189_p2() {
    tmp_53_61_fu_14189_p2 = (!prev_score_out_0_op_i1_61_fu_14170_p2.read().is_01() || !tmp_27_61_reg_31350.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_61_fu_14170_p2.read()) < sc_bigint<8>(tmp_27_61_reg_31350.read()));
}

void needlemanWunsch::thread_tmp_53_62_fu_14363_p2() {
    tmp_53_62_fu_14363_p2 = (!prev_score_out_0_op_i1_62_fu_14343_p2.read().is_01() || !tmp_27_62_fu_14337_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_62_fu_14343_p2.read()) < sc_bigint<8>(tmp_27_62_fu_14337_p3.read()));
}

void needlemanWunsch::thread_tmp_53_63_fu_14538_p2() {
    tmp_53_63_fu_14538_p2 = (!prev_score_out_0_op_i1_63_fu_14519_p2.read().is_01() || !tmp_27_63_reg_31551.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_63_fu_14519_p2.read()) < sc_bigint<8>(tmp_27_63_reg_31551.read()));
}

void needlemanWunsch::thread_tmp_53_64_fu_14712_p2() {
    tmp_53_64_fu_14712_p2 = (!prev_score_out_0_op_i1_64_fu_14692_p2.read().is_01() || !tmp_27_64_fu_14686_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_64_fu_14692_p2.read()) < sc_bigint<8>(tmp_27_64_fu_14686_p3.read()));
}

void needlemanWunsch::thread_tmp_53_65_fu_14887_p2() {
    tmp_53_65_fu_14887_p2 = (!prev_score_out_0_op_i1_65_fu_14867_p2.read().is_01() || !tmp_27_65_fu_14861_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_65_fu_14867_p2.read()) < sc_bigint<8>(tmp_27_65_fu_14861_p3.read()));
}

void needlemanWunsch::thread_tmp_53_66_fu_15062_p2() {
    tmp_53_66_fu_15062_p2 = (!prev_score_out_0_op_i1_66_fu_15042_p2.read().is_01() || !tmp_27_66_fu_15036_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_66_fu_15042_p2.read()) < sc_bigint<8>(tmp_27_66_fu_15036_p3.read()));
}

void needlemanWunsch::thread_tmp_53_67_fu_15237_p2() {
    tmp_53_67_fu_15237_p2 = (!prev_score_out_0_op_i1_67_fu_15217_p2.read().is_01() || !tmp_27_67_fu_15211_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_67_fu_15217_p2.read()) < sc_bigint<8>(tmp_27_67_fu_15211_p3.read()));
}

void needlemanWunsch::thread_tmp_53_68_fu_15412_p2() {
    tmp_53_68_fu_15412_p2 = (!prev_score_out_0_op_i1_68_fu_15392_p2.read().is_01() || !tmp_27_68_fu_15386_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_68_fu_15392_p2.read()) < sc_bigint<8>(tmp_27_68_fu_15386_p3.read()));
}

void needlemanWunsch::thread_tmp_53_69_fu_15587_p2() {
    tmp_53_69_fu_15587_p2 = (!prev_score_out_0_op_i1_69_fu_15567_p2.read().is_01() || !tmp_27_69_fu_15561_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_69_fu_15567_p2.read()) < sc_bigint<8>(tmp_27_69_fu_15561_p3.read()));
}

void needlemanWunsch::thread_tmp_53_6_fu_4797_p2() {
    tmp_53_6_fu_4797_p2 = (!prev_score_out_0_op_i1_6_fu_4777_p2.read().is_01() || !tmp_27_6_fu_4770_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_6_fu_4777_p2.read()) < sc_bigint<8>(tmp_27_6_fu_4770_p3.read()));
}

void needlemanWunsch::thread_tmp_53_70_fu_15762_p2() {
    tmp_53_70_fu_15762_p2 = (!prev_score_out_0_op_i1_70_fu_15742_p2.read().is_01() || !tmp_27_70_fu_15736_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_70_fu_15742_p2.read()) < sc_bigint<8>(tmp_27_70_fu_15736_p3.read()));
}

void needlemanWunsch::thread_tmp_53_71_fu_15937_p2() {
    tmp_53_71_fu_15937_p2 = (!prev_score_out_0_op_i1_71_fu_15917_p2.read().is_01() || !tmp_27_71_fu_15911_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_71_fu_15917_p2.read()) < sc_bigint<8>(tmp_27_71_fu_15911_p3.read()));
}

void needlemanWunsch::thread_tmp_53_72_fu_16112_p2() {
    tmp_53_72_fu_16112_p2 = (!prev_score_out_0_op_i1_72_fu_16093_p2.read().is_01() || !tmp_27_72_reg_32466.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_72_fu_16093_p2.read()) < sc_bigint<8>(tmp_27_72_reg_32466.read()));
}

void needlemanWunsch::thread_tmp_53_73_fu_16286_p2() {
    tmp_53_73_fu_16286_p2 = (!prev_score_out_0_op_i1_73_fu_16267_p2.read().is_01() || !tmp_27_73_reg_32565.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_73_fu_16267_p2.read()) < sc_bigint<8>(tmp_27_73_reg_32565.read()));
}

void needlemanWunsch::thread_tmp_53_74_fu_16460_p2() {
    tmp_53_74_fu_16460_p2 = (!prev_score_out_0_op_i1_74_fu_16440_p2.read().is_01() || !tmp_27_74_fu_16434_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_74_fu_16440_p2.read()) < sc_bigint<8>(tmp_27_74_fu_16434_p3.read()));
}

void needlemanWunsch::thread_tmp_53_75_fu_16635_p2() {
    tmp_53_75_fu_16635_p2 = (!prev_score_out_0_op_i1_75_fu_16615_p2.read().is_01() || !tmp_27_75_fu_16609_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_75_fu_16615_p2.read()) < sc_bigint<8>(tmp_27_75_fu_16609_p3.read()));
}

void needlemanWunsch::thread_tmp_53_76_fu_16815_p2() {
    tmp_53_76_fu_16815_p2 = (!prev_score_out_0_op_i1_76_fu_16796_p2.read().is_01() || !tmp_27_76_reg_32868.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_76_fu_16796_p2.read()) < sc_bigint<8>(tmp_27_76_reg_32868.read()));
}

void needlemanWunsch::thread_tmp_53_77_fu_16988_p2() {
    tmp_53_77_fu_16988_p2 = (!prev_score_out_0_op_i1_77_fu_16969_p2.read().is_01() || !tmp_27_77_reg_32972.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_77_fu_16969_p2.read()) < sc_bigint<8>(tmp_27_77_reg_32972.read()));
}

void needlemanWunsch::thread_tmp_53_78_fu_17156_p2() {
    tmp_53_78_fu_17156_p2 = (!prev_score_out_0_op_i1_78_fu_17136_p2.read().is_01() || !tmp_27_78_fu_17130_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_78_fu_17136_p2.read()) < sc_bigint<8>(tmp_27_78_fu_17130_p3.read()));
}

void needlemanWunsch::thread_tmp_53_79_fu_17336_p2() {
    tmp_53_79_fu_17336_p2 = (!prev_score_out_0_op_i1_79_fu_17316_p2.read().is_01() || !tmp_27_79_fu_17310_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_79_fu_17316_p2.read()) < sc_bigint<8>(tmp_27_79_fu_17310_p3.read()));
}

void needlemanWunsch::thread_tmp_53_7_fu_4969_p2() {
    tmp_53_7_fu_4969_p2 = (!prev_score_out_0_op_i1_7_fu_4949_p2.read().is_01() || !tmp_27_7_fu_4942_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_7_fu_4949_p2.read()) < sc_bigint<8>(tmp_27_7_fu_4942_p3.read()));
}

void needlemanWunsch::thread_tmp_53_80_fu_17510_p2() {
    tmp_53_80_fu_17510_p2 = (!prev_score_out_0_op_i1_80_fu_17491_p2.read().is_01() || !tmp_27_80_reg_33285.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_80_fu_17491_p2.read()) < sc_bigint<8>(tmp_27_80_reg_33285.read()));
}

void needlemanWunsch::thread_tmp_53_81_fu_17683_p2() {
    tmp_53_81_fu_17683_p2 = (!prev_score_out_0_op_i1_81_fu_17663_p2.read().is_01() || !tmp_27_81_fu_17657_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_81_fu_17663_p2.read()) < sc_bigint<8>(tmp_27_81_fu_17657_p3.read()));
}

void needlemanWunsch::thread_tmp_53_82_fu_17857_p2() {
    tmp_53_82_fu_17857_p2 = (!prev_score_out_0_op_i1_82_fu_17838_p2.read().is_01() || !tmp_27_82_reg_33496.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_82_fu_17838_p2.read()) < sc_bigint<8>(tmp_27_82_reg_33496.read()));
}

void needlemanWunsch::thread_tmp_53_83_fu_18025_p2() {
    tmp_53_83_fu_18025_p2 = (!prev_score_out_0_op_i1_83_fu_18006_p2.read().is_01() || !tmp_27_83_reg_33600.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_83_fu_18006_p2.read()) < sc_bigint<8>(tmp_27_83_reg_33600.read()));
}

void needlemanWunsch::thread_tmp_53_84_fu_18199_p2() {
    tmp_53_84_fu_18199_p2 = (!prev_score_out_0_op_i1_84_fu_18179_p2.read().is_01() || !tmp_27_84_fu_18173_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_84_fu_18179_p2.read()) < sc_bigint<8>(tmp_27_84_fu_18173_p3.read()));
}

void needlemanWunsch::thread_tmp_53_85_fu_18374_p2() {
    tmp_53_85_fu_18374_p2 = (!prev_score_out_0_op_i1_85_fu_18354_p2.read().is_01() || !tmp_27_85_fu_18348_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_85_fu_18354_p2.read()) < sc_bigint<8>(tmp_27_85_fu_18348_p3.read()));
}

void needlemanWunsch::thread_tmp_53_86_fu_18549_p2() {
    tmp_53_86_fu_18549_p2 = (!prev_score_out_0_op_i1_86_fu_18529_p2.read().is_01() || !tmp_27_86_fu_18523_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_86_fu_18529_p2.read()) < sc_bigint<8>(tmp_27_86_fu_18523_p3.read()));
}

void needlemanWunsch::thread_tmp_53_87_fu_18724_p2() {
    tmp_53_87_fu_18724_p2 = (!prev_score_out_0_op_i1_87_fu_18705_p2.read().is_01() || !tmp_27_87_reg_34005.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_87_fu_18705_p2.read()) < sc_bigint<8>(tmp_27_87_reg_34005.read()));
}

void needlemanWunsch::thread_tmp_53_88_fu_18903_p2() {
    tmp_53_88_fu_18903_p2 = (!prev_score_out_0_op_i1_88_fu_18884_p2.read().is_01() || !tmp_27_88_reg_34104.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_88_fu_18884_p2.read()) < sc_bigint<8>(tmp_27_88_reg_34104.read()));
}

void needlemanWunsch::thread_tmp_53_89_fu_19071_p2() {
    tmp_53_89_fu_19071_p2 = (!prev_score_out_0_op_i1_89_fu_19051_p2.read().is_01() || !tmp_27_89_fu_19045_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_89_fu_19051_p2.read()) < sc_bigint<8>(tmp_27_89_fu_19045_p3.read()));
}

void needlemanWunsch::thread_tmp_53_8_fu_5130_p2() {
    tmp_53_8_fu_5130_p2 = (!prev_score_out_0_op_i1_8_fu_5110_p2.read().is_01() || !tmp_27_8_fu_5103_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_8_fu_5110_p2.read()) < sc_bigint<8>(tmp_27_8_fu_5103_p3.read()));
}

void needlemanWunsch::thread_tmp_53_90_fu_19246_p2() {
    tmp_53_90_fu_19246_p2 = (!prev_score_out_0_op_i1_90_fu_19226_p2.read().is_01() || !tmp_27_90_fu_19220_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_90_fu_19226_p2.read()) < sc_bigint<8>(tmp_27_90_fu_19220_p3.read()));
}

void needlemanWunsch::thread_tmp_53_91_fu_19426_p2() {
    tmp_53_91_fu_19426_p2 = (!prev_score_out_0_op_i1_91_fu_19407_p2.read().is_01() || !tmp_27_91_reg_34412.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_91_fu_19407_p2.read()) < sc_bigint<8>(tmp_27_91_reg_34412.read()));
}

void needlemanWunsch::thread_tmp_53_92_fu_19594_p2() {
    tmp_53_92_fu_19594_p2 = (!prev_score_out_0_op_i1_92_fu_19574_p2.read().is_01() || !tmp_27_92_fu_19568_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_92_fu_19574_p2.read()) < sc_bigint<8>(tmp_27_92_fu_19568_p3.read()));
}

void needlemanWunsch::thread_tmp_53_93_fu_19769_p2() {
    tmp_53_93_fu_19769_p2 = (!prev_score_out_0_op_i1_93_fu_19749_p2.read().is_01() || !tmp_27_93_fu_19743_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_93_fu_19749_p2.read()) < sc_bigint<8>(tmp_27_93_fu_19743_p3.read()));
}

void needlemanWunsch::thread_tmp_53_94_fu_19944_p2() {
    tmp_53_94_fu_19944_p2 = (!prev_score_out_0_op_i1_94_fu_19924_p2.read().is_01() || !tmp_27_94_fu_19918_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_94_fu_19924_p2.read()) < sc_bigint<8>(tmp_27_94_fu_19918_p3.read()));
}

void needlemanWunsch::thread_tmp_53_95_fu_20124_p2() {
    tmp_53_95_fu_20124_p2 = (!prev_score_out_0_op_i1_95_fu_20104_p2.read().is_01() || !tmp_27_95_fu_20098_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_95_fu_20104_p2.read()) < sc_bigint<8>(tmp_27_95_fu_20098_p3.read()));
}

void needlemanWunsch::thread_tmp_53_96_fu_20293_p2() {
    tmp_53_96_fu_20293_p2 = (!prev_score_out_0_op_i1_96_fu_20273_p2.read().is_01() || !tmp_27_96_fu_20267_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_96_fu_20273_p2.read()) < sc_bigint<8>(tmp_27_96_fu_20267_p3.read()));
}

void needlemanWunsch::thread_tmp_53_97_fu_20474_p2() {
    tmp_53_97_fu_20474_p2 = (!prev_score_out_0_op_i1_97_fu_20455_p2.read().is_01() || !tmp_27_97_reg_35031.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_97_fu_20455_p2.read()) < sc_bigint<8>(tmp_27_97_reg_35031.read()));
}

void needlemanWunsch::thread_tmp_53_98_fu_20604_p2() {
    tmp_53_98_fu_20604_p2 = (!prev_score_out_0_op_i1_98_fu_20585_p2.read().is_01() || !tmp_27_98_reg_35048.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_98_fu_20585_p2.read()) < sc_bigint<8>(tmp_27_98_reg_35048.read()));
}

void needlemanWunsch::thread_tmp_53_9_fu_5290_p2() {
    tmp_53_9_fu_5290_p2 = (!prev_score_out_0_op_i1_9_fu_5271_p2.read().is_01() || !tmp_27_9_reg_25209.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_9_fu_5271_p2.read()) < sc_bigint<8>(tmp_27_9_reg_25209.read()));
}

void needlemanWunsch::thread_tmp_53_s_fu_5450_p2() {
    tmp_53_s_fu_5450_p2 = (!prev_score_out_0_op_i1_s_fu_5430_p2.read().is_01() || !tmp_27_s_fu_5423_p3.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i1_s_fu_5430_p2.read()) < sc_bigint<8>(tmp_27_s_fu_5423_p3.read()));
}

void needlemanWunsch::thread_tmp_56_10_fu_4448_p2() {
    tmp_56_10_fu_4448_p2 = (!tmp_23_reg_22762.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_23_reg_22762.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_11_fu_4452_p2() {
    tmp_56_11_fu_4452_p2 = (!tmp_122_reg_22768.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_122_reg_22768.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_12_fu_4456_p2() {
    tmp_56_12_fu_4456_p2 = (!tmp_25_reg_22774.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_25_reg_22774.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_13_fu_4460_p2() {
    tmp_56_13_fu_4460_p2 = (!tmp_26_reg_22780.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_26_reg_22780.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_14_fu_4464_p2() {
    tmp_56_14_fu_4464_p2 = (!tmp_27_reg_22786.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_27_reg_22786.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_15_fu_4468_p2() {
    tmp_56_15_fu_4468_p2 = (!tmp_127_reg_22829.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_127_reg_22829.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_18_fu_4472_p2() {
    tmp_56_18_fu_4472_p2 = (!tmp_31_reg_22835.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_31_reg_22835.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_19_fu_4476_p2() {
    tmp_56_19_fu_4476_p2 = (!tmp_132_reg_22841.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_132_reg_22841.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_20_fu_4480_p2() {
    tmp_56_20_fu_4480_p2 = (!tmp_33_reg_22847.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_33_reg_22847.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_21_fu_4484_p2() {
    tmp_56_21_fu_4484_p2 = (!tmp_34_reg_22853.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_34_reg_22853.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_22_fu_4488_p2() {
    tmp_56_22_fu_4488_p2 = (!tmp_35_reg_22859.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_35_reg_22859.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_23_fu_4492_p2() {
    tmp_56_23_fu_4492_p2 = (!tmp_137_reg_23011.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_137_reg_23011.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_24_fu_4496_p2() {
    tmp_56_24_fu_4496_p2 = (!tmp_37_reg_23017.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_37_reg_23017.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_25_fu_4500_p2() {
    tmp_56_25_fu_4500_p2 = (!tmp_38_reg_23023.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_38_reg_23023.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_27_fu_4504_p2() {
    tmp_56_27_fu_4504_p2 = (!tmp_213_reg_23029.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_213_reg_23029.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_28_fu_4508_p2() {
    tmp_56_28_fu_4508_p2 = (!tmp_41_reg_23035.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_41_reg_23035.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_29_fu_4512_p2() {
    tmp_56_29_fu_4512_p2 = (!tmp_42_reg_23041.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_reg_23041.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_30_fu_4516_p2() {
    tmp_56_30_fu_4516_p2 = (!tmp_43_reg_23047.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_43_reg_23047.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_31_fu_4520_p2() {
    tmp_56_31_fu_4520_p2 = (!tmp_214_reg_23096.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_214_reg_23096.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_32_fu_4524_p2() {
    tmp_56_32_fu_4524_p2 = (!tmp_45_reg_23102.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_45_reg_23102.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_33_fu_4528_p2() {
    tmp_56_33_fu_4528_p2 = (!tmp_46_reg_23108.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_46_reg_23108.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_34_fu_4532_p2() {
    tmp_56_34_fu_4532_p2 = (!tmp_47_reg_23114.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_47_reg_23114.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_35_fu_4536_p2() {
    tmp_56_35_fu_4536_p2 = (!tmp_215_reg_23120.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_215_reg_23120.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_36_fu_4540_p2() {
    tmp_56_36_fu_4540_p2 = (!tmp_49_reg_23126.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_49_reg_23126.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_37_fu_4544_p2() {
    tmp_56_37_fu_4544_p2 = (!tmp_50_reg_23132.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_50_reg_23132.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_38_fu_4548_p2() {
    tmp_56_38_fu_4548_p2 = (!tmp_51_reg_23138.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_reg_23138.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_39_fu_4552_p2() {
    tmp_56_39_fu_4552_p2 = (!tmp_216_reg_23186.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_216_reg_23186.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_40_fu_4556_p2() {
    tmp_56_40_fu_4556_p2 = (!tmp_53_reg_23192.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_53_reg_23192.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_41_fu_4560_p2() {
    tmp_56_41_fu_4560_p2 = (!tmp_54_reg_23198.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_54_reg_23198.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_42_fu_4564_p2() {
    tmp_56_42_fu_4564_p2 = (!tmp_55_reg_23204.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_55_reg_23204.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_43_fu_4568_p2() {
    tmp_56_43_fu_4568_p2 = (!tmp_217_reg_23210.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_217_reg_23210.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_44_fu_4572_p2() {
    tmp_56_44_fu_4572_p2 = (!tmp_57_reg_23216.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_reg_23216.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_45_fu_4576_p2() {
    tmp_56_45_fu_4576_p2 = (!tmp_58_reg_23222.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_58_reg_23222.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_46_fu_4580_p2() {
    tmp_56_46_fu_4580_p2 = (!tmp_59_reg_23228.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_59_reg_23228.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_47_fu_4584_p2() {
    tmp_56_47_fu_4584_p2 = (!tmp_218_reg_23293.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_218_reg_23293.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_48_fu_4588_p2() {
    tmp_56_48_fu_4588_p2 = (!tmp_61_reg_23299.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_61_reg_23299.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_49_fu_4592_p2() {
    tmp_56_49_fu_4592_p2 = (!tmp_62_reg_23305.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_62_reg_23305.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_4_fu_3547_p2() {
    tmp_56_4_fu_3547_p2 = (!tmp_96_reg_22245.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_reg_22245.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_50_fu_4596_p2() {
    tmp_56_50_fu_4596_p2 = (!tmp_63_reg_23311.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_63_reg_23311.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_51_fu_4600_p2() {
    tmp_56_51_fu_4600_p2 = (!tmp_219_reg_23317.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_219_reg_23317.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_52_fu_4604_p2() {
    tmp_56_52_fu_4604_p2 = (!tmp_65_reg_23323.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_65_reg_23323.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_53_fu_4608_p2() {
    tmp_56_53_fu_4608_p2 = (!tmp_66_reg_23329.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_reg_23329.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_54_fu_4612_p2() {
    tmp_56_54_fu_4612_p2 = (!tmp_67_reg_23335.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_67_reg_23335.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_55_fu_4616_p2() {
    tmp_56_55_fu_4616_p2 = (!tmp_220_reg_23406.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_220_reg_23406.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_56_fu_4620_p2() {
    tmp_56_56_fu_4620_p2 = (!tmp_69_reg_23412.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_69_reg_23412.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_57_fu_4624_p2() {
    tmp_56_57_fu_4624_p2 = (!tmp_70_reg_23418.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_70_reg_23418.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_59_fu_4628_p2() {
    tmp_56_59_fu_4628_p2 = (!tmp_221_reg_23429.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_221_reg_23429.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_61_fu_4632_p2() {
    tmp_56_61_fu_4632_p2 = (!tmp_74_reg_23435.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_74_reg_23435.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_62_fu_4636_p2() {
    tmp_56_62_fu_4636_p2 = (!tmp_75_reg_23441.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_75_reg_23441.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_63_fu_4640_p2() {
    tmp_56_63_fu_4640_p2 = (!tmp_222_reg_23527.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_222_reg_23527.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_64_fu_4644_p2() {
    tmp_56_64_fu_4644_p2 = (!tmp_77_reg_23533.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_reg_23533.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_65_fu_4648_p2() {
    tmp_56_65_fu_4648_p2 = (!tmp_78_reg_23539.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_78_reg_23539.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_66_fu_4652_p2() {
    tmp_56_66_fu_4652_p2 = (!tmp_79_reg_23545.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_79_reg_23545.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_67_fu_4656_p2() {
    tmp_56_67_fu_4656_p2 = (!tmp_223_reg_23551.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_223_reg_23551.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_68_fu_4660_p2() {
    tmp_56_68_fu_4660_p2 = (!tmp_81_reg_23557.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_81_reg_23557.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_69_fu_4664_p2() {
    tmp_56_69_fu_4664_p2 = (!tmp_82_reg_23563.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_82_reg_23563.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_70_fu_4668_p2() {
    tmp_56_70_fu_4668_p2 = (!tmp_83_reg_23569.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_reg_23569.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_71_fu_4672_p2() {
    tmp_56_71_fu_4672_p2 = (!tmp_224_reg_23640.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_224_reg_23640.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_74_fu_4676_p2() {
    tmp_56_74_fu_4676_p2 = (!tmp_87_reg_23656.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_87_reg_23656.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_75_fu_4680_p2() {
    tmp_56_75_fu_4680_p2 = (!tmp_225_reg_23662.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_225_reg_23662.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_76_fu_4684_p2() {
    tmp_56_76_fu_4684_p2 = (!tmp_89_reg_23668.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_89_reg_23668.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_78_fu_4688_p2() {
    tmp_56_78_fu_4688_p2 = (!tmp_91_reg_23674.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_91_reg_23674.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_79_fu_4692_p2() {
    tmp_56_79_fu_4692_p2 = (!tmp_226_reg_23759.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_226_reg_23759.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_80_fu_4696_p2() {
    tmp_56_80_fu_4696_p2 = (!tmp_93_reg_23765.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_93_reg_23765.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_81_fu_4700_p2() {
    tmp_56_81_fu_4700_p2 = (!tmp_94_reg_23771.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_94_reg_23771.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_82_fu_4704_p2() {
    tmp_56_82_fu_4704_p2 = (!tmp_95_reg_23777.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_reg_23777.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_83_fu_4708_p2() {
    tmp_56_83_fu_4708_p2 = (!tmp_227_reg_23783.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_227_reg_23783.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_84_fu_4712_p2() {
    tmp_56_84_fu_4712_p2 = (!tmp_97_reg_23789.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_97_reg_23789.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_85_fu_4716_p2() {
    tmp_56_85_fu_4716_p2 = (!tmp_98_reg_23795.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_98_reg_23795.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_86_fu_4720_p2() {
    tmp_56_86_fu_4720_p2 = (!tmp_99_reg_23801.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_99_reg_23801.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_87_fu_4724_p2() {
    tmp_56_87_fu_4724_p2 = (!tmp_228_reg_23872.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_228_reg_23872.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_88_fu_4728_p2() {
    tmp_56_88_fu_4728_p2 = (!tmp_101_reg_23878.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_reg_23878.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_89_fu_4732_p2() {
    tmp_56_89_fu_4732_p2 = (!tmp_102_reg_23884.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_102_reg_23884.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_8_fu_4436_p2() {
    tmp_56_8_fu_4436_p2 = (!tmp_114_reg_22744.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_114_reg_22744.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_90_fu_4736_p2() {
    tmp_56_90_fu_4736_p2 = (!tmp_103_reg_23890.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_103_reg_23890.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_91_fu_4740_p2() {
    tmp_56_91_fu_4740_p2 = (!tmp_229_reg_23896.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_229_reg_23896.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_92_fu_4744_p2() {
    tmp_56_92_fu_4744_p2 = (!tmp_105_reg_23902.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_105_reg_23902.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_93_fu_4748_p2() {
    tmp_56_93_fu_4748_p2 = (!tmp_106_reg_23908.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_106_reg_23908.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_95_fu_4752_p2() {
    tmp_56_95_fu_4752_p2 = (!tmp_230_fu_4395_p1.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_230_fu_4395_p1.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_9_fu_4440_p2() {
    tmp_56_9_fu_4440_p2 = (!tmp_21_reg_22750.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_21_reg_22750.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_56_fu_3040_p2() {
    tmp_56_fu_3040_p2 = (!ap_const_lv4_7.is_01() || !tmp_44_fu_3021_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_7) - sc_biguint<4>(tmp_44_fu_3021_p3.read()));
}

void needlemanWunsch::thread_tmp_56_s_fu_4444_p2() {
    tmp_56_s_fu_4444_p2 = (!tmp_22_reg_22756.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_22_reg_22756.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_tmp_57_10_fu_5783_p2() {
    tmp_57_10_fu_5783_p2 = (!prev_score_out_8_10_reg_25535.read().is_01() || !prev_score_out_0_op_i_10_fu_5778_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_10_reg_25535.read()) < sc_bigint<8>(prev_score_out_0_op_i_10_fu_5778_p2.read()));
}

void needlemanWunsch::thread_tmp_57_11_fu_5942_p2() {
    tmp_57_11_fu_5942_p2 = (!prev_score_out_8_11_reg_25656.read().is_01() || !prev_score_out_0_op_i_11_fu_5937_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_11_reg_25656.read()) < sc_bigint<8>(prev_score_out_0_op_i_11_fu_5937_p2.read()));
}

void needlemanWunsch::thread_tmp_57_12_fu_6102_p2() {
    tmp_57_12_fu_6102_p2 = (!prev_score_out_8_12_reg_25779.read().is_01() || !prev_score_out_0_op_i_12_fu_6097_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_12_reg_25779.read()) < sc_bigint<8>(prev_score_out_0_op_i_12_fu_6097_p2.read()));
}

void needlemanWunsch::thread_tmp_57_13_fu_6261_p2() {
    tmp_57_13_fu_6261_p2 = (!prev_score_out_8_13_reg_25905.read().is_01() || !prev_score_out_0_op_i_13_fu_6256_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_13_reg_25905.read()) < sc_bigint<8>(prev_score_out_0_op_i_13_fu_6256_p2.read()));
}

void needlemanWunsch::thread_tmp_57_14_fu_6421_p2() {
    tmp_57_14_fu_6421_p2 = (!prev_score_out_8_14_reg_26028.read().is_01() || !prev_score_out_0_op_i_14_fu_6416_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_14_reg_26028.read()) < sc_bigint<8>(prev_score_out_0_op_i_14_fu_6416_p2.read()));
}

void needlemanWunsch::thread_tmp_57_15_fu_6580_p2() {
    tmp_57_15_fu_6580_p2 = (!prev_score_out_8_15_reg_26154.read().is_01() || !prev_score_out_0_op_i_15_fu_6575_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_15_reg_26154.read()) < sc_bigint<8>(prev_score_out_0_op_i_15_fu_6575_p2.read()));
}

void needlemanWunsch::thread_tmp_57_16_fu_6741_p2() {
    tmp_57_16_fu_6741_p2 = (!prev_score_out_8_16_reg_26277.read().is_01() || !prev_score_out_0_op_i_16_fu_6736_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_16_reg_26277.read()) < sc_bigint<8>(prev_score_out_0_op_i_16_fu_6736_p2.read()));
}

void needlemanWunsch::thread_tmp_57_17_fu_6900_p2() {
    tmp_57_17_fu_6900_p2 = (!prev_score_out_8_17_reg_26398.read().is_01() || !prev_score_out_0_op_i_17_fu_6895_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_17_reg_26398.read()) < sc_bigint<8>(prev_score_out_0_op_i_17_fu_6895_p2.read()));
}

void needlemanWunsch::thread_tmp_57_18_fu_7067_p2() {
    tmp_57_18_fu_7067_p2 = (!prev_score_out_8_18_reg_26515.read().is_01() || !prev_score_out_0_op_i_18_fu_7062_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_18_reg_26515.read()) < sc_bigint<8>(prev_score_out_0_op_i_18_fu_7062_p2.read()));
}

void needlemanWunsch::thread_tmp_57_19_fu_7239_p2() {
    tmp_57_19_fu_7239_p2 = (!prev_score_out_8_19_reg_26630.read().is_01() || !prev_score_out_0_op_i_19_fu_7234_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_19_reg_26630.read()) < sc_bigint<8>(prev_score_out_0_op_i_19_fu_7234_p2.read()));
}

void needlemanWunsch::thread_tmp_57_1_fu_3454_p2() {
    tmp_57_1_fu_3454_p2 = (!prev_score_out_8_1_reg_23059.read().is_01() || !prev_score_out_0_op_i_1_fu_3449_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_1_reg_23059.read()) < sc_bigint<8>(prev_score_out_0_op_i_1_fu_3449_p2.read()));
}

void needlemanWunsch::thread_tmp_57_20_fu_7404_p2() {
    tmp_57_20_fu_7404_p2 = (!prev_score_out_8_20_reg_26757.read().is_01() || !prev_score_out_0_op_i_20_fu_7399_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_20_reg_26757.read()) < sc_bigint<8>(prev_score_out_0_op_i_20_fu_7399_p2.read()));
}

void needlemanWunsch::thread_tmp_57_21_fu_7576_p2() {
    tmp_57_21_fu_7576_p2 = (!prev_score_out_8_21_reg_26877.read().is_01() || !prev_score_out_0_op_i_21_fu_7571_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_21_reg_26877.read()) < sc_bigint<8>(prev_score_out_0_op_i_21_fu_7571_p2.read()));
}

void needlemanWunsch::thread_tmp_57_22_fu_7742_p2() {
    tmp_57_22_fu_7742_p2 = (!prev_score_out_8_22_reg_27003.read().is_01() || !prev_score_out_0_op_i_22_fu_7737_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_22_reg_27003.read()) < sc_bigint<8>(prev_score_out_0_op_i_22_fu_7737_p2.read()));
}

void needlemanWunsch::thread_tmp_57_23_fu_7908_p2() {
    tmp_57_23_fu_7908_p2 = (!prev_score_out_8_23_reg_27124.read().is_01() || !prev_score_out_0_op_i_23_fu_7903_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_23_reg_27124.read()) < sc_bigint<8>(prev_score_out_0_op_i_23_fu_7903_p2.read()));
}

void needlemanWunsch::thread_tmp_57_24_fu_8082_p2() {
    tmp_57_24_fu_8082_p2 = (!prev_score_out_8_24_reg_27238.read().is_01() || !prev_score_out_0_op_i_24_fu_8077_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_24_reg_27238.read()) < sc_bigint<8>(prev_score_out_0_op_i_24_fu_8077_p2.read()));
}

void needlemanWunsch::thread_tmp_57_25_fu_8253_p2() {
    tmp_57_25_fu_8253_p2 = (!prev_score_out_8_25_reg_27357.read().is_01() || !prev_score_out_0_op_i_25_fu_8248_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_25_reg_27357.read()) < sc_bigint<8>(prev_score_out_0_op_i_25_fu_8248_p2.read()));
}

void needlemanWunsch::thread_tmp_57_26_fu_8416_p2() {
    tmp_57_26_fu_8416_p2 = (!prev_score_out_8_26_reg_27477.read().is_01() || !prev_score_out_0_op_i_26_fu_8411_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_26_reg_27477.read()) < sc_bigint<8>(prev_score_out_0_op_i_26_fu_8411_p2.read()));
}

void needlemanWunsch::thread_tmp_57_27_fu_8591_p2() {
    tmp_57_27_fu_8591_p2 = (!prev_score_out_8_27_reg_27591.read().is_01() || !prev_score_out_0_op_i_27_fu_8586_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_27_reg_27591.read()) < sc_bigint<8>(prev_score_out_0_op_i_27_fu_8586_p2.read()));
}

void needlemanWunsch::thread_tmp_57_28_fu_8760_p2() {
    tmp_57_28_fu_8760_p2 = (!prev_score_out_8_28_reg_27716.read().is_01() || !prev_score_out_0_op_i_28_fu_8755_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_28_reg_27716.read()) < sc_bigint<8>(prev_score_out_0_op_i_28_fu_8755_p2.read()));
}

void needlemanWunsch::thread_tmp_57_29_fu_8922_p2() {
    tmp_57_29_fu_8922_p2 = (!prev_score_out_8_29_reg_27832.read().is_01() || !prev_score_out_0_op_i_29_fu_8917_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_29_reg_27832.read()) < sc_bigint<8>(prev_score_out_0_op_i_29_fu_8917_p2.read()));
}

void needlemanWunsch::thread_tmp_57_2_fu_3616_p2() {
    tmp_57_2_fu_3616_p2 = (!prev_score_out_8_2_reg_23259.read().is_01() || !prev_score_out_0_op_i_2_fu_3611_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_2_reg_23259.read()) < sc_bigint<8>(prev_score_out_0_op_i_2_fu_3611_p2.read()));
}

void needlemanWunsch::thread_tmp_57_30_fu_9096_p2() {
    tmp_57_30_fu_9096_p2 = (!prev_score_out_8_30_reg_27949.read().is_01() || !prev_score_out_0_op_i_30_fu_9091_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_30_reg_27949.read()) < sc_bigint<8>(prev_score_out_0_op_i_30_fu_9091_p2.read()));
}

void needlemanWunsch::thread_tmp_57_31_fu_9260_p2() {
    tmp_57_31_fu_9260_p2 = (!prev_score_out_8_31_reg_28065.read().is_01() || !prev_score_out_0_op_i_31_fu_9255_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_31_reg_28065.read()) < sc_bigint<8>(prev_score_out_0_op_i_31_fu_9255_p2.read()));
}

void needlemanWunsch::thread_tmp_57_32_fu_9429_p2() {
    tmp_57_32_fu_9429_p2 = (!prev_score_out_8_32_reg_28182.read().is_01() || !prev_score_out_0_op_i_32_fu_9424_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_32_reg_28182.read()) < sc_bigint<8>(prev_score_out_0_op_i_32_fu_9424_p2.read()));
}

void needlemanWunsch::thread_tmp_57_33_fu_9603_p2() {
    tmp_57_33_fu_9603_p2 = (!prev_score_out_8_33_reg_28296.read().is_01() || !prev_score_out_0_op_i_33_fu_9598_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_33_reg_28296.read()) < sc_bigint<8>(prev_score_out_0_op_i_33_fu_9598_p2.read()));
}

void needlemanWunsch::thread_tmp_57_34_fu_9772_p2() {
    tmp_57_34_fu_9772_p2 = (!prev_score_out_8_34_reg_28418.read().is_01() || !prev_score_out_0_op_i_34_fu_9767_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_34_reg_28418.read()) < sc_bigint<8>(prev_score_out_0_op_i_34_fu_9767_p2.read()));
}

void needlemanWunsch::thread_tmp_57_35_fu_9935_p2() {
    tmp_57_35_fu_9935_p2 = (!prev_score_out_8_35_reg_28534.read().is_01() || !prev_score_out_0_op_i_35_fu_9930_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_35_reg_28534.read()) < sc_bigint<8>(prev_score_out_0_op_i_35_fu_9930_p2.read()));
}

void needlemanWunsch::thread_tmp_57_36_fu_10109_p2() {
    tmp_57_36_fu_10109_p2 = (!prev_score_out_8_36_reg_28659.read().is_01() || !prev_score_out_0_op_i_36_fu_10104_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_36_reg_28659.read()) < sc_bigint<8>(prev_score_out_0_op_i_36_fu_10104_p2.read()));
}

void needlemanWunsch::thread_tmp_57_37_fu_10275_p2() {
    tmp_57_37_fu_10275_p2 = (!prev_score_out_8_37_reg_28778.read().is_01() || !prev_score_out_0_op_i_37_fu_10270_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_37_reg_28778.read()) < sc_bigint<8>(prev_score_out_0_op_i_37_fu_10270_p2.read()));
}

void needlemanWunsch::thread_tmp_57_38_fu_10444_p2() {
    tmp_57_38_fu_10444_p2 = (!prev_score_out_8_38_reg_28893.read().is_01() || !prev_score_out_0_op_i_38_fu_10439_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_38_reg_28893.read()) < sc_bigint<8>(prev_score_out_0_op_i_38_fu_10439_p2.read()));
}

void needlemanWunsch::thread_tmp_57_39_fu_10612_p2() {
    tmp_57_39_fu_10612_p2 = (!prev_score_out_8_39_reg_29012.read().is_01() || !prev_score_out_0_op_i_39_fu_10607_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_39_reg_29012.read()) < sc_bigint<8>(prev_score_out_0_op_i_39_fu_10607_p2.read()));
}

void needlemanWunsch::thread_tmp_57_3_fu_3795_p2() {
    tmp_57_3_fu_3795_p2 = (!prev_score_out_8_3_reg_23472.read().is_01() || !prev_score_out_0_op_i_3_fu_3790_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_3_reg_23472.read()) < sc_bigint<8>(prev_score_out_0_op_i_3_fu_3790_p2.read()));
}

void needlemanWunsch::thread_tmp_57_40_fu_10782_p2() {
    tmp_57_40_fu_10782_p2 = (!prev_score_out_8_40_reg_29129.read().is_01() || !prev_score_out_0_op_i_40_fu_10777_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_40_reg_29129.read()) < sc_bigint<8>(prev_score_out_0_op_i_40_fu_10777_p2.read()));
}

void needlemanWunsch::thread_tmp_57_41_fu_10951_p2() {
    tmp_57_41_fu_10951_p2 = (!prev_score_out_8_41_reg_29240.read().is_01() || !prev_score_out_0_op_i_41_fu_10946_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_41_reg_29240.read()) < sc_bigint<8>(prev_score_out_0_op_i_41_fu_10946_p2.read()));
}

void needlemanWunsch::thread_tmp_57_42_fu_11125_p2() {
    tmp_57_42_fu_11125_p2 = (!prev_score_out_8_42_reg_29365.read().is_01() || !prev_score_out_0_op_i_42_fu_11120_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_42_reg_29365.read()) < sc_bigint<8>(prev_score_out_0_op_i_42_fu_11120_p2.read()));
}

void needlemanWunsch::thread_tmp_57_43_fu_11290_p2() {
    tmp_57_43_fu_11290_p2 = (!prev_score_out_8_43_reg_29484.read().is_01() || !prev_score_out_0_op_i_43_fu_11285_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_43_reg_29484.read()) < sc_bigint<8>(prev_score_out_0_op_i_43_fu_11285_p2.read()));
}

void needlemanWunsch::thread_tmp_57_44_fu_11458_p2() {
    tmp_57_44_fu_11458_p2 = (!prev_score_out_8_44_reg_29604.read().is_01() || !prev_score_out_0_op_i_44_fu_11453_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_44_reg_29604.read()) < sc_bigint<8>(prev_score_out_0_op_i_44_fu_11453_p2.read()));
}

void needlemanWunsch::thread_tmp_57_45_fu_11628_p2() {
    tmp_57_45_fu_11628_p2 = (!prev_score_out_8_45_reg_29715.read().is_01() || !prev_score_out_0_op_i_45_fu_11623_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_45_reg_29715.read()) < sc_bigint<8>(prev_score_out_0_op_i_45_fu_11623_p2.read()));
}

void needlemanWunsch::thread_tmp_57_46_fu_11805_p2() {
    tmp_57_46_fu_11805_p2 = (!prev_score_out_8_46_reg_29835.read().is_01() || !prev_score_out_0_op_i_46_fu_11800_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_46_reg_29835.read()) < sc_bigint<8>(prev_score_out_0_op_i_46_fu_11800_p2.read()));
}

void needlemanWunsch::thread_tmp_57_47_fu_11968_p2() {
    tmp_57_47_fu_11968_p2 = (!prev_score_out_8_47_reg_29949.read().is_01() || !prev_score_out_0_op_i_47_fu_11963_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_47_reg_29949.read()) < sc_bigint<8>(prev_score_out_0_op_i_47_fu_11963_p2.read()));
}

void needlemanWunsch::thread_tmp_57_48_fu_12139_p2() {
    tmp_57_48_fu_12139_p2 = (!prev_score_out_8_48_reg_30069.read().is_01() || !prev_score_out_0_op_i_48_fu_12134_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_48_reg_30069.read()) < sc_bigint<8>(prev_score_out_0_op_i_48_fu_12134_p2.read()));
}

void needlemanWunsch::thread_tmp_57_49_fu_12312_p2() {
    tmp_57_49_fu_12312_p2 = (!prev_score_out_8_49_reg_30176.read().is_01() || !prev_score_out_0_op_i_49_fu_12307_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_49_reg_30176.read()) < sc_bigint<8>(prev_score_out_0_op_i_49_fu_12307_p2.read()));
}

void needlemanWunsch::thread_tmp_57_4_fu_3992_p2() {
    tmp_57_4_fu_3992_p2 = (!prev_score_out_8_4_reg_23705.read().is_01() || !prev_score_out_0_op_i_4_fu_3987_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_4_reg_23705.read()) < sc_bigint<8>(prev_score_out_0_op_i_4_fu_3987_p2.read()));
}

void needlemanWunsch::thread_tmp_57_50_fu_12478_p2() {
    tmp_57_50_fu_12478_p2 = (!prev_score_out_8_50_reg_30292.read().is_01() || !prev_score_out_0_op_i_50_fu_12473_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_50_reg_30292.read()) < sc_bigint<8>(prev_score_out_0_op_i_50_fu_12473_p2.read()));
}

void needlemanWunsch::thread_tmp_57_51_fu_12658_p2() {
    tmp_57_51_fu_12658_p2 = (!prev_score_out_8_51_reg_30394.read().is_01() || !prev_score_out_0_op_i_51_fu_12653_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_51_reg_30394.read()) < sc_bigint<8>(prev_score_out_0_op_i_51_fu_12653_p2.read()));
}

void needlemanWunsch::thread_tmp_57_52_fu_12827_p2() {
    tmp_57_52_fu_12827_p2 = (!prev_score_out_8_52_reg_30501.read().is_01() || !prev_score_out_0_op_i_52_fu_12822_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_52_reg_30501.read()) < sc_bigint<8>(prev_score_out_0_op_i_52_fu_12822_p2.read()));
}

void needlemanWunsch::thread_tmp_57_53_fu_12991_p2() {
    tmp_57_53_fu_12991_p2 = (!prev_score_out_8_53_reg_30603.read().is_01() || !prev_score_out_0_op_i_53_fu_12986_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_53_reg_30603.read()) < sc_bigint<8>(prev_score_out_0_op_i_53_fu_12986_p2.read()));
}

void needlemanWunsch::thread_tmp_57_54_fu_13157_p2() {
    tmp_57_54_fu_13157_p2 = (!prev_score_out_8_54_reg_30707.read().is_01() || !prev_score_out_0_op_i_54_fu_13152_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_54_reg_30707.read()) < sc_bigint<8>(prev_score_out_0_op_i_54_fu_13152_p2.read()));
}

void needlemanWunsch::thread_tmp_57_55_fu_13332_p2() {
    tmp_57_55_fu_13332_p2 = (!prev_score_out_8_55_reg_30804.read().is_01() || !prev_score_out_0_op_i_55_fu_13327_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_55_reg_30804.read()) < sc_bigint<8>(prev_score_out_0_op_i_55_fu_13327_p2.read()));
}

void needlemanWunsch::thread_tmp_57_56_fu_13512_p2() {
    tmp_57_56_fu_13512_p2 = (!prev_score_out_8_56_reg_30906.read().is_01() || !prev_score_out_0_op_i_56_fu_13507_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_56_reg_30906.read()) < sc_bigint<8>(prev_score_out_0_op_i_56_fu_13507_p2.read()));
}

void needlemanWunsch::thread_tmp_57_57_fu_13683_p2() {
    tmp_57_57_fu_13683_p2 = (!prev_score_out_8_57_reg_31013.read().is_01() || !prev_score_out_0_op_i_57_fu_13678_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_57_reg_31013.read()) < sc_bigint<8>(prev_score_out_0_op_i_57_fu_13678_p2.read()));
}

void needlemanWunsch::thread_tmp_57_58_fu_13857_p2() {
    tmp_57_58_fu_13857_p2 = (!prev_score_out_8_58_reg_31115.read().is_01() || !prev_score_out_0_op_i_58_fu_13852_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_58_reg_31115.read()) < sc_bigint<8>(prev_score_out_0_op_i_58_fu_13852_p2.read()));
}

void needlemanWunsch::thread_tmp_57_59_fu_14031_p2() {
    tmp_57_59_fu_14031_p2 = (!prev_score_out_8_59_reg_31222.read().is_01() || !prev_score_out_0_op_i_59_fu_14026_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_59_reg_31222.read()) < sc_bigint<8>(prev_score_out_0_op_i_59_fu_14026_p2.read()));
}

void needlemanWunsch::thread_tmp_57_5_fu_4819_p2() {
    tmp_57_5_fu_4819_p2 = (!prev_score_out_8_5_reg_23945.read().is_01() || !prev_score_out_0_op_i_5_fu_4814_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_5_reg_23945.read()) < sc_bigint<8>(prev_score_out_0_op_i_5_fu_4814_p2.read()));
}

void needlemanWunsch::thread_tmp_57_60_fu_14199_p2() {
    tmp_57_60_fu_14199_p2 = (!prev_score_out_8_60_reg_31329.read().is_01() || !prev_score_out_0_op_i_60_fu_14194_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_60_reg_31329.read()) < sc_bigint<8>(prev_score_out_0_op_i_60_fu_14194_p2.read()));
}

void needlemanWunsch::thread_tmp_57_61_fu_14374_p2() {
    tmp_57_61_fu_14374_p2 = (!prev_score_out_8_61_reg_31428.read().is_01() || !prev_score_out_0_op_i_61_fu_14369_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_61_reg_31428.read()) < sc_bigint<8>(prev_score_out_0_op_i_61_fu_14369_p2.read()));
}

void needlemanWunsch::thread_tmp_57_62_fu_14548_p2() {
    tmp_57_62_fu_14548_p2 = (!prev_score_out_8_62_reg_31530.read().is_01() || !prev_score_out_0_op_i_62_fu_14543_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_62_reg_31530.read()) < sc_bigint<8>(prev_score_out_0_op_i_62_fu_14543_p2.read()));
}

void needlemanWunsch::thread_tmp_57_63_fu_14723_p2() {
    tmp_57_63_fu_14723_p2 = (!prev_score_out_8_63_reg_31629.read().is_01() || !prev_score_out_0_op_i_63_fu_14718_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_63_reg_31629.read()) < sc_bigint<8>(prev_score_out_0_op_i_63_fu_14718_p2.read()));
}

void needlemanWunsch::thread_tmp_57_64_fu_14898_p2() {
    tmp_57_64_fu_14898_p2 = (!prev_score_out_8_64_reg_31731.read().is_01() || !prev_score_out_0_op_i_64_fu_14893_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_64_reg_31731.read()) < sc_bigint<8>(prev_score_out_0_op_i_64_fu_14893_p2.read()));
}

void needlemanWunsch::thread_tmp_57_65_fu_15073_p2() {
    tmp_57_65_fu_15073_p2 = (!prev_score_out_8_65_reg_31833.read().is_01() || !prev_score_out_0_op_i_65_fu_15068_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_65_reg_31833.read()) < sc_bigint<8>(prev_score_out_0_op_i_65_fu_15068_p2.read()));
}

void needlemanWunsch::thread_tmp_57_66_fu_15248_p2() {
    tmp_57_66_fu_15248_p2 = (!prev_score_out_8_66_reg_31935.read().is_01() || !prev_score_out_0_op_i_66_fu_15243_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_66_reg_31935.read()) < sc_bigint<8>(prev_score_out_0_op_i_66_fu_15243_p2.read()));
}

void needlemanWunsch::thread_tmp_57_67_fu_15423_p2() {
    tmp_57_67_fu_15423_p2 = (!prev_score_out_8_67_reg_32037.read().is_01() || !prev_score_out_0_op_i_67_fu_15418_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_67_reg_32037.read()) < sc_bigint<8>(prev_score_out_0_op_i_67_fu_15418_p2.read()));
}

void needlemanWunsch::thread_tmp_57_68_fu_15598_p2() {
    tmp_57_68_fu_15598_p2 = (!prev_score_out_8_68_reg_32139.read().is_01() || !prev_score_out_0_op_i_68_fu_15593_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_68_reg_32139.read()) < sc_bigint<8>(prev_score_out_0_op_i_68_fu_15593_p2.read()));
}

void needlemanWunsch::thread_tmp_57_69_fu_15773_p2() {
    tmp_57_69_fu_15773_p2 = (!prev_score_out_8_69_reg_32241.read().is_01() || !prev_score_out_0_op_i_69_fu_15768_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_69_reg_32241.read()) < sc_bigint<8>(prev_score_out_0_op_i_69_fu_15768_p2.read()));
}

void needlemanWunsch::thread_tmp_57_6_fu_4980_p2() {
    tmp_57_6_fu_4980_p2 = (!prev_score_out_8_6_reg_24970.read().is_01() || !prev_score_out_0_op_i_6_fu_4975_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_6_reg_24970.read()) < sc_bigint<8>(prev_score_out_0_op_i_6_fu_4975_p2.read()));
}

void needlemanWunsch::thread_tmp_57_70_fu_15948_p2() {
    tmp_57_70_fu_15948_p2 = (!prev_score_out_8_70_reg_32343.read().is_01() || !prev_score_out_0_op_i_70_fu_15943_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_70_reg_32343.read()) < sc_bigint<8>(prev_score_out_0_op_i_70_fu_15943_p2.read()));
}

void needlemanWunsch::thread_tmp_57_71_fu_16122_p2() {
    tmp_57_71_fu_16122_p2 = (!prev_score_out_8_71_reg_32445.read().is_01() || !prev_score_out_0_op_i_71_fu_16117_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_71_reg_32445.read()) < sc_bigint<8>(prev_score_out_0_op_i_71_fu_16117_p2.read()));
}

void needlemanWunsch::thread_tmp_57_72_fu_16296_p2() {
    tmp_57_72_fu_16296_p2 = (!prev_score_out_8_72_reg_32544.read().is_01() || !prev_score_out_0_op_i_72_fu_16291_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_72_reg_32544.read()) < sc_bigint<8>(prev_score_out_0_op_i_72_fu_16291_p2.read()));
}

void needlemanWunsch::thread_tmp_57_73_fu_16471_p2() {
    tmp_57_73_fu_16471_p2 = (!prev_score_out_8_73_reg_32643.read().is_01() || !prev_score_out_0_op_i_73_fu_16466_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_73_reg_32643.read()) < sc_bigint<8>(prev_score_out_0_op_i_73_fu_16466_p2.read()));
}

void needlemanWunsch::thread_tmp_57_74_fu_16646_p2() {
    tmp_57_74_fu_16646_p2 = (!prev_score_out_8_74_reg_32745.read().is_01() || !prev_score_out_0_op_i_74_fu_16641_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_74_reg_32745.read()) < sc_bigint<8>(prev_score_out_0_op_i_74_fu_16641_p2.read()));
}

void needlemanWunsch::thread_tmp_57_75_fu_16825_p2() {
    tmp_57_75_fu_16825_p2 = (!prev_score_out_8_75_reg_32847.read().is_01() || !prev_score_out_0_op_i_75_fu_16820_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_75_reg_32847.read()) < sc_bigint<8>(prev_score_out_0_op_i_75_fu_16820_p2.read()));
}

void needlemanWunsch::thread_tmp_57_76_fu_16998_p2() {
    tmp_57_76_fu_16998_p2 = (!prev_score_out_8_76_reg_32951.read().is_01() || !prev_score_out_0_op_i_76_fu_16993_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_76_reg_32951.read()) < sc_bigint<8>(prev_score_out_0_op_i_76_fu_16993_p2.read()));
}

void needlemanWunsch::thread_tmp_57_77_fu_17167_p2() {
    tmp_57_77_fu_17167_p2 = (!prev_score_out_8_77_reg_33055.read().is_01() || !prev_score_out_0_op_i_77_fu_17162_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_77_reg_33055.read()) < sc_bigint<8>(prev_score_out_0_op_i_77_fu_17162_p2.read()));
}

void needlemanWunsch::thread_tmp_57_78_fu_17347_p2() {
    tmp_57_78_fu_17347_p2 = (!prev_score_out_8_78_reg_33157.read().is_01() || !prev_score_out_0_op_i_78_fu_17342_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_78_reg_33157.read()) < sc_bigint<8>(prev_score_out_0_op_i_78_fu_17342_p2.read()));
}

void needlemanWunsch::thread_tmp_57_79_fu_17520_p2() {
    tmp_57_79_fu_17520_p2 = (!prev_score_out_8_79_reg_33264.read().is_01() || !prev_score_out_0_op_i_79_fu_17515_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_79_reg_33264.read()) < sc_bigint<8>(prev_score_out_0_op_i_79_fu_17515_p2.read()));
}

void needlemanWunsch::thread_tmp_57_7_fu_5141_p2() {
    tmp_57_7_fu_5141_p2 = (!prev_score_out_8_7_reg_25079.read().is_01() || !prev_score_out_0_op_i_7_fu_5136_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_7_reg_25079.read()) < sc_bigint<8>(prev_score_out_0_op_i_7_fu_5136_p2.read()));
}

void needlemanWunsch::thread_tmp_57_80_fu_17694_p2() {
    tmp_57_80_fu_17694_p2 = (!prev_score_out_8_80_reg_33368.read().is_01() || !prev_score_out_0_op_i_80_fu_17689_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_80_reg_33368.read()) < sc_bigint<8>(prev_score_out_0_op_i_80_fu_17689_p2.read()));
}

void needlemanWunsch::thread_tmp_57_81_fu_17867_p2() {
    tmp_57_81_fu_17867_p2 = (!prev_score_out_8_81_reg_33475.read().is_01() || !prev_score_out_0_op_i_81_fu_17862_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_81_reg_33475.read()) < sc_bigint<8>(prev_score_out_0_op_i_81_fu_17862_p2.read()));
}

void needlemanWunsch::thread_tmp_57_82_fu_18035_p2() {
    tmp_57_82_fu_18035_p2 = (!prev_score_out_8_82_reg_33579.read().is_01() || !prev_score_out_0_op_i_82_fu_18030_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_82_reg_33579.read()) < sc_bigint<8>(prev_score_out_0_op_i_82_fu_18030_p2.read()));
}

void needlemanWunsch::thread_tmp_57_83_fu_18210_p2() {
    tmp_57_83_fu_18210_p2 = (!prev_score_out_8_83_reg_33678.read().is_01() || !prev_score_out_0_op_i_83_fu_18205_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_83_reg_33678.read()) < sc_bigint<8>(prev_score_out_0_op_i_83_fu_18205_p2.read()));
}

void needlemanWunsch::thread_tmp_57_84_fu_18385_p2() {
    tmp_57_84_fu_18385_p2 = (!prev_score_out_8_84_reg_33780.read().is_01() || !prev_score_out_0_op_i_84_fu_18380_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_84_reg_33780.read()) < sc_bigint<8>(prev_score_out_0_op_i_84_fu_18380_p2.read()));
}

void needlemanWunsch::thread_tmp_57_85_fu_18560_p2() {
    tmp_57_85_fu_18560_p2 = (!prev_score_out_8_85_reg_33882.read().is_01() || !prev_score_out_0_op_i_85_fu_18555_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_85_reg_33882.read()) < sc_bigint<8>(prev_score_out_0_op_i_85_fu_18555_p2.read()));
}

void needlemanWunsch::thread_tmp_57_86_fu_18734_p2() {
    tmp_57_86_fu_18734_p2 = (!prev_score_out_8_86_reg_33984.read().is_01() || !prev_score_out_0_op_i_86_fu_18729_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_86_reg_33984.read()) < sc_bigint<8>(prev_score_out_0_op_i_86_fu_18729_p2.read()));
}

void needlemanWunsch::thread_tmp_57_87_fu_18913_p2() {
    tmp_57_87_fu_18913_p2 = (!prev_score_out_8_87_reg_34083.read().is_01() || !prev_score_out_0_op_i_87_fu_18908_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_87_reg_34083.read()) < sc_bigint<8>(prev_score_out_0_op_i_87_fu_18908_p2.read()));
}

void needlemanWunsch::thread_tmp_57_88_fu_19082_p2() {
    tmp_57_88_fu_19082_p2 = (!prev_score_out_8_88_reg_34187.read().is_01() || !prev_score_out_0_op_i_88_fu_19077_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_88_reg_34187.read()) < sc_bigint<8>(prev_score_out_0_op_i_88_fu_19077_p2.read()));
}

void needlemanWunsch::thread_tmp_57_89_fu_19257_p2() {
    tmp_57_89_fu_19257_p2 = (!prev_score_out_8_89_reg_34289.read().is_01() || !prev_score_out_0_op_i_89_fu_19252_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_89_reg_34289.read()) < sc_bigint<8>(prev_score_out_0_op_i_89_fu_19252_p2.read()));
}

void needlemanWunsch::thread_tmp_57_8_fu_5300_p2() {
    tmp_57_8_fu_5300_p2 = (!prev_score_out_8_8_reg_25188.read().is_01() || !prev_score_out_0_op_i_8_fu_5295_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_8_reg_25188.read()) < sc_bigint<8>(prev_score_out_0_op_i_8_fu_5295_p2.read()));
}

void needlemanWunsch::thread_tmp_57_90_fu_19436_p2() {
    tmp_57_90_fu_19436_p2 = (!prev_score_out_8_90_reg_34391.read().is_01() || !prev_score_out_0_op_i_90_fu_19431_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_90_reg_34391.read()) < sc_bigint<8>(prev_score_out_0_op_i_90_fu_19431_p2.read()));
}

void needlemanWunsch::thread_tmp_57_91_fu_19605_p2() {
    tmp_57_91_fu_19605_p2 = (!prev_score_out_8_91_reg_34495.read().is_01() || !prev_score_out_0_op_i_91_fu_19600_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_91_reg_34495.read()) < sc_bigint<8>(prev_score_out_0_op_i_91_fu_19600_p2.read()));
}

void needlemanWunsch::thread_tmp_57_92_fu_19780_p2() {
    tmp_57_92_fu_19780_p2 = (!prev_score_out_8_92_reg_34597.read().is_01() || !prev_score_out_0_op_i_92_fu_19775_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_92_reg_34597.read()) < sc_bigint<8>(prev_score_out_0_op_i_92_fu_19775_p2.read()));
}

void needlemanWunsch::thread_tmp_57_93_fu_19955_p2() {
    tmp_57_93_fu_19955_p2 = (!prev_score_out_8_93_reg_34699.read().is_01() || !prev_score_out_0_op_i_93_fu_19950_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_93_reg_34699.read()) < sc_bigint<8>(prev_score_out_0_op_i_93_fu_19950_p2.read()));
}

void needlemanWunsch::thread_tmp_57_94_fu_20135_p2() {
    tmp_57_94_fu_20135_p2 = (!prev_score_out_8_94_reg_34801.read().is_01() || !prev_score_out_0_op_i_94_fu_20130_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_94_reg_34801.read()) < sc_bigint<8>(prev_score_out_0_op_i_94_fu_20130_p2.read()));
}

void needlemanWunsch::thread_tmp_57_95_fu_20304_p2() {
    tmp_57_95_fu_20304_p2 = (!prev_score_out_8_95_reg_34908.read().is_01() || !prev_score_out_0_op_i_95_fu_20299_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_95_reg_34908.read()) < sc_bigint<8>(prev_score_out_0_op_i_95_fu_20299_p2.read()));
}

void needlemanWunsch::thread_tmp_57_96_fu_20484_p2() {
    tmp_57_96_fu_20484_p2 = (!prev_score_out_8_96_reg_35010.read().is_01() || !prev_score_out_0_op_i_96_fu_20479_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_96_reg_35010.read()) < sc_bigint<8>(prev_score_out_0_op_i_96_fu_20479_p2.read()));
}

void needlemanWunsch::thread_tmp_57_97_fu_20614_p2() {
    tmp_57_97_fu_20614_p2 = (!prev_score_out_8_97_reg_35136.read().is_01() || !prev_score_out_0_op_i_97_fu_20609_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_97_reg_35136.read()) < sc_bigint<8>(prev_score_out_0_op_i_97_fu_20609_p2.read()));
}

void needlemanWunsch::thread_tmp_57_98_fu_20749_p2() {
    tmp_57_98_fu_20749_p2 = (!prev_score_out_8_98_reg_35220.read().is_01() || !prev_score_out_0_op_i_98_fu_20744_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_98_reg_35220.read()) < sc_bigint<8>(prev_score_out_0_op_i_98_fu_20744_p2.read()));
}

void needlemanWunsch::thread_tmp_57_9_fu_5461_p2() {
    tmp_57_9_fu_5461_p2 = (!prev_score_out_8_9_reg_25299.read().is_01() || !prev_score_out_0_op_i_9_fu_5456_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_9_reg_25299.read()) < sc_bigint<8>(prev_score_out_0_op_i_9_fu_5456_p2.read()));
}

void needlemanWunsch::thread_tmp_57_s_fu_5622_p2() {
    tmp_57_s_fu_5622_p2 = (!prev_score_out_8_s_reg_25414.read().is_01() || !prev_score_out_0_op_i_s_fu_5617_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_s_reg_25414.read()) < sc_bigint<8>(prev_score_out_0_op_i_s_fu_5617_p2.read()));
}

void needlemanWunsch::thread_tmp_58_10_fu_5788_p2() {
    tmp_58_10_fu_5788_p2 = (!prev_score_out_8_10_reg_25535.read().is_01() || !prev_score_out_0_op_i1_11_fu_5752_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_10_reg_25535.read()) < sc_bigint<8>(prev_score_out_0_op_i1_11_fu_5752_p2.read()));
}

void needlemanWunsch::thread_tmp_58_11_fu_5947_p2() {
    tmp_58_11_fu_5947_p2 = (!prev_score_out_8_11_reg_25656.read().is_01() || !prev_score_out_0_op_i1_12_fu_5913_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_11_reg_25656.read()) < sc_bigint<8>(prev_score_out_0_op_i1_12_fu_5913_p2.read()));
}

void needlemanWunsch::thread_tmp_58_12_fu_6107_p2() {
    tmp_58_12_fu_6107_p2 = (!prev_score_out_8_12_reg_25779.read().is_01() || !prev_score_out_0_op_i1_13_fu_6071_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_12_reg_25779.read()) < sc_bigint<8>(prev_score_out_0_op_i1_13_fu_6071_p2.read()));
}

void needlemanWunsch::thread_tmp_58_13_fu_6266_p2() {
    tmp_58_13_fu_6266_p2 = (!prev_score_out_8_13_reg_25905.read().is_01() || !prev_score_out_0_op_i1_14_fu_6232_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_13_reg_25905.read()) < sc_bigint<8>(prev_score_out_0_op_i1_14_fu_6232_p2.read()));
}

void needlemanWunsch::thread_tmp_58_14_fu_6426_p2() {
    tmp_58_14_fu_6426_p2 = (!prev_score_out_8_14_reg_26028.read().is_01() || !prev_score_out_0_op_i1_15_fu_6390_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_14_reg_26028.read()) < sc_bigint<8>(prev_score_out_0_op_i1_15_fu_6390_p2.read()));
}

void needlemanWunsch::thread_tmp_58_15_fu_6585_p2() {
    tmp_58_15_fu_6585_p2 = (!prev_score_out_8_15_reg_26154.read().is_01() || !prev_score_out_0_op_i1_16_fu_6551_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_15_reg_26154.read()) < sc_bigint<8>(prev_score_out_0_op_i1_16_fu_6551_p2.read()));
}

void needlemanWunsch::thread_tmp_58_16_fu_6746_p2() {
    tmp_58_16_fu_6746_p2 = (!prev_score_out_8_16_reg_26277.read().is_01() || !prev_score_out_0_op_i1_17_fu_6710_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_16_reg_26277.read()) < sc_bigint<8>(prev_score_out_0_op_i1_17_fu_6710_p2.read()));
}

void needlemanWunsch::thread_tmp_58_17_fu_6905_p2() {
    tmp_58_17_fu_6905_p2 = (!prev_score_out_8_17_reg_26398.read().is_01() || !prev_score_out_0_op_i1_18_fu_6871_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_17_reg_26398.read()) < sc_bigint<8>(prev_score_out_0_op_i1_18_fu_6871_p2.read()));
}

void needlemanWunsch::thread_tmp_58_18_fu_7072_p2() {
    tmp_58_18_fu_7072_p2 = (!prev_score_out_8_18_reg_26515.read().is_01() || !prev_score_out_0_op_i1_19_fu_7036_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_18_reg_26515.read()) < sc_bigint<8>(prev_score_out_0_op_i1_19_fu_7036_p2.read()));
}

void needlemanWunsch::thread_tmp_58_19_fu_7244_p2() {
    tmp_58_19_fu_7244_p2 = (!prev_score_out_8_19_reg_26630.read().is_01() || !prev_score_out_0_op_i1_20_fu_7208_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_19_reg_26630.read()) < sc_bigint<8>(prev_score_out_0_op_i1_20_fu_7208_p2.read()));
}

void needlemanWunsch::thread_tmp_58_1_fu_3459_p2() {
    tmp_58_1_fu_3459_p2 = (!prev_score_out_8_1_reg_23059.read().is_01() || !prev_score_out_0_op_i1_2_fu_3415_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_1_reg_23059.read()) < sc_bigint<8>(prev_score_out_0_op_i1_2_fu_3415_p2.read()));
}

void needlemanWunsch::thread_tmp_58_20_fu_7409_p2() {
    tmp_58_20_fu_7409_p2 = (!prev_score_out_8_20_reg_26757.read().is_01() || !prev_score_out_0_op_i1_21_fu_7373_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_20_reg_26757.read()) < sc_bigint<8>(prev_score_out_0_op_i1_21_fu_7373_p2.read()));
}

void needlemanWunsch::thread_tmp_58_21_fu_7581_p2() {
    tmp_58_21_fu_7581_p2 = (!prev_score_out_8_21_reg_26877.read().is_01() || !prev_score_out_0_op_i1_22_fu_7545_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_21_reg_26877.read()) < sc_bigint<8>(prev_score_out_0_op_i1_22_fu_7545_p2.read()));
}

void needlemanWunsch::thread_tmp_58_22_fu_7747_p2() {
    tmp_58_22_fu_7747_p2 = (!prev_score_out_8_22_reg_27003.read().is_01() || !prev_score_out_0_op_i1_23_fu_7711_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_22_reg_27003.read()) < sc_bigint<8>(prev_score_out_0_op_i1_23_fu_7711_p2.read()));
}

void needlemanWunsch::thread_tmp_58_23_fu_7913_p2() {
    tmp_58_23_fu_7913_p2 = (!prev_score_out_8_23_reg_27124.read().is_01() || !prev_score_out_0_op_i1_24_fu_7877_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_23_reg_27124.read()) < sc_bigint<8>(prev_score_out_0_op_i1_24_fu_7877_p2.read()));
}

void needlemanWunsch::thread_tmp_58_24_fu_8087_p2() {
    tmp_58_24_fu_8087_p2 = (!prev_score_out_8_24_reg_27238.read().is_01() || !prev_score_out_0_op_i1_25_fu_8051_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_24_reg_27238.read()) < sc_bigint<8>(prev_score_out_0_op_i1_25_fu_8051_p2.read()));
}

void needlemanWunsch::thread_tmp_58_25_fu_8258_p2() {
    tmp_58_25_fu_8258_p2 = (!prev_score_out_8_25_reg_27357.read().is_01() || !prev_score_out_0_op_i1_26_fu_8222_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_25_reg_27357.read()) < sc_bigint<8>(prev_score_out_0_op_i1_26_fu_8222_p2.read()));
}

void needlemanWunsch::thread_tmp_58_26_fu_8421_p2() {
    tmp_58_26_fu_8421_p2 = (!prev_score_out_8_26_reg_27477.read().is_01() || !prev_score_out_0_op_i1_27_fu_8385_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_26_reg_27477.read()) < sc_bigint<8>(prev_score_out_0_op_i1_27_fu_8385_p2.read()));
}

void needlemanWunsch::thread_tmp_58_27_fu_8596_p2() {
    tmp_58_27_fu_8596_p2 = (!prev_score_out_8_27_reg_27591.read().is_01() || !prev_score_out_0_op_i1_28_fu_8560_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_27_reg_27591.read()) < sc_bigint<8>(prev_score_out_0_op_i1_28_fu_8560_p2.read()));
}

void needlemanWunsch::thread_tmp_58_28_fu_8765_p2() {
    tmp_58_28_fu_8765_p2 = (!prev_score_out_8_28_reg_27716.read().is_01() || !prev_score_out_0_op_i1_29_fu_8731_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_28_reg_27716.read()) < sc_bigint<8>(prev_score_out_0_op_i1_29_fu_8731_p2.read()));
}

void needlemanWunsch::thread_tmp_58_29_fu_8927_p2() {
    tmp_58_29_fu_8927_p2 = (!prev_score_out_8_29_reg_27832.read().is_01() || !prev_score_out_0_op_i1_30_fu_8893_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_29_reg_27832.read()) < sc_bigint<8>(prev_score_out_0_op_i1_30_fu_8893_p2.read()));
}

void needlemanWunsch::thread_tmp_58_2_fu_3621_p2() {
    tmp_58_2_fu_3621_p2 = (!prev_score_out_8_2_reg_23259.read().is_01() || !prev_score_out_0_op_i1_3_fu_3557_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_2_reg_23259.read()) < sc_bigint<8>(prev_score_out_0_op_i1_3_fu_3557_p2.read()));
}

void needlemanWunsch::thread_tmp_58_30_fu_9101_p2() {
    tmp_58_30_fu_9101_p2 = (!prev_score_out_8_30_reg_27949.read().is_01() || !prev_score_out_0_op_i1_31_fu_9067_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_30_reg_27949.read()) < sc_bigint<8>(prev_score_out_0_op_i1_31_fu_9067_p2.read()));
}

void needlemanWunsch::thread_tmp_58_31_fu_9265_p2() {
    tmp_58_31_fu_9265_p2 = (!prev_score_out_8_31_reg_28065.read().is_01() || !prev_score_out_0_op_i1_32_fu_9231_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_31_reg_28065.read()) < sc_bigint<8>(prev_score_out_0_op_i1_32_fu_9231_p2.read()));
}

void needlemanWunsch::thread_tmp_58_32_fu_9434_p2() {
    tmp_58_32_fu_9434_p2 = (!prev_score_out_8_32_reg_28182.read().is_01() || !prev_score_out_0_op_i1_33_fu_9398_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_32_reg_28182.read()) < sc_bigint<8>(prev_score_out_0_op_i1_33_fu_9398_p2.read()));
}

void needlemanWunsch::thread_tmp_58_33_fu_9608_p2() {
    tmp_58_33_fu_9608_p2 = (!prev_score_out_8_33_reg_28296.read().is_01() || !prev_score_out_0_op_i1_34_fu_9574_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_33_reg_28296.read()) < sc_bigint<8>(prev_score_out_0_op_i1_34_fu_9574_p2.read()));
}

void needlemanWunsch::thread_tmp_58_34_fu_9777_p2() {
    tmp_58_34_fu_9777_p2 = (!prev_score_out_8_34_reg_28418.read().is_01() || !prev_score_out_0_op_i1_35_fu_9743_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_34_reg_28418.read()) < sc_bigint<8>(prev_score_out_0_op_i1_35_fu_9743_p2.read()));
}

void needlemanWunsch::thread_tmp_58_35_fu_9940_p2() {
    tmp_58_35_fu_9940_p2 = (!prev_score_out_8_35_reg_28534.read().is_01() || !prev_score_out_0_op_i1_36_fu_9904_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_35_reg_28534.read()) < sc_bigint<8>(prev_score_out_0_op_i1_36_fu_9904_p2.read()));
}

void needlemanWunsch::thread_tmp_58_36_fu_10114_p2() {
    tmp_58_36_fu_10114_p2 = (!prev_score_out_8_36_reg_28659.read().is_01() || !prev_score_out_0_op_i1_37_fu_10078_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_36_reg_28659.read()) < sc_bigint<8>(prev_score_out_0_op_i1_37_fu_10078_p2.read()));
}

void needlemanWunsch::thread_tmp_58_37_fu_10280_p2() {
    tmp_58_37_fu_10280_p2 = (!prev_score_out_8_37_reg_28778.read().is_01() || !prev_score_out_0_op_i1_38_fu_10244_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_37_reg_28778.read()) < sc_bigint<8>(prev_score_out_0_op_i1_38_fu_10244_p2.read()));
}

void needlemanWunsch::thread_tmp_58_38_fu_10449_p2() {
    tmp_58_38_fu_10449_p2 = (!prev_score_out_8_38_reg_28893.read().is_01() || !prev_score_out_0_op_i1_39_fu_10413_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_38_reg_28893.read()) < sc_bigint<8>(prev_score_out_0_op_i1_39_fu_10413_p2.read()));
}

void needlemanWunsch::thread_tmp_58_39_fu_10617_p2() {
    tmp_58_39_fu_10617_p2 = (!prev_score_out_8_39_reg_29012.read().is_01() || !prev_score_out_0_op_i1_40_fu_10583_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_39_reg_29012.read()) < sc_bigint<8>(prev_score_out_0_op_i1_40_fu_10583_p2.read()));
}

void needlemanWunsch::thread_tmp_58_3_fu_3800_p2() {
    tmp_58_3_fu_3800_p2 = (!prev_score_out_8_3_reg_23472.read().is_01() || !prev_score_out_0_op_i1_4_fu_3758_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_3_reg_23472.read()) < sc_bigint<8>(prev_score_out_0_op_i1_4_fu_3758_p2.read()));
}

void needlemanWunsch::thread_tmp_58_40_fu_10787_p2() {
    tmp_58_40_fu_10787_p2 = (!prev_score_out_8_40_reg_29129.read().is_01() || !prev_score_out_0_op_i1_41_fu_10753_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_40_reg_29129.read()) < sc_bigint<8>(prev_score_out_0_op_i1_41_fu_10753_p2.read()));
}

void needlemanWunsch::thread_tmp_58_41_fu_10956_p2() {
    tmp_58_41_fu_10956_p2 = (!prev_score_out_8_41_reg_29240.read().is_01() || !prev_score_out_0_op_i1_42_fu_10920_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_41_reg_29240.read()) < sc_bigint<8>(prev_score_out_0_op_i1_42_fu_10920_p2.read()));
}

void needlemanWunsch::thread_tmp_58_42_fu_11130_p2() {
    tmp_58_42_fu_11130_p2 = (!prev_score_out_8_42_reg_29365.read().is_01() || !prev_score_out_0_op_i1_43_fu_11094_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_42_reg_29365.read()) < sc_bigint<8>(prev_score_out_0_op_i1_43_fu_11094_p2.read()));
}

void needlemanWunsch::thread_tmp_58_43_fu_11295_p2() {
    tmp_58_43_fu_11295_p2 = (!prev_score_out_8_43_reg_29484.read().is_01() || !prev_score_out_0_op_i1_44_fu_11259_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_43_reg_29484.read()) < sc_bigint<8>(prev_score_out_0_op_i1_44_fu_11259_p2.read()));
}

void needlemanWunsch::thread_tmp_58_44_fu_11463_p2() {
    tmp_58_44_fu_11463_p2 = (!prev_score_out_8_44_reg_29604.read().is_01() || !prev_score_out_0_op_i1_45_fu_11429_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_44_reg_29604.read()) < sc_bigint<8>(prev_score_out_0_op_i1_45_fu_11429_p2.read()));
}

void needlemanWunsch::thread_tmp_58_45_fu_11633_p2() {
    tmp_58_45_fu_11633_p2 = (!prev_score_out_8_45_reg_29715.read().is_01() || !prev_score_out_0_op_i1_46_fu_11597_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_45_reg_29715.read()) < sc_bigint<8>(prev_score_out_0_op_i1_46_fu_11597_p2.read()));
}

void needlemanWunsch::thread_tmp_58_46_fu_11810_p2() {
    tmp_58_46_fu_11810_p2 = (!prev_score_out_8_46_reg_29835.read().is_01() || !prev_score_out_0_op_i1_47_fu_11774_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_46_reg_29835.read()) < sc_bigint<8>(prev_score_out_0_op_i1_47_fu_11774_p2.read()));
}

void needlemanWunsch::thread_tmp_58_47_fu_11973_p2() {
    tmp_58_47_fu_11973_p2 = (!prev_score_out_8_47_reg_29949.read().is_01() || !prev_score_out_0_op_i1_48_fu_11937_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_47_reg_29949.read()) < sc_bigint<8>(prev_score_out_0_op_i1_48_fu_11937_p2.read()));
}

void needlemanWunsch::thread_tmp_58_48_fu_12144_p2() {
    tmp_58_48_fu_12144_p2 = (!prev_score_out_8_48_reg_30069.read().is_01() || !prev_score_out_0_op_i1_49_fu_12108_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_48_reg_30069.read()) < sc_bigint<8>(prev_score_out_0_op_i1_49_fu_12108_p2.read()));
}

void needlemanWunsch::thread_tmp_58_49_fu_12317_p2() {
    tmp_58_49_fu_12317_p2 = (!prev_score_out_8_49_reg_30176.read().is_01() || !prev_score_out_0_op_i1_50_fu_12283_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_49_reg_30176.read()) < sc_bigint<8>(prev_score_out_0_op_i1_50_fu_12283_p2.read()));
}

void needlemanWunsch::thread_tmp_58_4_fu_3997_p2() {
    tmp_58_4_fu_3997_p2 = (!prev_score_out_8_4_reg_23705.read().is_01() || !prev_score_out_0_op_i1_5_fu_3942_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_4_reg_23705.read()) < sc_bigint<8>(prev_score_out_0_op_i1_5_fu_3942_p2.read()));
}

void needlemanWunsch::thread_tmp_58_50_fu_12483_p2() {
    tmp_58_50_fu_12483_p2 = (!prev_score_out_8_50_reg_30292.read().is_01() || !prev_score_out_0_op_i1_51_fu_12447_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_50_reg_30292.read()) < sc_bigint<8>(prev_score_out_0_op_i1_51_fu_12447_p2.read()));
}

void needlemanWunsch::thread_tmp_58_51_fu_12663_p2() {
    tmp_58_51_fu_12663_p2 = (!prev_score_out_8_51_reg_30394.read().is_01() || !prev_score_out_0_op_i1_52_fu_12627_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_51_reg_30394.read()) < sc_bigint<8>(prev_score_out_0_op_i1_52_fu_12627_p2.read()));
}

void needlemanWunsch::thread_tmp_58_52_fu_12832_p2() {
    tmp_58_52_fu_12832_p2 = (!prev_score_out_8_52_reg_30501.read().is_01() || !prev_score_out_0_op_i1_53_fu_12796_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_52_reg_30501.read()) < sc_bigint<8>(prev_score_out_0_op_i1_53_fu_12796_p2.read()));
}

void needlemanWunsch::thread_tmp_58_53_fu_12996_p2() {
    tmp_58_53_fu_12996_p2 = (!prev_score_out_8_53_reg_30603.read().is_01() || !prev_score_out_0_op_i1_54_fu_12962_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_53_reg_30603.read()) < sc_bigint<8>(prev_score_out_0_op_i1_54_fu_12962_p2.read()));
}

void needlemanWunsch::thread_tmp_58_54_fu_13162_p2() {
    tmp_58_54_fu_13162_p2 = (!prev_score_out_8_54_reg_30707.read().is_01() || !prev_score_out_0_op_i1_55_fu_13126_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_54_reg_30707.read()) < sc_bigint<8>(prev_score_out_0_op_i1_55_fu_13126_p2.read()));
}

void needlemanWunsch::thread_tmp_58_55_fu_13337_p2() {
    tmp_58_55_fu_13337_p2 = (!prev_score_out_8_55_reg_30804.read().is_01() || !prev_score_out_0_op_i1_56_fu_13301_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_55_reg_30804.read()) < sc_bigint<8>(prev_score_out_0_op_i1_56_fu_13301_p2.read()));
}

void needlemanWunsch::thread_tmp_58_56_fu_13517_p2() {
    tmp_58_56_fu_13517_p2 = (!prev_score_out_8_56_reg_30906.read().is_01() || !prev_score_out_0_op_i1_57_fu_13481_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_56_reg_30906.read()) < sc_bigint<8>(prev_score_out_0_op_i1_57_fu_13481_p2.read()));
}

void needlemanWunsch::thread_tmp_58_57_fu_13688_p2() {
    tmp_58_57_fu_13688_p2 = (!prev_score_out_8_57_reg_31013.read().is_01() || !prev_score_out_0_op_i1_58_fu_13652_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_57_reg_31013.read()) < sc_bigint<8>(prev_score_out_0_op_i1_58_fu_13652_p2.read()));
}

void needlemanWunsch::thread_tmp_58_58_fu_13862_p2() {
    tmp_58_58_fu_13862_p2 = (!prev_score_out_8_58_reg_31115.read().is_01() || !prev_score_out_0_op_i1_59_fu_13826_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_58_reg_31115.read()) < sc_bigint<8>(prev_score_out_0_op_i1_59_fu_13826_p2.read()));
}

void needlemanWunsch::thread_tmp_58_59_fu_14036_p2() {
    tmp_58_59_fu_14036_p2 = (!prev_score_out_8_59_reg_31222.read().is_01() || !prev_score_out_0_op_i1_60_fu_14000_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_59_reg_31222.read()) < sc_bigint<8>(prev_score_out_0_op_i1_60_fu_14000_p2.read()));
}

void needlemanWunsch::thread_tmp_58_5_fu_4824_p2() {
    tmp_58_5_fu_4824_p2 = (!prev_score_out_8_5_reg_23945.read().is_01() || !prev_score_out_0_op_i1_6_fu_4777_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_5_reg_23945.read()) < sc_bigint<8>(prev_score_out_0_op_i1_6_fu_4777_p2.read()));
}

void needlemanWunsch::thread_tmp_58_60_fu_14204_p2() {
    tmp_58_60_fu_14204_p2 = (!prev_score_out_8_60_reg_31329.read().is_01() || !prev_score_out_0_op_i1_61_fu_14170_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_60_reg_31329.read()) < sc_bigint<8>(prev_score_out_0_op_i1_61_fu_14170_p2.read()));
}

void needlemanWunsch::thread_tmp_58_61_fu_14379_p2() {
    tmp_58_61_fu_14379_p2 = (!prev_score_out_8_61_reg_31428.read().is_01() || !prev_score_out_0_op_i1_62_fu_14343_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_61_reg_31428.read()) < sc_bigint<8>(prev_score_out_0_op_i1_62_fu_14343_p2.read()));
}

void needlemanWunsch::thread_tmp_58_62_fu_14553_p2() {
    tmp_58_62_fu_14553_p2 = (!prev_score_out_8_62_reg_31530.read().is_01() || !prev_score_out_0_op_i1_63_fu_14519_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_62_reg_31530.read()) < sc_bigint<8>(prev_score_out_0_op_i1_63_fu_14519_p2.read()));
}

void needlemanWunsch::thread_tmp_58_63_fu_14728_p2() {
    tmp_58_63_fu_14728_p2 = (!prev_score_out_8_63_reg_31629.read().is_01() || !prev_score_out_0_op_i1_64_fu_14692_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_63_reg_31629.read()) < sc_bigint<8>(prev_score_out_0_op_i1_64_fu_14692_p2.read()));
}

void needlemanWunsch::thread_tmp_58_64_fu_14903_p2() {
    tmp_58_64_fu_14903_p2 = (!prev_score_out_8_64_reg_31731.read().is_01() || !prev_score_out_0_op_i1_65_fu_14867_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_64_reg_31731.read()) < sc_bigint<8>(prev_score_out_0_op_i1_65_fu_14867_p2.read()));
}

void needlemanWunsch::thread_tmp_58_65_fu_15078_p2() {
    tmp_58_65_fu_15078_p2 = (!prev_score_out_8_65_reg_31833.read().is_01() || !prev_score_out_0_op_i1_66_fu_15042_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_65_reg_31833.read()) < sc_bigint<8>(prev_score_out_0_op_i1_66_fu_15042_p2.read()));
}

void needlemanWunsch::thread_tmp_58_66_fu_15253_p2() {
    tmp_58_66_fu_15253_p2 = (!prev_score_out_8_66_reg_31935.read().is_01() || !prev_score_out_0_op_i1_67_fu_15217_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_66_reg_31935.read()) < sc_bigint<8>(prev_score_out_0_op_i1_67_fu_15217_p2.read()));
}

void needlemanWunsch::thread_tmp_58_67_fu_15428_p2() {
    tmp_58_67_fu_15428_p2 = (!prev_score_out_8_67_reg_32037.read().is_01() || !prev_score_out_0_op_i1_68_fu_15392_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_67_reg_32037.read()) < sc_bigint<8>(prev_score_out_0_op_i1_68_fu_15392_p2.read()));
}

void needlemanWunsch::thread_tmp_58_68_fu_15603_p2() {
    tmp_58_68_fu_15603_p2 = (!prev_score_out_8_68_reg_32139.read().is_01() || !prev_score_out_0_op_i1_69_fu_15567_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_68_reg_32139.read()) < sc_bigint<8>(prev_score_out_0_op_i1_69_fu_15567_p2.read()));
}

void needlemanWunsch::thread_tmp_58_69_fu_15778_p2() {
    tmp_58_69_fu_15778_p2 = (!prev_score_out_8_69_reg_32241.read().is_01() || !prev_score_out_0_op_i1_70_fu_15742_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_69_reg_32241.read()) < sc_bigint<8>(prev_score_out_0_op_i1_70_fu_15742_p2.read()));
}

void needlemanWunsch::thread_tmp_58_6_fu_4985_p2() {
    tmp_58_6_fu_4985_p2 = (!prev_score_out_8_6_reg_24970.read().is_01() || !prev_score_out_0_op_i1_7_fu_4949_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_6_reg_24970.read()) < sc_bigint<8>(prev_score_out_0_op_i1_7_fu_4949_p2.read()));
}

void needlemanWunsch::thread_tmp_58_70_fu_15953_p2() {
    tmp_58_70_fu_15953_p2 = (!prev_score_out_8_70_reg_32343.read().is_01() || !prev_score_out_0_op_i1_71_fu_15917_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_70_reg_32343.read()) < sc_bigint<8>(prev_score_out_0_op_i1_71_fu_15917_p2.read()));
}

void needlemanWunsch::thread_tmp_58_71_fu_16127_p2() {
    tmp_58_71_fu_16127_p2 = (!prev_score_out_8_71_reg_32445.read().is_01() || !prev_score_out_0_op_i1_72_fu_16093_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_71_reg_32445.read()) < sc_bigint<8>(prev_score_out_0_op_i1_72_fu_16093_p2.read()));
}

void needlemanWunsch::thread_tmp_58_72_fu_16301_p2() {
    tmp_58_72_fu_16301_p2 = (!prev_score_out_8_72_reg_32544.read().is_01() || !prev_score_out_0_op_i1_73_fu_16267_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_72_reg_32544.read()) < sc_bigint<8>(prev_score_out_0_op_i1_73_fu_16267_p2.read()));
}

void needlemanWunsch::thread_tmp_58_73_fu_16476_p2() {
    tmp_58_73_fu_16476_p2 = (!prev_score_out_8_73_reg_32643.read().is_01() || !prev_score_out_0_op_i1_74_fu_16440_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_73_reg_32643.read()) < sc_bigint<8>(prev_score_out_0_op_i1_74_fu_16440_p2.read()));
}

void needlemanWunsch::thread_tmp_58_74_fu_16651_p2() {
    tmp_58_74_fu_16651_p2 = (!prev_score_out_8_74_reg_32745.read().is_01() || !prev_score_out_0_op_i1_75_fu_16615_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_74_reg_32745.read()) < sc_bigint<8>(prev_score_out_0_op_i1_75_fu_16615_p2.read()));
}

void needlemanWunsch::thread_tmp_58_75_fu_16830_p2() {
    tmp_58_75_fu_16830_p2 = (!prev_score_out_8_75_reg_32847.read().is_01() || !prev_score_out_0_op_i1_76_fu_16796_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_75_reg_32847.read()) < sc_bigint<8>(prev_score_out_0_op_i1_76_fu_16796_p2.read()));
}

void needlemanWunsch::thread_tmp_58_76_fu_17003_p2() {
    tmp_58_76_fu_17003_p2 = (!prev_score_out_8_76_reg_32951.read().is_01() || !prev_score_out_0_op_i1_77_fu_16969_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_76_reg_32951.read()) < sc_bigint<8>(prev_score_out_0_op_i1_77_fu_16969_p2.read()));
}

void needlemanWunsch::thread_tmp_58_77_fu_17172_p2() {
    tmp_58_77_fu_17172_p2 = (!prev_score_out_8_77_reg_33055.read().is_01() || !prev_score_out_0_op_i1_78_fu_17136_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_77_reg_33055.read()) < sc_bigint<8>(prev_score_out_0_op_i1_78_fu_17136_p2.read()));
}

void needlemanWunsch::thread_tmp_58_78_fu_17352_p2() {
    tmp_58_78_fu_17352_p2 = (!prev_score_out_8_78_reg_33157.read().is_01() || !prev_score_out_0_op_i1_79_fu_17316_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_78_reg_33157.read()) < sc_bigint<8>(prev_score_out_0_op_i1_79_fu_17316_p2.read()));
}

void needlemanWunsch::thread_tmp_58_79_fu_17525_p2() {
    tmp_58_79_fu_17525_p2 = (!prev_score_out_8_79_reg_33264.read().is_01() || !prev_score_out_0_op_i1_80_fu_17491_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_79_reg_33264.read()) < sc_bigint<8>(prev_score_out_0_op_i1_80_fu_17491_p2.read()));
}

void needlemanWunsch::thread_tmp_58_7_fu_5146_p2() {
    tmp_58_7_fu_5146_p2 = (!prev_score_out_8_7_reg_25079.read().is_01() || !prev_score_out_0_op_i1_8_fu_5110_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_7_reg_25079.read()) < sc_bigint<8>(prev_score_out_0_op_i1_8_fu_5110_p2.read()));
}

void needlemanWunsch::thread_tmp_58_80_fu_17699_p2() {
    tmp_58_80_fu_17699_p2 = (!prev_score_out_8_80_reg_33368.read().is_01() || !prev_score_out_0_op_i1_81_fu_17663_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_80_reg_33368.read()) < sc_bigint<8>(prev_score_out_0_op_i1_81_fu_17663_p2.read()));
}

void needlemanWunsch::thread_tmp_58_81_fu_17872_p2() {
    tmp_58_81_fu_17872_p2 = (!prev_score_out_8_81_reg_33475.read().is_01() || !prev_score_out_0_op_i1_82_fu_17838_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_81_reg_33475.read()) < sc_bigint<8>(prev_score_out_0_op_i1_82_fu_17838_p2.read()));
}

void needlemanWunsch::thread_tmp_58_82_fu_18040_p2() {
    tmp_58_82_fu_18040_p2 = (!prev_score_out_8_82_reg_33579.read().is_01() || !prev_score_out_0_op_i1_83_fu_18006_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_82_reg_33579.read()) < sc_bigint<8>(prev_score_out_0_op_i1_83_fu_18006_p2.read()));
}

void needlemanWunsch::thread_tmp_58_83_fu_18215_p2() {
    tmp_58_83_fu_18215_p2 = (!prev_score_out_8_83_reg_33678.read().is_01() || !prev_score_out_0_op_i1_84_fu_18179_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_83_reg_33678.read()) < sc_bigint<8>(prev_score_out_0_op_i1_84_fu_18179_p2.read()));
}

void needlemanWunsch::thread_tmp_58_84_fu_18390_p2() {
    tmp_58_84_fu_18390_p2 = (!prev_score_out_8_84_reg_33780.read().is_01() || !prev_score_out_0_op_i1_85_fu_18354_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_84_reg_33780.read()) < sc_bigint<8>(prev_score_out_0_op_i1_85_fu_18354_p2.read()));
}

void needlemanWunsch::thread_tmp_58_85_fu_18565_p2() {
    tmp_58_85_fu_18565_p2 = (!prev_score_out_8_85_reg_33882.read().is_01() || !prev_score_out_0_op_i1_86_fu_18529_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_85_reg_33882.read()) < sc_bigint<8>(prev_score_out_0_op_i1_86_fu_18529_p2.read()));
}

void needlemanWunsch::thread_tmp_58_86_fu_18739_p2() {
    tmp_58_86_fu_18739_p2 = (!prev_score_out_8_86_reg_33984.read().is_01() || !prev_score_out_0_op_i1_87_fu_18705_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_86_reg_33984.read()) < sc_bigint<8>(prev_score_out_0_op_i1_87_fu_18705_p2.read()));
}

void needlemanWunsch::thread_tmp_58_87_fu_18918_p2() {
    tmp_58_87_fu_18918_p2 = (!prev_score_out_8_87_reg_34083.read().is_01() || !prev_score_out_0_op_i1_88_fu_18884_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_87_reg_34083.read()) < sc_bigint<8>(prev_score_out_0_op_i1_88_fu_18884_p2.read()));
}

void needlemanWunsch::thread_tmp_58_88_fu_19087_p2() {
    tmp_58_88_fu_19087_p2 = (!prev_score_out_8_88_reg_34187.read().is_01() || !prev_score_out_0_op_i1_89_fu_19051_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_88_reg_34187.read()) < sc_bigint<8>(prev_score_out_0_op_i1_89_fu_19051_p2.read()));
}

void needlemanWunsch::thread_tmp_58_89_fu_19262_p2() {
    tmp_58_89_fu_19262_p2 = (!prev_score_out_8_89_reg_34289.read().is_01() || !prev_score_out_0_op_i1_90_fu_19226_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_89_reg_34289.read()) < sc_bigint<8>(prev_score_out_0_op_i1_90_fu_19226_p2.read()));
}

void needlemanWunsch::thread_tmp_58_8_fu_5305_p2() {
    tmp_58_8_fu_5305_p2 = (!prev_score_out_8_8_reg_25188.read().is_01() || !prev_score_out_0_op_i1_9_fu_5271_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_8_reg_25188.read()) < sc_bigint<8>(prev_score_out_0_op_i1_9_fu_5271_p2.read()));
}

void needlemanWunsch::thread_tmp_58_90_fu_19441_p2() {
    tmp_58_90_fu_19441_p2 = (!prev_score_out_8_90_reg_34391.read().is_01() || !prev_score_out_0_op_i1_91_fu_19407_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_90_reg_34391.read()) < sc_bigint<8>(prev_score_out_0_op_i1_91_fu_19407_p2.read()));
}

void needlemanWunsch::thread_tmp_58_91_fu_19610_p2() {
    tmp_58_91_fu_19610_p2 = (!prev_score_out_8_91_reg_34495.read().is_01() || !prev_score_out_0_op_i1_92_fu_19574_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_91_reg_34495.read()) < sc_bigint<8>(prev_score_out_0_op_i1_92_fu_19574_p2.read()));
}

void needlemanWunsch::thread_tmp_58_92_fu_19785_p2() {
    tmp_58_92_fu_19785_p2 = (!prev_score_out_8_92_reg_34597.read().is_01() || !prev_score_out_0_op_i1_93_fu_19749_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_92_reg_34597.read()) < sc_bigint<8>(prev_score_out_0_op_i1_93_fu_19749_p2.read()));
}

void needlemanWunsch::thread_tmp_58_93_fu_19960_p2() {
    tmp_58_93_fu_19960_p2 = (!prev_score_out_8_93_reg_34699.read().is_01() || !prev_score_out_0_op_i1_94_fu_19924_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_93_reg_34699.read()) < sc_bigint<8>(prev_score_out_0_op_i1_94_fu_19924_p2.read()));
}

void needlemanWunsch::thread_tmp_58_94_fu_20140_p2() {
    tmp_58_94_fu_20140_p2 = (!prev_score_out_8_94_reg_34801.read().is_01() || !prev_score_out_0_op_i1_95_fu_20104_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_94_reg_34801.read()) < sc_bigint<8>(prev_score_out_0_op_i1_95_fu_20104_p2.read()));
}

void needlemanWunsch::thread_tmp_58_95_fu_20309_p2() {
    tmp_58_95_fu_20309_p2 = (!prev_score_out_8_95_reg_34908.read().is_01() || !prev_score_out_0_op_i1_96_fu_20273_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_95_reg_34908.read()) < sc_bigint<8>(prev_score_out_0_op_i1_96_fu_20273_p2.read()));
}

void needlemanWunsch::thread_tmp_58_96_fu_20489_p2() {
    tmp_58_96_fu_20489_p2 = (!prev_score_out_8_96_reg_35010.read().is_01() || !prev_score_out_0_op_i1_97_fu_20455_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_96_reg_35010.read()) < sc_bigint<8>(prev_score_out_0_op_i1_97_fu_20455_p2.read()));
}

void needlemanWunsch::thread_tmp_58_97_fu_20619_p2() {
    tmp_58_97_fu_20619_p2 = (!prev_score_out_8_97_reg_35136.read().is_01() || !prev_score_out_0_op_i1_98_fu_20585_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_97_reg_35136.read()) < sc_bigint<8>(prev_score_out_0_op_i1_98_fu_20585_p2.read()));
}

void needlemanWunsch::thread_tmp_58_98_fu_20754_p2() {
    tmp_58_98_fu_20754_p2 = (!prev_score_out_8_98_reg_35220.read().is_01() || !phitmp100_fu_20739_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_98_reg_35220.read()) < sc_bigint<8>(phitmp100_fu_20739_p2.read()));
}

void needlemanWunsch::thread_tmp_58_9_fu_5466_p2() {
    tmp_58_9_fu_5466_p2 = (!prev_score_out_8_9_reg_25299.read().is_01() || !prev_score_out_0_op_i1_s_fu_5430_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_9_reg_25299.read()) < sc_bigint<8>(prev_score_out_0_op_i1_s_fu_5430_p2.read()));
}

void needlemanWunsch::thread_tmp_58_s_fu_5627_p2() {
    tmp_58_s_fu_5627_p2 = (!prev_score_out_8_s_reg_25414.read().is_01() || !prev_score_out_0_op_i1_10_fu_5591_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_8_s_reg_25414.read()) < sc_bigint<8>(prev_score_out_0_op_i1_10_fu_5591_p2.read()));
}

void needlemanWunsch::thread_tmp_59_10_fu_5793_p2() {
    tmp_59_10_fu_5793_p2 = (!prev_score_out_0_op_i_10_fu_5778_p2.read().is_01() || !prev_score_out_8_10_reg_25535.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_10_fu_5778_p2.read()) < sc_bigint<8>(prev_score_out_8_10_reg_25535.read()));
}

void needlemanWunsch::thread_tmp_59_11_fu_5952_p2() {
    tmp_59_11_fu_5952_p2 = (!prev_score_out_0_op_i_11_fu_5937_p2.read().is_01() || !prev_score_out_8_11_reg_25656.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_11_fu_5937_p2.read()) < sc_bigint<8>(prev_score_out_8_11_reg_25656.read()));
}

void needlemanWunsch::thread_tmp_59_12_fu_6112_p2() {
    tmp_59_12_fu_6112_p2 = (!prev_score_out_0_op_i_12_fu_6097_p2.read().is_01() || !prev_score_out_8_12_reg_25779.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_12_fu_6097_p2.read()) < sc_bigint<8>(prev_score_out_8_12_reg_25779.read()));
}

void needlemanWunsch::thread_tmp_59_13_fu_6271_p2() {
    tmp_59_13_fu_6271_p2 = (!prev_score_out_0_op_i_13_fu_6256_p2.read().is_01() || !prev_score_out_8_13_reg_25905.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_13_fu_6256_p2.read()) < sc_bigint<8>(prev_score_out_8_13_reg_25905.read()));
}

void needlemanWunsch::thread_tmp_59_14_fu_6431_p2() {
    tmp_59_14_fu_6431_p2 = (!prev_score_out_0_op_i_14_fu_6416_p2.read().is_01() || !prev_score_out_8_14_reg_26028.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_14_fu_6416_p2.read()) < sc_bigint<8>(prev_score_out_8_14_reg_26028.read()));
}

void needlemanWunsch::thread_tmp_59_15_fu_6590_p2() {
    tmp_59_15_fu_6590_p2 = (!prev_score_out_0_op_i_15_fu_6575_p2.read().is_01() || !prev_score_out_8_15_reg_26154.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_15_fu_6575_p2.read()) < sc_bigint<8>(prev_score_out_8_15_reg_26154.read()));
}

void needlemanWunsch::thread_tmp_59_16_fu_6751_p2() {
    tmp_59_16_fu_6751_p2 = (!prev_score_out_0_op_i_16_fu_6736_p2.read().is_01() || !prev_score_out_8_16_reg_26277.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_16_fu_6736_p2.read()) < sc_bigint<8>(prev_score_out_8_16_reg_26277.read()));
}

void needlemanWunsch::thread_tmp_59_17_fu_6910_p2() {
    tmp_59_17_fu_6910_p2 = (!prev_score_out_0_op_i_17_fu_6895_p2.read().is_01() || !prev_score_out_8_17_reg_26398.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_17_fu_6895_p2.read()) < sc_bigint<8>(prev_score_out_8_17_reg_26398.read()));
}

void needlemanWunsch::thread_tmp_59_18_fu_7077_p2() {
    tmp_59_18_fu_7077_p2 = (!prev_score_out_0_op_i_18_fu_7062_p2.read().is_01() || !prev_score_out_8_18_reg_26515.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_18_fu_7062_p2.read()) < sc_bigint<8>(prev_score_out_8_18_reg_26515.read()));
}

void needlemanWunsch::thread_tmp_59_19_fu_7249_p2() {
    tmp_59_19_fu_7249_p2 = (!prev_score_out_0_op_i_19_fu_7234_p2.read().is_01() || !prev_score_out_8_19_reg_26630.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_19_fu_7234_p2.read()) < sc_bigint<8>(prev_score_out_8_19_reg_26630.read()));
}

void needlemanWunsch::thread_tmp_59_1_fu_3464_p2() {
    tmp_59_1_fu_3464_p2 = (!prev_score_out_0_op_i_1_fu_3449_p2.read().is_01() || !prev_score_out_8_1_reg_23059.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_1_fu_3449_p2.read()) < sc_bigint<8>(prev_score_out_8_1_reg_23059.read()));
}

void needlemanWunsch::thread_tmp_59_20_fu_7414_p2() {
    tmp_59_20_fu_7414_p2 = (!prev_score_out_0_op_i_20_fu_7399_p2.read().is_01() || !prev_score_out_8_20_reg_26757.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_20_fu_7399_p2.read()) < sc_bigint<8>(prev_score_out_8_20_reg_26757.read()));
}

void needlemanWunsch::thread_tmp_59_21_fu_7586_p2() {
    tmp_59_21_fu_7586_p2 = (!prev_score_out_0_op_i_21_fu_7571_p2.read().is_01() || !prev_score_out_8_21_reg_26877.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_21_fu_7571_p2.read()) < sc_bigint<8>(prev_score_out_8_21_reg_26877.read()));
}

void needlemanWunsch::thread_tmp_59_22_fu_7752_p2() {
    tmp_59_22_fu_7752_p2 = (!prev_score_out_0_op_i_22_fu_7737_p2.read().is_01() || !prev_score_out_8_22_reg_27003.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_22_fu_7737_p2.read()) < sc_bigint<8>(prev_score_out_8_22_reg_27003.read()));
}

void needlemanWunsch::thread_tmp_59_23_fu_7918_p2() {
    tmp_59_23_fu_7918_p2 = (!prev_score_out_0_op_i_23_fu_7903_p2.read().is_01() || !prev_score_out_8_23_reg_27124.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_23_fu_7903_p2.read()) < sc_bigint<8>(prev_score_out_8_23_reg_27124.read()));
}

void needlemanWunsch::thread_tmp_59_24_fu_8092_p2() {
    tmp_59_24_fu_8092_p2 = (!prev_score_out_0_op_i_24_fu_8077_p2.read().is_01() || !prev_score_out_8_24_reg_27238.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_24_fu_8077_p2.read()) < sc_bigint<8>(prev_score_out_8_24_reg_27238.read()));
}

void needlemanWunsch::thread_tmp_59_25_fu_8263_p2() {
    tmp_59_25_fu_8263_p2 = (!prev_score_out_0_op_i_25_fu_8248_p2.read().is_01() || !prev_score_out_8_25_reg_27357.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_25_fu_8248_p2.read()) < sc_bigint<8>(prev_score_out_8_25_reg_27357.read()));
}

void needlemanWunsch::thread_tmp_59_26_fu_8426_p2() {
    tmp_59_26_fu_8426_p2 = (!prev_score_out_0_op_i_26_fu_8411_p2.read().is_01() || !prev_score_out_8_26_reg_27477.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_26_fu_8411_p2.read()) < sc_bigint<8>(prev_score_out_8_26_reg_27477.read()));
}

void needlemanWunsch::thread_tmp_59_27_fu_8601_p2() {
    tmp_59_27_fu_8601_p2 = (!prev_score_out_0_op_i_27_fu_8586_p2.read().is_01() || !prev_score_out_8_27_reg_27591.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_27_fu_8586_p2.read()) < sc_bigint<8>(prev_score_out_8_27_reg_27591.read()));
}

void needlemanWunsch::thread_tmp_59_28_fu_8770_p2() {
    tmp_59_28_fu_8770_p2 = (!prev_score_out_0_op_i_28_fu_8755_p2.read().is_01() || !prev_score_out_8_28_reg_27716.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_28_fu_8755_p2.read()) < sc_bigint<8>(prev_score_out_8_28_reg_27716.read()));
}

void needlemanWunsch::thread_tmp_59_29_fu_8932_p2() {
    tmp_59_29_fu_8932_p2 = (!prev_score_out_0_op_i_29_fu_8917_p2.read().is_01() || !prev_score_out_8_29_reg_27832.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_29_fu_8917_p2.read()) < sc_bigint<8>(prev_score_out_8_29_reg_27832.read()));
}

void needlemanWunsch::thread_tmp_59_2_fu_3626_p2() {
    tmp_59_2_fu_3626_p2 = (!prev_score_out_0_op_i_2_fu_3611_p2.read().is_01() || !prev_score_out_8_2_reg_23259.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_2_fu_3611_p2.read()) < sc_bigint<8>(prev_score_out_8_2_reg_23259.read()));
}

void needlemanWunsch::thread_tmp_59_30_fu_9106_p2() {
    tmp_59_30_fu_9106_p2 = (!prev_score_out_0_op_i_30_fu_9091_p2.read().is_01() || !prev_score_out_8_30_reg_27949.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_30_fu_9091_p2.read()) < sc_bigint<8>(prev_score_out_8_30_reg_27949.read()));
}

void needlemanWunsch::thread_tmp_59_31_fu_9270_p2() {
    tmp_59_31_fu_9270_p2 = (!prev_score_out_0_op_i_31_fu_9255_p2.read().is_01() || !prev_score_out_8_31_reg_28065.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_31_fu_9255_p2.read()) < sc_bigint<8>(prev_score_out_8_31_reg_28065.read()));
}

void needlemanWunsch::thread_tmp_59_32_fu_9439_p2() {
    tmp_59_32_fu_9439_p2 = (!prev_score_out_0_op_i_32_fu_9424_p2.read().is_01() || !prev_score_out_8_32_reg_28182.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_32_fu_9424_p2.read()) < sc_bigint<8>(prev_score_out_8_32_reg_28182.read()));
}

void needlemanWunsch::thread_tmp_59_33_fu_9613_p2() {
    tmp_59_33_fu_9613_p2 = (!prev_score_out_0_op_i_33_fu_9598_p2.read().is_01() || !prev_score_out_8_33_reg_28296.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_33_fu_9598_p2.read()) < sc_bigint<8>(prev_score_out_8_33_reg_28296.read()));
}

void needlemanWunsch::thread_tmp_59_34_fu_9782_p2() {
    tmp_59_34_fu_9782_p2 = (!prev_score_out_0_op_i_34_fu_9767_p2.read().is_01() || !prev_score_out_8_34_reg_28418.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_34_fu_9767_p2.read()) < sc_bigint<8>(prev_score_out_8_34_reg_28418.read()));
}

void needlemanWunsch::thread_tmp_59_35_fu_9945_p2() {
    tmp_59_35_fu_9945_p2 = (!prev_score_out_0_op_i_35_fu_9930_p2.read().is_01() || !prev_score_out_8_35_reg_28534.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_35_fu_9930_p2.read()) < sc_bigint<8>(prev_score_out_8_35_reg_28534.read()));
}

void needlemanWunsch::thread_tmp_59_36_fu_10119_p2() {
    tmp_59_36_fu_10119_p2 = (!prev_score_out_0_op_i_36_fu_10104_p2.read().is_01() || !prev_score_out_8_36_reg_28659.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_36_fu_10104_p2.read()) < sc_bigint<8>(prev_score_out_8_36_reg_28659.read()));
}

void needlemanWunsch::thread_tmp_59_37_fu_10285_p2() {
    tmp_59_37_fu_10285_p2 = (!prev_score_out_0_op_i_37_fu_10270_p2.read().is_01() || !prev_score_out_8_37_reg_28778.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_37_fu_10270_p2.read()) < sc_bigint<8>(prev_score_out_8_37_reg_28778.read()));
}

void needlemanWunsch::thread_tmp_59_38_fu_10454_p2() {
    tmp_59_38_fu_10454_p2 = (!prev_score_out_0_op_i_38_fu_10439_p2.read().is_01() || !prev_score_out_8_38_reg_28893.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_38_fu_10439_p2.read()) < sc_bigint<8>(prev_score_out_8_38_reg_28893.read()));
}

void needlemanWunsch::thread_tmp_59_39_fu_10622_p2() {
    tmp_59_39_fu_10622_p2 = (!prev_score_out_0_op_i_39_fu_10607_p2.read().is_01() || !prev_score_out_8_39_reg_29012.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_39_fu_10607_p2.read()) < sc_bigint<8>(prev_score_out_8_39_reg_29012.read()));
}

void needlemanWunsch::thread_tmp_59_3_fu_3805_p2() {
    tmp_59_3_fu_3805_p2 = (!prev_score_out_0_op_i_3_fu_3790_p2.read().is_01() || !prev_score_out_8_3_reg_23472.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_3_fu_3790_p2.read()) < sc_bigint<8>(prev_score_out_8_3_reg_23472.read()));
}

void needlemanWunsch::thread_tmp_59_40_fu_10792_p2() {
    tmp_59_40_fu_10792_p2 = (!prev_score_out_0_op_i_40_fu_10777_p2.read().is_01() || !prev_score_out_8_40_reg_29129.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_40_fu_10777_p2.read()) < sc_bigint<8>(prev_score_out_8_40_reg_29129.read()));
}

void needlemanWunsch::thread_tmp_59_41_fu_10961_p2() {
    tmp_59_41_fu_10961_p2 = (!prev_score_out_0_op_i_41_fu_10946_p2.read().is_01() || !prev_score_out_8_41_reg_29240.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_41_fu_10946_p2.read()) < sc_bigint<8>(prev_score_out_8_41_reg_29240.read()));
}

void needlemanWunsch::thread_tmp_59_42_fu_11135_p2() {
    tmp_59_42_fu_11135_p2 = (!prev_score_out_0_op_i_42_fu_11120_p2.read().is_01() || !prev_score_out_8_42_reg_29365.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_42_fu_11120_p2.read()) < sc_bigint<8>(prev_score_out_8_42_reg_29365.read()));
}

void needlemanWunsch::thread_tmp_59_43_fu_11300_p2() {
    tmp_59_43_fu_11300_p2 = (!prev_score_out_0_op_i_43_fu_11285_p2.read().is_01() || !prev_score_out_8_43_reg_29484.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_43_fu_11285_p2.read()) < sc_bigint<8>(prev_score_out_8_43_reg_29484.read()));
}

void needlemanWunsch::thread_tmp_59_44_fu_11468_p2() {
    tmp_59_44_fu_11468_p2 = (!prev_score_out_0_op_i_44_fu_11453_p2.read().is_01() || !prev_score_out_8_44_reg_29604.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_44_fu_11453_p2.read()) < sc_bigint<8>(prev_score_out_8_44_reg_29604.read()));
}

void needlemanWunsch::thread_tmp_59_45_fu_11638_p2() {
    tmp_59_45_fu_11638_p2 = (!prev_score_out_0_op_i_45_fu_11623_p2.read().is_01() || !prev_score_out_8_45_reg_29715.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_45_fu_11623_p2.read()) < sc_bigint<8>(prev_score_out_8_45_reg_29715.read()));
}

void needlemanWunsch::thread_tmp_59_46_fu_11815_p2() {
    tmp_59_46_fu_11815_p2 = (!prev_score_out_0_op_i_46_fu_11800_p2.read().is_01() || !prev_score_out_8_46_reg_29835.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_46_fu_11800_p2.read()) < sc_bigint<8>(prev_score_out_8_46_reg_29835.read()));
}

void needlemanWunsch::thread_tmp_59_47_fu_11978_p2() {
    tmp_59_47_fu_11978_p2 = (!prev_score_out_0_op_i_47_fu_11963_p2.read().is_01() || !prev_score_out_8_47_reg_29949.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_47_fu_11963_p2.read()) < sc_bigint<8>(prev_score_out_8_47_reg_29949.read()));
}

void needlemanWunsch::thread_tmp_59_48_fu_12149_p2() {
    tmp_59_48_fu_12149_p2 = (!prev_score_out_0_op_i_48_fu_12134_p2.read().is_01() || !prev_score_out_8_48_reg_30069.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_48_fu_12134_p2.read()) < sc_bigint<8>(prev_score_out_8_48_reg_30069.read()));
}

void needlemanWunsch::thread_tmp_59_49_fu_12322_p2() {
    tmp_59_49_fu_12322_p2 = (!prev_score_out_0_op_i_49_fu_12307_p2.read().is_01() || !prev_score_out_8_49_reg_30176.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_49_fu_12307_p2.read()) < sc_bigint<8>(prev_score_out_8_49_reg_30176.read()));
}

void needlemanWunsch::thread_tmp_59_4_fu_4002_p2() {
    tmp_59_4_fu_4002_p2 = (!prev_score_out_0_op_i_4_fu_3987_p2.read().is_01() || !prev_score_out_8_4_reg_23705.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_4_fu_3987_p2.read()) < sc_bigint<8>(prev_score_out_8_4_reg_23705.read()));
}

void needlemanWunsch::thread_tmp_59_50_fu_12488_p2() {
    tmp_59_50_fu_12488_p2 = (!prev_score_out_0_op_i_50_fu_12473_p2.read().is_01() || !prev_score_out_8_50_reg_30292.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_50_fu_12473_p2.read()) < sc_bigint<8>(prev_score_out_8_50_reg_30292.read()));
}

void needlemanWunsch::thread_tmp_59_51_fu_12668_p2() {
    tmp_59_51_fu_12668_p2 = (!prev_score_out_0_op_i_51_fu_12653_p2.read().is_01() || !prev_score_out_8_51_reg_30394.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_51_fu_12653_p2.read()) < sc_bigint<8>(prev_score_out_8_51_reg_30394.read()));
}

void needlemanWunsch::thread_tmp_59_52_fu_12837_p2() {
    tmp_59_52_fu_12837_p2 = (!prev_score_out_0_op_i_52_fu_12822_p2.read().is_01() || !prev_score_out_8_52_reg_30501.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_52_fu_12822_p2.read()) < sc_bigint<8>(prev_score_out_8_52_reg_30501.read()));
}

void needlemanWunsch::thread_tmp_59_53_fu_13001_p2() {
    tmp_59_53_fu_13001_p2 = (!prev_score_out_0_op_i_53_fu_12986_p2.read().is_01() || !prev_score_out_8_53_reg_30603.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_53_fu_12986_p2.read()) < sc_bigint<8>(prev_score_out_8_53_reg_30603.read()));
}

void needlemanWunsch::thread_tmp_59_54_fu_13167_p2() {
    tmp_59_54_fu_13167_p2 = (!prev_score_out_0_op_i_54_fu_13152_p2.read().is_01() || !prev_score_out_8_54_reg_30707.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_54_fu_13152_p2.read()) < sc_bigint<8>(prev_score_out_8_54_reg_30707.read()));
}

void needlemanWunsch::thread_tmp_59_55_fu_13342_p2() {
    tmp_59_55_fu_13342_p2 = (!prev_score_out_0_op_i_55_fu_13327_p2.read().is_01() || !prev_score_out_8_55_reg_30804.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_55_fu_13327_p2.read()) < sc_bigint<8>(prev_score_out_8_55_reg_30804.read()));
}

void needlemanWunsch::thread_tmp_59_56_fu_13522_p2() {
    tmp_59_56_fu_13522_p2 = (!prev_score_out_0_op_i_56_fu_13507_p2.read().is_01() || !prev_score_out_8_56_reg_30906.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_56_fu_13507_p2.read()) < sc_bigint<8>(prev_score_out_8_56_reg_30906.read()));
}

void needlemanWunsch::thread_tmp_59_57_fu_13693_p2() {
    tmp_59_57_fu_13693_p2 = (!prev_score_out_0_op_i_57_fu_13678_p2.read().is_01() || !prev_score_out_8_57_reg_31013.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_57_fu_13678_p2.read()) < sc_bigint<8>(prev_score_out_8_57_reg_31013.read()));
}

void needlemanWunsch::thread_tmp_59_58_fu_13867_p2() {
    tmp_59_58_fu_13867_p2 = (!prev_score_out_0_op_i_58_fu_13852_p2.read().is_01() || !prev_score_out_8_58_reg_31115.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_58_fu_13852_p2.read()) < sc_bigint<8>(prev_score_out_8_58_reg_31115.read()));
}

void needlemanWunsch::thread_tmp_59_59_fu_14041_p2() {
    tmp_59_59_fu_14041_p2 = (!prev_score_out_0_op_i_59_fu_14026_p2.read().is_01() || !prev_score_out_8_59_reg_31222.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_59_fu_14026_p2.read()) < sc_bigint<8>(prev_score_out_8_59_reg_31222.read()));
}

void needlemanWunsch::thread_tmp_59_5_fu_4829_p2() {
    tmp_59_5_fu_4829_p2 = (!prev_score_out_0_op_i_5_fu_4814_p2.read().is_01() || !prev_score_out_8_5_reg_23945.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_5_fu_4814_p2.read()) < sc_bigint<8>(prev_score_out_8_5_reg_23945.read()));
}

void needlemanWunsch::thread_tmp_59_60_fu_14209_p2() {
    tmp_59_60_fu_14209_p2 = (!prev_score_out_0_op_i_60_fu_14194_p2.read().is_01() || !prev_score_out_8_60_reg_31329.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_60_fu_14194_p2.read()) < sc_bigint<8>(prev_score_out_8_60_reg_31329.read()));
}

void needlemanWunsch::thread_tmp_59_61_fu_14384_p2() {
    tmp_59_61_fu_14384_p2 = (!prev_score_out_0_op_i_61_fu_14369_p2.read().is_01() || !prev_score_out_8_61_reg_31428.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_61_fu_14369_p2.read()) < sc_bigint<8>(prev_score_out_8_61_reg_31428.read()));
}

void needlemanWunsch::thread_tmp_59_62_fu_14558_p2() {
    tmp_59_62_fu_14558_p2 = (!prev_score_out_0_op_i_62_fu_14543_p2.read().is_01() || !prev_score_out_8_62_reg_31530.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_62_fu_14543_p2.read()) < sc_bigint<8>(prev_score_out_8_62_reg_31530.read()));
}

void needlemanWunsch::thread_tmp_59_63_fu_14733_p2() {
    tmp_59_63_fu_14733_p2 = (!prev_score_out_0_op_i_63_fu_14718_p2.read().is_01() || !prev_score_out_8_63_reg_31629.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_63_fu_14718_p2.read()) < sc_bigint<8>(prev_score_out_8_63_reg_31629.read()));
}

void needlemanWunsch::thread_tmp_59_64_fu_14908_p2() {
    tmp_59_64_fu_14908_p2 = (!prev_score_out_0_op_i_64_fu_14893_p2.read().is_01() || !prev_score_out_8_64_reg_31731.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_64_fu_14893_p2.read()) < sc_bigint<8>(prev_score_out_8_64_reg_31731.read()));
}

void needlemanWunsch::thread_tmp_59_65_fu_15083_p2() {
    tmp_59_65_fu_15083_p2 = (!prev_score_out_0_op_i_65_fu_15068_p2.read().is_01() || !prev_score_out_8_65_reg_31833.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_65_fu_15068_p2.read()) < sc_bigint<8>(prev_score_out_8_65_reg_31833.read()));
}

void needlemanWunsch::thread_tmp_59_66_fu_15258_p2() {
    tmp_59_66_fu_15258_p2 = (!prev_score_out_0_op_i_66_fu_15243_p2.read().is_01() || !prev_score_out_8_66_reg_31935.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_66_fu_15243_p2.read()) < sc_bigint<8>(prev_score_out_8_66_reg_31935.read()));
}

void needlemanWunsch::thread_tmp_59_67_fu_15433_p2() {
    tmp_59_67_fu_15433_p2 = (!prev_score_out_0_op_i_67_fu_15418_p2.read().is_01() || !prev_score_out_8_67_reg_32037.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_67_fu_15418_p2.read()) < sc_bigint<8>(prev_score_out_8_67_reg_32037.read()));
}

void needlemanWunsch::thread_tmp_59_68_fu_15608_p2() {
    tmp_59_68_fu_15608_p2 = (!prev_score_out_0_op_i_68_fu_15593_p2.read().is_01() || !prev_score_out_8_68_reg_32139.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_68_fu_15593_p2.read()) < sc_bigint<8>(prev_score_out_8_68_reg_32139.read()));
}

void needlemanWunsch::thread_tmp_59_69_fu_15783_p2() {
    tmp_59_69_fu_15783_p2 = (!prev_score_out_0_op_i_69_fu_15768_p2.read().is_01() || !prev_score_out_8_69_reg_32241.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_69_fu_15768_p2.read()) < sc_bigint<8>(prev_score_out_8_69_reg_32241.read()));
}

void needlemanWunsch::thread_tmp_59_6_fu_4990_p2() {
    tmp_59_6_fu_4990_p2 = (!prev_score_out_0_op_i_6_fu_4975_p2.read().is_01() || !prev_score_out_8_6_reg_24970.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_6_fu_4975_p2.read()) < sc_bigint<8>(prev_score_out_8_6_reg_24970.read()));
}

void needlemanWunsch::thread_tmp_59_70_fu_15958_p2() {
    tmp_59_70_fu_15958_p2 = (!prev_score_out_0_op_i_70_fu_15943_p2.read().is_01() || !prev_score_out_8_70_reg_32343.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_70_fu_15943_p2.read()) < sc_bigint<8>(prev_score_out_8_70_reg_32343.read()));
}

void needlemanWunsch::thread_tmp_59_71_fu_16132_p2() {
    tmp_59_71_fu_16132_p2 = (!prev_score_out_0_op_i_71_fu_16117_p2.read().is_01() || !prev_score_out_8_71_reg_32445.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_71_fu_16117_p2.read()) < sc_bigint<8>(prev_score_out_8_71_reg_32445.read()));
}

void needlemanWunsch::thread_tmp_59_72_fu_16306_p2() {
    tmp_59_72_fu_16306_p2 = (!prev_score_out_0_op_i_72_fu_16291_p2.read().is_01() || !prev_score_out_8_72_reg_32544.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_72_fu_16291_p2.read()) < sc_bigint<8>(prev_score_out_8_72_reg_32544.read()));
}

void needlemanWunsch::thread_tmp_59_73_fu_16481_p2() {
    tmp_59_73_fu_16481_p2 = (!prev_score_out_0_op_i_73_fu_16466_p2.read().is_01() || !prev_score_out_8_73_reg_32643.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_73_fu_16466_p2.read()) < sc_bigint<8>(prev_score_out_8_73_reg_32643.read()));
}

void needlemanWunsch::thread_tmp_59_74_fu_16656_p2() {
    tmp_59_74_fu_16656_p2 = (!prev_score_out_0_op_i_74_fu_16641_p2.read().is_01() || !prev_score_out_8_74_reg_32745.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_74_fu_16641_p2.read()) < sc_bigint<8>(prev_score_out_8_74_reg_32745.read()));
}

void needlemanWunsch::thread_tmp_59_75_fu_16835_p2() {
    tmp_59_75_fu_16835_p2 = (!prev_score_out_0_op_i_75_fu_16820_p2.read().is_01() || !prev_score_out_8_75_reg_32847.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_75_fu_16820_p2.read()) < sc_bigint<8>(prev_score_out_8_75_reg_32847.read()));
}

void needlemanWunsch::thread_tmp_59_76_fu_17008_p2() {
    tmp_59_76_fu_17008_p2 = (!prev_score_out_0_op_i_76_fu_16993_p2.read().is_01() || !prev_score_out_8_76_reg_32951.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_76_fu_16993_p2.read()) < sc_bigint<8>(prev_score_out_8_76_reg_32951.read()));
}

void needlemanWunsch::thread_tmp_59_77_fu_17177_p2() {
    tmp_59_77_fu_17177_p2 = (!prev_score_out_0_op_i_77_fu_17162_p2.read().is_01() || !prev_score_out_8_77_reg_33055.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_77_fu_17162_p2.read()) < sc_bigint<8>(prev_score_out_8_77_reg_33055.read()));
}

void needlemanWunsch::thread_tmp_59_78_fu_17357_p2() {
    tmp_59_78_fu_17357_p2 = (!prev_score_out_0_op_i_78_fu_17342_p2.read().is_01() || !prev_score_out_8_78_reg_33157.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_78_fu_17342_p2.read()) < sc_bigint<8>(prev_score_out_8_78_reg_33157.read()));
}

void needlemanWunsch::thread_tmp_59_79_fu_17530_p2() {
    tmp_59_79_fu_17530_p2 = (!prev_score_out_0_op_i_79_fu_17515_p2.read().is_01() || !prev_score_out_8_79_reg_33264.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_79_fu_17515_p2.read()) < sc_bigint<8>(prev_score_out_8_79_reg_33264.read()));
}

void needlemanWunsch::thread_tmp_59_7_fu_5151_p2() {
    tmp_59_7_fu_5151_p2 = (!prev_score_out_0_op_i_7_fu_5136_p2.read().is_01() || !prev_score_out_8_7_reg_25079.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_7_fu_5136_p2.read()) < sc_bigint<8>(prev_score_out_8_7_reg_25079.read()));
}

void needlemanWunsch::thread_tmp_59_80_fu_17704_p2() {
    tmp_59_80_fu_17704_p2 = (!prev_score_out_0_op_i_80_fu_17689_p2.read().is_01() || !prev_score_out_8_80_reg_33368.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_80_fu_17689_p2.read()) < sc_bigint<8>(prev_score_out_8_80_reg_33368.read()));
}

void needlemanWunsch::thread_tmp_59_81_fu_17877_p2() {
    tmp_59_81_fu_17877_p2 = (!prev_score_out_0_op_i_81_fu_17862_p2.read().is_01() || !prev_score_out_8_81_reg_33475.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_81_fu_17862_p2.read()) < sc_bigint<8>(prev_score_out_8_81_reg_33475.read()));
}

void needlemanWunsch::thread_tmp_59_82_fu_18045_p2() {
    tmp_59_82_fu_18045_p2 = (!prev_score_out_0_op_i_82_fu_18030_p2.read().is_01() || !prev_score_out_8_82_reg_33579.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_82_fu_18030_p2.read()) < sc_bigint<8>(prev_score_out_8_82_reg_33579.read()));
}

void needlemanWunsch::thread_tmp_59_83_fu_18220_p2() {
    tmp_59_83_fu_18220_p2 = (!prev_score_out_0_op_i_83_fu_18205_p2.read().is_01() || !prev_score_out_8_83_reg_33678.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_83_fu_18205_p2.read()) < sc_bigint<8>(prev_score_out_8_83_reg_33678.read()));
}

void needlemanWunsch::thread_tmp_59_84_fu_18395_p2() {
    tmp_59_84_fu_18395_p2 = (!prev_score_out_0_op_i_84_fu_18380_p2.read().is_01() || !prev_score_out_8_84_reg_33780.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_84_fu_18380_p2.read()) < sc_bigint<8>(prev_score_out_8_84_reg_33780.read()));
}

void needlemanWunsch::thread_tmp_59_85_fu_18570_p2() {
    tmp_59_85_fu_18570_p2 = (!prev_score_out_0_op_i_85_fu_18555_p2.read().is_01() || !prev_score_out_8_85_reg_33882.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_85_fu_18555_p2.read()) < sc_bigint<8>(prev_score_out_8_85_reg_33882.read()));
}

void needlemanWunsch::thread_tmp_59_86_fu_18744_p2() {
    tmp_59_86_fu_18744_p2 = (!prev_score_out_0_op_i_86_fu_18729_p2.read().is_01() || !prev_score_out_8_86_reg_33984.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_86_fu_18729_p2.read()) < sc_bigint<8>(prev_score_out_8_86_reg_33984.read()));
}

void needlemanWunsch::thread_tmp_59_87_fu_18923_p2() {
    tmp_59_87_fu_18923_p2 = (!prev_score_out_0_op_i_87_fu_18908_p2.read().is_01() || !prev_score_out_8_87_reg_34083.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_87_fu_18908_p2.read()) < sc_bigint<8>(prev_score_out_8_87_reg_34083.read()));
}

void needlemanWunsch::thread_tmp_59_88_fu_19092_p2() {
    tmp_59_88_fu_19092_p2 = (!prev_score_out_0_op_i_88_fu_19077_p2.read().is_01() || !prev_score_out_8_88_reg_34187.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_88_fu_19077_p2.read()) < sc_bigint<8>(prev_score_out_8_88_reg_34187.read()));
}

void needlemanWunsch::thread_tmp_59_89_fu_19267_p2() {
    tmp_59_89_fu_19267_p2 = (!prev_score_out_0_op_i_89_fu_19252_p2.read().is_01() || !prev_score_out_8_89_reg_34289.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_89_fu_19252_p2.read()) < sc_bigint<8>(prev_score_out_8_89_reg_34289.read()));
}

void needlemanWunsch::thread_tmp_59_8_fu_5310_p2() {
    tmp_59_8_fu_5310_p2 = (!prev_score_out_0_op_i_8_fu_5295_p2.read().is_01() || !prev_score_out_8_8_reg_25188.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_8_fu_5295_p2.read()) < sc_bigint<8>(prev_score_out_8_8_reg_25188.read()));
}

void needlemanWunsch::thread_tmp_59_90_fu_19446_p2() {
    tmp_59_90_fu_19446_p2 = (!prev_score_out_0_op_i_90_fu_19431_p2.read().is_01() || !prev_score_out_8_90_reg_34391.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_90_fu_19431_p2.read()) < sc_bigint<8>(prev_score_out_8_90_reg_34391.read()));
}

void needlemanWunsch::thread_tmp_59_91_fu_19615_p2() {
    tmp_59_91_fu_19615_p2 = (!prev_score_out_0_op_i_91_fu_19600_p2.read().is_01() || !prev_score_out_8_91_reg_34495.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_91_fu_19600_p2.read()) < sc_bigint<8>(prev_score_out_8_91_reg_34495.read()));
}

void needlemanWunsch::thread_tmp_59_92_fu_19790_p2() {
    tmp_59_92_fu_19790_p2 = (!prev_score_out_0_op_i_92_fu_19775_p2.read().is_01() || !prev_score_out_8_92_reg_34597.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_92_fu_19775_p2.read()) < sc_bigint<8>(prev_score_out_8_92_reg_34597.read()));
}

void needlemanWunsch::thread_tmp_59_93_fu_19965_p2() {
    tmp_59_93_fu_19965_p2 = (!prev_score_out_0_op_i_93_fu_19950_p2.read().is_01() || !prev_score_out_8_93_reg_34699.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_93_fu_19950_p2.read()) < sc_bigint<8>(prev_score_out_8_93_reg_34699.read()));
}

void needlemanWunsch::thread_tmp_59_94_fu_20145_p2() {
    tmp_59_94_fu_20145_p2 = (!prev_score_out_0_op_i_94_fu_20130_p2.read().is_01() || !prev_score_out_8_94_reg_34801.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_94_fu_20130_p2.read()) < sc_bigint<8>(prev_score_out_8_94_reg_34801.read()));
}

void needlemanWunsch::thread_tmp_59_95_fu_20314_p2() {
    tmp_59_95_fu_20314_p2 = (!prev_score_out_0_op_i_95_fu_20299_p2.read().is_01() || !prev_score_out_8_95_reg_34908.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_95_fu_20299_p2.read()) < sc_bigint<8>(prev_score_out_8_95_reg_34908.read()));
}

void needlemanWunsch::thread_tmp_59_96_fu_20494_p2() {
    tmp_59_96_fu_20494_p2 = (!prev_score_out_0_op_i_96_fu_20479_p2.read().is_01() || !prev_score_out_8_96_reg_35010.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_96_fu_20479_p2.read()) < sc_bigint<8>(prev_score_out_8_96_reg_35010.read()));
}

void needlemanWunsch::thread_tmp_59_97_fu_20624_p2() {
    tmp_59_97_fu_20624_p2 = (!prev_score_out_0_op_i_97_fu_20609_p2.read().is_01() || !prev_score_out_8_97_reg_35136.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_97_fu_20609_p2.read()) < sc_bigint<8>(prev_score_out_8_97_reg_35136.read()));
}

void needlemanWunsch::thread_tmp_59_98_fu_20759_p2() {
    tmp_59_98_fu_20759_p2 = (!prev_score_out_0_op_i_98_fu_20744_p2.read().is_01() || !prev_score_out_8_98_reg_35220.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_98_fu_20744_p2.read()) < sc_bigint<8>(prev_score_out_8_98_reg_35220.read()));
}

void needlemanWunsch::thread_tmp_59_9_fu_5471_p2() {
    tmp_59_9_fu_5471_p2 = (!prev_score_out_0_op_i_9_fu_5456_p2.read().is_01() || !prev_score_out_8_9_reg_25299.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_9_fu_5456_p2.read()) < sc_bigint<8>(prev_score_out_8_9_reg_25299.read()));
}

void needlemanWunsch::thread_tmp_59_s_fu_5632_p2() {
    tmp_59_s_fu_5632_p2 = (!prev_score_out_0_op_i_s_fu_5617_p2.read().is_01() || !prev_score_out_8_s_reg_25414.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_s_fu_5617_p2.read()) < sc_bigint<8>(prev_score_out_8_s_reg_25414.read()));
}

void needlemanWunsch::thread_tmp_5_fu_3150_p2() {
    tmp_5_fu_3150_p2 = (!prev_orig_out_reg_2317.read().is_01() || !ap_const_lv20_1.is_01())? sc_lv<1>(): sc_lv<1>(prev_orig_out_reg_2317.read() == ap_const_lv20_1);
}

void needlemanWunsch::thread_tmp_60_10_fu_5798_p2() {
    tmp_60_10_fu_5798_p2 = (!prev_score_out_0_op_i_10_fu_5778_p2.read().is_01() || !prev_score_out_0_op_i1_11_fu_5752_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_10_fu_5778_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_11_fu_5752_p2.read()));
}

void needlemanWunsch::thread_tmp_60_11_fu_5957_p2() {
    tmp_60_11_fu_5957_p2 = (!prev_score_out_0_op_i_11_fu_5937_p2.read().is_01() || !prev_score_out_0_op_i1_12_fu_5913_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_11_fu_5937_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_12_fu_5913_p2.read()));
}

void needlemanWunsch::thread_tmp_60_12_fu_6117_p2() {
    tmp_60_12_fu_6117_p2 = (!prev_score_out_0_op_i_12_fu_6097_p2.read().is_01() || !prev_score_out_0_op_i1_13_fu_6071_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_12_fu_6097_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_13_fu_6071_p2.read()));
}

void needlemanWunsch::thread_tmp_60_13_fu_6276_p2() {
    tmp_60_13_fu_6276_p2 = (!prev_score_out_0_op_i_13_fu_6256_p2.read().is_01() || !prev_score_out_0_op_i1_14_fu_6232_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_13_fu_6256_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_14_fu_6232_p2.read()));
}

void needlemanWunsch::thread_tmp_60_14_fu_6436_p2() {
    tmp_60_14_fu_6436_p2 = (!prev_score_out_0_op_i_14_fu_6416_p2.read().is_01() || !prev_score_out_0_op_i1_15_fu_6390_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_14_fu_6416_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_15_fu_6390_p2.read()));
}

void needlemanWunsch::thread_tmp_60_15_fu_6595_p2() {
    tmp_60_15_fu_6595_p2 = (!prev_score_out_0_op_i_15_fu_6575_p2.read().is_01() || !prev_score_out_0_op_i1_16_fu_6551_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_15_fu_6575_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_16_fu_6551_p2.read()));
}

void needlemanWunsch::thread_tmp_60_16_fu_6756_p2() {
    tmp_60_16_fu_6756_p2 = (!prev_score_out_0_op_i_16_fu_6736_p2.read().is_01() || !prev_score_out_0_op_i1_17_fu_6710_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_16_fu_6736_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_17_fu_6710_p2.read()));
}

void needlemanWunsch::thread_tmp_60_17_fu_6915_p2() {
    tmp_60_17_fu_6915_p2 = (!prev_score_out_0_op_i_17_fu_6895_p2.read().is_01() || !prev_score_out_0_op_i1_18_fu_6871_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_17_fu_6895_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_18_fu_6871_p2.read()));
}

void needlemanWunsch::thread_tmp_60_18_fu_7082_p2() {
    tmp_60_18_fu_7082_p2 = (!prev_score_out_0_op_i_18_fu_7062_p2.read().is_01() || !prev_score_out_0_op_i1_19_fu_7036_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_18_fu_7062_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_19_fu_7036_p2.read()));
}

void needlemanWunsch::thread_tmp_60_19_fu_7254_p2() {
    tmp_60_19_fu_7254_p2 = (!prev_score_out_0_op_i_19_fu_7234_p2.read().is_01() || !prev_score_out_0_op_i1_20_fu_7208_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_19_fu_7234_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_20_fu_7208_p2.read()));
}

void needlemanWunsch::thread_tmp_60_1_fu_3469_p2() {
    tmp_60_1_fu_3469_p2 = (!prev_score_out_0_op_i_1_fu_3449_p2.read().is_01() || !prev_score_out_0_op_i1_2_fu_3415_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_1_fu_3449_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_2_fu_3415_p2.read()));
}

void needlemanWunsch::thread_tmp_60_20_fu_7419_p2() {
    tmp_60_20_fu_7419_p2 = (!prev_score_out_0_op_i_20_fu_7399_p2.read().is_01() || !prev_score_out_0_op_i1_21_fu_7373_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_20_fu_7399_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_21_fu_7373_p2.read()));
}

void needlemanWunsch::thread_tmp_60_21_fu_7591_p2() {
    tmp_60_21_fu_7591_p2 = (!prev_score_out_0_op_i_21_fu_7571_p2.read().is_01() || !prev_score_out_0_op_i1_22_fu_7545_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_21_fu_7571_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_22_fu_7545_p2.read()));
}

void needlemanWunsch::thread_tmp_60_22_fu_7757_p2() {
    tmp_60_22_fu_7757_p2 = (!prev_score_out_0_op_i_22_fu_7737_p2.read().is_01() || !prev_score_out_0_op_i1_23_fu_7711_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_22_fu_7737_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_23_fu_7711_p2.read()));
}

void needlemanWunsch::thread_tmp_60_23_fu_7923_p2() {
    tmp_60_23_fu_7923_p2 = (!prev_score_out_0_op_i_23_fu_7903_p2.read().is_01() || !prev_score_out_0_op_i1_24_fu_7877_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_23_fu_7903_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_24_fu_7877_p2.read()));
}

void needlemanWunsch::thread_tmp_60_24_fu_8097_p2() {
    tmp_60_24_fu_8097_p2 = (!prev_score_out_0_op_i_24_fu_8077_p2.read().is_01() || !prev_score_out_0_op_i1_25_fu_8051_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_24_fu_8077_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_25_fu_8051_p2.read()));
}

void needlemanWunsch::thread_tmp_60_25_fu_8268_p2() {
    tmp_60_25_fu_8268_p2 = (!prev_score_out_0_op_i_25_fu_8248_p2.read().is_01() || !prev_score_out_0_op_i1_26_fu_8222_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_25_fu_8248_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_26_fu_8222_p2.read()));
}

void needlemanWunsch::thread_tmp_60_26_fu_8431_p2() {
    tmp_60_26_fu_8431_p2 = (!prev_score_out_0_op_i_26_fu_8411_p2.read().is_01() || !prev_score_out_0_op_i1_27_fu_8385_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_26_fu_8411_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_27_fu_8385_p2.read()));
}

void needlemanWunsch::thread_tmp_60_27_fu_8606_p2() {
    tmp_60_27_fu_8606_p2 = (!prev_score_out_0_op_i_27_fu_8586_p2.read().is_01() || !prev_score_out_0_op_i1_28_fu_8560_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_27_fu_8586_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_28_fu_8560_p2.read()));
}

void needlemanWunsch::thread_tmp_60_28_fu_8775_p2() {
    tmp_60_28_fu_8775_p2 = (!prev_score_out_0_op_i_28_fu_8755_p2.read().is_01() || !prev_score_out_0_op_i1_29_fu_8731_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_28_fu_8755_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_29_fu_8731_p2.read()));
}

void needlemanWunsch::thread_tmp_60_29_fu_8937_p2() {
    tmp_60_29_fu_8937_p2 = (!prev_score_out_0_op_i_29_fu_8917_p2.read().is_01() || !prev_score_out_0_op_i1_30_fu_8893_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_29_fu_8917_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_30_fu_8893_p2.read()));
}

void needlemanWunsch::thread_tmp_60_2_fu_3631_p2() {
    tmp_60_2_fu_3631_p2 = (!prev_score_out_0_op_i_2_fu_3611_p2.read().is_01() || !prev_score_out_0_op_i1_3_fu_3557_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_2_fu_3611_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_3_fu_3557_p2.read()));
}

void needlemanWunsch::thread_tmp_60_30_fu_9111_p2() {
    tmp_60_30_fu_9111_p2 = (!prev_score_out_0_op_i_30_fu_9091_p2.read().is_01() || !prev_score_out_0_op_i1_31_fu_9067_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_30_fu_9091_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_31_fu_9067_p2.read()));
}

void needlemanWunsch::thread_tmp_60_31_fu_9275_p2() {
    tmp_60_31_fu_9275_p2 = (!prev_score_out_0_op_i_31_fu_9255_p2.read().is_01() || !prev_score_out_0_op_i1_32_fu_9231_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_31_fu_9255_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_32_fu_9231_p2.read()));
}

void needlemanWunsch::thread_tmp_60_32_fu_9444_p2() {
    tmp_60_32_fu_9444_p2 = (!prev_score_out_0_op_i_32_fu_9424_p2.read().is_01() || !prev_score_out_0_op_i1_33_fu_9398_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_32_fu_9424_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_33_fu_9398_p2.read()));
}

void needlemanWunsch::thread_tmp_60_33_fu_9618_p2() {
    tmp_60_33_fu_9618_p2 = (!prev_score_out_0_op_i_33_fu_9598_p2.read().is_01() || !prev_score_out_0_op_i1_34_fu_9574_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_33_fu_9598_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_34_fu_9574_p2.read()));
}

void needlemanWunsch::thread_tmp_60_34_fu_9787_p2() {
    tmp_60_34_fu_9787_p2 = (!prev_score_out_0_op_i_34_fu_9767_p2.read().is_01() || !prev_score_out_0_op_i1_35_fu_9743_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_34_fu_9767_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_35_fu_9743_p2.read()));
}

void needlemanWunsch::thread_tmp_60_35_fu_9950_p2() {
    tmp_60_35_fu_9950_p2 = (!prev_score_out_0_op_i_35_fu_9930_p2.read().is_01() || !prev_score_out_0_op_i1_36_fu_9904_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_35_fu_9930_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_36_fu_9904_p2.read()));
}

void needlemanWunsch::thread_tmp_60_36_fu_10124_p2() {
    tmp_60_36_fu_10124_p2 = (!prev_score_out_0_op_i_36_fu_10104_p2.read().is_01() || !prev_score_out_0_op_i1_37_fu_10078_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_36_fu_10104_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_37_fu_10078_p2.read()));
}

void needlemanWunsch::thread_tmp_60_37_fu_10290_p2() {
    tmp_60_37_fu_10290_p2 = (!prev_score_out_0_op_i_37_fu_10270_p2.read().is_01() || !prev_score_out_0_op_i1_38_fu_10244_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_37_fu_10270_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_38_fu_10244_p2.read()));
}

void needlemanWunsch::thread_tmp_60_38_fu_10459_p2() {
    tmp_60_38_fu_10459_p2 = (!prev_score_out_0_op_i_38_fu_10439_p2.read().is_01() || !prev_score_out_0_op_i1_39_fu_10413_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_38_fu_10439_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_39_fu_10413_p2.read()));
}

void needlemanWunsch::thread_tmp_60_39_fu_10627_p2() {
    tmp_60_39_fu_10627_p2 = (!prev_score_out_0_op_i_39_fu_10607_p2.read().is_01() || !prev_score_out_0_op_i1_40_fu_10583_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_39_fu_10607_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_40_fu_10583_p2.read()));
}

void needlemanWunsch::thread_tmp_60_3_fu_3810_p2() {
    tmp_60_3_fu_3810_p2 = (!prev_score_out_0_op_i_3_fu_3790_p2.read().is_01() || !prev_score_out_0_op_i1_4_fu_3758_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_3_fu_3790_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_4_fu_3758_p2.read()));
}

void needlemanWunsch::thread_tmp_60_40_fu_10797_p2() {
    tmp_60_40_fu_10797_p2 = (!prev_score_out_0_op_i_40_fu_10777_p2.read().is_01() || !prev_score_out_0_op_i1_41_fu_10753_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_40_fu_10777_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_41_fu_10753_p2.read()));
}

void needlemanWunsch::thread_tmp_60_41_fu_10966_p2() {
    tmp_60_41_fu_10966_p2 = (!prev_score_out_0_op_i_41_fu_10946_p2.read().is_01() || !prev_score_out_0_op_i1_42_fu_10920_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_41_fu_10946_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_42_fu_10920_p2.read()));
}

void needlemanWunsch::thread_tmp_60_42_fu_11140_p2() {
    tmp_60_42_fu_11140_p2 = (!prev_score_out_0_op_i_42_fu_11120_p2.read().is_01() || !prev_score_out_0_op_i1_43_fu_11094_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_42_fu_11120_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_43_fu_11094_p2.read()));
}

void needlemanWunsch::thread_tmp_60_43_fu_11305_p2() {
    tmp_60_43_fu_11305_p2 = (!prev_score_out_0_op_i_43_fu_11285_p2.read().is_01() || !prev_score_out_0_op_i1_44_fu_11259_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_43_fu_11285_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_44_fu_11259_p2.read()));
}

void needlemanWunsch::thread_tmp_60_44_fu_11473_p2() {
    tmp_60_44_fu_11473_p2 = (!prev_score_out_0_op_i_44_fu_11453_p2.read().is_01() || !prev_score_out_0_op_i1_45_fu_11429_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_44_fu_11453_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_45_fu_11429_p2.read()));
}

void needlemanWunsch::thread_tmp_60_45_fu_11643_p2() {
    tmp_60_45_fu_11643_p2 = (!prev_score_out_0_op_i_45_fu_11623_p2.read().is_01() || !prev_score_out_0_op_i1_46_fu_11597_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_45_fu_11623_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_46_fu_11597_p2.read()));
}

void needlemanWunsch::thread_tmp_60_46_fu_11820_p2() {
    tmp_60_46_fu_11820_p2 = (!prev_score_out_0_op_i_46_fu_11800_p2.read().is_01() || !prev_score_out_0_op_i1_47_fu_11774_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_46_fu_11800_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_47_fu_11774_p2.read()));
}

void needlemanWunsch::thread_tmp_60_47_fu_11983_p2() {
    tmp_60_47_fu_11983_p2 = (!prev_score_out_0_op_i_47_fu_11963_p2.read().is_01() || !prev_score_out_0_op_i1_48_fu_11937_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_47_fu_11963_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_48_fu_11937_p2.read()));
}

void needlemanWunsch::thread_tmp_60_48_fu_12154_p2() {
    tmp_60_48_fu_12154_p2 = (!prev_score_out_0_op_i_48_fu_12134_p2.read().is_01() || !prev_score_out_0_op_i1_49_fu_12108_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_48_fu_12134_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_49_fu_12108_p2.read()));
}

void needlemanWunsch::thread_tmp_60_49_fu_12327_p2() {
    tmp_60_49_fu_12327_p2 = (!prev_score_out_0_op_i_49_fu_12307_p2.read().is_01() || !prev_score_out_0_op_i1_50_fu_12283_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_49_fu_12307_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_50_fu_12283_p2.read()));
}

void needlemanWunsch::thread_tmp_60_4_fu_4007_p2() {
    tmp_60_4_fu_4007_p2 = (!prev_score_out_0_op_i_4_fu_3987_p2.read().is_01() || !prev_score_out_0_op_i1_5_fu_3942_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_4_fu_3987_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_5_fu_3942_p2.read()));
}

void needlemanWunsch::thread_tmp_60_50_fu_12493_p2() {
    tmp_60_50_fu_12493_p2 = (!prev_score_out_0_op_i_50_fu_12473_p2.read().is_01() || !prev_score_out_0_op_i1_51_fu_12447_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_50_fu_12473_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_51_fu_12447_p2.read()));
}

void needlemanWunsch::thread_tmp_60_51_fu_12673_p2() {
    tmp_60_51_fu_12673_p2 = (!prev_score_out_0_op_i_51_fu_12653_p2.read().is_01() || !prev_score_out_0_op_i1_52_fu_12627_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_51_fu_12653_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_52_fu_12627_p2.read()));
}

void needlemanWunsch::thread_tmp_60_52_fu_12842_p2() {
    tmp_60_52_fu_12842_p2 = (!prev_score_out_0_op_i_52_fu_12822_p2.read().is_01() || !prev_score_out_0_op_i1_53_fu_12796_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_52_fu_12822_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_53_fu_12796_p2.read()));
}

void needlemanWunsch::thread_tmp_60_53_fu_13006_p2() {
    tmp_60_53_fu_13006_p2 = (!prev_score_out_0_op_i_53_fu_12986_p2.read().is_01() || !prev_score_out_0_op_i1_54_fu_12962_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_53_fu_12986_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_54_fu_12962_p2.read()));
}

void needlemanWunsch::thread_tmp_60_54_fu_13172_p2() {
    tmp_60_54_fu_13172_p2 = (!prev_score_out_0_op_i_54_fu_13152_p2.read().is_01() || !prev_score_out_0_op_i1_55_fu_13126_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_54_fu_13152_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_55_fu_13126_p2.read()));
}

void needlemanWunsch::thread_tmp_60_55_fu_13347_p2() {
    tmp_60_55_fu_13347_p2 = (!prev_score_out_0_op_i_55_fu_13327_p2.read().is_01() || !prev_score_out_0_op_i1_56_fu_13301_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_55_fu_13327_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_56_fu_13301_p2.read()));
}

void needlemanWunsch::thread_tmp_60_56_fu_13527_p2() {
    tmp_60_56_fu_13527_p2 = (!prev_score_out_0_op_i_56_fu_13507_p2.read().is_01() || !prev_score_out_0_op_i1_57_fu_13481_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_56_fu_13507_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_57_fu_13481_p2.read()));
}

void needlemanWunsch::thread_tmp_60_57_fu_13698_p2() {
    tmp_60_57_fu_13698_p2 = (!prev_score_out_0_op_i_57_fu_13678_p2.read().is_01() || !prev_score_out_0_op_i1_58_fu_13652_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_57_fu_13678_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_58_fu_13652_p2.read()));
}

void needlemanWunsch::thread_tmp_60_58_fu_13872_p2() {
    tmp_60_58_fu_13872_p2 = (!prev_score_out_0_op_i_58_fu_13852_p2.read().is_01() || !prev_score_out_0_op_i1_59_fu_13826_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_58_fu_13852_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_59_fu_13826_p2.read()));
}

void needlemanWunsch::thread_tmp_60_59_fu_14046_p2() {
    tmp_60_59_fu_14046_p2 = (!prev_score_out_0_op_i_59_fu_14026_p2.read().is_01() || !prev_score_out_0_op_i1_60_fu_14000_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_59_fu_14026_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_60_fu_14000_p2.read()));
}

void needlemanWunsch::thread_tmp_60_5_fu_4834_p2() {
    tmp_60_5_fu_4834_p2 = (!prev_score_out_0_op_i_5_fu_4814_p2.read().is_01() || !prev_score_out_0_op_i1_6_fu_4777_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_5_fu_4814_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_6_fu_4777_p2.read()));
}

void needlemanWunsch::thread_tmp_60_60_fu_14214_p2() {
    tmp_60_60_fu_14214_p2 = (!prev_score_out_0_op_i_60_fu_14194_p2.read().is_01() || !prev_score_out_0_op_i1_61_fu_14170_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_60_fu_14194_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_61_fu_14170_p2.read()));
}

void needlemanWunsch::thread_tmp_60_61_fu_14389_p2() {
    tmp_60_61_fu_14389_p2 = (!prev_score_out_0_op_i_61_fu_14369_p2.read().is_01() || !prev_score_out_0_op_i1_62_fu_14343_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_61_fu_14369_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_62_fu_14343_p2.read()));
}

void needlemanWunsch::thread_tmp_60_62_fu_14563_p2() {
    tmp_60_62_fu_14563_p2 = (!prev_score_out_0_op_i_62_fu_14543_p2.read().is_01() || !prev_score_out_0_op_i1_63_fu_14519_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_62_fu_14543_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_63_fu_14519_p2.read()));
}

void needlemanWunsch::thread_tmp_60_63_fu_14738_p2() {
    tmp_60_63_fu_14738_p2 = (!prev_score_out_0_op_i_63_fu_14718_p2.read().is_01() || !prev_score_out_0_op_i1_64_fu_14692_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_63_fu_14718_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_64_fu_14692_p2.read()));
}

void needlemanWunsch::thread_tmp_60_64_fu_14913_p2() {
    tmp_60_64_fu_14913_p2 = (!prev_score_out_0_op_i_64_fu_14893_p2.read().is_01() || !prev_score_out_0_op_i1_65_fu_14867_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_64_fu_14893_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_65_fu_14867_p2.read()));
}

void needlemanWunsch::thread_tmp_60_65_fu_15088_p2() {
    tmp_60_65_fu_15088_p2 = (!prev_score_out_0_op_i_65_fu_15068_p2.read().is_01() || !prev_score_out_0_op_i1_66_fu_15042_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_65_fu_15068_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_66_fu_15042_p2.read()));
}

void needlemanWunsch::thread_tmp_60_66_fu_15263_p2() {
    tmp_60_66_fu_15263_p2 = (!prev_score_out_0_op_i_66_fu_15243_p2.read().is_01() || !prev_score_out_0_op_i1_67_fu_15217_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_66_fu_15243_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_67_fu_15217_p2.read()));
}

void needlemanWunsch::thread_tmp_60_67_fu_15438_p2() {
    tmp_60_67_fu_15438_p2 = (!prev_score_out_0_op_i_67_fu_15418_p2.read().is_01() || !prev_score_out_0_op_i1_68_fu_15392_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_67_fu_15418_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_68_fu_15392_p2.read()));
}

void needlemanWunsch::thread_tmp_60_68_fu_15613_p2() {
    tmp_60_68_fu_15613_p2 = (!prev_score_out_0_op_i_68_fu_15593_p2.read().is_01() || !prev_score_out_0_op_i1_69_fu_15567_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_68_fu_15593_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_69_fu_15567_p2.read()));
}

void needlemanWunsch::thread_tmp_60_69_fu_15788_p2() {
    tmp_60_69_fu_15788_p2 = (!prev_score_out_0_op_i_69_fu_15768_p2.read().is_01() || !prev_score_out_0_op_i1_70_fu_15742_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_69_fu_15768_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_70_fu_15742_p2.read()));
}

void needlemanWunsch::thread_tmp_60_6_fu_4995_p2() {
    tmp_60_6_fu_4995_p2 = (!prev_score_out_0_op_i_6_fu_4975_p2.read().is_01() || !prev_score_out_0_op_i1_7_fu_4949_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_6_fu_4975_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_7_fu_4949_p2.read()));
}

void needlemanWunsch::thread_tmp_60_70_fu_15963_p2() {
    tmp_60_70_fu_15963_p2 = (!prev_score_out_0_op_i_70_fu_15943_p2.read().is_01() || !prev_score_out_0_op_i1_71_fu_15917_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_70_fu_15943_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_71_fu_15917_p2.read()));
}

void needlemanWunsch::thread_tmp_60_71_fu_16137_p2() {
    tmp_60_71_fu_16137_p2 = (!prev_score_out_0_op_i_71_fu_16117_p2.read().is_01() || !prev_score_out_0_op_i1_72_fu_16093_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_71_fu_16117_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_72_fu_16093_p2.read()));
}

void needlemanWunsch::thread_tmp_60_72_fu_16311_p2() {
    tmp_60_72_fu_16311_p2 = (!prev_score_out_0_op_i_72_fu_16291_p2.read().is_01() || !prev_score_out_0_op_i1_73_fu_16267_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_72_fu_16291_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_73_fu_16267_p2.read()));
}

void needlemanWunsch::thread_tmp_60_73_fu_16486_p2() {
    tmp_60_73_fu_16486_p2 = (!prev_score_out_0_op_i_73_fu_16466_p2.read().is_01() || !prev_score_out_0_op_i1_74_fu_16440_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_73_fu_16466_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_74_fu_16440_p2.read()));
}

void needlemanWunsch::thread_tmp_60_74_fu_16661_p2() {
    tmp_60_74_fu_16661_p2 = (!prev_score_out_0_op_i_74_fu_16641_p2.read().is_01() || !prev_score_out_0_op_i1_75_fu_16615_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_74_fu_16641_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_75_fu_16615_p2.read()));
}

void needlemanWunsch::thread_tmp_60_75_fu_16840_p2() {
    tmp_60_75_fu_16840_p2 = (!prev_score_out_0_op_i_75_fu_16820_p2.read().is_01() || !prev_score_out_0_op_i1_76_fu_16796_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_75_fu_16820_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_76_fu_16796_p2.read()));
}

void needlemanWunsch::thread_tmp_60_76_fu_17013_p2() {
    tmp_60_76_fu_17013_p2 = (!prev_score_out_0_op_i_76_fu_16993_p2.read().is_01() || !prev_score_out_0_op_i1_77_fu_16969_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_76_fu_16993_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_77_fu_16969_p2.read()));
}

void needlemanWunsch::thread_tmp_60_77_fu_17182_p2() {
    tmp_60_77_fu_17182_p2 = (!prev_score_out_0_op_i_77_fu_17162_p2.read().is_01() || !prev_score_out_0_op_i1_78_fu_17136_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_77_fu_17162_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_78_fu_17136_p2.read()));
}

void needlemanWunsch::thread_tmp_60_78_fu_17362_p2() {
    tmp_60_78_fu_17362_p2 = (!prev_score_out_0_op_i_78_fu_17342_p2.read().is_01() || !prev_score_out_0_op_i1_79_fu_17316_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_78_fu_17342_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_79_fu_17316_p2.read()));
}

void needlemanWunsch::thread_tmp_60_79_fu_17535_p2() {
    tmp_60_79_fu_17535_p2 = (!prev_score_out_0_op_i_79_fu_17515_p2.read().is_01() || !prev_score_out_0_op_i1_80_fu_17491_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_79_fu_17515_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_80_fu_17491_p2.read()));
}

void needlemanWunsch::thread_tmp_60_7_fu_5156_p2() {
    tmp_60_7_fu_5156_p2 = (!prev_score_out_0_op_i_7_fu_5136_p2.read().is_01() || !prev_score_out_0_op_i1_8_fu_5110_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_7_fu_5136_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_8_fu_5110_p2.read()));
}

void needlemanWunsch::thread_tmp_60_80_fu_17709_p2() {
    tmp_60_80_fu_17709_p2 = (!prev_score_out_0_op_i_80_fu_17689_p2.read().is_01() || !prev_score_out_0_op_i1_81_fu_17663_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_80_fu_17689_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_81_fu_17663_p2.read()));
}

void needlemanWunsch::thread_tmp_60_81_fu_17882_p2() {
    tmp_60_81_fu_17882_p2 = (!prev_score_out_0_op_i_81_fu_17862_p2.read().is_01() || !prev_score_out_0_op_i1_82_fu_17838_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_81_fu_17862_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_82_fu_17838_p2.read()));
}

void needlemanWunsch::thread_tmp_60_82_fu_18050_p2() {
    tmp_60_82_fu_18050_p2 = (!prev_score_out_0_op_i_82_fu_18030_p2.read().is_01() || !prev_score_out_0_op_i1_83_fu_18006_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_82_fu_18030_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_83_fu_18006_p2.read()));
}

void needlemanWunsch::thread_tmp_60_83_fu_18225_p2() {
    tmp_60_83_fu_18225_p2 = (!prev_score_out_0_op_i_83_fu_18205_p2.read().is_01() || !prev_score_out_0_op_i1_84_fu_18179_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_83_fu_18205_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_84_fu_18179_p2.read()));
}

void needlemanWunsch::thread_tmp_60_84_fu_18400_p2() {
    tmp_60_84_fu_18400_p2 = (!prev_score_out_0_op_i_84_fu_18380_p2.read().is_01() || !prev_score_out_0_op_i1_85_fu_18354_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_84_fu_18380_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_85_fu_18354_p2.read()));
}

void needlemanWunsch::thread_tmp_60_85_fu_18575_p2() {
    tmp_60_85_fu_18575_p2 = (!prev_score_out_0_op_i_85_fu_18555_p2.read().is_01() || !prev_score_out_0_op_i1_86_fu_18529_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_85_fu_18555_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_86_fu_18529_p2.read()));
}

void needlemanWunsch::thread_tmp_60_86_fu_18749_p2() {
    tmp_60_86_fu_18749_p2 = (!prev_score_out_0_op_i_86_fu_18729_p2.read().is_01() || !prev_score_out_0_op_i1_87_fu_18705_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_86_fu_18729_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_87_fu_18705_p2.read()));
}

void needlemanWunsch::thread_tmp_60_87_fu_18928_p2() {
    tmp_60_87_fu_18928_p2 = (!prev_score_out_0_op_i_87_fu_18908_p2.read().is_01() || !prev_score_out_0_op_i1_88_fu_18884_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_87_fu_18908_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_88_fu_18884_p2.read()));
}

void needlemanWunsch::thread_tmp_60_88_fu_19097_p2() {
    tmp_60_88_fu_19097_p2 = (!prev_score_out_0_op_i_88_fu_19077_p2.read().is_01() || !prev_score_out_0_op_i1_89_fu_19051_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_88_fu_19077_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_89_fu_19051_p2.read()));
}

void needlemanWunsch::thread_tmp_60_89_fu_19272_p2() {
    tmp_60_89_fu_19272_p2 = (!prev_score_out_0_op_i_89_fu_19252_p2.read().is_01() || !prev_score_out_0_op_i1_90_fu_19226_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_89_fu_19252_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_90_fu_19226_p2.read()));
}

void needlemanWunsch::thread_tmp_60_8_fu_5315_p2() {
    tmp_60_8_fu_5315_p2 = (!prev_score_out_0_op_i_8_fu_5295_p2.read().is_01() || !prev_score_out_0_op_i1_9_fu_5271_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_8_fu_5295_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_9_fu_5271_p2.read()));
}

void needlemanWunsch::thread_tmp_60_90_fu_19451_p2() {
    tmp_60_90_fu_19451_p2 = (!prev_score_out_0_op_i_90_fu_19431_p2.read().is_01() || !prev_score_out_0_op_i1_91_fu_19407_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_90_fu_19431_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_91_fu_19407_p2.read()));
}

void needlemanWunsch::thread_tmp_60_91_fu_19620_p2() {
    tmp_60_91_fu_19620_p2 = (!prev_score_out_0_op_i_91_fu_19600_p2.read().is_01() || !prev_score_out_0_op_i1_92_fu_19574_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_91_fu_19600_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_92_fu_19574_p2.read()));
}

void needlemanWunsch::thread_tmp_60_92_fu_19795_p2() {
    tmp_60_92_fu_19795_p2 = (!prev_score_out_0_op_i_92_fu_19775_p2.read().is_01() || !prev_score_out_0_op_i1_93_fu_19749_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_92_fu_19775_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_93_fu_19749_p2.read()));
}

void needlemanWunsch::thread_tmp_60_93_fu_19970_p2() {
    tmp_60_93_fu_19970_p2 = (!prev_score_out_0_op_i_93_fu_19950_p2.read().is_01() || !prev_score_out_0_op_i1_94_fu_19924_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_93_fu_19950_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_94_fu_19924_p2.read()));
}

void needlemanWunsch::thread_tmp_60_94_fu_20150_p2() {
    tmp_60_94_fu_20150_p2 = (!prev_score_out_0_op_i_94_fu_20130_p2.read().is_01() || !prev_score_out_0_op_i1_95_fu_20104_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_94_fu_20130_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_95_fu_20104_p2.read()));
}

void needlemanWunsch::thread_tmp_60_95_fu_20319_p2() {
    tmp_60_95_fu_20319_p2 = (!prev_score_out_0_op_i_95_fu_20299_p2.read().is_01() || !prev_score_out_0_op_i1_96_fu_20273_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_95_fu_20299_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_96_fu_20273_p2.read()));
}

void needlemanWunsch::thread_tmp_60_96_fu_20499_p2() {
    tmp_60_96_fu_20499_p2 = (!prev_score_out_0_op_i_96_fu_20479_p2.read().is_01() || !prev_score_out_0_op_i1_97_fu_20455_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_96_fu_20479_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_97_fu_20455_p2.read()));
}

void needlemanWunsch::thread_tmp_60_97_fu_20629_p2() {
    tmp_60_97_fu_20629_p2 = (!prev_score_out_0_op_i_97_fu_20609_p2.read().is_01() || !prev_score_out_0_op_i1_98_fu_20585_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_97_fu_20609_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_98_fu_20585_p2.read()));
}

void needlemanWunsch::thread_tmp_60_98_fu_20764_p2() {
    tmp_60_98_fu_20764_p2 = (!prev_score_out_0_op_i_98_fu_20744_p2.read().is_01() || !phitmp100_fu_20739_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_98_fu_20744_p2.read()) < sc_bigint<8>(phitmp100_fu_20739_p2.read()));
}

void needlemanWunsch::thread_tmp_60_9_fu_5476_p2() {
    tmp_60_9_fu_5476_p2 = (!prev_score_out_0_op_i_9_fu_5456_p2.read().is_01() || !prev_score_out_0_op_i1_s_fu_5430_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_9_fu_5456_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_s_fu_5430_p2.read()));
}

void needlemanWunsch::thread_tmp_60_fu_3046_p1() {
    tmp_60_fu_3046_p1 = esl_zext<8,4>(tmp_52_fu_3035_p3.read());
}

void needlemanWunsch::thread_tmp_60_s_fu_5637_p2() {
    tmp_60_s_fu_5637_p2 = (!prev_score_out_0_op_i_s_fu_5617_p2.read().is_01() || !prev_score_out_0_op_i1_10_fu_5591_p2.read().is_01())? sc_lv<1>(): (sc_bigint<8>(prev_score_out_0_op_i_s_fu_5617_p2.read()) < sc_bigint<8>(prev_score_out_0_op_i1_10_fu_5591_p2.read()));
}

void needlemanWunsch::thread_tmp_64_fu_3050_p1() {
    tmp_64_fu_3050_p1 = esl_zext<8,4>(tmp_56_fu_3040_p2.read());
}

void needlemanWunsch::thread_tmp_68_fu_3054_p2() {
    tmp_68_fu_3054_p2 = (!tmp_60_fu_3046_p1.read().is_01())? sc_lv<8>(): tmp_48_fu_3028_p3.read() >> (unsigned short)tmp_60_fu_3046_p1.read().to_uint();
}

void needlemanWunsch::thread_tmp_6_fu_3164_p2() {
    tmp_6_fu_3164_p2 = (!tmp_84_reg_22239.read().is_01() || !tmp_80_fu_3144_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_84_reg_22239.read() == tmp_80_fu_3144_p1.read());
}

void needlemanWunsch::thread_tmp_72_fu_3060_p2() {
    tmp_72_fu_3060_p2 = (!tmp_64_fu_3050_p1.read().is_01())? sc_lv<8>(): ap_const_lv8_FF >> (unsigned short)tmp_64_fu_3050_p1.read().to_uint();
}

void needlemanWunsch::thread_tmp_76_fu_3140_p2() {
    tmp_76_fu_3140_p2 = (tmp_68_reg_22229.read() & tmp_72_reg_22234.read());
}

void needlemanWunsch::thread_tmp_7_fu_20718_p2() {
    tmp_7_fu_20718_p2 = (!max_score_3_fu_20715_p1.read().is_01() || !max_score_reg_2341.read().is_01())? sc_lv<1>(): (sc_bigint<32>(max_score_3_fu_20715_p1.read()) > sc_bigint<32>(max_score_reg_2341.read()));
}

void needlemanWunsch::thread_tmp_80_fu_3144_p1() {
    tmp_80_fu_3144_p1 = tmp_76_fu_3140_p2.read().range(2-1, 0);
}

void needlemanWunsch::thread_tmp_84_fu_3066_p1() {
    tmp_84_fu_3066_p1 = read_r_Dout_A.read().range(2-1, 0);
}

void needlemanWunsch::thread_tmp_8_fu_3156_p3() {
    tmp_8_fu_3156_p3 = (!tmp_5_fu_3150_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_5_fu_3150_p2.read()[0].to_bool())? ap_const_lv8_FE: grp_fu_2603_p2.read());
}

void needlemanWunsch::thread_tmp_96_fu_3070_p1() {
    tmp_96_fu_3070_p1 = read_r_Dout_B.read().range(2-1, 0);
}

void needlemanWunsch::thread_tmp_9_fu_2978_p3() {
    tmp_9_fu_2978_p3 = esl_concat<2,1>(tmp_3_fu_2974_p1.read(), ap_const_lv1_0);
}

void needlemanWunsch::thread_tmp_fu_2962_p2() {
    tmp_fu_2962_p2 = (!prev_orig_out_phi_fu_2321_p4.read().is_01() || !ap_const_lv20_F4241.is_01())? sc_lv<1>(): (sc_biguint<20>(prev_orig_out_phi_fu_2321_p4.read()) < sc_biguint<20>(ap_const_lv20_F4241));
}

void needlemanWunsch::thread_tmp_s_fu_20807_p2() {
    tmp_s_fu_20807_p2 = (!max_score_4_fu_20804_p1.read().is_01() || !max_score_1_reg_35257.read().is_01())? sc_lv<1>(): (sc_bigint<32>(max_score_4_fu_20804_p1.read()) > sc_bigint<32>(max_score_1_reg_35257.read()));
}

void needlemanWunsch::thread_up_orig_18_fu_6933_p3() {
    up_orig_18_fu_6933_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_19_reg_25042.read());
}

void needlemanWunsch::thread_up_orig_19_fu_7105_p3() {
    up_orig_19_fu_7105_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_20_reg_25048.read());
}

void needlemanWunsch::thread_up_orig_21_fu_7437_p3() {
    up_orig_21_fu_7437_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_22_reg_25151.read());
}

void needlemanWunsch::thread_up_orig_22_fu_7609_p3() {
    up_orig_22_fu_7609_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_23_reg_25157.read());
}

void needlemanWunsch::thread_up_orig_24_fu_7941_p3() {
    up_orig_24_fu_7941_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_25_reg_25262.read());
}

void needlemanWunsch::thread_up_orig_25_fu_8115_p3() {
    up_orig_25_fu_8115_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_26_reg_25268.read());
}

void needlemanWunsch::thread_up_orig_27_fu_8449_p3() {
    up_orig_27_fu_8449_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_28_reg_25377.read());
}

void needlemanWunsch::thread_up_orig_28_fu_8624_p3() {
    up_orig_28_fu_8624_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_29_reg_25383.read());
}

void needlemanWunsch::thread_up_orig_30_fu_8955_p3() {
    up_orig_30_fu_8955_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_31_reg_25498.read());
}

void needlemanWunsch::thread_up_orig_31_fu_9129_p3() {
    up_orig_31_fu_9129_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_32_reg_25504.read());
}

void needlemanWunsch::thread_up_orig_33_fu_9462_p3() {
    up_orig_33_fu_9462_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_34_reg_25619.read());
}

void needlemanWunsch::thread_up_orig_34_fu_9636_p3() {
    up_orig_34_fu_9636_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_35_reg_25625.read());
}

void needlemanWunsch::thread_up_orig_36_fu_9968_p3() {
    up_orig_36_fu_9968_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_37_reg_25742.read());
}

void needlemanWunsch::thread_up_orig_37_fu_10142_p3() {
    up_orig_37_fu_10142_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_38_reg_25748.read());
}

void needlemanWunsch::thread_up_orig_39_fu_10477_p3() {
    up_orig_39_fu_10477_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_40_reg_25868.read());
}

void needlemanWunsch::thread_up_orig_40_fu_10650_p3() {
    up_orig_40_fu_10650_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_41_reg_25874.read());
}

void needlemanWunsch::thread_up_orig_42_fu_10984_p3() {
    up_orig_42_fu_10984_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_43_reg_25991.read());
}

void needlemanWunsch::thread_up_orig_43_fu_11158_p3() {
    up_orig_43_fu_11158_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_44_reg_25997.read());
}

void needlemanWunsch::thread_up_orig_45_fu_11491_p3() {
    up_orig_45_fu_11491_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_46_reg_26117.read());
}

void needlemanWunsch::thread_up_orig_46_fu_11666_p3() {
    up_orig_46_fu_11666_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_47_reg_26123.read());
}

void needlemanWunsch::thread_up_orig_48_fu_12001_p3() {
    up_orig_48_fu_12001_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: orig1_load_49_reg_26240.read());
}

void needlemanWunsch::thread_up_orig_49_fu_12172_p3() {
    up_orig_49_fu_12172_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_50_reg_26246.read());
}

void needlemanWunsch::thread_up_orig_50_fu_12345_p3() {
    up_orig_50_fu_12345_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_51_reg_26306.read());
}

void needlemanWunsch::thread_up_orig_51_fu_12516_p3() {
    up_orig_51_fu_12516_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_52_reg_26361.read());
}

void needlemanWunsch::thread_up_orig_52_fu_12691_p3() {
    up_orig_52_fu_12691_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_53_reg_26367.read());
}

void needlemanWunsch::thread_up_orig_54_fu_13024_p3() {
    up_orig_54_fu_13024_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_55_reg_26478.read());
}

void needlemanWunsch::thread_up_orig_55_fu_13195_p3() {
    up_orig_55_fu_13195_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_56_reg_26484.read());
}

void needlemanWunsch::thread_up_orig_56_fu_13370_p3() {
    up_orig_56_fu_13370_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_57_reg_26544.read());
}

void needlemanWunsch::thread_up_orig_57_fu_13545_p3() {
    up_orig_57_fu_13545_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_58_reg_26593.read());
}

void needlemanWunsch::thread_up_orig_58_fu_13716_p3() {
    up_orig_58_fu_13716_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_59_reg_26599.read());
}

void needlemanWunsch::thread_up_orig_59_fu_13890_p3() {
    up_orig_59_fu_13890_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_60_reg_26665.read());
}

void needlemanWunsch::thread_up_orig_60_fu_14064_p3() {
    up_orig_60_fu_14064_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_61_reg_26720.read());
}

void needlemanWunsch::thread_up_orig_61_fu_14237_p3() {
    up_orig_61_fu_14237_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_62_reg_26726.read());
}

void needlemanWunsch::thread_up_orig_62_fu_14412_p3() {
    up_orig_62_fu_14412_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_63_reg_26791.read());
}

void needlemanWunsch::thread_up_orig_63_fu_14586_p3() {
    up_orig_63_fu_14586_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_64_reg_26840.read());
}

void needlemanWunsch::thread_up_orig_64_fu_14761_p3() {
    up_orig_64_fu_14761_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_65_reg_26846.read());
}

void needlemanWunsch::thread_up_orig_65_fu_14936_p3() {
    up_orig_65_fu_14936_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_66_reg_26911.read());
}

void needlemanWunsch::thread_up_orig_66_fu_15111_p3() {
    up_orig_66_fu_15111_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_67_reg_26966.read());
}

void needlemanWunsch::thread_up_orig_67_fu_15286_p3() {
    up_orig_67_fu_15286_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_68_reg_26972.read());
}

void needlemanWunsch::thread_up_orig_68_fu_15461_p3() {
    up_orig_68_fu_15461_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_69_reg_27032.read());
}

void needlemanWunsch::thread_up_orig_69_fu_15636_p3() {
    up_orig_69_fu_15636_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_70_reg_27087.read());
}

void needlemanWunsch::thread_up_orig_70_fu_15811_p3() {
    up_orig_70_fu_15811_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_71_reg_27093.read());
}

void needlemanWunsch::thread_up_orig_71_fu_15986_p3() {
    up_orig_71_fu_15986_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_72_reg_27207.read());
}

void needlemanWunsch::thread_up_orig_72_fu_16160_p3() {
    up_orig_72_fu_16160_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_73_reg_27326.read());
}

void needlemanWunsch::thread_up_orig_73_fu_16334_p3() {
    up_orig_73_fu_16334_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_74_reg_27446.read());
}

void needlemanWunsch::thread_up_orig_74_fu_16509_p3() {
    up_orig_74_fu_16509_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_75_reg_27560.read());
}

void needlemanWunsch::thread_up_orig_75_fu_16684_p3() {
    up_orig_75_fu_16684_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_76_reg_27685.read());
}

void needlemanWunsch::thread_up_orig_76_fu_16858_p3() {
    up_orig_76_fu_16858_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_77_reg_27801.read());
}

void needlemanWunsch::thread_up_orig_77_fu_17031_p3() {
    up_orig_77_fu_17031_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_78_reg_27918.read());
}

void needlemanWunsch::thread_up_orig_78_fu_17205_p3() {
    up_orig_78_fu_17205_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_79_reg_28034.read());
}

void needlemanWunsch::thread_up_orig_79_fu_17380_p3() {
    up_orig_79_fu_17380_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_80_reg_28151.read());
}

void needlemanWunsch::thread_up_orig_80_fu_17553_p3() {
    up_orig_80_fu_17553_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_81_reg_28265.read());
}

void needlemanWunsch::thread_up_orig_81_fu_17727_p3() {
    up_orig_81_fu_17727_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_82_reg_28387.read());
}

void needlemanWunsch::thread_up_orig_82_fu_17900_p3() {
    up_orig_82_fu_17900_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_83_reg_28503.read());
}

void needlemanWunsch::thread_up_orig_83_fu_18073_p3() {
    up_orig_83_fu_18073_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_84_reg_28628.read());
}

void needlemanWunsch::thread_up_orig_84_fu_18248_p3() {
    up_orig_84_fu_18248_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_85_reg_28747.read());
}

void needlemanWunsch::thread_up_orig_85_fu_18423_p3() {
    up_orig_85_fu_18423_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_86_reg_28862.read());
}

void needlemanWunsch::thread_up_orig_86_fu_18598_p3() {
    up_orig_86_fu_18598_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_87_reg_28981.read());
}

void needlemanWunsch::thread_up_orig_87_fu_18772_p3() {
    up_orig_87_fu_18772_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_88_reg_29098.read());
}

void needlemanWunsch::thread_up_orig_88_fu_18946_p3() {
    up_orig_88_fu_18946_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_89_reg_29209.read());
}

void needlemanWunsch::thread_up_orig_89_fu_19120_p3() {
    up_orig_89_fu_19120_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_90_reg_29334.read());
}

void needlemanWunsch::thread_up_orig_90_fu_19295_p3() {
    up_orig_90_fu_19295_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_91_reg_29453.read());
}

void needlemanWunsch::thread_up_orig_91_fu_19469_p3() {
    up_orig_91_fu_19469_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_92_reg_29573.read());
}

void needlemanWunsch::thread_up_orig_92_fu_19643_p3() {
    up_orig_92_fu_19643_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_93_reg_29684.read());
}

void needlemanWunsch::thread_up_orig_93_fu_19818_p3() {
    up_orig_93_fu_19818_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_94_reg_29804.read());
}

void needlemanWunsch::thread_up_orig_94_fu_19993_p3() {
    up_orig_94_fu_19993_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_95_reg_29918.read());
}

void needlemanWunsch::thread_up_orig_95_fu_20168_p3() {
    up_orig_95_fu_20168_p3 = (!ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].is_01())? sc_lv<20>(): ((ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()[0].to_bool())? ap_const_lv20_0: orig1_load_96_reg_30038.read());
}

}

