#include "needlemanWunsch.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void needlemanWunsch::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st207_fsm_101.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st207_fsm_101.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_return() {
    ap_return = max_orig_reg_2236.read();
}

void needlemanWunsch::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void needlemanWunsch::thread_ap_sig_bdd_1094() {
    ap_sig_bdd_1094 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void needlemanWunsch::thread_ap_sig_bdd_143() {
    ap_sig_bdd_143 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void needlemanWunsch::thread_ap_sig_bdd_189() {
    ap_sig_bdd_189 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void needlemanWunsch::thread_ap_sig_bdd_197() {
    ap_sig_bdd_197 = (esl_seteq<1,1,1>(ref_genome_TVALID.read(), ap_const_logic_0) && !esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0));
}

void needlemanWunsch::thread_ap_sig_bdd_19928() {
    ap_sig_bdd_19928 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(101, 101));
}

void needlemanWunsch::thread_ap_sig_bdd_213() {
    ap_sig_bdd_213 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(8, 8));
}

void needlemanWunsch::thread_ap_sig_bdd_222() {
    ap_sig_bdd_222 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(9, 9));
}

void needlemanWunsch::thread_ap_sig_bdd_2296() {
    ap_sig_bdd_2296 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(27, 27));
}

void needlemanWunsch::thread_ap_sig_bdd_231() {
    ap_sig_bdd_231 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(10, 10));
}

void needlemanWunsch::thread_ap_sig_bdd_2340() {
    ap_sig_bdd_2340 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(29, 29));
}

void needlemanWunsch::thread_ap_sig_bdd_2388() {
    ap_sig_bdd_2388 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(31, 31));
}

void needlemanWunsch::thread_ap_sig_bdd_240() {
    ap_sig_bdd_240 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(14, 14));
}

void needlemanWunsch::thread_ap_sig_bdd_2432() {
    ap_sig_bdd_2432 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(33, 33));
}

void needlemanWunsch::thread_ap_sig_bdd_2478() {
    ap_sig_bdd_2478 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(35, 35));
}

void needlemanWunsch::thread_ap_sig_bdd_249() {
    ap_sig_bdd_249 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(26, 26));
}

void needlemanWunsch::thread_ap_sig_bdd_2524() {
    ap_sig_bdd_2524 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(37, 37));
}

void needlemanWunsch::thread_ap_sig_bdd_2573() {
    ap_sig_bdd_2573 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(39, 39));
}

void needlemanWunsch::thread_ap_sig_bdd_260() {
    ap_sig_bdd_260 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(4, 4));
}

void needlemanWunsch::thread_ap_sig_bdd_2618() {
    ap_sig_bdd_2618 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(41, 41));
}

void needlemanWunsch::thread_ap_sig_bdd_2651() {
    ap_sig_bdd_2651 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(42, 42));
}

void needlemanWunsch::thread_ap_sig_bdd_2712() {
    ap_sig_bdd_2712 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(45, 45));
}

void needlemanWunsch::thread_ap_sig_bdd_272() {
    ap_sig_bdd_272 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(12, 12));
}

void needlemanWunsch::thread_ap_sig_bdd_2747() {
    ap_sig_bdd_2747 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(46, 46));
}

void needlemanWunsch::thread_ap_sig_bdd_280() {
    ap_sig_bdd_280 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(20, 20));
}

void needlemanWunsch::thread_ap_sig_bdd_2806() {
    ap_sig_bdd_2806 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(49, 49));
}

void needlemanWunsch::thread_ap_sig_bdd_2841() {
    ap_sig_bdd_2841 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(50, 50));
}

void needlemanWunsch::thread_ap_sig_bdd_2862() {
    ap_sig_bdd_2862 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(51, 51));
}

void needlemanWunsch::thread_ap_sig_bdd_293() {
    ap_sig_bdd_293 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(5, 5));
}

void needlemanWunsch::thread_ap_sig_bdd_2946() {
    ap_sig_bdd_2946 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(55, 55));
}

void needlemanWunsch::thread_ap_sig_bdd_2980() {
    ap_sig_bdd_2980 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(56, 56));
}

void needlemanWunsch::thread_ap_sig_bdd_3004() {
    ap_sig_bdd_3004 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(57, 57));
}

void needlemanWunsch::thread_ap_sig_bdd_3038() {
    ap_sig_bdd_3038 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(58, 58));
}

void needlemanWunsch::thread_ap_sig_bdd_304() {
    ap_sig_bdd_304 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void needlemanWunsch::thread_ap_sig_bdd_3061() {
    ap_sig_bdd_3061 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(59, 59));
}

void needlemanWunsch::thread_ap_sig_bdd_3095() {
    ap_sig_bdd_3095 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(60, 60));
}

void needlemanWunsch::thread_ap_sig_bdd_3118() {
    ap_sig_bdd_3118 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(61, 61));
}

void needlemanWunsch::thread_ap_sig_bdd_312() {
    ap_sig_bdd_312 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(15, 15));
}

void needlemanWunsch::thread_ap_sig_bdd_3150() {
    ap_sig_bdd_3150 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(62, 62));
}

void needlemanWunsch::thread_ap_sig_bdd_3170() {
    ap_sig_bdd_3170 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(63, 63));
}

void needlemanWunsch::thread_ap_sig_bdd_3202() {
    ap_sig_bdd_3202 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(64, 64));
}

void needlemanWunsch::thread_ap_sig_bdd_321() {
    ap_sig_bdd_321 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(52, 52));
}

void needlemanWunsch::thread_ap_sig_bdd_3225() {
    ap_sig_bdd_3225 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(65, 65));
}

void needlemanWunsch::thread_ap_sig_bdd_3257() {
    ap_sig_bdd_3257 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(66, 66));
}

void needlemanWunsch::thread_ap_sig_bdd_3280() {
    ap_sig_bdd_3280 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(67, 67));
}

void needlemanWunsch::thread_ap_sig_bdd_3328() {
    ap_sig_bdd_3328 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(69, 69));
}

void needlemanWunsch::thread_ap_sig_bdd_334() {
    ap_sig_bdd_334 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(11, 11));
}

void needlemanWunsch::thread_ap_sig_bdd_3362() {
    ap_sig_bdd_3362 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(70, 70));
}

void needlemanWunsch::thread_ap_sig_bdd_3385() {
    ap_sig_bdd_3385 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(71, 71));
}

void needlemanWunsch::thread_ap_sig_bdd_3419() {
    ap_sig_bdd_3419 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(72, 72));
}

void needlemanWunsch::thread_ap_sig_bdd_343() {
    ap_sig_bdd_343 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(16, 16));
}

void needlemanWunsch::thread_ap_sig_bdd_3443() {
    ap_sig_bdd_3443 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(73, 73));
}

void needlemanWunsch::thread_ap_sig_bdd_3477() {
    ap_sig_bdd_3477 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(74, 74));
}

void needlemanWunsch::thread_ap_sig_bdd_3498() {
    ap_sig_bdd_3498 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(75, 75));
}

void needlemanWunsch::thread_ap_sig_bdd_352() {
    ap_sig_bdd_352 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(32, 32));
}

void needlemanWunsch::thread_ap_sig_bdd_3532() {
    ap_sig_bdd_3532 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(76, 76));
}

void needlemanWunsch::thread_ap_sig_bdd_3556() {
    ap_sig_bdd_3556 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(77, 77));
}

void needlemanWunsch::thread_ap_sig_bdd_3590() {
    ap_sig_bdd_3590 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(78, 78));
}

void needlemanWunsch::thread_ap_sig_bdd_3613() {
    ap_sig_bdd_3613 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(79, 79));
}

void needlemanWunsch::thread_ap_sig_bdd_363() {
    ap_sig_bdd_363 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(17, 17));
}

void needlemanWunsch::thread_ap_sig_bdd_3659() {
    ap_sig_bdd_3659 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(81, 81));
}

void needlemanWunsch::thread_ap_sig_bdd_3693() {
    ap_sig_bdd_3693 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(82, 82));
}

void needlemanWunsch::thread_ap_sig_bdd_371() {
    ap_sig_bdd_371 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(53, 53));
}

void needlemanWunsch::thread_ap_sig_bdd_3714() {
    ap_sig_bdd_3714 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(83, 83));
}

void needlemanWunsch::thread_ap_sig_bdd_3748() {
    ap_sig_bdd_3748 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(84, 84));
}

void needlemanWunsch::thread_ap_sig_bdd_3772() {
    ap_sig_bdd_3772 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(85, 85));
}

void needlemanWunsch::thread_ap_sig_bdd_381() {
    ap_sig_bdd_381 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(18, 18));
}

void needlemanWunsch::thread_ap_sig_bdd_3817() {
    ap_sig_bdd_3817 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(87, 87));
}

void needlemanWunsch::thread_ap_sig_bdd_3851() {
    ap_sig_bdd_3851 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(88, 88));
}

void needlemanWunsch::thread_ap_sig_bdd_3875() {
    ap_sig_bdd_3875 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(89, 89));
}

void needlemanWunsch::thread_ap_sig_bdd_390() {
    ap_sig_bdd_390 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(54, 54));
}

void needlemanWunsch::thread_ap_sig_bdd_3909() {
    ap_sig_bdd_3909 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(90, 90));
}

void needlemanWunsch::thread_ap_sig_bdd_3929() {
    ap_sig_bdd_3929 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(91, 91));
}

void needlemanWunsch::thread_ap_sig_bdd_3975() {
    ap_sig_bdd_3975 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(93, 93));
}

void needlemanWunsch::thread_ap_sig_bdd_4009() {
    ap_sig_bdd_4009 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(94, 94));
}

void needlemanWunsch::thread_ap_sig_bdd_4032() {
    ap_sig_bdd_4032 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(95, 95));
}

void needlemanWunsch::thread_ap_sig_bdd_404() {
    ap_sig_bdd_404 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(19, 19));
}

void needlemanWunsch::thread_ap_sig_bdd_4066() {
    ap_sig_bdd_4066 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(96, 96));
}

void needlemanWunsch::thread_ap_sig_bdd_4089() {
    ap_sig_bdd_4089 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(97, 97));
}

void needlemanWunsch::thread_ap_sig_bdd_413() {
    ap_sig_bdd_413 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(7, 7));
}

void needlemanWunsch::thread_ap_sig_bdd_4132() {
    ap_sig_bdd_4132 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(99, 99));
}

void needlemanWunsch::thread_ap_sig_bdd_4166() {
    ap_sig_bdd_4166 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(100, 100));
}

void needlemanWunsch::thread_ap_sig_bdd_423() {
    ap_sig_bdd_423 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(21, 21));
}

void needlemanWunsch::thread_ap_sig_bdd_432() {
    ap_sig_bdd_432 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(22, 22));
}

void needlemanWunsch::thread_ap_sig_bdd_442() {
    ap_sig_bdd_442 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(23, 23));
}

void needlemanWunsch::thread_ap_sig_bdd_452() {
    ap_sig_bdd_452 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(24, 24));
}

void needlemanWunsch::thread_ap_sig_bdd_461() {
    ap_sig_bdd_461 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(25, 25));
}

void needlemanWunsch::thread_ap_sig_bdd_471() {
    ap_sig_bdd_471 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(38, 38));
}

void needlemanWunsch::thread_ap_sig_bdd_483() {
    ap_sig_bdd_483 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(28, 28));
}

void needlemanWunsch::thread_ap_sig_bdd_492() {
    ap_sig_bdd_492 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(30, 30));
}

void needlemanWunsch::thread_ap_sig_bdd_502() {
    ap_sig_bdd_502 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(13, 13));
}

void needlemanWunsch::thread_ap_sig_bdd_515() {
    ap_sig_bdd_515 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(34, 34));
}

void needlemanWunsch::thread_ap_sig_bdd_524() {
    ap_sig_bdd_524 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(36, 36));
}

void needlemanWunsch::thread_ap_sig_bdd_537() {
    ap_sig_bdd_537 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(40, 40));
}

void needlemanWunsch::thread_ap_sig_bdd_551() {
    ap_sig_bdd_551 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(43, 43));
}

void needlemanWunsch::thread_ap_sig_bdd_560() {
    ap_sig_bdd_560 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(47, 47));
}

void needlemanWunsch::thread_ap_sig_bdd_570() {
    ap_sig_bdd_570 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(48, 48));
}

void needlemanWunsch::thread_ap_sig_bdd_590() {
    ap_sig_bdd_590 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(80, 80));
}

void needlemanWunsch::thread_ap_sig_bdd_601() {
    ap_sig_bdd_601 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(6, 6));
}

void needlemanWunsch::thread_ap_sig_bdd_611() {
    ap_sig_bdd_611 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(44, 44));
}

void needlemanWunsch::thread_ap_sig_bdd_626() {
    ap_sig_bdd_626 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(98, 98));
}

void needlemanWunsch::thread_ap_sig_bdd_643() {
    ap_sig_bdd_643 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(68, 68));
}

void needlemanWunsch::thread_ap_sig_bdd_655() {
    ap_sig_bdd_655 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(86, 86));
}

void needlemanWunsch::thread_ap_sig_bdd_667() {
    ap_sig_bdd_667 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(92, 92));
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg0_fsm_1() {
    if (ap_sig_bdd_1094.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg10_fsm_11() {
    if (ap_sig_bdd_334.read()) {
        ap_sig_cseq_ST_pp0_stg10_fsm_11 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg10_fsm_11 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg11_fsm_12() {
    if (ap_sig_bdd_272.read()) {
        ap_sig_cseq_ST_pp0_stg11_fsm_12 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg11_fsm_12 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg12_fsm_13() {
    if (ap_sig_bdd_502.read()) {
        ap_sig_cseq_ST_pp0_stg12_fsm_13 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg12_fsm_13 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg13_fsm_14() {
    if (ap_sig_bdd_240.read()) {
        ap_sig_cseq_ST_pp0_stg13_fsm_14 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg13_fsm_14 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg14_fsm_15() {
    if (ap_sig_bdd_312.read()) {
        ap_sig_cseq_ST_pp0_stg14_fsm_15 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg14_fsm_15 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg15_fsm_16() {
    if (ap_sig_bdd_343.read()) {
        ap_sig_cseq_ST_pp0_stg15_fsm_16 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg15_fsm_16 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg16_fsm_17() {
    if (ap_sig_bdd_363.read()) {
        ap_sig_cseq_ST_pp0_stg16_fsm_17 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg16_fsm_17 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg17_fsm_18() {
    if (ap_sig_bdd_381.read()) {
        ap_sig_cseq_ST_pp0_stg17_fsm_18 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg17_fsm_18 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg18_fsm_19() {
    if (ap_sig_bdd_404.read()) {
        ap_sig_cseq_ST_pp0_stg18_fsm_19 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg18_fsm_19 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg19_fsm_20() {
    if (ap_sig_bdd_280.read()) {
        ap_sig_cseq_ST_pp0_stg19_fsm_20 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg19_fsm_20 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg1_fsm_2() {
    if (ap_sig_bdd_189.read()) {
        ap_sig_cseq_ST_pp0_stg1_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg1_fsm_2 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg20_fsm_21() {
    if (ap_sig_bdd_423.read()) {
        ap_sig_cseq_ST_pp0_stg20_fsm_21 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg20_fsm_21 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg21_fsm_22() {
    if (ap_sig_bdd_432.read()) {
        ap_sig_cseq_ST_pp0_stg21_fsm_22 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg21_fsm_22 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg22_fsm_23() {
    if (ap_sig_bdd_442.read()) {
        ap_sig_cseq_ST_pp0_stg22_fsm_23 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg22_fsm_23 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg23_fsm_24() {
    if (ap_sig_bdd_452.read()) {
        ap_sig_cseq_ST_pp0_stg23_fsm_24 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg23_fsm_24 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg24_fsm_25() {
    if (ap_sig_bdd_461.read()) {
        ap_sig_cseq_ST_pp0_stg24_fsm_25 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg24_fsm_25 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg25_fsm_26() {
    if (ap_sig_bdd_249.read()) {
        ap_sig_cseq_ST_pp0_stg25_fsm_26 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg25_fsm_26 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg26_fsm_27() {
    if (ap_sig_bdd_2296.read()) {
        ap_sig_cseq_ST_pp0_stg26_fsm_27 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg26_fsm_27 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg27_fsm_28() {
    if (ap_sig_bdd_483.read()) {
        ap_sig_cseq_ST_pp0_stg27_fsm_28 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg27_fsm_28 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg28_fsm_29() {
    if (ap_sig_bdd_2340.read()) {
        ap_sig_cseq_ST_pp0_stg28_fsm_29 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg28_fsm_29 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg29_fsm_30() {
    if (ap_sig_bdd_492.read()) {
        ap_sig_cseq_ST_pp0_stg29_fsm_30 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg29_fsm_30 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg2_fsm_3() {
    if (ap_sig_bdd_304.read()) {
        ap_sig_cseq_ST_pp0_stg2_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg2_fsm_3 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg30_fsm_31() {
    if (ap_sig_bdd_2388.read()) {
        ap_sig_cseq_ST_pp0_stg30_fsm_31 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg30_fsm_31 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg31_fsm_32() {
    if (ap_sig_bdd_352.read()) {
        ap_sig_cseq_ST_pp0_stg31_fsm_32 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg31_fsm_32 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg32_fsm_33() {
    if (ap_sig_bdd_2432.read()) {
        ap_sig_cseq_ST_pp0_stg32_fsm_33 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg32_fsm_33 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg33_fsm_34() {
    if (ap_sig_bdd_515.read()) {
        ap_sig_cseq_ST_pp0_stg33_fsm_34 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg33_fsm_34 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg34_fsm_35() {
    if (ap_sig_bdd_2478.read()) {
        ap_sig_cseq_ST_pp0_stg34_fsm_35 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg34_fsm_35 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg35_fsm_36() {
    if (ap_sig_bdd_524.read()) {
        ap_sig_cseq_ST_pp0_stg35_fsm_36 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg35_fsm_36 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg36_fsm_37() {
    if (ap_sig_bdd_2524.read()) {
        ap_sig_cseq_ST_pp0_stg36_fsm_37 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg36_fsm_37 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg37_fsm_38() {
    if (ap_sig_bdd_471.read()) {
        ap_sig_cseq_ST_pp0_stg37_fsm_38 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg37_fsm_38 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg38_fsm_39() {
    if (ap_sig_bdd_2573.read()) {
        ap_sig_cseq_ST_pp0_stg38_fsm_39 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg38_fsm_39 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg39_fsm_40() {
    if (ap_sig_bdd_537.read()) {
        ap_sig_cseq_ST_pp0_stg39_fsm_40 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg39_fsm_40 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg3_fsm_4() {
    if (ap_sig_bdd_260.read()) {
        ap_sig_cseq_ST_pp0_stg3_fsm_4 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg3_fsm_4 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg40_fsm_41() {
    if (ap_sig_bdd_2618.read()) {
        ap_sig_cseq_ST_pp0_stg40_fsm_41 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg40_fsm_41 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg41_fsm_42() {
    if (ap_sig_bdd_2651.read()) {
        ap_sig_cseq_ST_pp0_stg41_fsm_42 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg41_fsm_42 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg42_fsm_43() {
    if (ap_sig_bdd_551.read()) {
        ap_sig_cseq_ST_pp0_stg42_fsm_43 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg42_fsm_43 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg43_fsm_44() {
    if (ap_sig_bdd_611.read()) {
        ap_sig_cseq_ST_pp0_stg43_fsm_44 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg43_fsm_44 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg44_fsm_45() {
    if (ap_sig_bdd_2712.read()) {
        ap_sig_cseq_ST_pp0_stg44_fsm_45 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg44_fsm_45 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg45_fsm_46() {
    if (ap_sig_bdd_2747.read()) {
        ap_sig_cseq_ST_pp0_stg45_fsm_46 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg45_fsm_46 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg46_fsm_47() {
    if (ap_sig_bdd_560.read()) {
        ap_sig_cseq_ST_pp0_stg46_fsm_47 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg46_fsm_47 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg47_fsm_48() {
    if (ap_sig_bdd_570.read()) {
        ap_sig_cseq_ST_pp0_stg47_fsm_48 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg47_fsm_48 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg48_fsm_49() {
    if (ap_sig_bdd_2806.read()) {
        ap_sig_cseq_ST_pp0_stg48_fsm_49 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg48_fsm_49 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg49_fsm_50() {
    if (ap_sig_bdd_2841.read()) {
        ap_sig_cseq_ST_pp0_stg49_fsm_50 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg49_fsm_50 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg4_fsm_5() {
    if (ap_sig_bdd_293.read()) {
        ap_sig_cseq_ST_pp0_stg4_fsm_5 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg4_fsm_5 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg50_fsm_51() {
    if (ap_sig_bdd_2862.read()) {
        ap_sig_cseq_ST_pp0_stg50_fsm_51 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg50_fsm_51 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg51_fsm_52() {
    if (ap_sig_bdd_321.read()) {
        ap_sig_cseq_ST_pp0_stg51_fsm_52 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg51_fsm_52 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg52_fsm_53() {
    if (ap_sig_bdd_371.read()) {
        ap_sig_cseq_ST_pp0_stg52_fsm_53 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg52_fsm_53 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg53_fsm_54() {
    if (ap_sig_bdd_390.read()) {
        ap_sig_cseq_ST_pp0_stg53_fsm_54 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg53_fsm_54 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg54_fsm_55() {
    if (ap_sig_bdd_2946.read()) {
        ap_sig_cseq_ST_pp0_stg54_fsm_55 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg54_fsm_55 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg55_fsm_56() {
    if (ap_sig_bdd_2980.read()) {
        ap_sig_cseq_ST_pp0_stg55_fsm_56 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg55_fsm_56 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg56_fsm_57() {
    if (ap_sig_bdd_3004.read()) {
        ap_sig_cseq_ST_pp0_stg56_fsm_57 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg56_fsm_57 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg57_fsm_58() {
    if (ap_sig_bdd_3038.read()) {
        ap_sig_cseq_ST_pp0_stg57_fsm_58 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg57_fsm_58 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg58_fsm_59() {
    if (ap_sig_bdd_3061.read()) {
        ap_sig_cseq_ST_pp0_stg58_fsm_59 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg58_fsm_59 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg59_fsm_60() {
    if (ap_sig_bdd_3095.read()) {
        ap_sig_cseq_ST_pp0_stg59_fsm_60 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg59_fsm_60 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg5_fsm_6() {
    if (ap_sig_bdd_601.read()) {
        ap_sig_cseq_ST_pp0_stg5_fsm_6 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg5_fsm_6 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg60_fsm_61() {
    if (ap_sig_bdd_3118.read()) {
        ap_sig_cseq_ST_pp0_stg60_fsm_61 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg60_fsm_61 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg61_fsm_62() {
    if (ap_sig_bdd_3150.read()) {
        ap_sig_cseq_ST_pp0_stg61_fsm_62 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg61_fsm_62 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg62_fsm_63() {
    if (ap_sig_bdd_3170.read()) {
        ap_sig_cseq_ST_pp0_stg62_fsm_63 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg62_fsm_63 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg63_fsm_64() {
    if (ap_sig_bdd_3202.read()) {
        ap_sig_cseq_ST_pp0_stg63_fsm_64 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg63_fsm_64 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg64_fsm_65() {
    if (ap_sig_bdd_3225.read()) {
        ap_sig_cseq_ST_pp0_stg64_fsm_65 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg64_fsm_65 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg65_fsm_66() {
    if (ap_sig_bdd_3257.read()) {
        ap_sig_cseq_ST_pp0_stg65_fsm_66 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg65_fsm_66 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg66_fsm_67() {
    if (ap_sig_bdd_3280.read()) {
        ap_sig_cseq_ST_pp0_stg66_fsm_67 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg66_fsm_67 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg67_fsm_68() {
    if (ap_sig_bdd_643.read()) {
        ap_sig_cseq_ST_pp0_stg67_fsm_68 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg67_fsm_68 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg68_fsm_69() {
    if (ap_sig_bdd_3328.read()) {
        ap_sig_cseq_ST_pp0_stg68_fsm_69 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg68_fsm_69 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg69_fsm_70() {
    if (ap_sig_bdd_3362.read()) {
        ap_sig_cseq_ST_pp0_stg69_fsm_70 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg69_fsm_70 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg6_fsm_7() {
    if (ap_sig_bdd_413.read()) {
        ap_sig_cseq_ST_pp0_stg6_fsm_7 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg6_fsm_7 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg70_fsm_71() {
    if (ap_sig_bdd_3385.read()) {
        ap_sig_cseq_ST_pp0_stg70_fsm_71 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg70_fsm_71 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg71_fsm_72() {
    if (ap_sig_bdd_3419.read()) {
        ap_sig_cseq_ST_pp0_stg71_fsm_72 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg71_fsm_72 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg72_fsm_73() {
    if (ap_sig_bdd_3443.read()) {
        ap_sig_cseq_ST_pp0_stg72_fsm_73 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg72_fsm_73 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg73_fsm_74() {
    if (ap_sig_bdd_3477.read()) {
        ap_sig_cseq_ST_pp0_stg73_fsm_74 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg73_fsm_74 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg74_fsm_75() {
    if (ap_sig_bdd_3498.read()) {
        ap_sig_cseq_ST_pp0_stg74_fsm_75 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg74_fsm_75 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg75_fsm_76() {
    if (ap_sig_bdd_3532.read()) {
        ap_sig_cseq_ST_pp0_stg75_fsm_76 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg75_fsm_76 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg76_fsm_77() {
    if (ap_sig_bdd_3556.read()) {
        ap_sig_cseq_ST_pp0_stg76_fsm_77 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg76_fsm_77 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg77_fsm_78() {
    if (ap_sig_bdd_3590.read()) {
        ap_sig_cseq_ST_pp0_stg77_fsm_78 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg77_fsm_78 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg78_fsm_79() {
    if (ap_sig_bdd_3613.read()) {
        ap_sig_cseq_ST_pp0_stg78_fsm_79 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg78_fsm_79 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg79_fsm_80() {
    if (ap_sig_bdd_590.read()) {
        ap_sig_cseq_ST_pp0_stg79_fsm_80 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg79_fsm_80 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg7_fsm_8() {
    if (ap_sig_bdd_213.read()) {
        ap_sig_cseq_ST_pp0_stg7_fsm_8 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg7_fsm_8 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg80_fsm_81() {
    if (ap_sig_bdd_3659.read()) {
        ap_sig_cseq_ST_pp0_stg80_fsm_81 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg80_fsm_81 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg81_fsm_82() {
    if (ap_sig_bdd_3693.read()) {
        ap_sig_cseq_ST_pp0_stg81_fsm_82 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg81_fsm_82 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg82_fsm_83() {
    if (ap_sig_bdd_3714.read()) {
        ap_sig_cseq_ST_pp0_stg82_fsm_83 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg82_fsm_83 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg83_fsm_84() {
    if (ap_sig_bdd_3748.read()) {
        ap_sig_cseq_ST_pp0_stg83_fsm_84 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg83_fsm_84 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg84_fsm_85() {
    if (ap_sig_bdd_3772.read()) {
        ap_sig_cseq_ST_pp0_stg84_fsm_85 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg84_fsm_85 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg85_fsm_86() {
    if (ap_sig_bdd_655.read()) {
        ap_sig_cseq_ST_pp0_stg85_fsm_86 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg85_fsm_86 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg86_fsm_87() {
    if (ap_sig_bdd_3817.read()) {
        ap_sig_cseq_ST_pp0_stg86_fsm_87 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg86_fsm_87 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg87_fsm_88() {
    if (ap_sig_bdd_3851.read()) {
        ap_sig_cseq_ST_pp0_stg87_fsm_88 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg87_fsm_88 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg88_fsm_89() {
    if (ap_sig_bdd_3875.read()) {
        ap_sig_cseq_ST_pp0_stg88_fsm_89 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg88_fsm_89 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg89_fsm_90() {
    if (ap_sig_bdd_3909.read()) {
        ap_sig_cseq_ST_pp0_stg89_fsm_90 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg89_fsm_90 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg8_fsm_9() {
    if (ap_sig_bdd_222.read()) {
        ap_sig_cseq_ST_pp0_stg8_fsm_9 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg8_fsm_9 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg90_fsm_91() {
    if (ap_sig_bdd_3929.read()) {
        ap_sig_cseq_ST_pp0_stg90_fsm_91 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg90_fsm_91 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg91_fsm_92() {
    if (ap_sig_bdd_667.read()) {
        ap_sig_cseq_ST_pp0_stg91_fsm_92 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg91_fsm_92 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg92_fsm_93() {
    if (ap_sig_bdd_3975.read()) {
        ap_sig_cseq_ST_pp0_stg92_fsm_93 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg92_fsm_93 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg93_fsm_94() {
    if (ap_sig_bdd_4009.read()) {
        ap_sig_cseq_ST_pp0_stg93_fsm_94 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg93_fsm_94 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg94_fsm_95() {
    if (ap_sig_bdd_4032.read()) {
        ap_sig_cseq_ST_pp0_stg94_fsm_95 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg94_fsm_95 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg95_fsm_96() {
    if (ap_sig_bdd_4066.read()) {
        ap_sig_cseq_ST_pp0_stg95_fsm_96 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg95_fsm_96 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg96_fsm_97() {
    if (ap_sig_bdd_4089.read()) {
        ap_sig_cseq_ST_pp0_stg96_fsm_97 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg96_fsm_97 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg97_fsm_98() {
    if (ap_sig_bdd_626.read()) {
        ap_sig_cseq_ST_pp0_stg97_fsm_98 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg97_fsm_98 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg98_fsm_99() {
    if (ap_sig_bdd_4132.read()) {
        ap_sig_cseq_ST_pp0_stg98_fsm_99 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg98_fsm_99 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg99_fsm_100() {
    if (ap_sig_bdd_4166.read()) {
        ap_sig_cseq_ST_pp0_stg99_fsm_100 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg99_fsm_100 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg9_fsm_10() {
    if (ap_sig_bdd_231.read()) {
        ap_sig_cseq_ST_pp0_stg9_fsm_10 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg9_fsm_10 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_143.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_st207_fsm_101() {
    if (ap_sig_bdd_19928.read()) {
        ap_sig_cseq_ST_st207_fsm_101 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st207_fsm_101 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_diag_score_0_v_i1_10_cast_cast_fu_5357_p3() {
    diag_score_0_v_i1_10_cast_cast_fu_5357_p3 = (!tmp_49_10_reg_23441.read()[0].is_01())? sc_lv<8>(): ((tmp_49_10_reg_23441.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_11_cast_cast_fu_5536_p3() {
    diag_score_0_v_i1_11_cast_cast_fu_5536_p3 = (!tmp_49_11_reg_23446.read()[0].is_01())? sc_lv<8>(): ((tmp_49_11_reg_23446.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_12_cast_cast_fu_5717_p3() {
    diag_score_0_v_i1_12_cast_cast_fu_5717_p3 = (!tmp_49_12_reg_23451.read()[0].is_01())? sc_lv<8>(): ((tmp_49_12_reg_23451.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_13_cast_cast_fu_5869_p3() {
    diag_score_0_v_i1_13_cast_cast_fu_5869_p3 = (!tmp_49_13_reg_23456.read()[0].is_01())? sc_lv<8>(): ((tmp_49_13_reg_23456.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_14_cast_cast_fu_6037_p3() {
    diag_score_0_v_i1_14_cast_cast_fu_6037_p3 = (!tmp_49_14_reg_23461.read()[0].is_01())? sc_lv<8>(): ((tmp_49_14_reg_23461.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_15_cast_cast_fu_6189_p3() {
    diag_score_0_v_i1_15_cast_cast_fu_6189_p3 = (!tmp_49_15_reg_23466.read()[0].is_01())? sc_lv<8>(): ((tmp_49_15_reg_23466.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_16_cast_cast_fu_6350_p3() {
    diag_score_0_v_i1_16_cast_cast_fu_6350_p3 = (!tmp_49_16_reg_23471.read()[0].is_01())? sc_lv<8>(): ((tmp_49_16_reg_23471.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_17_cast_cast_fu_6511_p3() {
    diag_score_0_v_i1_17_cast_cast_fu_6511_p3 = (!tmp_49_17_reg_23476.read()[0].is_01())? sc_lv<8>(): ((tmp_49_17_reg_23476.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_18_cast_cast_fu_6679_p3() {
    diag_score_0_v_i1_18_cast_cast_fu_6679_p3 = (!tmp_49_18_reg_23481.read()[0].is_01())? sc_lv<8>(): ((tmp_49_18_reg_23481.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_19_cast_cast_fu_6844_p3() {
    diag_score_0_v_i1_19_cast_cast_fu_6844_p3 = (!tmp_49_19_reg_23486.read()[0].is_01())? sc_lv<8>(): ((tmp_49_19_reg_23486.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_1_cast_cast_fu_3236_p3() {
    diag_score_0_v_i1_1_cast_cast_fu_3236_p3 = (!tmp_49_1_reg_22599.read()[0].is_01())? sc_lv<8>(): ((tmp_49_1_reg_22599.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_20_cast_cast_fu_7001_p3() {
    diag_score_0_v_i1_20_cast_cast_fu_7001_p3 = (!tmp_49_20_reg_23491.read()[0].is_01())? sc_lv<8>(): ((tmp_49_20_reg_23491.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_21_cast_cast_fu_7167_p3() {
    diag_score_0_v_i1_21_cast_cast_fu_7167_p3 = (!tmp_49_21_reg_23496.read()[0].is_01())? sc_lv<8>(): ((tmp_49_21_reg_23496.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_22_cast_cast_fu_7340_p3() {
    diag_score_0_v_i1_22_cast_cast_fu_7340_p3 = (!tmp_49_22_reg_23501.read()[0].is_01())? sc_lv<8>(): ((tmp_49_22_reg_23501.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_23_cast_cast_fu_7492_p3() {
    diag_score_0_v_i1_23_cast_cast_fu_7492_p3 = (!tmp_49_23_reg_23506.read()[0].is_01())? sc_lv<8>(): ((tmp_49_23_reg_23506.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_24_cast_cast_fu_7665_p3() {
    diag_score_0_v_i1_24_cast_cast_fu_7665_p3 = (!tmp_49_24_reg_23511.read()[0].is_01())? sc_lv<8>(): ((tmp_49_24_reg_23511.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_25_cast_cast_fu_7829_p3() {
    diag_score_0_v_i1_25_cast_cast_fu_7829_p3 = (!tmp_49_25_reg_23516.read()[0].is_01())? sc_lv<8>(): ((tmp_49_25_reg_23516.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_26_cast_cast_fu_7985_p3() {
    diag_score_0_v_i1_26_cast_cast_fu_7985_p3 = (!tmp_49_26_reg_23521.read()[0].is_01())? sc_lv<8>(): ((tmp_49_26_reg_23521.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_27_cast_cast_fu_8156_p3() {
    diag_score_0_v_i1_27_cast_cast_fu_8156_p3 = (!tmp_49_27_reg_23526.read()[0].is_01())? sc_lv<8>(): ((tmp_49_27_reg_23526.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_28_cast_cast_fu_8319_p3() {
    diag_score_0_v_i1_28_cast_cast_fu_8319_p3 = (!tmp_49_28_reg_23531.read()[0].is_01())? sc_lv<8>(): ((tmp_49_28_reg_23531.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_29_cast_cast_fu_8489_p3() {
    diag_score_0_v_i1_29_cast_cast_fu_8489_p3 = (!tmp_49_29_reg_23536.read()[0].is_01())? sc_lv<8>(): ((tmp_49_29_reg_23536.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_2_cast_cast_fu_3256_p3() {
    diag_score_0_v_i1_2_cast_cast_fu_3256_p3 = (!tmp_49_2_reg_22604.read()[0].is_01())? sc_lv<8>(): ((tmp_49_2_reg_22604.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_30_cast_cast_fu_8653_p3() {
    diag_score_0_v_i1_30_cast_cast_fu_8653_p3 = (!tmp_49_30_reg_23541.read()[0].is_01())? sc_lv<8>(): ((tmp_49_30_reg_23541.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_31_cast_cast_fu_8821_p3() {
    diag_score_0_v_i1_31_cast_cast_fu_8821_p3 = (!tmp_49_31_reg_23546.read()[0].is_01())? sc_lv<8>(): ((tmp_49_31_reg_23546.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_32_cast_cast_fu_8976_p3() {
    diag_score_0_v_i1_32_cast_cast_fu_8976_p3 = (!tmp_49_32_reg_23551.read()[0].is_01())? sc_lv<8>(): ((tmp_49_32_reg_23551.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_33_cast_cast_fu_9146_p3() {
    diag_score_0_v_i1_33_cast_cast_fu_9146_p3 = (!tmp_49_33_reg_23556.read()[0].is_01())? sc_lv<8>(): ((tmp_49_33_reg_23556.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_34_cast_cast_fu_9310_p3() {
    diag_score_0_v_i1_34_cast_cast_fu_9310_p3 = (!tmp_49_34_reg_23561.read()[0].is_01())? sc_lv<8>(): ((tmp_49_34_reg_23561.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_35_cast_cast_fu_9484_p3() {
    diag_score_0_v_i1_35_cast_cast_fu_9484_p3 = (!tmp_49_35_reg_23566.read()[0].is_01())? sc_lv<8>(): ((tmp_49_35_reg_23566.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_36_cast_cast_fu_9649_p3() {
    diag_score_0_v_i1_36_cast_cast_fu_9649_p3 = (!tmp_49_36_reg_23571.read()[0].is_01())? sc_lv<8>(): ((tmp_49_36_reg_23571.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_37_cast_cast_fu_9818_p3() {
    diag_score_0_v_i1_37_cast_cast_fu_9818_p3 = (!tmp_49_37_reg_23576.read()[0].is_01())? sc_lv<8>(): ((tmp_49_37_reg_23576.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_38_cast_cast_fu_9992_p3() {
    diag_score_0_v_i1_38_cast_cast_fu_9992_p3 = (!tmp_49_38_reg_23581.read()[0].is_01())? sc_lv<8>(): ((tmp_49_38_reg_23581.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_39_cast_cast_fu_10157_p3() {
    diag_score_0_v_i1_39_cast_cast_fu_10157_p3 = (!tmp_49_39_reg_23586.read()[0].is_01())? sc_lv<8>(): ((tmp_49_39_reg_23586.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_3_cast_cast_fu_3371_p3() {
    diag_score_0_v_i1_3_cast_cast_fu_3371_p3 = (!tmp_49_3_reg_22964.read()[0].is_01())? sc_lv<8>(): ((tmp_49_3_reg_22964.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_40_cast_cast_fu_10327_p3() {
    diag_score_0_v_i1_40_cast_cast_fu_10327_p3 = (!tmp_49_40_reg_23591.read()[0].is_01())? sc_lv<8>(): ((tmp_49_40_reg_23591.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_41_cast_cast_fu_10502_p3() {
    diag_score_0_v_i1_41_cast_cast_fu_10502_p3 = (!tmp_49_41_reg_23596.read()[0].is_01())? sc_lv<8>(): ((tmp_49_41_reg_23596.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_42_cast_cast_fu_10667_p3() {
    diag_score_0_v_i1_42_cast_cast_fu_10667_p3 = (!tmp_49_42_reg_23601.read()[0].is_01())? sc_lv<8>(): ((tmp_49_42_reg_23601.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_43_cast_cast_fu_10837_p3() {
    diag_score_0_v_i1_43_cast_cast_fu_10837_p3 = (!tmp_49_43_reg_23606.read()[0].is_01())? sc_lv<8>(): ((tmp_49_43_reg_23606.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_44_cast_cast_fu_11013_p3() {
    diag_score_0_v_i1_44_cast_cast_fu_11013_p3 = (!tmp_49_44_reg_23611.read()[0].is_01())? sc_lv<8>(): ((tmp_49_44_reg_23611.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_45_cast_cast_fu_11181_p3() {
    diag_score_0_v_i1_45_cast_cast_fu_11181_p3 = (!tmp_49_45_reg_23616.read()[0].is_01())? sc_lv<8>(): ((tmp_49_45_reg_23616.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_46_cast_cast_fu_11345_p3() {
    diag_score_0_v_i1_46_cast_cast_fu_11345_p3 = (!tmp_49_46_reg_23621.read()[0].is_01())? sc_lv<8>(): ((tmp_49_46_reg_23621.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_47_cast_cast_fu_11526_p3() {
    diag_score_0_v_i1_47_cast_cast_fu_11526_p3 = (!tmp_49_47_reg_23626.read()[0].is_01())? sc_lv<8>(): ((tmp_49_47_reg_23626.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_48_cast_cast_fu_11683_p3() {
    diag_score_0_v_i1_48_cast_cast_fu_11683_p3 = (!tmp_49_48_reg_23631.read()[0].is_01())? sc_lv<8>(): ((tmp_49_48_reg_23631.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_49_cast_cast_fu_11853_p3() {
    diag_score_0_v_i1_49_cast_cast_fu_11853_p3 = (!tmp_49_49_reg_23636.read()[0].is_01())? sc_lv<8>(): ((tmp_49_49_reg_23636.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_4_cast_cast_fu_4314_p3() {
    diag_score_0_v_i1_4_cast_cast_fu_4314_p3 = (!tmp_49_4_reg_23406.read()[0].is_01())? sc_lv<8>(): ((tmp_49_4_reg_23406.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_50_cast_cast_fu_12019_p3() {
    diag_score_0_v_i1_50_cast_cast_fu_12019_p3 = (!tmp_49_50_reg_23641.read()[0].is_01())? sc_lv<8>(): ((tmp_49_50_reg_23641.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_51_cast_cast_fu_12199_p3() {
    diag_score_0_v_i1_51_cast_cast_fu_12199_p3 = (!tmp_49_51_reg_23646.read()[0].is_01())? sc_lv<8>(): ((tmp_49_51_reg_23646.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_52_cast_cast_fu_12376_p3() {
    diag_score_0_v_i1_52_cast_cast_fu_12376_p3 = (!tmp_49_52_reg_23651.read()[0].is_01())? sc_lv<8>(): ((tmp_49_52_reg_23651.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_53_cast_cast_fu_12537_p3() {
    diag_score_0_v_i1_53_cast_cast_fu_12537_p3 = (!tmp_49_53_reg_23656.read()[0].is_01())? sc_lv<8>(): ((tmp_49_53_reg_23656.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_54_cast_cast_fu_12719_p3() {
    diag_score_0_v_i1_54_cast_cast_fu_12719_p3 = (!ap_reg_ppstg_tmp_49_54_reg_23661_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_54_reg_23661_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_55_cast_cast_fu_12876_p3() {
    diag_score_0_v_i1_55_cast_cast_fu_12876_p3 = (!ap_reg_ppstg_tmp_49_55_reg_23666_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_55_reg_23666_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_56_cast_cast_fu_13053_p3() {
    diag_score_0_v_i1_56_cast_cast_fu_13053_p3 = (!ap_reg_ppstg_tmp_49_56_reg_23671_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_56_reg_23671_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_57_cast_cast_fu_13219_p3() {
    diag_score_0_v_i1_57_cast_cast_fu_13219_p3 = (!ap_reg_ppstg_tmp_49_57_reg_23676_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_57_reg_23676_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_58_cast_cast_fu_13395_p3() {
    diag_score_0_v_i1_58_cast_cast_fu_13395_p3 = (!ap_reg_ppstg_tmp_49_58_reg_23681_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_58_reg_23681_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_59_cast_cast_fu_13570_p3() {
    diag_score_0_v_i1_59_cast_cast_fu_13570_p3 = (!ap_reg_ppstg_tmp_49_59_reg_23686_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_59_reg_23686_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_5_cast_cast_fu_4400_p3() {
    diag_score_0_v_i1_5_cast_cast_fu_4400_p3 = (!tmp_49_5_reg_23411.read()[0].is_01())? sc_lv<8>(): ((tmp_49_5_reg_23411.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_60_cast_cast_fu_13736_p3() {
    diag_score_0_v_i1_60_cast_cast_fu_13736_p3 = (!ap_reg_ppstg_tmp_49_60_reg_23041_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_60_reg_23041_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_61_cast_cast_fu_13917_p3() {
    diag_score_0_v_i1_61_cast_cast_fu_13917_p3 = (!ap_reg_ppstg_tmp_49_61_reg_23691_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_61_reg_23691_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_62_cast_cast_fu_14078_p3() {
    diag_score_0_v_i1_62_cast_cast_fu_14078_p3 = (!ap_reg_ppstg_tmp_49_62_reg_23696_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_62_reg_23696_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_63_cast_cast_fu_14258_p3() {
    diag_score_0_v_i1_63_cast_cast_fu_14258_p3 = (!ap_reg_ppstg_tmp_49_63_reg_23701_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_63_reg_23701_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_64_cast_cast_fu_14434_p3() {
    diag_score_0_v_i1_64_cast_cast_fu_14434_p3 = (!ap_reg_ppstg_tmp_49_64_reg_23706_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_64_reg_23706_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_65_cast_cast_fu_14606_p3() {
    diag_score_0_v_i1_65_cast_cast_fu_14606_p3 = (!ap_reg_ppstg_tmp_49_65_reg_23711_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_65_reg_23711_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_66_cast_cast_fu_14782_p3() {
    diag_score_0_v_i1_66_cast_cast_fu_14782_p3 = (!ap_reg_ppstg_tmp_49_66_reg_23716_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_66_reg_23716_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_67_cast_cast_fu_14956_p3() {
    diag_score_0_v_i1_67_cast_cast_fu_14956_p3 = (!ap_reg_ppstg_tmp_49_67_reg_23721_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_67_reg_23721_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_68_cast_cast_fu_15130_p3() {
    diag_score_0_v_i1_68_cast_cast_fu_15130_p3 = (!ap_reg_ppstg_tmp_49_68_reg_23726_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_68_reg_23726_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_69_cast_cast_fu_15304_p3() {
    diag_score_0_v_i1_69_cast_cast_fu_15304_p3 = (!ap_reg_ppstg_tmp_49_69_reg_23731_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_69_reg_23731_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_6_cast_cast_fu_4531_p3() {
    diag_score_0_v_i1_6_cast_cast_fu_4531_p3 = (!tmp_49_6_reg_23416.read()[0].is_01())? sc_lv<8>(): ((tmp_49_6_reg_23416.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_70_cast_cast_fu_15478_p3() {
    diag_score_0_v_i1_70_cast_cast_fu_15478_p3 = (!ap_reg_ppstg_tmp_49_70_reg_23736_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_70_reg_23736_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_71_cast_cast_fu_15645_p3() {
    diag_score_0_v_i1_71_cast_cast_fu_15645_p3 = (!ap_reg_ppstg_tmp_49_71_reg_23741_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_71_reg_23741_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_72_cast_cast_fu_15820_p3() {
    diag_score_0_v_i1_72_cast_cast_fu_15820_p3 = (!ap_reg_ppstg_tmp_49_72_reg_23746_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_72_reg_23746_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_73_cast_cast_fu_15995_p3() {
    diag_score_0_v_i1_73_cast_cast_fu_15995_p3 = (!ap_reg_ppstg_tmp_49_73_reg_23751_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_73_reg_23751_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_74_cast_cast_fu_16170_p3() {
    diag_score_0_v_i1_74_cast_cast_fu_16170_p3 = (!ap_reg_ppstg_tmp_49_74_reg_23756_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_74_reg_23756_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_75_cast_cast_fu_16345_p3() {
    diag_score_0_v_i1_75_cast_cast_fu_16345_p3 = (!ap_reg_ppstg_tmp_49_75_reg_23761_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_75_reg_23761_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_76_cast_cast_fu_16520_p3() {
    diag_score_0_v_i1_76_cast_cast_fu_16520_p3 = (!ap_reg_ppstg_tmp_49_76_reg_23766_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_76_reg_23766_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_77_cast_cast_fu_16695_p3() {
    diag_score_0_v_i1_77_cast_cast_fu_16695_p3 = (!ap_reg_ppstg_tmp_49_77_reg_23771_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_77_reg_23771_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_78_cast_cast_fu_16870_p3() {
    diag_score_0_v_i1_78_cast_cast_fu_16870_p3 = (!ap_reg_ppstg_tmp_49_78_reg_23776_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_78_reg_23776_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_79_cast_cast_fu_17052_p3() {
    diag_score_0_v_i1_79_cast_cast_fu_17052_p3 = (!ap_reg_ppstg_tmp_49_79_reg_23781_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_79_reg_23781_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_7_cast_cast_fu_4655_p3() {
    diag_score_0_v_i1_7_cast_cast_fu_4655_p3 = (!tmp_49_7_reg_23421.read()[0].is_01())? sc_lv<8>(): ((tmp_49_7_reg_23421.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_80_cast_cast_fu_17219_p3() {
    diag_score_0_v_i1_80_cast_cast_fu_17219_p3 = (!ap_reg_ppstg_tmp_49_80_reg_23786_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_80_reg_23786_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_81_cast_cast_fu_17401_p3() {
    diag_score_0_v_i1_81_cast_cast_fu_17401_p3 = (!ap_reg_ppstg_tmp_49_81_reg_23791_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_81_reg_23791_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_82_cast_cast_fu_17580_p3() {
    diag_score_0_v_i1_82_cast_cast_fu_17580_p3 = (!ap_reg_ppstg_tmp_49_82_reg_23796_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_82_reg_23796_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_83_cast_cast_fu_17753_p3() {
    diag_score_0_v_i1_83_cast_cast_fu_17753_p3 = (!ap_reg_ppstg_tmp_49_83_reg_23801_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_83_reg_23801_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_84_cast_cast_fu_17919_p3() {
    diag_score_0_v_i1_84_cast_cast_fu_17919_p3 = (!ap_reg_ppstg_tmp_49_84_reg_23806_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_84_reg_23806_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_85_cast_cast_fu_18088_p3() {
    diag_score_0_v_i1_85_cast_cast_fu_18088_p3 = (!ap_reg_ppstg_tmp_49_85_reg_23811_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_85_reg_23811_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_86_cast_cast_fu_18263_p3() {
    diag_score_0_v_i1_86_cast_cast_fu_18263_p3 = (!ap_reg_ppstg_tmp_49_86_reg_23816_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_86_reg_23816_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_87_cast_cast_fu_18445_p3() {
    diag_score_0_v_i1_87_cast_cast_fu_18445_p3 = (!ap_reg_ppstg_tmp_49_87_reg_23821_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_87_reg_23821_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_88_cast_cast_fu_18617_p3() {
    diag_score_0_v_i1_88_cast_cast_fu_18617_p3 = (!ap_reg_ppstg_tmp_49_88_reg_23826_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_88_reg_23826_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_89_cast_cast_fu_18786_p3() {
    diag_score_0_v_i1_89_cast_cast_fu_18786_p3 = (!ap_reg_ppstg_tmp_49_89_reg_23304_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_89_reg_23304_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_8_cast_cast_fu_4813_p3() {
    diag_score_0_v_i1_8_cast_cast_fu_4813_p3 = (!tmp_49_8_reg_23426.read()[0].is_01())? sc_lv<8>(): ((tmp_49_8_reg_23426.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_90_cast_cast_fu_18966_p3() {
    diag_score_0_v_i1_90_cast_cast_fu_18966_p3 = (!ap_reg_ppstg_tmp_49_90_reg_23309_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_90_reg_23309_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_91_cast_cast_fu_19135_p3() {
    diag_score_0_v_i1_91_cast_cast_fu_19135_p3 = (!ap_reg_ppstg_tmp_49_91_reg_23831_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_91_reg_23831_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_92_cast_cast_fu_19310_p3() {
    diag_score_0_v_i1_92_cast_cast_fu_19310_p3 = (!ap_reg_ppstg_tmp_49_92_reg_23836_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_92_reg_23836_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_93_cast_cast_fu_19492_p3() {
    diag_score_0_v_i1_93_cast_cast_fu_19492_p3 = (!ap_reg_ppstg_tmp_49_93_reg_23326_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_93_reg_23326_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_94_cast_cast_fu_19659_p3() {
    diag_score_0_v_i1_94_cast_cast_fu_19659_p3 = (!ap_reg_ppstg_tmp_49_94_reg_23841_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_94_reg_23841_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_95_cast_cast_fu_19834_p3() {
    diag_score_0_v_i1_95_cast_cast_fu_19834_p3 = (!ap_reg_ppstg_tmp_49_95_reg_23846_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_95_reg_23846_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_96_cast_cast_fu_20009_p3() {
    diag_score_0_v_i1_96_cast_cast_fu_20009_p3 = (!ap_reg_ppstg_tmp_49_96_reg_23851_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_96_reg_23851_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_97_cast_cast_fu_20184_p3() {
    diag_score_0_v_i1_97_cast_cast_fu_20184_p3 = (!ap_reg_ppstg_tmp_49_97_reg_23856_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_97_reg_23856_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_98_cast_cast_fu_20372_p3() {
    diag_score_0_v_i1_98_cast_cast_fu_20372_p3 = (!ap_reg_ppstg_tmp_49_98_reg_23861_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_49_98_reg_23861_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_9_cast_cast_fu_4988_p3() {
    diag_score_0_v_i1_9_cast_cast_fu_4988_p3 = (!tmp_49_9_reg_23431.read()[0].is_01())? sc_lv<8>(): ((tmp_49_9_reg_23431.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_cast_cast_8_fu_5169_p3() {
    diag_score_0_v_i1_cast_cast_8_fu_5169_p3 = (!tmp_49_s_reg_23436.read()[0].is_01())? sc_lv<8>(): ((tmp_49_s_reg_23436.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_cast_cast_fu_3174_p3() {
    diag_score_0_v_i1_cast_cast_fu_3174_p3 = (!tmp_6_fu_3169_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_6_fu_3169_p2.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_10_cast_cast_fu_5655_p3() {
    diag_score_0_v_i_10_cast_cast_fu_5655_p3 = (!tmp_58_10_reg_23917.read()[0].is_01())? sc_lv<8>(): ((tmp_58_10_reg_23917.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_11_cast_cast_fu_5814_p3() {
    diag_score_0_v_i_11_cast_cast_fu_5814_p3 = (!tmp_58_11_reg_23922.read()[0].is_01())? sc_lv<8>(): ((tmp_58_11_reg_23922.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_12_cast_cast_fu_5975_p3() {
    diag_score_0_v_i_12_cast_cast_fu_5975_p3 = (!tmp_58_12_reg_23927.read()[0].is_01())? sc_lv<8>(): ((tmp_58_12_reg_23927.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_13_cast_cast_fu_6134_p3() {
    diag_score_0_v_i_13_cast_cast_fu_6134_p3 = (!tmp_58_13_reg_23932.read()[0].is_01())? sc_lv<8>(): ((tmp_58_13_reg_23932.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_14_cast_cast_fu_6295_p3() {
    diag_score_0_v_i_14_cast_cast_fu_6295_p3 = (!tmp_58_14_reg_23937.read()[0].is_01())? sc_lv<8>(): ((tmp_58_14_reg_23937.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_15_cast_cast_fu_6456_p3() {
    diag_score_0_v_i_15_cast_cast_fu_6456_p3 = (!tmp_58_15_reg_23942.read()[0].is_01())? sc_lv<8>(): ((tmp_58_15_reg_23942.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_16_cast_cast_fu_6617_p3() {
    diag_score_0_v_i_16_cast_cast_fu_6617_p3 = (!tmp_58_16_reg_23947.read()[0].is_01())? sc_lv<8>(): ((tmp_58_16_reg_23947.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_17_cast_cast_fu_6776_p3() {
    diag_score_0_v_i_17_cast_cast_fu_6776_p3 = (!tmp_58_17_reg_23952.read()[0].is_01())? sc_lv<8>(): ((tmp_58_17_reg_23952.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_18_cast_cast_fu_6941_p3() {
    diag_score_0_v_i_18_cast_cast_fu_6941_p3 = (!tmp_58_18_reg_23957.read()[0].is_01())? sc_lv<8>(): ((tmp_58_18_reg_23957.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_19_cast_cast_fu_7106_p3() {
    diag_score_0_v_i_19_cast_cast_fu_7106_p3 = (!tmp_58_19_reg_23962.read()[0].is_01())? sc_lv<8>(): ((tmp_58_19_reg_23962.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_1_cast_cast_fu_3326_p3() {
    diag_score_0_v_i_1_cast_cast_fu_3326_p3 = (!tmp_58_1_reg_22922.read()[0].is_01())? sc_lv<8>(): ((tmp_58_1_reg_22922.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_20_cast_cast_fu_7273_p3() {
    diag_score_0_v_i_20_cast_cast_fu_7273_p3 = (!tmp_58_20_reg_23967.read()[0].is_01())? sc_lv<8>(): ((tmp_58_20_reg_23967.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_21_cast_cast_fu_7437_p3() {
    diag_score_0_v_i_21_cast_cast_fu_7437_p3 = (!tmp_58_21_reg_23972.read()[0].is_01())? sc_lv<8>(): ((tmp_58_21_reg_23972.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_22_cast_cast_fu_7597_p3() {
    diag_score_0_v_i_22_cast_cast_fu_7597_p3 = (!tmp_58_22_reg_23977.read()[0].is_01())? sc_lv<8>(): ((tmp_58_22_reg_23977.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_23_cast_cast_fu_7762_p3() {
    diag_score_0_v_i_23_cast_cast_fu_7762_p3 = (!tmp_58_23_reg_23982.read()[0].is_01())? sc_lv<8>(): ((tmp_58_23_reg_23982.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_24_cast_cast_fu_7926_p3() {
    diag_score_0_v_i_24_cast_cast_fu_7926_p3 = (!tmp_58_24_reg_23987.read()[0].is_01())? sc_lv<8>(): ((tmp_58_24_reg_23987.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_25_cast_cast_fu_8090_p3() {
    diag_score_0_v_i_25_cast_cast_fu_8090_p3 = (!tmp_58_25_reg_23992.read()[0].is_01())? sc_lv<8>(): ((tmp_58_25_reg_23992.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_26_cast_cast_fu_8261_p3() {
    diag_score_0_v_i_26_cast_cast_fu_8261_p3 = (!tmp_58_26_reg_23997.read()[0].is_01())? sc_lv<8>(): ((tmp_58_26_reg_23997.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_27_cast_cast_fu_8424_p3() {
    diag_score_0_v_i_27_cast_cast_fu_8424_p3 = (!tmp_58_27_reg_24002.read()[0].is_01())? sc_lv<8>(): ((tmp_58_27_reg_24002.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_28_cast_cast_fu_8586_p3() {
    diag_score_0_v_i_28_cast_cast_fu_8586_p3 = (!tmp_58_28_reg_24007.read()[0].is_01())? sc_lv<8>(): ((tmp_58_28_reg_24007.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_29_cast_cast_fu_8750_p3() {
    diag_score_0_v_i_29_cast_cast_fu_8750_p3 = (!tmp_58_29_reg_24012.read()[0].is_01())? sc_lv<8>(): ((tmp_58_29_reg_24012.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_2_cast_cast_fu_3476_p3() {
    diag_score_0_v_i_2_cast_cast_fu_3476_p3 = (!tmp_58_2_reg_22927.read()[0].is_01())? sc_lv<8>(): ((tmp_58_2_reg_22927.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_30_cast_cast_fu_8918_p3() {
    diag_score_0_v_i_30_cast_cast_fu_8918_p3 = (!tmp_58_30_reg_24017.read()[0].is_01())? sc_lv<8>(): ((tmp_58_30_reg_24017.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_31_cast_cast_fu_9081_p3() {
    diag_score_0_v_i_31_cast_cast_fu_9081_p3 = (!tmp_58_31_reg_24022.read()[0].is_01())? sc_lv<8>(): ((tmp_58_31_reg_24022.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_32_cast_cast_fu_9252_p3() {
    diag_score_0_v_i_32_cast_cast_fu_9252_p3 = (!tmp_58_32_reg_24027.read()[0].is_01())? sc_lv<8>(): ((tmp_58_32_reg_24027.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_33_cast_cast_fu_9415_p3() {
    diag_score_0_v_i_33_cast_cast_fu_9415_p3 = (!tmp_58_33_reg_24032.read()[0].is_01())? sc_lv<8>(): ((tmp_58_33_reg_24032.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_34_cast_cast_fu_9589_p3() {
    diag_score_0_v_i_34_cast_cast_fu_9589_p3 = (!tmp_58_34_reg_24037.read()[0].is_01())? sc_lv<8>(): ((tmp_58_34_reg_24037.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_35_cast_cast_fu_9754_p3() {
    diag_score_0_v_i_35_cast_cast_fu_9754_p3 = (!tmp_58_35_reg_24042.read()[0].is_01())? sc_lv<8>(): ((tmp_58_35_reg_24042.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_36_cast_cast_fu_9923_p3() {
    diag_score_0_v_i_36_cast_cast_fu_9923_p3 = (!tmp_58_36_reg_24047.read()[0].is_01())? sc_lv<8>(): ((tmp_58_36_reg_24047.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_37_cast_cast_fu_10097_p3() {
    diag_score_0_v_i_37_cast_cast_fu_10097_p3 = (!tmp_58_37_reg_24052.read()[0].is_01())? sc_lv<8>(): ((tmp_58_37_reg_24052.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_38_cast_cast_fu_10263_p3() {
    diag_score_0_v_i_38_cast_cast_fu_10263_p3 = (!tmp_58_38_reg_24057.read()[0].is_01())? sc_lv<8>(): ((tmp_58_38_reg_24057.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_39_cast_cast_fu_10432_p3() {
    diag_score_0_v_i_39_cast_cast_fu_10432_p3 = (!tmp_58_39_reg_24062.read()[0].is_01())? sc_lv<8>(): ((tmp_58_39_reg_24062.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_3_cast_cast_fu_4353_p3() {
    diag_score_0_v_i_3_cast_cast_fu_4353_p3 = (!tmp_58_3_reg_23072.read()[0].is_01())? sc_lv<8>(): ((tmp_58_3_reg_23072.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_40_cast_cast_fu_10607_p3() {
    diag_score_0_v_i_40_cast_cast_fu_10607_p3 = (!tmp_58_40_reg_24067.read()[0].is_01())? sc_lv<8>(): ((tmp_58_40_reg_24067.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_41_cast_cast_fu_10773_p3() {
    diag_score_0_v_i_41_cast_cast_fu_10773_p3 = (!tmp_58_41_reg_24072.read()[0].is_01())? sc_lv<8>(): ((tmp_58_41_reg_24072.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_42_cast_cast_fu_10942_p3() {
    diag_score_0_v_i_42_cast_cast_fu_10942_p3 = (!tmp_58_42_reg_24077.read()[0].is_01())? sc_lv<8>(): ((tmp_58_42_reg_24077.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_43_cast_cast_fu_11110_p3() {
    diag_score_0_v_i_43_cast_cast_fu_11110_p3 = (!tmp_58_43_reg_24082.read()[0].is_01())? sc_lv<8>(): ((tmp_58_43_reg_24082.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_44_cast_cast_fu_11287_p3() {
    diag_score_0_v_i_44_cast_cast_fu_11287_p3 = (!tmp_58_44_reg_24087.read()[0].is_01())? sc_lv<8>(): ((tmp_58_44_reg_24087.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_45_cast_cast_fu_11450_p3() {
    diag_score_0_v_i_45_cast_cast_fu_11450_p3 = (!tmp_58_45_reg_24092.read()[0].is_01())? sc_lv<8>(): ((tmp_58_45_reg_24092.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_46_cast_cast_fu_11623_p3() {
    diag_score_0_v_i_46_cast_cast_fu_11623_p3 = (!tmp_58_46_reg_24097.read()[0].is_01())? sc_lv<8>(): ((tmp_58_46_reg_24097.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_47_cast_cast_fu_11789_p3() {
    diag_score_0_v_i_47_cast_cast_fu_11789_p3 = (!tmp_58_47_reg_24102.read()[0].is_01())? sc_lv<8>(): ((tmp_58_47_reg_24102.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_48_cast_cast_fu_11958_p3() {
    diag_score_0_v_i_48_cast_cast_fu_11958_p3 = (!tmp_58_48_reg_24107.read()[0].is_01())? sc_lv<8>(): ((tmp_58_48_reg_24107.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_49_cast_cast_fu_12124_p3() {
    diag_score_0_v_i_49_cast_cast_fu_12124_p3 = (!tmp_58_49_reg_24112.read()[0].is_01())? sc_lv<8>(): ((tmp_58_49_reg_24112.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_4_cast_cast_fu_4484_p3() {
    diag_score_0_v_i_4_cast_cast_fu_4484_p3 = (!tmp_58_4_reg_23882.read()[0].is_01())? sc_lv<8>(): ((tmp_58_4_reg_23882.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_50_cast_cast_fu_12304_p3() {
    diag_score_0_v_i_50_cast_cast_fu_12304_p3 = (!tmp_58_50_reg_24117.read()[0].is_01())? sc_lv<8>(): ((tmp_58_50_reg_24117.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_51_cast_cast_fu_12473_p3() {
    diag_score_0_v_i_51_cast_cast_fu_12473_p3 = (!tmp_58_51_reg_24122.read()[0].is_01())? sc_lv<8>(): ((tmp_58_51_reg_24122.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_52_cast_cast_fu_12642_p3() {
    diag_score_0_v_i_52_cast_cast_fu_12642_p3 = (!ap_reg_ppstg_tmp_58_52_reg_24127_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_52_reg_24127_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_53_cast_cast_fu_12816_p3() {
    diag_score_0_v_i_53_cast_cast_fu_12816_p3 = (!ap_reg_ppstg_tmp_58_53_reg_24132_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_53_reg_24132_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_54_cast_cast_fu_12981_p3() {
    diag_score_0_v_i_54_cast_cast_fu_12981_p3 = (!ap_reg_ppstg_tmp_58_54_reg_24137_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_54_reg_24137_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_55_cast_cast_fu_13150_p3() {
    diag_score_0_v_i_55_cast_cast_fu_13150_p3 = (!ap_reg_ppstg_tmp_58_55_reg_24142_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_55_reg_24142_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_56_cast_cast_fu_13324_p3() {
    diag_score_0_v_i_56_cast_cast_fu_13324_p3 = (!ap_reg_ppstg_tmp_58_56_reg_24147_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_56_reg_24147_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_57_cast_cast_fu_13492_p3() {
    diag_score_0_v_i_57_cast_cast_fu_13492_p3 = (!ap_reg_ppstg_tmp_58_57_reg_24152_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_57_reg_24152_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_58_cast_cast_fu_13667_p3() {
    diag_score_0_v_i_58_cast_cast_fu_13667_p3 = (!ap_reg_ppstg_tmp_58_58_reg_24157_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_58_reg_24157_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_59_cast_cast_fu_13841_p3() {
    diag_score_0_v_i_59_cast_cast_fu_13841_p3 = (!ap_reg_ppstg_tmp_58_59_reg_24162_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_59_reg_24162_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_5_cast_cast_fu_4615_p3() {
    diag_score_0_v_i_5_cast_cast_fu_4615_p3 = (!tmp_58_5_reg_23887.read()[0].is_01())? sc_lv<8>(): ((tmp_58_5_reg_23887.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_60_cast_cast_fu_14014_p3() {
    diag_score_0_v_i_60_cast_cast_fu_14014_p3 = (!ap_reg_ppstg_tmp_58_60_reg_23077_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_60_reg_23077_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_61_cast_cast_fu_14183_p3() {
    diag_score_0_v_i_61_cast_cast_fu_14183_p3 = (!ap_reg_ppstg_tmp_58_61_reg_24167_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_61_reg_24167_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_62_cast_cast_fu_14363_p3() {
    diag_score_0_v_i_62_cast_cast_fu_14363_p3 = (!ap_reg_ppstg_tmp_58_62_reg_24172_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_62_reg_24172_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_63_cast_cast_fu_14531_p3() {
    diag_score_0_v_i_63_cast_cast_fu_14531_p3 = (!ap_reg_ppstg_tmp_58_63_reg_24177_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_63_reg_24177_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_64_cast_cast_fu_14711_p3() {
    diag_score_0_v_i_64_cast_cast_fu_14711_p3 = (!ap_reg_ppstg_tmp_58_64_reg_24182_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_64_reg_24182_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_65_cast_cast_fu_14879_p3() {
    diag_score_0_v_i_65_cast_cast_fu_14879_p3 = (!ap_reg_ppstg_tmp_58_65_reg_24187_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_65_reg_24187_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_66_cast_cast_fu_15053_p3() {
    diag_score_0_v_i_66_cast_cast_fu_15053_p3 = (!ap_reg_ppstg_tmp_58_66_reg_24192_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_66_reg_24192_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_67_cast_cast_fu_15227_p3() {
    diag_score_0_v_i_67_cast_cast_fu_15227_p3 = (!ap_reg_ppstg_tmp_58_67_reg_24197_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_67_reg_24197_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_68_cast_cast_fu_15401_p3() {
    diag_score_0_v_i_68_cast_cast_fu_15401_p3 = (!ap_reg_ppstg_tmp_58_68_reg_24202_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_68_reg_24202_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_69_cast_cast_fu_15575_p3() {
    diag_score_0_v_i_69_cast_cast_fu_15575_p3 = (!ap_reg_ppstg_tmp_58_69_reg_24207_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_69_reg_24207_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_6_cast_cast_fu_4760_p3() {
    diag_score_0_v_i_6_cast_cast_fu_4760_p3 = (!tmp_58_6_reg_23892.read()[0].is_01())? sc_lv<8>(): ((tmp_58_6_reg_23892.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_70_cast_cast_fu_15750_p3() {
    diag_score_0_v_i_70_cast_cast_fu_15750_p3 = (!ap_reg_ppstg_tmp_58_70_reg_24212_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_70_reg_24212_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_71_cast_cast_fu_15925_p3() {
    diag_score_0_v_i_71_cast_cast_fu_15925_p3 = (!ap_reg_ppstg_tmp_58_71_reg_24217_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_71_reg_24217_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_72_cast_cast_fu_16100_p3() {
    diag_score_0_v_i_72_cast_cast_fu_16100_p3 = (!ap_reg_ppstg_tmp_58_72_reg_24222_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_72_reg_24222_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_73_cast_cast_fu_16275_p3() {
    diag_score_0_v_i_73_cast_cast_fu_16275_p3 = (!ap_reg_ppstg_tmp_58_73_reg_24227_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_73_reg_24227_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_74_cast_cast_fu_16450_p3() {
    diag_score_0_v_i_74_cast_cast_fu_16450_p3 = (!ap_reg_ppstg_tmp_58_74_reg_24232_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_74_reg_24232_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_75_cast_cast_fu_16625_p3() {
    diag_score_0_v_i_75_cast_cast_fu_16625_p3 = (!ap_reg_ppstg_tmp_58_75_reg_24237_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_75_reg_24237_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_76_cast_cast_fu_16800_p3() {
    diag_score_0_v_i_76_cast_cast_fu_16800_p3 = (!ap_reg_ppstg_tmp_58_76_reg_24242_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_76_reg_24242_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_77_cast_cast_fu_16975_p3() {
    diag_score_0_v_i_77_cast_cast_fu_16975_p3 = (!ap_reg_ppstg_tmp_58_77_reg_24247_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_77_reg_24247_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_78_cast_cast_fu_17149_p3() {
    diag_score_0_v_i_78_cast_cast_fu_17149_p3 = (!ap_reg_ppstg_tmp_58_78_reg_24252_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_78_reg_24252_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_79_cast_cast_fu_17324_p3() {
    diag_score_0_v_i_79_cast_cast_fu_17324_p3 = (!ap_reg_ppstg_tmp_58_79_reg_24257_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_79_reg_24257_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_7_cast_cast_fu_4935_p3() {
    diag_score_0_v_i_7_cast_cast_fu_4935_p3 = (!tmp_58_7_reg_23897.read()[0].is_01())? sc_lv<8>(): ((tmp_58_7_reg_23897.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_80_cast_cast_fu_17498_p3() {
    diag_score_0_v_i_80_cast_cast_fu_17498_p3 = (!ap_reg_ppstg_tmp_58_80_reg_24262_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_80_reg_24262_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_81_cast_cast_fu_17677_p3() {
    diag_score_0_v_i_81_cast_cast_fu_17677_p3 = (!ap_reg_ppstg_tmp_58_81_reg_24267_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_81_reg_24267_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_82_cast_cast_fu_17850_p3() {
    diag_score_0_v_i_82_cast_cast_fu_17850_p3 = (!ap_reg_ppstg_tmp_58_82_reg_24272_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_82_reg_24272_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_83_cast_cast_fu_18024_p3() {
    diag_score_0_v_i_83_cast_cast_fu_18024_p3 = (!ap_reg_ppstg_tmp_58_83_reg_24277_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_83_reg_24277_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_84_cast_cast_fu_18193_p3() {
    diag_score_0_v_i_84_cast_cast_fu_18193_p3 = (!ap_reg_ppstg_tmp_58_84_reg_24282_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_84_reg_24282_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_85_cast_cast_fu_18368_p3() {
    diag_score_0_v_i_85_cast_cast_fu_18368_p3 = (!ap_reg_ppstg_tmp_58_85_reg_24287_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_85_reg_24287_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_86_cast_cast_fu_18542_p3() {
    diag_score_0_v_i_86_cast_cast_fu_18542_p3 = (!ap_reg_ppstg_tmp_58_86_reg_24292_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_86_reg_24292_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_87_cast_cast_fu_18722_p3() {
    diag_score_0_v_i_87_cast_cast_fu_18722_p3 = (!ap_reg_ppstg_tmp_58_87_reg_24297_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_87_reg_24297_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_88_cast_cast_fu_18891_p3() {
    diag_score_0_v_i_88_cast_cast_fu_18891_p3 = (!ap_reg_ppstg_tmp_58_88_reg_24302_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_88_reg_24302_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_89_cast_cast_fu_19071_p3() {
    diag_score_0_v_i_89_cast_cast_fu_19071_p3 = (!ap_reg_ppstg_tmp_58_89_reg_23370_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_89_reg_23370_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_8_cast_cast_fu_5116_p3() {
    diag_score_0_v_i_8_cast_cast_fu_5116_p3 = (!tmp_58_8_reg_23902.read()[0].is_01())? sc_lv<8>(): ((tmp_58_8_reg_23902.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_90_cast_cast_fu_19240_p3() {
    diag_score_0_v_i_90_cast_cast_fu_19240_p3 = (!ap_reg_ppstg_tmp_58_90_reg_23375_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_90_reg_23375_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_91_cast_cast_fu_19415_p3() {
    diag_score_0_v_i_91_cast_cast_fu_19415_p3 = (!ap_reg_ppstg_tmp_58_91_reg_24307_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_91_reg_24307_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_92_cast_cast_fu_19589_p3() {
    diag_score_0_v_i_92_cast_cast_fu_19589_p3 = (!ap_reg_ppstg_tmp_58_92_reg_24312_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_92_reg_24312_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_93_cast_cast_fu_19764_p3() {
    diag_score_0_v_i_93_cast_cast_fu_19764_p3 = (!ap_reg_ppstg_tmp_58_93_reg_23380_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_93_reg_23380_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_94_cast_cast_fu_19939_p3() {
    diag_score_0_v_i_94_cast_cast_fu_19939_p3 = (!ap_reg_ppstg_tmp_58_94_reg_24317_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_94_reg_24317_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_95_cast_cast_fu_20114_p3() {
    diag_score_0_v_i_95_cast_cast_fu_20114_p3 = (!ap_reg_ppstg_tmp_58_95_reg_24322_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_95_reg_24322_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_96_cast_cast_fu_20289_p3() {
    diag_score_0_v_i_96_cast_cast_fu_20289_p3 = (!ap_reg_ppstg_tmp_58_96_reg_24327_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_96_reg_24327_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_97_cast_cast_fu_20469_p3() {
    diag_score_0_v_i_97_cast_cast_fu_20469_p3 = (!ap_reg_ppstg_tmp_58_97_reg_24332_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_97_reg_24332_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_98_cast_cast_fu_20600_p3() {
    diag_score_0_v_i_98_cast_cast_fu_20600_p3 = (!ap_reg_ppstg_tmp_58_98_reg_24337_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_58_98_reg_24337_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_9_cast_cast_fu_5297_p3() {
    diag_score_0_v_i_9_cast_cast_fu_5297_p3 = (!tmp_58_9_reg_23907.read()[0].is_01())? sc_lv<8>(): ((tmp_58_9_reg_23907.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_cast_cast_9_fu_5476_p3() {
    diag_score_0_v_i_cast_cast_9_fu_5476_p3 = (!tmp_58_s_reg_23912.read()[0].is_01())? sc_lv<8>(): ((tmp_58_s_reg_23912.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_cast_cast_fu_3319_p3() {
    diag_score_0_v_i_cast_cast_fu_3319_p3 = (!tmp_117_reg_22917.read()[0].is_01())? sc_lv<8>(): ((tmp_117_reg_22917.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_grp_fu_2260_p4() {
    grp_fu_2260_p4 = read_r_Dout_A.read().range(3, 2);
}

void needlemanWunsch::thread_grp_fu_2270_p4() {
    grp_fu_2270_p4 = read_r_Dout_A.read().range(5, 4);
}

void needlemanWunsch::thread_grp_fu_2280_p4() {
    grp_fu_2280_p4 = read_r_Dout_A.read().range(7, 6);
}

void needlemanWunsch::thread_grp_fu_2350_p4() {
    grp_fu_2350_p4 = read_r_Dout_A.read().range(21, 20);
}

void needlemanWunsch::thread_grp_fu_2360_p4() {
    grp_fu_2360_p4 = read_r_Dout_A.read().range(23, 22);
}

void needlemanWunsch::thread_grp_fu_2380_p4() {
    grp_fu_2380_p4 = read_r_Dout_A.read().range(27, 26);
}

void needlemanWunsch::thread_grp_fu_2390_p4() {
    grp_fu_2390_p4 = read_r_Dout_A.read().range(29, 28);
}

void needlemanWunsch::thread_grp_fu_2564_p2() {
    grp_fu_2564_p2 = (!ap_const_lv8_FF.is_01() || !reg_2410.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2410.read()));
}

void needlemanWunsch::thread_grp_fu_2570_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) {
            grp_fu_2570_p1 = tmp_222_reg_22125.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            grp_fu_2570_p1 = tmp_222_fu_3150_p1.read();
        } else {
            grp_fu_2570_p1 = "XX";
        }
    } else {
        grp_fu_2570_p1 = "XX";
    }
}

void needlemanWunsch::thread_grp_fu_2570_p2() {
    grp_fu_2570_p2 = (!reg_2414.read().is_01() || !grp_fu_2570_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2414.read() == grp_fu_2570_p1.read());
}

void needlemanWunsch::thread_grp_fu_2575_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) {
            grp_fu_2575_p1 = tmp_222_reg_22125.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            grp_fu_2575_p1 = tmp_222_fu_3150_p1.read();
        } else {
            grp_fu_2575_p1 = "XX";
        }
    } else {
        grp_fu_2575_p1 = "XX";
    }
}

void needlemanWunsch::thread_grp_fu_2575_p2() {
    grp_fu_2575_p2 = (!reg_2423.read().is_01() || !grp_fu_2575_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2423.read() == grp_fu_2575_p1.read());
}

void needlemanWunsch::thread_grp_fu_2580_p2() {
    grp_fu_2580_p2 = (!ap_const_lv8_FF.is_01() || !reg_2435.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2435.read()));
}

void needlemanWunsch::thread_grp_fu_2586_p2() {
    grp_fu_2586_p2 = (!reg_2414.read().is_01() || !tmp_247_reg_22705.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2414.read() == tmp_247_reg_22705.read());
}

void needlemanWunsch::thread_grp_fu_2591_p2() {
    grp_fu_2591_p2 = (!reg_2423.read().is_01() || !tmp_247_reg_22705.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2423.read() == tmp_247_reg_22705.read());
}

void needlemanWunsch::thread_grp_fu_2596_p2() {
    grp_fu_2596_p2 = (!reg_2427.read().is_01() || !tmp_222_reg_22125.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2427.read() == tmp_222_reg_22125.read());
}

void needlemanWunsch::thread_grp_fu_2601_p2() {
    grp_fu_2601_p2 = (!reg_2427.read().is_01() || !tmp_247_reg_22705.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2427.read() == tmp_247_reg_22705.read());
}

void needlemanWunsch::thread_grp_fu_2606_p2() {
    grp_fu_2606_p2 = (!ap_const_lv8_FF.is_01() || !reg_2418.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2418.read()));
}

void needlemanWunsch::thread_grp_fu_2612_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2612_p0 = ap_reg_ppstg_tmp_5_reg_22225_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read())))) {
        grp_fu_2612_p0 = tmp_5_reg_22225.read();
    } else {
        grp_fu_2612_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2612_p3() {
    grp_fu_2612_p3 = (!grp_fu_2612_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2612_p0.read()[0].to_bool())? ap_const_lv20_0: reg_2431.read());
}

void needlemanWunsch::thread_grp_fu_2619_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2619_p0 = ap_reg_ppstg_tmp_5_reg_22225_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read())))) {
        grp_fu_2619_p0 = tmp_5_reg_22225.read();
    } else {
        grp_fu_2619_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2619_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2619_p1 = ap_reg_ppstg_prev_orig_out_s_reg_24671_pp0_it1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read()))) {
        grp_fu_2619_p1 = prev_orig_out_s_reg_24671.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        grp_fu_2619_p1 = prev_orig_out_s_fu_4689_p2.read();
    } else {
        grp_fu_2619_p1 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void needlemanWunsch::thread_grp_fu_2619_p3() {
    grp_fu_2619_p3 = (!grp_fu_2619_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2619_p0.read()[0].to_bool())? grp_fu_2619_p1.read(): reg_2431.read());
}

void needlemanWunsch::thread_grp_fu_2625_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2625_p0 = ap_reg_ppstg_tmp_5_reg_22225_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read())))) {
        grp_fu_2625_p0 = tmp_5_reg_22225.read();
    } else {
        grp_fu_2625_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2625_p3() {
    grp_fu_2625_p3 = (!grp_fu_2625_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2625_p0.read()[0].to_bool())? ap_const_lv20_0: reg_2439.read());
}

void needlemanWunsch::thread_grp_fu_2632_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2632_p0 = ap_reg_ppstg_tmp_5_reg_22225_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read())))) {
        grp_fu_2632_p0 = tmp_5_reg_22225.read();
    } else {
        grp_fu_2632_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2632_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2632_p1 = ap_reg_ppstg_prev_orig_out_s_reg_24671_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read())))) {
        grp_fu_2632_p1 = prev_orig_out_s_reg_24671.read();
    } else {
        grp_fu_2632_p1 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void needlemanWunsch::thread_grp_fu_2632_p3() {
    grp_fu_2632_p3 = (!grp_fu_2632_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2632_p0.read()[0].to_bool())? grp_fu_2632_p1.read(): reg_2439.read());
}

void needlemanWunsch::thread_grp_fu_2638_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2638_p0 = ap_reg_ppstg_tmp_5_reg_22225_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read())))) {
        grp_fu_2638_p0 = tmp_5_reg_22225.read();
    } else {
        grp_fu_2638_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2638_p3() {
    grp_fu_2638_p3 = (!grp_fu_2638_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2638_p0.read()[0].to_bool())? ap_const_lv20_0: reg_2444.read());
}

void needlemanWunsch::thread_grp_fu_2645_p3() {
    grp_fu_2645_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2444.read());
}

void needlemanWunsch::thread_grp_fu_2651_p3() {
    grp_fu_2651_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2448.read());
}

void needlemanWunsch::thread_grp_fu_2658_p2() {
    grp_fu_2658_p2 = (!ap_const_lv8_FF.is_01() || !reg_2479.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2479.read()));
}

void needlemanWunsch::thread_grp_fu_2664_p3() {
    grp_fu_2664_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2448.read());
}

void needlemanWunsch::thread_grp_fu_2670_p3() {
    grp_fu_2670_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2453.read());
}

void needlemanWunsch::thread_grp_fu_2677_p3() {
    grp_fu_2677_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2453.read());
}

void needlemanWunsch::thread_grp_fu_2683_p3() {
    grp_fu_2683_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2457.read());
}

void needlemanWunsch::thread_grp_fu_2690_p3() {
    grp_fu_2690_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2457.read());
}

void needlemanWunsch::thread_grp_fu_2696_p3() {
    grp_fu_2696_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2462.read());
}

void needlemanWunsch::thread_grp_fu_2703_p3() {
    grp_fu_2703_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2462.read());
}

void needlemanWunsch::thread_grp_fu_2709_p3() {
    grp_fu_2709_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2466.read());
}

void needlemanWunsch::thread_grp_fu_2716_p2() {
    grp_fu_2716_p2 = (!ap_const_lv8_FF.is_01() || !reg_2497.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2497.read()));
}

void needlemanWunsch::thread_grp_fu_2722_p3() {
    grp_fu_2722_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2466.read());
}

void needlemanWunsch::thread_grp_fu_2728_p3() {
    grp_fu_2728_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2470.read());
}

void needlemanWunsch::thread_grp_fu_2735_p3() {
    grp_fu_2735_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2470.read());
}

void needlemanWunsch::thread_grp_fu_2741_p3() {
    grp_fu_2741_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2475.read());
}

void needlemanWunsch::thread_grp_fu_2748_p2() {
    grp_fu_2748_p2 = (!ap_const_lv8_FF.is_01() || !reg_2501.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2501.read()));
}

void needlemanWunsch::thread_grp_fu_2754_p3() {
    grp_fu_2754_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2475.read());
}

void needlemanWunsch::thread_grp_fu_2760_p3() {
    grp_fu_2760_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2484.read());
}

void needlemanWunsch::thread_grp_fu_2767_p3() {
    grp_fu_2767_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2484.read());
}

void needlemanWunsch::thread_grp_fu_2773_p3() {
    grp_fu_2773_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2488.read());
}

void needlemanWunsch::thread_grp_fu_2780_p3() {
    grp_fu_2780_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2488.read());
}

void needlemanWunsch::thread_grp_fu_2786_p3() {
    grp_fu_2786_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2493.read());
}

void needlemanWunsch::thread_grp_fu_2793_p2() {
    grp_fu_2793_p2 = (!ap_const_lv8_FF.is_01() || !reg_2519.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2519.read()));
}

void needlemanWunsch::thread_grp_fu_2799_p3() {
    grp_fu_2799_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2493.read());
}

void needlemanWunsch::thread_grp_fu_2805_p3() {
    grp_fu_2805_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2506.read());
}

void needlemanWunsch::thread_grp_fu_2812_p2() {
    grp_fu_2812_p2 = (!ap_const_lv8_FF.is_01() || !reg_2523.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2523.read()));
}

void needlemanWunsch::thread_grp_fu_2818_p3() {
    grp_fu_2818_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2506.read());
}

void needlemanWunsch::thread_grp_fu_2824_p3() {
    grp_fu_2824_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2510.read());
}

void needlemanWunsch::thread_grp_fu_2831_p3() {
    grp_fu_2831_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2510.read());
}

void needlemanWunsch::thread_grp_fu_2837_p3() {
    grp_fu_2837_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? ap_const_lv20_0: reg_2515.read());
}

void needlemanWunsch::thread_grp_fu_2844_p2() {
    grp_fu_2844_p2 = (!ap_const_lv8_FF.is_01() || !reg_2533.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2533.read()));
}

void needlemanWunsch::thread_grp_fu_2850_p3() {
    grp_fu_2850_p3 = (!tmp_5_reg_22225.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22225.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2515.read());
}

void needlemanWunsch::thread_grp_fu_2856_p2() {
    grp_fu_2856_p2 = (!ap_const_lv8_FF.is_01() || !reg_2537.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2537.read()));
}

void needlemanWunsch::thread_grp_fu_2862_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        grp_fu_2862_p0 = ap_reg_ppstg_tmp_5_reg_22225_pp0_it1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read()))) {
        grp_fu_2862_p0 = tmp_5_reg_22225.read();
    } else {
        grp_fu_2862_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2862_p3() {
    grp_fu_2862_p3 = (!grp_fu_2862_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2862_p0.read()[0].to_bool())? ap_const_lv20_0: reg_2528.read());
}

void needlemanWunsch::thread_grp_fu_2869_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        grp_fu_2869_p0 = ap_reg_ppstg_tmp_5_reg_22225_pp0_it1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read()))) {
        grp_fu_2869_p0 = tmp_5_reg_22225.read();
    } else {
        grp_fu_2869_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2869_p3() {
    grp_fu_2869_p3 = (!grp_fu_2869_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2869_p0.read()[0].to_bool())? prev_orig_out_s_reg_24671.read(): reg_2528.read());
}

void needlemanWunsch::thread_grp_fu_2875_p2() {
    grp_fu_2875_p2 = (!ap_const_lv8_FF.is_01() || !reg_2542.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2542.read()));
}

void needlemanWunsch::thread_grp_fu_2881_p2() {
    grp_fu_2881_p2 = (!ap_const_lv8_FF.is_01() || !reg_2546.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2546.read()));
}

void needlemanWunsch::thread_grp_fu_2887_p2() {
    grp_fu_2887_p2 = (!ap_const_lv8_FF.is_01() || !reg_2551.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2551.read()));
}

void needlemanWunsch::thread_grp_fu_2893_p2() {
    grp_fu_2893_p2 = (!ap_const_lv8_FF.is_01() || !reg_2555.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2555.read()));
}

void needlemanWunsch::thread_grp_fu_2899_p2() {
    grp_fu_2899_p2 = (!ap_const_lv8_FF.is_01() || !reg_2560.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2560.read()));
}

void needlemanWunsch::thread_i_1_fu_3005_p2() {
    i_1_fu_3005_p2 = (i_reg_2224.read() | ap_const_lv20_1);
}

void needlemanWunsch::thread_i_2_fu_3056_p2() {
    i_2_fu_3056_p2 = (!ap_const_lv20_2.is_01() || !i_reg_2224.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_2) + sc_biguint<20>(i_reg_2224.read()));
}

void needlemanWunsch::thread_i_phi_fu_2228_p4() {
    if ((!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        i_phi_fu_2228_p4 = i_2_reg_22105.read();
    } else {
        i_phi_fu_2228_p4 = i_reg_2224.read();
    }
}

void needlemanWunsch::thread_max_orig_1_fu_20689_p3() {
    max_orig_1_fu_20689_p3 = (!tmp_8_fu_20683_p2.read()[0].is_01())? sc_lv<20>(): ((tmp_8_fu_20683_p2.read()[0].to_bool())? orig2_load_2_s_reg_35216.read(): max_orig_reg_2236.read());
}

void needlemanWunsch::thread_max_orig_2_fu_20777_p3() {
    max_orig_2_fu_20777_p3 = (!tmp_s_fu_20772_p2.read()[0].is_01())? sc_lv<20>(): ((tmp_s_fu_20772_p2.read()[0].to_bool())? prev_orig_out_2_i_98_reg_35281.read(): max_orig_1_reg_35234.read());
}

void needlemanWunsch::thread_max_score_1_fu_20696_p3() {
    max_score_1_fu_20696_p3 = (!tmp_8_fu_20683_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_8_fu_20683_p2.read()[0].to_bool())? max_score_3_fu_20680_p1.read(): max_score_reg_2248.read());
}

void needlemanWunsch::thread_max_score_2_fu_20783_p3() {
    max_score_2_fu_20783_p3 = (!tmp_s_fu_20772_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_s_fu_20772_p2.read()[0].to_bool())? max_score_4_fu_20769_p1.read(): max_score_1_reg_35239.read());
}

void needlemanWunsch::thread_max_score_3_fu_20680_p1() {
    max_score_3_fu_20680_p1 = esl_sext<32,8>(score2_load_2_s_reg_35210.read());
}

void needlemanWunsch::thread_max_score_4_fu_20769_p1() {
    max_score_4_fu_20769_p1 = esl_sext<32,8>(prev_score_out_2_i_98_reg_35275.read());
}

void needlemanWunsch::thread_needlemanWunsch_AXILiteS_s_axi_U_ap_dummy_ce() {
    needlemanWunsch_AXILiteS_s_axi_U_ap_dummy_ce = ap_const_logic_1;
}

void needlemanWunsch::thread_or_cond1_i1_10_fu_5671_p2() {
    or_cond1_i1_10_fu_5671_p2 = (tmp_54_10_reg_25467.read() | tmp_55_10_reg_25472.read());
}

void needlemanWunsch::thread_or_cond1_i1_11_fu_5830_p2() {
    or_cond1_i1_11_fu_5830_p2 = (tmp_54_11_reg_25590.read() | tmp_55_11_reg_25595.read());
}

void needlemanWunsch::thread_or_cond1_i1_12_fu_5991_p2() {
    or_cond1_i1_12_fu_5991_p2 = (tmp_54_12_reg_25711.read() | tmp_55_12_reg_25716.read());
}

void needlemanWunsch::thread_or_cond1_i1_13_fu_6150_p2() {
    or_cond1_i1_13_fu_6150_p2 = (tmp_54_13_reg_25834.read() | tmp_55_13_reg_25839.read());
}

void needlemanWunsch::thread_or_cond1_i1_14_fu_6311_p2() {
    or_cond1_i1_14_fu_6311_p2 = (tmp_54_14_reg_25955.read() | tmp_55_14_reg_25960.read());
}

void needlemanWunsch::thread_or_cond1_i1_15_fu_6472_p2() {
    or_cond1_i1_15_fu_6472_p2 = (tmp_54_15_reg_26076.read() | tmp_55_15_reg_26081.read());
}

void needlemanWunsch::thread_or_cond1_i1_16_fu_6633_p2() {
    or_cond1_i1_16_fu_6633_p2 = (tmp_54_16_reg_26197.read() | tmp_55_16_reg_26202.read());
}

void needlemanWunsch::thread_or_cond1_i1_17_fu_6798_p2() {
    or_cond1_i1_17_fu_6798_p2 = (tmp_54_17_reg_26326.read() | tmp_55_17_reg_26331.read());
}

void needlemanWunsch::thread_or_cond1_i1_18_fu_6962_p2() {
    or_cond1_i1_18_fu_6962_p2 = (tmp_54_18_reg_26443.read() | tmp_55_18_reg_26448.read());
}

void needlemanWunsch::thread_or_cond1_i1_19_fu_7128_p2() {
    or_cond1_i1_19_fu_7128_p2 = (tmp_54_19_reg_26569.read() | tmp_55_19_reg_26574.read());
}

void needlemanWunsch::thread_or_cond1_i1_1_fu_3347_p2() {
    or_cond1_i1_1_fu_3347_p2 = (tmp_54_1_reg_22954.read() | tmp_55_1_reg_22959.read());
}

void needlemanWunsch::thread_or_cond1_i1_20_fu_7294_p2() {
    or_cond1_i1_20_fu_7294_p2 = (tmp_54_20_reg_26690.read() | tmp_55_20_reg_26695.read());
}

void needlemanWunsch::thread_or_cond1_i1_21_fu_7453_p2() {
    or_cond1_i1_21_fu_7453_p2 = (tmp_54_21_reg_26813.read() | tmp_55_21_reg_26818.read());
}

void needlemanWunsch::thread_or_cond1_i1_22_fu_7619_p2() {
    or_cond1_i1_22_fu_7619_p2 = (tmp_54_22_reg_26933.read() | tmp_55_22_reg_26938.read());
}

void needlemanWunsch::thread_or_cond1_i1_23_fu_7783_p2() {
    or_cond1_i1_23_fu_7783_p2 = (tmp_54_23_reg_27056.read() | tmp_55_23_reg_27061.read());
}

void needlemanWunsch::thread_or_cond1_i1_24_fu_7942_p2() {
    or_cond1_i1_24_fu_7942_p2 = (tmp_54_24_reg_27173.read() | tmp_55_24_reg_27178.read());
}

void needlemanWunsch::thread_or_cond1_i1_25_fu_8112_p2() {
    or_cond1_i1_25_fu_8112_p2 = (tmp_54_25_reg_27287.read() | tmp_55_25_reg_27292.read());
}

void needlemanWunsch::thread_or_cond1_i1_26_fu_8277_p2() {
    or_cond1_i1_26_fu_8277_p2 = (tmp_54_26_reg_27412.read() | tmp_55_26_reg_27417.read());
}

void needlemanWunsch::thread_or_cond1_i1_27_fu_8440_p2() {
    or_cond1_i1_27_fu_8440_p2 = (tmp_54_27_reg_27531.read() | tmp_55_27_reg_27536.read());
}

void needlemanWunsch::thread_or_cond1_i1_28_fu_8608_p2() {
    or_cond1_i1_28_fu_8608_p2 = (tmp_54_28_reg_27653.read() | tmp_55_28_reg_27658.read());
}

void needlemanWunsch::thread_or_cond1_i1_29_fu_8771_p2() {
    or_cond1_i1_29_fu_8771_p2 = (tmp_54_29_reg_27764.read() | tmp_55_29_reg_27769.read());
}

void needlemanWunsch::thread_or_cond1_i1_2_fu_3507_p2() {
    or_cond1_i1_2_fu_3507_p2 = (tmp_54_2_reg_23234.read() | tmp_55_2_reg_23239.read());
}

void needlemanWunsch::thread_or_cond1_i1_30_fu_8934_p2() {
    or_cond1_i1_30_fu_8934_p2 = (tmp_54_30_reg_27886.read() | tmp_55_30_reg_27891.read());
}

void needlemanWunsch::thread_or_cond1_i1_31_fu_9103_p2() {
    or_cond1_i1_31_fu_9103_p2 = (tmp_54_31_reg_28005.read() | tmp_55_31_reg_28010.read());
}

void needlemanWunsch::thread_or_cond1_i1_32_fu_9268_p2() {
    or_cond1_i1_32_fu_9268_p2 = (tmp_54_32_reg_28125.read() | tmp_55_32_reg_28130.read());
}

void needlemanWunsch::thread_or_cond1_i1_33_fu_9437_p2() {
    or_cond1_i1_33_fu_9437_p2 = (tmp_54_33_reg_28244.read() | tmp_55_33_reg_28249.read());
}

void needlemanWunsch::thread_or_cond1_i1_34_fu_9611_p2() {
    or_cond1_i1_34_fu_9611_p2 = (tmp_54_34_reg_28369.read() | tmp_55_34_reg_28374.read());
}

void needlemanWunsch::thread_or_cond1_i1_35_fu_9775_p2() {
    or_cond1_i1_35_fu_9775_p2 = (tmp_54_35_reg_28483.read() | tmp_55_35_reg_28488.read());
}

void needlemanWunsch::thread_or_cond1_i1_36_fu_9945_p2() {
    or_cond1_i1_36_fu_9945_p2 = (tmp_54_36_reg_28608.read() | tmp_55_36_reg_28613.read());
}

void needlemanWunsch::thread_or_cond1_i1_37_fu_10119_p2() {
    or_cond1_i1_37_fu_10119_p2 = (tmp_54_37_reg_28727.read() | tmp_55_37_reg_28732.read());
}

void needlemanWunsch::thread_or_cond1_i1_38_fu_10284_p2() {
    or_cond1_i1_38_fu_10284_p2 = (tmp_54_38_reg_28842.read() | tmp_55_38_reg_28847.read());
}

void needlemanWunsch::thread_or_cond1_i1_39_fu_10454_p2() {
    or_cond1_i1_39_fu_10454_p2 = (tmp_54_39_reg_28956.read() | tmp_55_39_reg_28961.read());
}

void needlemanWunsch::thread_or_cond1_i1_3_fu_4369_p2() {
    or_cond1_i1_3_fu_4369_p2 = (tmp_54_3_reg_24363.read() | tmp_55_3_reg_24368.read());
}

void needlemanWunsch::thread_or_cond1_i1_40_fu_10629_p2() {
    or_cond1_i1_40_fu_10629_p2 = (tmp_54_40_reg_29081.read() | tmp_55_40_reg_29086.read());
}

void needlemanWunsch::thread_or_cond1_i1_41_fu_10794_p2() {
    or_cond1_i1_41_fu_10794_p2 = (tmp_54_41_reg_29190.read() | tmp_55_41_reg_29195.read());
}

void needlemanWunsch::thread_or_cond1_i1_42_fu_10964_p2() {
    or_cond1_i1_42_fu_10964_p2 = (tmp_54_42_reg_29315.read() | tmp_55_42_reg_29320.read());
}

void needlemanWunsch::thread_or_cond1_i1_43_fu_11137_p2() {
    or_cond1_i1_43_fu_11137_p2 = (tmp_54_43_reg_29426.read() | tmp_55_43_reg_29431.read());
}

void needlemanWunsch::thread_or_cond1_i1_44_fu_11303_p2() {
    or_cond1_i1_44_fu_11303_p2 = (tmp_54_44_reg_29546.read() | tmp_55_44_reg_29551.read());
}

void needlemanWunsch::thread_or_cond1_i1_45_fu_11472_p2() {
    or_cond1_i1_45_fu_11472_p2 = (tmp_54_45_reg_29665.read() | tmp_55_45_reg_29670.read());
}

void needlemanWunsch::thread_or_cond1_i1_46_fu_11645_p2() {
    or_cond1_i1_46_fu_11645_p2 = (tmp_54_46_reg_29787.read() | tmp_55_46_reg_29792.read());
}

void needlemanWunsch::thread_or_cond1_i1_47_fu_11810_p2() {
    or_cond1_i1_47_fu_11810_p2 = (tmp_54_47_reg_29896.read() | tmp_55_47_reg_29901.read());
}

void needlemanWunsch::thread_or_cond1_i1_48_fu_11980_p2() {
    or_cond1_i1_48_fu_11980_p2 = (tmp_54_48_reg_30016.read() | tmp_55_48_reg_30021.read());
}

void needlemanWunsch::thread_or_cond1_i1_49_fu_12151_p2() {
    or_cond1_i1_49_fu_12151_p2 = (tmp_54_49_reg_30130.read() | tmp_55_49_reg_30135.read());
}

void needlemanWunsch::thread_or_cond1_i1_4_fu_4500_p2() {
    or_cond1_i1_4_fu_4500_p2 = (tmp_54_4_reg_24477.read() | tmp_55_4_reg_24482.read());
}

void needlemanWunsch::thread_or_cond1_i1_50_fu_12326_p2() {
    or_cond1_i1_50_fu_12326_p2 = (tmp_54_50_reg_30243.read() | tmp_55_50_reg_30248.read());
}

void needlemanWunsch::thread_or_cond1_i1_51_fu_12495_p2() {
    or_cond1_i1_51_fu_12495_p2 = (tmp_54_51_reg_30353.read() | tmp_55_51_reg_30358.read());
}

void needlemanWunsch::thread_or_cond1_i1_52_fu_12669_p2() {
    or_cond1_i1_52_fu_12669_p2 = (tmp_54_52_reg_30460.read() | tmp_55_52_reg_30465.read());
}

void needlemanWunsch::thread_or_cond1_i1_53_fu_12837_p2() {
    or_cond1_i1_53_fu_12837_p2 = (tmp_54_53_reg_30559.read() | tmp_55_53_reg_30564.read());
}

void needlemanWunsch::thread_or_cond1_i1_54_fu_13003_p2() {
    or_cond1_i1_54_fu_13003_p2 = (tmp_54_54_reg_30666.read() | tmp_55_54_reg_30671.read());
}

void needlemanWunsch::thread_or_cond1_i1_55_fu_13172_p2() {
    or_cond1_i1_55_fu_13172_p2 = (tmp_54_55_reg_30770.read() | tmp_55_55_reg_30775.read());
}

void needlemanWunsch::thread_or_cond1_i1_56_fu_13346_p2() {
    or_cond1_i1_56_fu_13346_p2 = (tmp_54_56_reg_30877.read() | tmp_55_56_reg_30882.read());
}

void needlemanWunsch::thread_or_cond1_i1_57_fu_13519_p2() {
    or_cond1_i1_57_fu_13519_p2 = (tmp_54_57_reg_30976.read() | tmp_55_57_reg_30981.read());
}

void needlemanWunsch::thread_or_cond1_i1_58_fu_13689_p2() {
    or_cond1_i1_58_fu_13689_p2 = (tmp_54_58_reg_31080.read() | tmp_55_58_reg_31085.read());
}

void needlemanWunsch::thread_or_cond1_i1_59_fu_13863_p2() {
    or_cond1_i1_59_fu_13863_p2 = (tmp_54_59_reg_31187.read() | tmp_55_59_reg_31192.read());
}

void needlemanWunsch::thread_or_cond1_i1_5_fu_4631_p2() {
    or_cond1_i1_5_fu_4631_p2 = (tmp_54_5_reg_24583.read() | tmp_55_5_reg_24588.read());
}

void needlemanWunsch::thread_or_cond1_i1_60_fu_14036_p2() {
    or_cond1_i1_60_fu_14036_p2 = (tmp_54_60_reg_31291.read() | tmp_55_60_reg_31296.read());
}

void needlemanWunsch::thread_or_cond1_i1_61_fu_14210_p2() {
    or_cond1_i1_61_fu_14210_p2 = (tmp_54_61_reg_31393.read() | tmp_55_61_reg_31398.read());
}

void needlemanWunsch::thread_or_cond1_i1_62_fu_14385_p2() {
    or_cond1_i1_62_fu_14385_p2 = (tmp_54_62_reg_31500.read() | tmp_55_62_reg_31505.read());
}

void needlemanWunsch::thread_or_cond1_i1_63_fu_14558_p2() {
    or_cond1_i1_63_fu_14558_p2 = (tmp_54_63_reg_31599.read() | tmp_55_63_reg_31604.read());
}

void needlemanWunsch::thread_or_cond1_i1_64_fu_14733_p2() {
    or_cond1_i1_64_fu_14733_p2 = (tmp_54_64_reg_31706.read() | tmp_55_64_reg_31711.read());
}

void needlemanWunsch::thread_or_cond1_i1_65_fu_14906_p2() {
    or_cond1_i1_65_fu_14906_p2 = (tmp_54_65_reg_31805.read() | tmp_55_65_reg_31810.read());
}

void needlemanWunsch::thread_or_cond1_i1_66_fu_15080_p2() {
    or_cond1_i1_66_fu_15080_p2 = (tmp_54_66_reg_31904.read() | tmp_55_66_reg_31909.read());
}

void needlemanWunsch::thread_or_cond1_i1_67_fu_15254_p2() {
    or_cond1_i1_67_fu_15254_p2 = (tmp_54_67_reg_32003.read() | tmp_55_67_reg_32008.read());
}

void needlemanWunsch::thread_or_cond1_i1_68_fu_15428_p2() {
    or_cond1_i1_68_fu_15428_p2 = (tmp_54_68_reg_32102.read() | tmp_55_68_reg_32107.read());
}

void needlemanWunsch::thread_or_cond1_i1_69_fu_15602_p2() {
    or_cond1_i1_69_fu_15602_p2 = (tmp_54_69_reg_32201.read() | tmp_55_69_reg_32206.read());
}

void needlemanWunsch::thread_or_cond1_i1_6_fu_4789_p2() {
    or_cond1_i1_6_fu_4789_p2 = (tmp_54_6_reg_24783.read() | tmp_55_6_reg_24788.read());
}

void needlemanWunsch::thread_or_cond1_i1_70_fu_15777_p2() {
    or_cond1_i1_70_fu_15777_p2 = (tmp_54_70_reg_32303.read() | tmp_55_70_reg_32308.read());
}

void needlemanWunsch::thread_or_cond1_i1_71_fu_15952_p2() {
    or_cond1_i1_71_fu_15952_p2 = (tmp_54_71_reg_32405.read() | tmp_55_71_reg_32410.read());
}

void needlemanWunsch::thread_or_cond1_i1_72_fu_16127_p2() {
    or_cond1_i1_72_fu_16127_p2 = (tmp_54_72_reg_32507.read() | tmp_55_72_reg_32512.read());
}

void needlemanWunsch::thread_or_cond1_i1_73_fu_16302_p2() {
    or_cond1_i1_73_fu_16302_p2 = (tmp_54_73_reg_32609.read() | tmp_55_73_reg_32614.read());
}

void needlemanWunsch::thread_or_cond1_i1_74_fu_16477_p2() {
    or_cond1_i1_74_fu_16477_p2 = (tmp_54_74_reg_32711.read() | tmp_55_74_reg_32716.read());
}

void needlemanWunsch::thread_or_cond1_i1_75_fu_16652_p2() {
    or_cond1_i1_75_fu_16652_p2 = (tmp_54_75_reg_32813.read() | tmp_55_75_reg_32818.read());
}

void needlemanWunsch::thread_or_cond1_i1_76_fu_16827_p2() {
    or_cond1_i1_76_fu_16827_p2 = (tmp_54_76_reg_32915.read() | tmp_55_76_reg_32920.read());
}

void needlemanWunsch::thread_or_cond1_i1_77_fu_17002_p2() {
    or_cond1_i1_77_fu_17002_p2 = (tmp_54_77_reg_33017.read() | tmp_55_77_reg_33022.read());
}

void needlemanWunsch::thread_or_cond1_i1_78_fu_17176_p2() {
    or_cond1_i1_78_fu_17176_p2 = (tmp_54_78_reg_33116.read() | tmp_55_78_reg_33121.read());
}

void needlemanWunsch::thread_or_cond1_i1_79_fu_17351_p2() {
    or_cond1_i1_79_fu_17351_p2 = (tmp_54_79_reg_33218.read() | tmp_55_79_reg_33223.read());
}

void needlemanWunsch::thread_or_cond1_i1_7_fu_4964_p2() {
    or_cond1_i1_7_fu_4964_p2 = (tmp_54_7_reg_24913.read() | tmp_55_7_reg_24918.read());
}

void needlemanWunsch::thread_or_cond1_i1_80_fu_17525_p2() {
    or_cond1_i1_80_fu_17525_p2 = (tmp_54_80_reg_33317.read() | tmp_55_80_reg_33322.read());
}

void needlemanWunsch::thread_or_cond1_i1_81_fu_17699_p2() {
    or_cond1_i1_81_fu_17699_p2 = (tmp_54_81_reg_33421.read() | tmp_55_81_reg_33426.read());
}

void needlemanWunsch::thread_or_cond1_i1_82_fu_17872_p2() {
    or_cond1_i1_82_fu_17872_p2 = (tmp_54_82_reg_33525.read() | tmp_55_82_reg_33530.read());
}

void needlemanWunsch::thread_or_cond1_i1_83_fu_18046_p2() {
    or_cond1_i1_83_fu_18046_p2 = (tmp_54_83_reg_33632.read() | tmp_55_83_reg_33637.read());
}

void needlemanWunsch::thread_or_cond1_i1_84_fu_18220_p2() {
    or_cond1_i1_84_fu_18220_p2 = (tmp_54_84_reg_33734.read() | tmp_55_84_reg_33739.read());
}

void needlemanWunsch::thread_or_cond1_i1_85_fu_18395_p2() {
    or_cond1_i1_85_fu_18395_p2 = (tmp_54_85_reg_33836.read() | tmp_55_85_reg_33841.read());
}

void needlemanWunsch::thread_or_cond1_i1_86_fu_18569_p2() {
    or_cond1_i1_86_fu_18569_p2 = (tmp_54_86_reg_33935.read() | tmp_55_86_reg_33940.read());
}

void needlemanWunsch::thread_or_cond1_i1_87_fu_18744_p2() {
    or_cond1_i1_87_fu_18744_p2 = (tmp_54_87_reg_34042.read() | tmp_55_87_reg_34047.read());
}

void needlemanWunsch::thread_or_cond1_i1_88_fu_18918_p2() {
    or_cond1_i1_88_fu_18918_p2 = (tmp_54_88_reg_34144.read() | tmp_55_88_reg_34149.read());
}

void needlemanWunsch::thread_or_cond1_i1_89_fu_19093_p2() {
    or_cond1_i1_89_fu_19093_p2 = (tmp_54_89_reg_34251.read() | tmp_55_89_reg_34256.read());
}

void needlemanWunsch::thread_or_cond1_i1_8_fu_5145_p2() {
    or_cond1_i1_8_fu_5145_p2 = (tmp_54_8_reg_25049.read() | tmp_55_8_reg_25054.read());
}

void needlemanWunsch::thread_or_cond1_i1_90_fu_19267_p2() {
    or_cond1_i1_90_fu_19267_p2 = (tmp_54_90_reg_34353.read() | tmp_55_90_reg_34358.read());
}

void needlemanWunsch::thread_or_cond1_i1_91_fu_19442_p2() {
    or_cond1_i1_91_fu_19442_p2 = (tmp_54_91_reg_34455.read() | tmp_55_91_reg_34460.read());
}

void needlemanWunsch::thread_or_cond1_i1_92_fu_19616_p2() {
    or_cond1_i1_92_fu_19616_p2 = (tmp_54_92_reg_34554.read() | tmp_55_92_reg_34559.read());
}

void needlemanWunsch::thread_or_cond1_i1_93_fu_19791_p2() {
    or_cond1_i1_93_fu_19791_p2 = (tmp_54_93_reg_34656.read() | tmp_55_93_reg_34661.read());
}

void needlemanWunsch::thread_or_cond1_i1_94_fu_19966_p2() {
    or_cond1_i1_94_fu_19966_p2 = (tmp_54_94_reg_34758.read() | tmp_55_94_reg_34763.read());
}

void needlemanWunsch::thread_or_cond1_i1_95_fu_20141_p2() {
    or_cond1_i1_95_fu_20141_p2 = (tmp_54_95_reg_34860.read() | tmp_55_95_reg_34865.read());
}

void needlemanWunsch::thread_or_cond1_i1_96_fu_20310_p2() {
    or_cond1_i1_96_fu_20310_p2 = (tmp_54_96_reg_34962.read() | tmp_55_96_reg_34967.read());
}

void needlemanWunsch::thread_or_cond1_i1_97_fu_20485_p2() {
    or_cond1_i1_97_fu_20485_p2 = (tmp_54_97_reg_35083.read() | tmp_55_97_reg_35088.read());
}

void needlemanWunsch::thread_or_cond1_i1_98_fu_20616_p2() {
    or_cond1_i1_98_fu_20616_p2 = (tmp_54_98_reg_35167.read() | tmp_55_98_reg_35172.read());
}

void needlemanWunsch::thread_or_cond1_i1_9_fu_5326_p2() {
    or_cond1_i1_9_fu_5326_p2 = (tmp_54_9_reg_25185.read() | tmp_55_9_reg_25190.read());
}

void needlemanWunsch::thread_or_cond1_i1_s_fu_5505_p2() {
    or_cond1_i1_s_fu_5505_p2 = (tmp_54_s_reg_25323.read() | tmp_55_s_reg_25328.read());
}

void needlemanWunsch::thread_or_cond1_i_10_fu_5886_p2() {
    or_cond1_i_10_fu_5886_p2 = (tmp_61_10_reg_25639.read() | tmp_62_10_reg_25644.read());
}

void needlemanWunsch::thread_or_cond1_i_11_fu_6054_p2() {
    or_cond1_i_11_fu_6054_p2 = (tmp_61_11_reg_25760.read() | tmp_62_11_reg_25765.read());
}

void needlemanWunsch::thread_or_cond1_i_12_fu_6206_p2() {
    or_cond1_i_12_fu_6206_p2 = (tmp_61_12_reg_25883.read() | tmp_62_12_reg_25888.read());
}

void needlemanWunsch::thread_or_cond1_i_13_fu_6367_p2() {
    or_cond1_i_13_fu_6367_p2 = (tmp_61_13_reg_26004.read() | tmp_62_13_reg_26009.read());
}

void needlemanWunsch::thread_or_cond1_i_14_fu_6528_p2() {
    or_cond1_i_14_fu_6528_p2 = (tmp_61_14_reg_26125.read() | tmp_62_14_reg_26130.read());
}

void needlemanWunsch::thread_or_cond1_i_15_fu_6696_p2() {
    or_cond1_i_15_fu_6696_p2 = (tmp_61_15_reg_26246.read() | tmp_62_15_reg_26251.read());
}

void needlemanWunsch::thread_or_cond1_i_16_fu_6861_p2() {
    or_cond1_i_16_fu_6861_p2 = (tmp_61_16_reg_26369.read() | tmp_62_16_reg_26374.read());
}

void needlemanWunsch::thread_or_cond1_i_17_fu_7018_p2() {
    or_cond1_i_17_fu_7018_p2 = (tmp_61_17_reg_26486.read() | tmp_62_17_reg_26491.read());
}

void needlemanWunsch::thread_or_cond1_i_18_fu_7184_p2() {
    or_cond1_i_18_fu_7184_p2 = (tmp_61_18_reg_26606.read() | tmp_62_18_reg_26611.read());
}

void needlemanWunsch::thread_or_cond1_i_19_fu_7357_p2() {
    or_cond1_i_19_fu_7357_p2 = (tmp_61_19_reg_26733.read() | tmp_62_19_reg_26738.read());
}

void needlemanWunsch::thread_or_cond1_i_1_fu_3898_p2() {
    or_cond1_i_1_fu_3898_p2 = (tmp_61_1_reg_23352.read() | tmp_62_1_reg_23357.read());
}

void needlemanWunsch::thread_or_cond1_i_20_fu_7509_p2() {
    or_cond1_i_20_fu_7509_p2 = (tmp_61_20_reg_26850.read() | tmp_62_20_reg_26855.read());
}

void needlemanWunsch::thread_or_cond1_i_21_fu_7682_p2() {
    or_cond1_i_21_fu_7682_p2 = (tmp_61_21_reg_26976.read() | tmp_62_21_reg_26981.read());
}

void needlemanWunsch::thread_or_cond1_i_22_fu_7846_p2() {
    or_cond1_i_22_fu_7846_p2 = (tmp_61_22_reg_27099.read() | tmp_62_22_reg_27104.read());
}

void needlemanWunsch::thread_or_cond1_i_23_fu_8002_p2() {
    or_cond1_i_23_fu_8002_p2 = (tmp_61_23_reg_27210.read() | tmp_62_23_reg_27215.read());
}

void needlemanWunsch::thread_or_cond1_i_24_fu_8173_p2() {
    or_cond1_i_24_fu_8173_p2 = (tmp_61_24_reg_27324.read() | tmp_62_24_reg_27329.read());
}

void needlemanWunsch::thread_or_cond1_i_25_fu_8336_p2() {
    or_cond1_i_25_fu_8336_p2 = (tmp_61_25_reg_27449.read() | tmp_62_25_reg_27454.read());
}

void needlemanWunsch::thread_or_cond1_i_26_fu_8506_p2() {
    or_cond1_i_26_fu_8506_p2 = (tmp_61_26_reg_27568.read() | tmp_62_26_reg_27573.read());
}

void needlemanWunsch::thread_or_cond1_i_27_fu_8670_p2() {
    or_cond1_i_27_fu_8670_p2 = (tmp_61_27_reg_27690.read() | tmp_62_27_reg_27695.read());
}

void needlemanWunsch::thread_or_cond1_i_28_fu_8838_p2() {
    or_cond1_i_28_fu_8838_p2 = (tmp_61_28_reg_27801.read() | tmp_62_28_reg_27806.read());
}

void needlemanWunsch::thread_or_cond1_i_29_fu_8993_p2() {
    or_cond1_i_29_fu_8993_p2 = (tmp_61_29_reg_27923.read() | tmp_62_29_reg_27928.read());
}

void needlemanWunsch::thread_or_cond1_i_2_fu_4417_p2() {
    or_cond1_i_2_fu_4417_p2 = (tmp_61_2_reg_24396.read() | tmp_62_2_reg_24401.read());
}

void needlemanWunsch::thread_or_cond1_i_30_fu_9163_p2() {
    or_cond1_i_30_fu_9163_p2 = (tmp_61_30_reg_28042.read() | tmp_62_30_reg_28047.read());
}

void needlemanWunsch::thread_or_cond1_i_31_fu_9327_p2() {
    or_cond1_i_31_fu_9327_p2 = (tmp_61_31_reg_28162.read() | tmp_62_31_reg_28167.read());
}

void needlemanWunsch::thread_or_cond1_i_32_fu_9501_p2() {
    or_cond1_i_32_fu_9501_p2 = (tmp_61_32_reg_28281.read() | tmp_62_32_reg_28286.read());
}

void needlemanWunsch::thread_or_cond1_i_33_fu_9666_p2() {
    or_cond1_i_33_fu_9666_p2 = (tmp_61_33_reg_28406.read() | tmp_62_33_reg_28411.read());
}

void needlemanWunsch::thread_or_cond1_i_34_fu_9835_p2() {
    or_cond1_i_34_fu_9835_p2 = (tmp_61_34_reg_28520.read() | tmp_62_34_reg_28525.read());
}

void needlemanWunsch::thread_or_cond1_i_35_fu_10009_p2() {
    or_cond1_i_35_fu_10009_p2 = (tmp_61_35_reg_28645.read() | tmp_62_35_reg_28650.read());
}

void needlemanWunsch::thread_or_cond1_i_36_fu_10174_p2() {
    or_cond1_i_36_fu_10174_p2 = (tmp_61_36_reg_28764.read() | tmp_62_36_reg_28769.read());
}

void needlemanWunsch::thread_or_cond1_i_37_fu_10344_p2() {
    or_cond1_i_37_fu_10344_p2 = (tmp_61_37_reg_28879.read() | tmp_62_37_reg_28884.read());
}

void needlemanWunsch::thread_or_cond1_i_38_fu_10519_p2() {
    or_cond1_i_38_fu_10519_p2 = (tmp_61_38_reg_28993.read() | tmp_62_38_reg_28998.read());
}

void needlemanWunsch::thread_or_cond1_i_39_fu_10684_p2() {
    or_cond1_i_39_fu_10684_p2 = (tmp_61_39_reg_29118.read() | tmp_62_39_reg_29123.read());
}

void needlemanWunsch::thread_or_cond1_i_3_fu_4548_p2() {
    or_cond1_i_3_fu_4548_p2 = (tmp_61_3_reg_24502.read() | tmp_62_3_reg_24507.read());
}

void needlemanWunsch::thread_or_cond1_i_40_fu_10854_p2() {
    or_cond1_i_40_fu_10854_p2 = (tmp_61_40_reg_29227.read() | tmp_62_40_reg_29232.read());
}

void needlemanWunsch::thread_or_cond1_i_41_fu_11030_p2() {
    or_cond1_i_41_fu_11030_p2 = (tmp_61_41_reg_29352.read() | tmp_62_41_reg_29357.read());
}

void needlemanWunsch::thread_or_cond1_i_42_fu_11198_p2() {
    or_cond1_i_42_fu_11198_p2 = (tmp_61_42_reg_29463.read() | tmp_62_42_reg_29468.read());
}

void needlemanWunsch::thread_or_cond1_i_43_fu_11362_p2() {
    or_cond1_i_43_fu_11362_p2 = (tmp_61_43_reg_29583.read() | tmp_62_43_reg_29588.read());
}

void needlemanWunsch::thread_or_cond1_i_44_fu_11543_p2() {
    or_cond1_i_44_fu_11543_p2 = (tmp_61_44_reg_29702.read() | tmp_62_44_reg_29707.read());
}

void needlemanWunsch::thread_or_cond1_i_45_fu_11700_p2() {
    or_cond1_i_45_fu_11700_p2 = (tmp_61_45_reg_29824.read() | tmp_62_45_reg_29829.read());
}

void needlemanWunsch::thread_or_cond1_i_46_fu_11870_p2() {
    or_cond1_i_46_fu_11870_p2 = (tmp_61_46_reg_29933.read() | tmp_62_46_reg_29938.read());
}

void needlemanWunsch::thread_or_cond1_i_47_fu_12036_p2() {
    or_cond1_i_47_fu_12036_p2 = (tmp_61_47_reg_30053.read() | tmp_62_47_reg_30058.read());
}

void needlemanWunsch::thread_or_cond1_i_48_fu_12216_p2() {
    or_cond1_i_48_fu_12216_p2 = (tmp_61_48_reg_30155.read() | tmp_62_48_reg_30160.read());
}

void needlemanWunsch::thread_or_cond1_i_49_fu_12393_p2() {
    or_cond1_i_49_fu_12393_p2 = (tmp_61_49_reg_30274.read() | tmp_62_49_reg_30279.read());
}

void needlemanWunsch::thread_or_cond1_i_4_fu_4672_p2() {
    or_cond1_i_4_fu_4672_p2 = (tmp_61_4_reg_24608.read() | tmp_62_4_reg_24613.read());
}

void needlemanWunsch::thread_or_cond1_i_50_fu_12554_p2() {
    or_cond1_i_50_fu_12554_p2 = (tmp_61_50_reg_30383.read() | tmp_62_50_reg_30388.read());
}

void needlemanWunsch::thread_or_cond1_i_51_fu_12736_p2() {
    or_cond1_i_51_fu_12736_p2 = (tmp_61_51_reg_30485.read() | tmp_62_51_reg_30490.read());
}

void needlemanWunsch::thread_or_cond1_i_52_fu_12893_p2() {
    or_cond1_i_52_fu_12893_p2 = (tmp_61_52_reg_30584.read() | tmp_62_52_reg_30589.read());
}

void needlemanWunsch::thread_or_cond1_i_53_fu_13070_p2() {
    or_cond1_i_53_fu_13070_p2 = (tmp_61_53_reg_30691.read() | tmp_62_53_reg_30696.read());
}

void needlemanWunsch::thread_or_cond1_i_54_fu_13236_p2() {
    or_cond1_i_54_fu_13236_p2 = (tmp_61_54_reg_30795.read() | tmp_62_54_reg_30800.read());
}

void needlemanWunsch::thread_or_cond1_i_55_fu_13412_p2() {
    or_cond1_i_55_fu_13412_p2 = (tmp_61_55_reg_30902.read() | tmp_62_55_reg_30907.read());
}

void needlemanWunsch::thread_or_cond1_i_56_fu_13587_p2() {
    or_cond1_i_56_fu_13587_p2 = (tmp_61_56_reg_31001.read() | tmp_62_56_reg_31006.read());
}

void needlemanWunsch::thread_or_cond1_i_57_fu_13753_p2() {
    or_cond1_i_57_fu_13753_p2 = (tmp_61_57_reg_31105.read() | tmp_62_57_reg_31110.read());
}

void needlemanWunsch::thread_or_cond1_i_58_fu_13934_p2() {
    or_cond1_i_58_fu_13934_p2 = (tmp_61_58_reg_31212.read() | tmp_62_58_reg_31217.read());
}

void needlemanWunsch::thread_or_cond1_i_59_fu_14095_p2() {
    or_cond1_i_59_fu_14095_p2 = (tmp_61_59_reg_31316.read() | tmp_62_59_reg_31321.read());
}

void needlemanWunsch::thread_or_cond1_i_5_fu_4835_p2() {
    or_cond1_i_5_fu_4835_p2 = (tmp_61_5_reg_24808.read() | tmp_62_5_reg_24813.read());
}

void needlemanWunsch::thread_or_cond1_i_60_fu_14275_p2() {
    or_cond1_i_60_fu_14275_p2 = (tmp_61_60_reg_31418.read() | tmp_62_60_reg_31423.read());
}

void needlemanWunsch::thread_or_cond1_i_61_fu_14451_p2() {
    or_cond1_i_61_fu_14451_p2 = (tmp_61_61_reg_31525.read() | tmp_62_61_reg_31530.read());
}

void needlemanWunsch::thread_or_cond1_i_62_fu_14623_p2() {
    or_cond1_i_62_fu_14623_p2 = (tmp_61_62_reg_31624.read() | tmp_62_62_reg_31629.read());
}

void needlemanWunsch::thread_or_cond1_i_63_fu_14799_p2() {
    or_cond1_i_63_fu_14799_p2 = (tmp_61_63_reg_31731.read() | tmp_62_63_reg_31736.read());
}

void needlemanWunsch::thread_or_cond1_i_64_fu_14973_p2() {
    or_cond1_i_64_fu_14973_p2 = (tmp_61_64_reg_31830.read() | tmp_62_64_reg_31835.read());
}

void needlemanWunsch::thread_or_cond1_i_65_fu_15147_p2() {
    or_cond1_i_65_fu_15147_p2 = (tmp_61_65_reg_31929.read() | tmp_62_65_reg_31934.read());
}

void needlemanWunsch::thread_or_cond1_i_66_fu_15321_p2() {
    or_cond1_i_66_fu_15321_p2 = (tmp_61_66_reg_32028.read() | tmp_62_66_reg_32033.read());
}

void needlemanWunsch::thread_or_cond1_i_67_fu_15495_p2() {
    or_cond1_i_67_fu_15495_p2 = (tmp_61_67_reg_32127.read() | tmp_62_67_reg_32132.read());
}

void needlemanWunsch::thread_or_cond1_i_68_fu_15662_p2() {
    or_cond1_i_68_fu_15662_p2 = (tmp_61_68_reg_32226.read() | tmp_62_68_reg_32231.read());
}

void needlemanWunsch::thread_or_cond1_i_69_fu_15837_p2() {
    or_cond1_i_69_fu_15837_p2 = (tmp_61_69_reg_32328.read() | tmp_62_69_reg_32333.read());
}

void needlemanWunsch::thread_or_cond1_i_6_fu_5016_p2() {
    or_cond1_i_6_fu_5016_p2 = (tmp_61_6_reg_24950.read() | tmp_62_6_reg_24955.read());
}

void needlemanWunsch::thread_or_cond1_i_70_fu_16012_p2() {
    or_cond1_i_70_fu_16012_p2 = (tmp_61_70_reg_32430.read() | tmp_62_70_reg_32435.read());
}

void needlemanWunsch::thread_or_cond1_i_71_fu_16187_p2() {
    or_cond1_i_71_fu_16187_p2 = (tmp_61_71_reg_32532.read() | tmp_62_71_reg_32537.read());
}

void needlemanWunsch::thread_or_cond1_i_72_fu_16362_p2() {
    or_cond1_i_72_fu_16362_p2 = (tmp_61_72_reg_32634.read() | tmp_62_72_reg_32639.read());
}

void needlemanWunsch::thread_or_cond1_i_73_fu_16537_p2() {
    or_cond1_i_73_fu_16537_p2 = (tmp_61_73_reg_32736.read() | tmp_62_73_reg_32741.read());
}

void needlemanWunsch::thread_or_cond1_i_74_fu_16712_p2() {
    or_cond1_i_74_fu_16712_p2 = (tmp_61_74_reg_32838.read() | tmp_62_74_reg_32843.read());
}

void needlemanWunsch::thread_or_cond1_i_75_fu_16887_p2() {
    or_cond1_i_75_fu_16887_p2 = (tmp_61_75_reg_32940.read() | tmp_62_75_reg_32945.read());
}

void needlemanWunsch::thread_or_cond1_i_76_fu_17069_p2() {
    or_cond1_i_76_fu_17069_p2 = (tmp_61_76_reg_33042.read() | tmp_62_76_reg_33047.read());
}

void needlemanWunsch::thread_or_cond1_i_77_fu_17236_p2() {
    or_cond1_i_77_fu_17236_p2 = (tmp_61_77_reg_33141.read() | tmp_62_77_reg_33146.read());
}

void needlemanWunsch::thread_or_cond1_i_78_fu_17418_p2() {
    or_cond1_i_78_fu_17418_p2 = (tmp_61_78_reg_33243.read() | tmp_62_78_reg_33248.read());
}

void needlemanWunsch::thread_or_cond1_i_79_fu_17597_p2() {
    or_cond1_i_79_fu_17597_p2 = (tmp_61_79_reg_33342.read() | tmp_62_79_reg_33347.read());
}

void needlemanWunsch::thread_or_cond1_i_7_fu_5197_p2() {
    or_cond1_i_7_fu_5197_p2 = (tmp_61_7_reg_25086.read() | tmp_62_7_reg_25091.read());
}

void needlemanWunsch::thread_or_cond1_i_80_fu_17770_p2() {
    or_cond1_i_80_fu_17770_p2 = (tmp_61_80_reg_33446.read() | tmp_62_80_reg_33451.read());
}

void needlemanWunsch::thread_or_cond1_i_81_fu_17936_p2() {
    or_cond1_i_81_fu_17936_p2 = (tmp_61_81_reg_33550.read() | tmp_62_81_reg_33555.read());
}

void needlemanWunsch::thread_or_cond1_i_82_fu_18105_p2() {
    or_cond1_i_82_fu_18105_p2 = (tmp_61_82_reg_33657.read() | tmp_62_82_reg_33662.read());
}

void needlemanWunsch::thread_or_cond1_i_83_fu_18280_p2() {
    or_cond1_i_83_fu_18280_p2 = (tmp_61_83_reg_33759.read() | tmp_62_83_reg_33764.read());
}

void needlemanWunsch::thread_or_cond1_i_84_fu_18462_p2() {
    or_cond1_i_84_fu_18462_p2 = (tmp_61_84_reg_33861.read() | tmp_62_84_reg_33866.read());
}

void needlemanWunsch::thread_or_cond1_i_85_fu_18634_p2() {
    or_cond1_i_85_fu_18634_p2 = (tmp_61_85_reg_33960.read() | tmp_62_85_reg_33965.read());
}

void needlemanWunsch::thread_or_cond1_i_86_fu_18803_p2() {
    or_cond1_i_86_fu_18803_p2 = (tmp_61_86_reg_34067.read() | tmp_62_86_reg_34072.read());
}

void needlemanWunsch::thread_or_cond1_i_87_fu_18983_p2() {
    or_cond1_i_87_fu_18983_p2 = (tmp_61_87_reg_34169.read() | tmp_62_87_reg_34174.read());
}

void needlemanWunsch::thread_or_cond1_i_88_fu_19152_p2() {
    or_cond1_i_88_fu_19152_p2 = (tmp_61_88_reg_34276.read() | tmp_62_88_reg_34281.read());
}

void needlemanWunsch::thread_or_cond1_i_89_fu_19327_p2() {
    or_cond1_i_89_fu_19327_p2 = (tmp_61_89_reg_34378.read() | tmp_62_89_reg_34383.read());
}

void needlemanWunsch::thread_or_cond1_i_8_fu_5385_p2() {
    or_cond1_i_8_fu_5385_p2 = (tmp_61_8_reg_25222.read() | tmp_62_8_reg_25227.read());
}

void needlemanWunsch::thread_or_cond1_i_90_fu_19509_p2() {
    or_cond1_i_90_fu_19509_p2 = (tmp_61_90_reg_34480.read() | tmp_62_90_reg_34485.read());
}

void needlemanWunsch::thread_or_cond1_i_91_fu_19676_p2() {
    or_cond1_i_91_fu_19676_p2 = (tmp_61_91_reg_34579.read() | tmp_62_91_reg_34584.read());
}

void needlemanWunsch::thread_or_cond1_i_92_fu_19851_p2() {
    or_cond1_i_92_fu_19851_p2 = (tmp_61_92_reg_34681.read() | tmp_62_92_reg_34686.read());
}

void needlemanWunsch::thread_or_cond1_i_93_fu_20026_p2() {
    or_cond1_i_93_fu_20026_p2 = (tmp_61_93_reg_34783.read() | tmp_62_93_reg_34788.read());
}

void needlemanWunsch::thread_or_cond1_i_94_fu_20201_p2() {
    or_cond1_i_94_fu_20201_p2 = (tmp_61_94_reg_34885.read() | tmp_62_94_reg_34890.read());
}

void needlemanWunsch::thread_or_cond1_i_95_fu_20389_p2() {
    or_cond1_i_95_fu_20389_p2 = (tmp_61_95_reg_34987.read() | tmp_62_95_reg_34992.read());
}

void needlemanWunsch::thread_or_cond1_i_96_fu_20520_p2() {
    or_cond1_i_96_fu_20520_p2 = (tmp_61_96_reg_35108.read() | tmp_62_96_reg_35113.read());
}

void needlemanWunsch::thread_or_cond1_i_97_fu_20650_p2() {
    or_cond1_i_97_fu_20650_p2 = (tmp_61_97_reg_35192.read() | tmp_62_97_reg_35197.read());
}

void needlemanWunsch::thread_or_cond1_i_98_fu_20739_p2() {
    or_cond1_i_98_fu_20739_p2 = (tmp_61_98_reg_35265.read() | tmp_62_98_reg_35270.read());
}

void needlemanWunsch::thread_or_cond1_i_9_fu_5564_p2() {
    or_cond1_i_9_fu_5564_p2 = (tmp_61_9_reg_25366.read() | tmp_62_9_reg_25371.read());
}

void needlemanWunsch::thread_or_cond1_i_s_fu_5734_p2() {
    or_cond1_i_s_fu_5734_p2 = (tmp_61_s_reg_25516.read() | tmp_62_s_reg_25521.read());
}

void needlemanWunsch::thread_or_cond_i1_10_fu_5667_p2() {
    or_cond_i1_10_fu_5667_p2 = (tmp_50_10_reg_25457.read() | tmp_51_10_reg_25462.read());
}

void needlemanWunsch::thread_or_cond_i1_11_fu_5826_p2() {
    or_cond_i1_11_fu_5826_p2 = (tmp_50_11_reg_25580.read() | tmp_51_11_reg_25585.read());
}

void needlemanWunsch::thread_or_cond_i1_12_fu_5987_p2() {
    or_cond_i1_12_fu_5987_p2 = (tmp_50_12_reg_25701.read() | tmp_51_12_reg_25706.read());
}

void needlemanWunsch::thread_or_cond_i1_13_fu_6146_p2() {
    or_cond_i1_13_fu_6146_p2 = (tmp_50_13_reg_25824.read() | tmp_51_13_reg_25829.read());
}

void needlemanWunsch::thread_or_cond_i1_14_fu_6307_p2() {
    or_cond_i1_14_fu_6307_p2 = (tmp_50_14_reg_25945.read() | tmp_51_14_reg_25950.read());
}

void needlemanWunsch::thread_or_cond_i1_15_fu_6468_p2() {
    or_cond_i1_15_fu_6468_p2 = (tmp_50_15_reg_26066.read() | tmp_51_15_reg_26071.read());
}

void needlemanWunsch::thread_or_cond_i1_16_fu_6629_p2() {
    or_cond_i1_16_fu_6629_p2 = (tmp_50_16_reg_26187.read() | tmp_51_16_reg_26192.read());
}

void needlemanWunsch::thread_or_cond_i1_17_fu_6794_p2() {
    or_cond_i1_17_fu_6794_p2 = (tmp_50_17_reg_26316.read() | tmp_51_17_reg_26321.read());
}

void needlemanWunsch::thread_or_cond_i1_18_fu_6958_p2() {
    or_cond_i1_18_fu_6958_p2 = (tmp_50_18_reg_26433.read() | tmp_51_18_reg_26438.read());
}

void needlemanWunsch::thread_or_cond_i1_19_fu_7124_p2() {
    or_cond_i1_19_fu_7124_p2 = (tmp_50_19_reg_26559.read() | tmp_51_19_reg_26564.read());
}

void needlemanWunsch::thread_or_cond_i1_1_fu_3343_p2() {
    or_cond_i1_1_fu_3343_p2 = (tmp_50_1_reg_22944.read() | tmp_51_1_reg_22949.read());
}

void needlemanWunsch::thread_or_cond_i1_20_fu_7290_p2() {
    or_cond_i1_20_fu_7290_p2 = (tmp_50_20_reg_26680.read() | tmp_51_20_reg_26685.read());
}

void needlemanWunsch::thread_or_cond_i1_21_fu_7449_p2() {
    or_cond_i1_21_fu_7449_p2 = (tmp_50_21_reg_26803.read() | tmp_51_21_reg_26808.read());
}

void needlemanWunsch::thread_or_cond_i1_22_fu_7615_p2() {
    or_cond_i1_22_fu_7615_p2 = (tmp_50_22_reg_26923.read() | tmp_51_22_reg_26928.read());
}

void needlemanWunsch::thread_or_cond_i1_23_fu_7779_p2() {
    or_cond_i1_23_fu_7779_p2 = (tmp_50_23_reg_27046.read() | tmp_51_23_reg_27051.read());
}

void needlemanWunsch::thread_or_cond_i1_24_fu_7938_p2() {
    or_cond_i1_24_fu_7938_p2 = (tmp_50_24_reg_27163.read() | tmp_51_24_reg_27168.read());
}

void needlemanWunsch::thread_or_cond_i1_25_fu_8108_p2() {
    or_cond_i1_25_fu_8108_p2 = (tmp_50_25_reg_27277.read() | tmp_51_25_reg_27282.read());
}

void needlemanWunsch::thread_or_cond_i1_26_fu_8273_p2() {
    or_cond_i1_26_fu_8273_p2 = (tmp_50_26_reg_27402.read() | tmp_51_26_reg_27407.read());
}

void needlemanWunsch::thread_or_cond_i1_27_fu_8436_p2() {
    or_cond_i1_27_fu_8436_p2 = (tmp_50_27_reg_27521.read() | tmp_51_27_reg_27526.read());
}

void needlemanWunsch::thread_or_cond_i1_28_fu_8604_p2() {
    or_cond_i1_28_fu_8604_p2 = (tmp_50_28_reg_27643.read() | tmp_51_28_reg_27648.read());
}

void needlemanWunsch::thread_or_cond_i1_29_fu_8767_p2() {
    or_cond_i1_29_fu_8767_p2 = (tmp_50_29_reg_27754.read() | tmp_51_29_reg_27759.read());
}

void needlemanWunsch::thread_or_cond_i1_2_fu_3503_p2() {
    or_cond_i1_2_fu_3503_p2 = (tmp_50_2_reg_23224.read() | tmp_51_2_reg_23229.read());
}

void needlemanWunsch::thread_or_cond_i1_30_fu_8930_p2() {
    or_cond_i1_30_fu_8930_p2 = (tmp_50_30_reg_27876.read() | tmp_51_30_reg_27881.read());
}

void needlemanWunsch::thread_or_cond_i1_31_fu_9099_p2() {
    or_cond_i1_31_fu_9099_p2 = (tmp_50_31_reg_27995.read() | tmp_51_31_reg_28000.read());
}

void needlemanWunsch::thread_or_cond_i1_32_fu_9264_p2() {
    or_cond_i1_32_fu_9264_p2 = (tmp_50_32_reg_28115.read() | tmp_51_32_reg_28120.read());
}

void needlemanWunsch::thread_or_cond_i1_33_fu_9433_p2() {
    or_cond_i1_33_fu_9433_p2 = (tmp_50_33_reg_28234.read() | tmp_51_33_reg_28239.read());
}

void needlemanWunsch::thread_or_cond_i1_34_fu_9607_p2() {
    or_cond_i1_34_fu_9607_p2 = (tmp_50_34_reg_28359.read() | tmp_51_34_reg_28364.read());
}

void needlemanWunsch::thread_or_cond_i1_35_fu_9771_p2() {
    or_cond_i1_35_fu_9771_p2 = (tmp_50_35_reg_28473.read() | tmp_51_35_reg_28478.read());
}

void needlemanWunsch::thread_or_cond_i1_36_fu_9941_p2() {
    or_cond_i1_36_fu_9941_p2 = (tmp_50_36_reg_28598.read() | tmp_51_36_reg_28603.read());
}

void needlemanWunsch::thread_or_cond_i1_37_fu_10115_p2() {
    or_cond_i1_37_fu_10115_p2 = (tmp_50_37_reg_28717.read() | tmp_51_37_reg_28722.read());
}

void needlemanWunsch::thread_or_cond_i1_38_fu_10280_p2() {
    or_cond_i1_38_fu_10280_p2 = (tmp_50_38_reg_28832.read() | tmp_51_38_reg_28837.read());
}

void needlemanWunsch::thread_or_cond_i1_39_fu_10450_p2() {
    or_cond_i1_39_fu_10450_p2 = (tmp_50_39_reg_28946.read() | tmp_51_39_reg_28951.read());
}

void needlemanWunsch::thread_or_cond_i1_3_fu_4365_p2() {
    or_cond_i1_3_fu_4365_p2 = (tmp_50_3_reg_24353.read() | tmp_51_3_reg_24358.read());
}

void needlemanWunsch::thread_or_cond_i1_40_fu_10625_p2() {
    or_cond_i1_40_fu_10625_p2 = (tmp_50_40_reg_29071.read() | tmp_51_40_reg_29076.read());
}

void needlemanWunsch::thread_or_cond_i1_41_fu_10790_p2() {
    or_cond_i1_41_fu_10790_p2 = (tmp_50_41_reg_29180.read() | tmp_51_41_reg_29185.read());
}

void needlemanWunsch::thread_or_cond_i1_42_fu_10960_p2() {
    or_cond_i1_42_fu_10960_p2 = (tmp_50_42_reg_29305.read() | tmp_51_42_reg_29310.read());
}

void needlemanWunsch::thread_or_cond_i1_43_fu_11133_p2() {
    or_cond_i1_43_fu_11133_p2 = (tmp_50_43_reg_29416.read() | tmp_51_43_reg_29421.read());
}

void needlemanWunsch::thread_or_cond_i1_44_fu_11299_p2() {
    or_cond_i1_44_fu_11299_p2 = (tmp_50_44_reg_29536.read() | tmp_51_44_reg_29541.read());
}

void needlemanWunsch::thread_or_cond_i1_45_fu_11468_p2() {
    or_cond_i1_45_fu_11468_p2 = (tmp_50_45_reg_29655.read() | tmp_51_45_reg_29660.read());
}

void needlemanWunsch::thread_or_cond_i1_46_fu_11641_p2() {
    or_cond_i1_46_fu_11641_p2 = (tmp_50_46_reg_29777.read() | tmp_51_46_reg_29782.read());
}

void needlemanWunsch::thread_or_cond_i1_47_fu_11806_p2() {
    or_cond_i1_47_fu_11806_p2 = (tmp_50_47_reg_29886.read() | tmp_51_47_reg_29891.read());
}

void needlemanWunsch::thread_or_cond_i1_48_fu_11976_p2() {
    or_cond_i1_48_fu_11976_p2 = (tmp_50_48_reg_30006.read() | tmp_51_48_reg_30011.read());
}

void needlemanWunsch::thread_or_cond_i1_49_fu_12147_p2() {
    or_cond_i1_49_fu_12147_p2 = (tmp_50_49_reg_30120.read() | tmp_51_49_reg_30125.read());
}

void needlemanWunsch::thread_or_cond_i1_4_fu_4496_p2() {
    or_cond_i1_4_fu_4496_p2 = (tmp_50_4_reg_24467.read() | tmp_51_4_reg_24472.read());
}

void needlemanWunsch::thread_or_cond_i1_50_fu_12322_p2() {
    or_cond_i1_50_fu_12322_p2 = (tmp_50_50_reg_30233.read() | tmp_51_50_reg_30238.read());
}

void needlemanWunsch::thread_or_cond_i1_51_fu_12491_p2() {
    or_cond_i1_51_fu_12491_p2 = (tmp_50_51_reg_30343.read() | tmp_51_51_reg_30348.read());
}

void needlemanWunsch::thread_or_cond_i1_52_fu_12665_p2() {
    or_cond_i1_52_fu_12665_p2 = (tmp_50_52_reg_30450.read() | tmp_51_52_reg_30455.read());
}

void needlemanWunsch::thread_or_cond_i1_53_fu_12833_p2() {
    or_cond_i1_53_fu_12833_p2 = (tmp_50_53_reg_30549.read() | tmp_51_53_reg_30554.read());
}

void needlemanWunsch::thread_or_cond_i1_54_fu_12999_p2() {
    or_cond_i1_54_fu_12999_p2 = (tmp_50_54_reg_30656.read() | tmp_51_54_reg_30661.read());
}

void needlemanWunsch::thread_or_cond_i1_55_fu_13168_p2() {
    or_cond_i1_55_fu_13168_p2 = (tmp_50_55_reg_30760.read() | tmp_51_55_reg_30765.read());
}

void needlemanWunsch::thread_or_cond_i1_56_fu_13342_p2() {
    or_cond_i1_56_fu_13342_p2 = (tmp_50_56_reg_30867.read() | tmp_51_56_reg_30872.read());
}

void needlemanWunsch::thread_or_cond_i1_57_fu_13515_p2() {
    or_cond_i1_57_fu_13515_p2 = (tmp_50_57_reg_30966.read() | tmp_51_57_reg_30971.read());
}

void needlemanWunsch::thread_or_cond_i1_58_fu_13685_p2() {
    or_cond_i1_58_fu_13685_p2 = (tmp_50_58_reg_31070.read() | tmp_51_58_reg_31075.read());
}

void needlemanWunsch::thread_or_cond_i1_59_fu_13859_p2() {
    or_cond_i1_59_fu_13859_p2 = (tmp_50_59_reg_31177.read() | tmp_51_59_reg_31182.read());
}

void needlemanWunsch::thread_or_cond_i1_5_fu_4627_p2() {
    or_cond_i1_5_fu_4627_p2 = (tmp_50_5_reg_24573.read() | tmp_51_5_reg_24578.read());
}

void needlemanWunsch::thread_or_cond_i1_60_fu_14032_p2() {
    or_cond_i1_60_fu_14032_p2 = (tmp_50_60_reg_31281.read() | tmp_51_60_reg_31286.read());
}

void needlemanWunsch::thread_or_cond_i1_61_fu_14206_p2() {
    or_cond_i1_61_fu_14206_p2 = (tmp_50_61_reg_31383.read() | tmp_51_61_reg_31388.read());
}

void needlemanWunsch::thread_or_cond_i1_62_fu_14381_p2() {
    or_cond_i1_62_fu_14381_p2 = (tmp_50_62_reg_31490.read() | tmp_51_62_reg_31495.read());
}

void needlemanWunsch::thread_or_cond_i1_63_fu_14554_p2() {
    or_cond_i1_63_fu_14554_p2 = (tmp_50_63_reg_31589.read() | tmp_51_63_reg_31594.read());
}

void needlemanWunsch::thread_or_cond_i1_64_fu_14729_p2() {
    or_cond_i1_64_fu_14729_p2 = (tmp_50_64_reg_31696.read() | tmp_51_64_reg_31701.read());
}

void needlemanWunsch::thread_or_cond_i1_65_fu_14902_p2() {
    or_cond_i1_65_fu_14902_p2 = (tmp_50_65_reg_31795.read() | tmp_51_65_reg_31800.read());
}

void needlemanWunsch::thread_or_cond_i1_66_fu_15076_p2() {
    or_cond_i1_66_fu_15076_p2 = (tmp_50_66_reg_31894.read() | tmp_51_66_reg_31899.read());
}

void needlemanWunsch::thread_or_cond_i1_67_fu_15250_p2() {
    or_cond_i1_67_fu_15250_p2 = (tmp_50_67_reg_31993.read() | tmp_51_67_reg_31998.read());
}

void needlemanWunsch::thread_or_cond_i1_68_fu_15424_p2() {
    or_cond_i1_68_fu_15424_p2 = (tmp_50_68_reg_32092.read() | tmp_51_68_reg_32097.read());
}

void needlemanWunsch::thread_or_cond_i1_69_fu_15598_p2() {
    or_cond_i1_69_fu_15598_p2 = (tmp_50_69_reg_32191.read() | tmp_51_69_reg_32196.read());
}

void needlemanWunsch::thread_or_cond_i1_6_fu_4785_p2() {
    or_cond_i1_6_fu_4785_p2 = (tmp_50_6_reg_24773.read() | tmp_51_6_reg_24778.read());
}

void needlemanWunsch::thread_or_cond_i1_70_fu_15773_p2() {
    or_cond_i1_70_fu_15773_p2 = (tmp_50_70_reg_32293.read() | tmp_51_70_reg_32298.read());
}

void needlemanWunsch::thread_or_cond_i1_71_fu_15948_p2() {
    or_cond_i1_71_fu_15948_p2 = (tmp_50_71_reg_32395.read() | tmp_51_71_reg_32400.read());
}

void needlemanWunsch::thread_or_cond_i1_72_fu_16123_p2() {
    or_cond_i1_72_fu_16123_p2 = (tmp_50_72_reg_32497.read() | tmp_51_72_reg_32502.read());
}

void needlemanWunsch::thread_or_cond_i1_73_fu_16298_p2() {
    or_cond_i1_73_fu_16298_p2 = (tmp_50_73_reg_32599.read() | tmp_51_73_reg_32604.read());
}

void needlemanWunsch::thread_or_cond_i1_74_fu_16473_p2() {
    or_cond_i1_74_fu_16473_p2 = (tmp_50_74_reg_32701.read() | tmp_51_74_reg_32706.read());
}

void needlemanWunsch::thread_or_cond_i1_75_fu_16648_p2() {
    or_cond_i1_75_fu_16648_p2 = (tmp_50_75_reg_32803.read() | tmp_51_75_reg_32808.read());
}

void needlemanWunsch::thread_or_cond_i1_76_fu_16823_p2() {
    or_cond_i1_76_fu_16823_p2 = (tmp_50_76_reg_32905.read() | tmp_51_76_reg_32910.read());
}

void needlemanWunsch::thread_or_cond_i1_77_fu_16998_p2() {
    or_cond_i1_77_fu_16998_p2 = (tmp_50_77_reg_33007.read() | tmp_51_77_reg_33012.read());
}

void needlemanWunsch::thread_or_cond_i1_78_fu_17172_p2() {
    or_cond_i1_78_fu_17172_p2 = (tmp_50_78_reg_33106.read() | tmp_51_78_reg_33111.read());
}

void needlemanWunsch::thread_or_cond_i1_79_fu_17347_p2() {
    or_cond_i1_79_fu_17347_p2 = (tmp_50_79_reg_33208.read() | tmp_51_79_reg_33213.read());
}

void needlemanWunsch::thread_or_cond_i1_7_fu_4960_p2() {
    or_cond_i1_7_fu_4960_p2 = (tmp_50_7_reg_24903.read() | tmp_51_7_reg_24908.read());
}

void needlemanWunsch::thread_or_cond_i1_80_fu_17521_p2() {
    or_cond_i1_80_fu_17521_p2 = (tmp_50_80_reg_33307.read() | tmp_51_80_reg_33312.read());
}

void needlemanWunsch::thread_or_cond_i1_81_fu_17695_p2() {
    or_cond_i1_81_fu_17695_p2 = (tmp_50_81_reg_33411.read() | tmp_51_81_reg_33416.read());
}

void needlemanWunsch::thread_or_cond_i1_82_fu_17868_p2() {
    or_cond_i1_82_fu_17868_p2 = (tmp_50_82_reg_33515.read() | tmp_51_82_reg_33520.read());
}

void needlemanWunsch::thread_or_cond_i1_83_fu_18042_p2() {
    or_cond_i1_83_fu_18042_p2 = (tmp_50_83_reg_33622.read() | tmp_51_83_reg_33627.read());
}

void needlemanWunsch::thread_or_cond_i1_84_fu_18216_p2() {
    or_cond_i1_84_fu_18216_p2 = (tmp_50_84_reg_33724.read() | tmp_51_84_reg_33729.read());
}

void needlemanWunsch::thread_or_cond_i1_85_fu_18391_p2() {
    or_cond_i1_85_fu_18391_p2 = (tmp_50_85_reg_33826.read() | tmp_51_85_reg_33831.read());
}

void needlemanWunsch::thread_or_cond_i1_86_fu_18565_p2() {
    or_cond_i1_86_fu_18565_p2 = (tmp_50_86_reg_33925.read() | tmp_51_86_reg_33930.read());
}

void needlemanWunsch::thread_or_cond_i1_87_fu_18740_p2() {
    or_cond_i1_87_fu_18740_p2 = (tmp_50_87_reg_34032.read() | tmp_51_87_reg_34037.read());
}

void needlemanWunsch::thread_or_cond_i1_88_fu_18914_p2() {
    or_cond_i1_88_fu_18914_p2 = (tmp_50_88_reg_34134.read() | tmp_51_88_reg_34139.read());
}

void needlemanWunsch::thread_or_cond_i1_89_fu_19089_p2() {
    or_cond_i1_89_fu_19089_p2 = (tmp_50_89_reg_34241.read() | tmp_51_89_reg_34246.read());
}

void needlemanWunsch::thread_or_cond_i1_8_fu_5141_p2() {
    or_cond_i1_8_fu_5141_p2 = (tmp_50_8_reg_25039.read() | tmp_51_8_reg_25044.read());
}

void needlemanWunsch::thread_or_cond_i1_90_fu_19263_p2() {
    or_cond_i1_90_fu_19263_p2 = (tmp_50_90_reg_34343.read() | tmp_51_90_reg_34348.read());
}

void needlemanWunsch::thread_or_cond_i1_91_fu_19438_p2() {
    or_cond_i1_91_fu_19438_p2 = (tmp_50_91_reg_34445.read() | tmp_51_91_reg_34450.read());
}

void needlemanWunsch::thread_or_cond_i1_92_fu_19612_p2() {
    or_cond_i1_92_fu_19612_p2 = (tmp_50_92_reg_34544.read() | tmp_51_92_reg_34549.read());
}

void needlemanWunsch::thread_or_cond_i1_93_fu_19787_p2() {
    or_cond_i1_93_fu_19787_p2 = (tmp_50_93_reg_34646.read() | tmp_51_93_reg_34651.read());
}

void needlemanWunsch::thread_or_cond_i1_94_fu_19962_p2() {
    or_cond_i1_94_fu_19962_p2 = (tmp_50_94_reg_34748.read() | tmp_51_94_reg_34753.read());
}

void needlemanWunsch::thread_or_cond_i1_95_fu_20137_p2() {
    or_cond_i1_95_fu_20137_p2 = (tmp_50_95_reg_34850.read() | tmp_51_95_reg_34855.read());
}

void needlemanWunsch::thread_or_cond_i1_96_fu_20306_p2() {
    or_cond_i1_96_fu_20306_p2 = (tmp_50_96_reg_34952.read() | tmp_51_96_reg_34957.read());
}

void needlemanWunsch::thread_or_cond_i1_97_fu_20481_p2() {
    or_cond_i1_97_fu_20481_p2 = (tmp_50_97_reg_35073.read() | tmp_51_97_reg_35078.read());
}

void needlemanWunsch::thread_or_cond_i1_98_fu_20612_p2() {
    or_cond_i1_98_fu_20612_p2 = (tmp_50_98_reg_35157.read() | tmp_51_98_reg_35162.read());
}

void needlemanWunsch::thread_or_cond_i1_9_fu_5322_p2() {
    or_cond_i1_9_fu_5322_p2 = (tmp_50_9_reg_25175.read() | tmp_51_9_reg_25180.read());
}

void needlemanWunsch::thread_or_cond_i1_s_fu_5501_p2() {
    or_cond_i1_s_fu_5501_p2 = (tmp_50_s_reg_25313.read() | tmp_51_s_reg_25318.read());
}

void needlemanWunsch::thread_or_cond_i_10_fu_5882_p2() {
    or_cond_i_10_fu_5882_p2 = (tmp_59_10_reg_25629.read() | tmp_60_10_reg_25634.read());
}

void needlemanWunsch::thread_or_cond_i_11_fu_6050_p2() {
    or_cond_i_11_fu_6050_p2 = (tmp_59_11_reg_25750.read() | tmp_60_11_reg_25755.read());
}

void needlemanWunsch::thread_or_cond_i_12_fu_6202_p2() {
    or_cond_i_12_fu_6202_p2 = (tmp_59_12_reg_25873.read() | tmp_60_12_reg_25878.read());
}

void needlemanWunsch::thread_or_cond_i_13_fu_6363_p2() {
    or_cond_i_13_fu_6363_p2 = (tmp_59_13_reg_25994.read() | tmp_60_13_reg_25999.read());
}

void needlemanWunsch::thread_or_cond_i_14_fu_6524_p2() {
    or_cond_i_14_fu_6524_p2 = (tmp_59_14_reg_26115.read() | tmp_60_14_reg_26120.read());
}

void needlemanWunsch::thread_or_cond_i_15_fu_6692_p2() {
    or_cond_i_15_fu_6692_p2 = (tmp_59_15_reg_26236.read() | tmp_60_15_reg_26241.read());
}

void needlemanWunsch::thread_or_cond_i_16_fu_6857_p2() {
    or_cond_i_16_fu_6857_p2 = (tmp_59_16_reg_26359.read() | tmp_60_16_reg_26364.read());
}

void needlemanWunsch::thread_or_cond_i_17_fu_7014_p2() {
    or_cond_i_17_fu_7014_p2 = (tmp_59_17_reg_26476.read() | tmp_60_17_reg_26481.read());
}

void needlemanWunsch::thread_or_cond_i_18_fu_7180_p2() {
    or_cond_i_18_fu_7180_p2 = (tmp_59_18_reg_26596.read() | tmp_60_18_reg_26601.read());
}

void needlemanWunsch::thread_or_cond_i_19_fu_7353_p2() {
    or_cond_i_19_fu_7353_p2 = (tmp_59_19_reg_26723.read() | tmp_60_19_reg_26728.read());
}

void needlemanWunsch::thread_or_cond_i_1_fu_3894_p2() {
    or_cond_i_1_fu_3894_p2 = (tmp_59_1_reg_23342.read() | tmp_60_1_reg_23347.read());
}

void needlemanWunsch::thread_or_cond_i_20_fu_7505_p2() {
    or_cond_i_20_fu_7505_p2 = (tmp_59_20_reg_26840.read() | tmp_60_20_reg_26845.read());
}

void needlemanWunsch::thread_or_cond_i_21_fu_7678_p2() {
    or_cond_i_21_fu_7678_p2 = (tmp_59_21_reg_26966.read() | tmp_60_21_reg_26971.read());
}

void needlemanWunsch::thread_or_cond_i_22_fu_7842_p2() {
    or_cond_i_22_fu_7842_p2 = (tmp_59_22_reg_27089.read() | tmp_60_22_reg_27094.read());
}

void needlemanWunsch::thread_or_cond_i_23_fu_7998_p2() {
    or_cond_i_23_fu_7998_p2 = (tmp_59_23_reg_27200.read() | tmp_60_23_reg_27205.read());
}

void needlemanWunsch::thread_or_cond_i_24_fu_8169_p2() {
    or_cond_i_24_fu_8169_p2 = (tmp_59_24_reg_27314.read() | tmp_60_24_reg_27319.read());
}

void needlemanWunsch::thread_or_cond_i_25_fu_8332_p2() {
    or_cond_i_25_fu_8332_p2 = (tmp_59_25_reg_27439.read() | tmp_60_25_reg_27444.read());
}

void needlemanWunsch::thread_or_cond_i_26_fu_8502_p2() {
    or_cond_i_26_fu_8502_p2 = (tmp_59_26_reg_27558.read() | tmp_60_26_reg_27563.read());
}

void needlemanWunsch::thread_or_cond_i_27_fu_8666_p2() {
    or_cond_i_27_fu_8666_p2 = (tmp_59_27_reg_27680.read() | tmp_60_27_reg_27685.read());
}

void needlemanWunsch::thread_or_cond_i_28_fu_8834_p2() {
    or_cond_i_28_fu_8834_p2 = (tmp_59_28_reg_27791.read() | tmp_60_28_reg_27796.read());
}

void needlemanWunsch::thread_or_cond_i_29_fu_8989_p2() {
    or_cond_i_29_fu_8989_p2 = (tmp_59_29_reg_27913.read() | tmp_60_29_reg_27918.read());
}

void needlemanWunsch::thread_or_cond_i_2_fu_4413_p2() {
    or_cond_i_2_fu_4413_p2 = (tmp_59_2_reg_24386.read() | tmp_60_2_reg_24391.read());
}

void needlemanWunsch::thread_or_cond_i_30_fu_9159_p2() {
    or_cond_i_30_fu_9159_p2 = (tmp_59_30_reg_28032.read() | tmp_60_30_reg_28037.read());
}

void needlemanWunsch::thread_or_cond_i_31_fu_9323_p2() {
    or_cond_i_31_fu_9323_p2 = (tmp_59_31_reg_28152.read() | tmp_60_31_reg_28157.read());
}

void needlemanWunsch::thread_or_cond_i_32_fu_9497_p2() {
    or_cond_i_32_fu_9497_p2 = (tmp_59_32_reg_28271.read() | tmp_60_32_reg_28276.read());
}

void needlemanWunsch::thread_or_cond_i_33_fu_9662_p2() {
    or_cond_i_33_fu_9662_p2 = (tmp_59_33_reg_28396.read() | tmp_60_33_reg_28401.read());
}

void needlemanWunsch::thread_or_cond_i_34_fu_9831_p2() {
    or_cond_i_34_fu_9831_p2 = (tmp_59_34_reg_28510.read() | tmp_60_34_reg_28515.read());
}

void needlemanWunsch::thread_or_cond_i_35_fu_10005_p2() {
    or_cond_i_35_fu_10005_p2 = (tmp_59_35_reg_28635.read() | tmp_60_35_reg_28640.read());
}

void needlemanWunsch::thread_or_cond_i_36_fu_10170_p2() {
    or_cond_i_36_fu_10170_p2 = (tmp_59_36_reg_28754.read() | tmp_60_36_reg_28759.read());
}

void needlemanWunsch::thread_or_cond_i_37_fu_10340_p2() {
    or_cond_i_37_fu_10340_p2 = (tmp_59_37_reg_28869.read() | tmp_60_37_reg_28874.read());
}

void needlemanWunsch::thread_or_cond_i_38_fu_10515_p2() {
    or_cond_i_38_fu_10515_p2 = (tmp_59_38_reg_28983.read() | tmp_60_38_reg_28988.read());
}

void needlemanWunsch::thread_or_cond_i_39_fu_10680_p2() {
    or_cond_i_39_fu_10680_p2 = (tmp_59_39_reg_29108.read() | tmp_60_39_reg_29113.read());
}

void needlemanWunsch::thread_or_cond_i_3_fu_4544_p2() {
    or_cond_i_3_fu_4544_p2 = (tmp_59_3_reg_24492.read() | tmp_60_3_reg_24497.read());
}

void needlemanWunsch::thread_or_cond_i_40_fu_10850_p2() {
    or_cond_i_40_fu_10850_p2 = (tmp_59_40_reg_29217.read() | tmp_60_40_reg_29222.read());
}

void needlemanWunsch::thread_or_cond_i_41_fu_11026_p2() {
    or_cond_i_41_fu_11026_p2 = (tmp_59_41_reg_29342.read() | tmp_60_41_reg_29347.read());
}

void needlemanWunsch::thread_or_cond_i_42_fu_11194_p2() {
    or_cond_i_42_fu_11194_p2 = (tmp_59_42_reg_29453.read() | tmp_60_42_reg_29458.read());
}

void needlemanWunsch::thread_or_cond_i_43_fu_11358_p2() {
    or_cond_i_43_fu_11358_p2 = (tmp_59_43_reg_29573.read() | tmp_60_43_reg_29578.read());
}

void needlemanWunsch::thread_or_cond_i_44_fu_11539_p2() {
    or_cond_i_44_fu_11539_p2 = (tmp_59_44_reg_29692.read() | tmp_60_44_reg_29697.read());
}

void needlemanWunsch::thread_or_cond_i_45_fu_11696_p2() {
    or_cond_i_45_fu_11696_p2 = (tmp_59_45_reg_29814.read() | tmp_60_45_reg_29819.read());
}

void needlemanWunsch::thread_or_cond_i_46_fu_11866_p2() {
    or_cond_i_46_fu_11866_p2 = (tmp_59_46_reg_29923.read() | tmp_60_46_reg_29928.read());
}

void needlemanWunsch::thread_or_cond_i_47_fu_12032_p2() {
    or_cond_i_47_fu_12032_p2 = (tmp_59_47_reg_30043.read() | tmp_60_47_reg_30048.read());
}

void needlemanWunsch::thread_or_cond_i_48_fu_12212_p2() {
    or_cond_i_48_fu_12212_p2 = (tmp_59_48_reg_30145.read() | tmp_60_48_reg_30150.read());
}

void needlemanWunsch::thread_or_cond_i_49_fu_12389_p2() {
    or_cond_i_49_fu_12389_p2 = (tmp_59_49_reg_30264.read() | tmp_60_49_reg_30269.read());
}

void needlemanWunsch::thread_or_cond_i_4_fu_4668_p2() {
    or_cond_i_4_fu_4668_p2 = (tmp_59_4_reg_24598.read() | tmp_60_4_reg_24603.read());
}

void needlemanWunsch::thread_or_cond_i_50_fu_12550_p2() {
    or_cond_i_50_fu_12550_p2 = (tmp_59_50_reg_30373.read() | tmp_60_50_reg_30378.read());
}

void needlemanWunsch::thread_or_cond_i_51_fu_12732_p2() {
    or_cond_i_51_fu_12732_p2 = (tmp_59_51_reg_30475.read() | tmp_60_51_reg_30480.read());
}

void needlemanWunsch::thread_or_cond_i_52_fu_12889_p2() {
    or_cond_i_52_fu_12889_p2 = (tmp_59_52_reg_30574.read() | tmp_60_52_reg_30579.read());
}

void needlemanWunsch::thread_or_cond_i_53_fu_13066_p2() {
    or_cond_i_53_fu_13066_p2 = (tmp_59_53_reg_30681.read() | tmp_60_53_reg_30686.read());
}

void needlemanWunsch::thread_or_cond_i_54_fu_13232_p2() {
    or_cond_i_54_fu_13232_p2 = (tmp_59_54_reg_30785.read() | tmp_60_54_reg_30790.read());
}

void needlemanWunsch::thread_or_cond_i_55_fu_13408_p2() {
    or_cond_i_55_fu_13408_p2 = (tmp_59_55_reg_30892.read() | tmp_60_55_reg_30897.read());
}

void needlemanWunsch::thread_or_cond_i_56_fu_13583_p2() {
    or_cond_i_56_fu_13583_p2 = (tmp_59_56_reg_30991.read() | tmp_60_56_reg_30996.read());
}

void needlemanWunsch::thread_or_cond_i_57_fu_13749_p2() {
    or_cond_i_57_fu_13749_p2 = (tmp_59_57_reg_31095.read() | tmp_60_57_reg_31100.read());
}

void needlemanWunsch::thread_or_cond_i_58_fu_13930_p2() {
    or_cond_i_58_fu_13930_p2 = (tmp_59_58_reg_31202.read() | tmp_60_58_reg_31207.read());
}

void needlemanWunsch::thread_or_cond_i_59_fu_14091_p2() {
    or_cond_i_59_fu_14091_p2 = (tmp_59_59_reg_31306.read() | tmp_60_59_reg_31311.read());
}

void needlemanWunsch::thread_or_cond_i_5_fu_4831_p2() {
    or_cond_i_5_fu_4831_p2 = (tmp_59_5_reg_24798.read() | tmp_60_5_reg_24803.read());
}

void needlemanWunsch::thread_or_cond_i_60_fu_14271_p2() {
    or_cond_i_60_fu_14271_p2 = (tmp_59_60_reg_31408.read() | tmp_60_60_reg_31413.read());
}

void needlemanWunsch::thread_or_cond_i_61_fu_14447_p2() {
    or_cond_i_61_fu_14447_p2 = (tmp_59_61_reg_31515.read() | tmp_60_61_reg_31520.read());
}

void needlemanWunsch::thread_or_cond_i_62_fu_14619_p2() {
    or_cond_i_62_fu_14619_p2 = (tmp_59_62_reg_31614.read() | tmp_60_62_reg_31619.read());
}

void needlemanWunsch::thread_or_cond_i_63_fu_14795_p2() {
    or_cond_i_63_fu_14795_p2 = (tmp_59_63_reg_31721.read() | tmp_60_63_reg_31726.read());
}

void needlemanWunsch::thread_or_cond_i_64_fu_14969_p2() {
    or_cond_i_64_fu_14969_p2 = (tmp_59_64_reg_31820.read() | tmp_60_64_reg_31825.read());
}

void needlemanWunsch::thread_or_cond_i_65_fu_15143_p2() {
    or_cond_i_65_fu_15143_p2 = (tmp_59_65_reg_31919.read() | tmp_60_65_reg_31924.read());
}

void needlemanWunsch::thread_or_cond_i_66_fu_15317_p2() {
    or_cond_i_66_fu_15317_p2 = (tmp_59_66_reg_32018.read() | tmp_60_66_reg_32023.read());
}

void needlemanWunsch::thread_or_cond_i_67_fu_15491_p2() {
    or_cond_i_67_fu_15491_p2 = (tmp_59_67_reg_32117.read() | tmp_60_67_reg_32122.read());
}

void needlemanWunsch::thread_or_cond_i_68_fu_15658_p2() {
    or_cond_i_68_fu_15658_p2 = (tmp_59_68_reg_32216.read() | tmp_60_68_reg_32221.read());
}

void needlemanWunsch::thread_or_cond_i_69_fu_15833_p2() {
    or_cond_i_69_fu_15833_p2 = (tmp_59_69_reg_32318.read() | tmp_60_69_reg_32323.read());
}

void needlemanWunsch::thread_or_cond_i_6_fu_5012_p2() {
    or_cond_i_6_fu_5012_p2 = (tmp_59_6_reg_24940.read() | tmp_60_6_reg_24945.read());
}

void needlemanWunsch::thread_or_cond_i_70_fu_16008_p2() {
    or_cond_i_70_fu_16008_p2 = (tmp_59_70_reg_32420.read() | tmp_60_70_reg_32425.read());
}

void needlemanWunsch::thread_or_cond_i_71_fu_16183_p2() {
    or_cond_i_71_fu_16183_p2 = (tmp_59_71_reg_32522.read() | tmp_60_71_reg_32527.read());
}

void needlemanWunsch::thread_or_cond_i_72_fu_16358_p2() {
    or_cond_i_72_fu_16358_p2 = (tmp_59_72_reg_32624.read() | tmp_60_72_reg_32629.read());
}

void needlemanWunsch::thread_or_cond_i_73_fu_16533_p2() {
    or_cond_i_73_fu_16533_p2 = (tmp_59_73_reg_32726.read() | tmp_60_73_reg_32731.read());
}

void needlemanWunsch::thread_or_cond_i_74_fu_16708_p2() {
    or_cond_i_74_fu_16708_p2 = (tmp_59_74_reg_32828.read() | tmp_60_74_reg_32833.read());
}

void needlemanWunsch::thread_or_cond_i_75_fu_16883_p2() {
    or_cond_i_75_fu_16883_p2 = (tmp_59_75_reg_32930.read() | tmp_60_75_reg_32935.read());
}

void needlemanWunsch::thread_or_cond_i_76_fu_17065_p2() {
    or_cond_i_76_fu_17065_p2 = (tmp_59_76_reg_33032.read() | tmp_60_76_reg_33037.read());
}

void needlemanWunsch::thread_or_cond_i_77_fu_17232_p2() {
    or_cond_i_77_fu_17232_p2 = (tmp_59_77_reg_33131.read() | tmp_60_77_reg_33136.read());
}

void needlemanWunsch::thread_or_cond_i_78_fu_17414_p2() {
    or_cond_i_78_fu_17414_p2 = (tmp_59_78_reg_33233.read() | tmp_60_78_reg_33238.read());
}

void needlemanWunsch::thread_or_cond_i_79_fu_17593_p2() {
    or_cond_i_79_fu_17593_p2 = (tmp_59_79_reg_33332.read() | tmp_60_79_reg_33337.read());
}

void needlemanWunsch::thread_or_cond_i_7_fu_5193_p2() {
    or_cond_i_7_fu_5193_p2 = (tmp_59_7_reg_25076.read() | tmp_60_7_reg_25081.read());
}

void needlemanWunsch::thread_or_cond_i_80_fu_17766_p2() {
    or_cond_i_80_fu_17766_p2 = (tmp_59_80_reg_33436.read() | tmp_60_80_reg_33441.read());
}

void needlemanWunsch::thread_or_cond_i_81_fu_17932_p2() {
    or_cond_i_81_fu_17932_p2 = (tmp_59_81_reg_33540.read() | tmp_60_81_reg_33545.read());
}

void needlemanWunsch::thread_or_cond_i_82_fu_18101_p2() {
    or_cond_i_82_fu_18101_p2 = (tmp_59_82_reg_33647.read() | tmp_60_82_reg_33652.read());
}

void needlemanWunsch::thread_or_cond_i_83_fu_18276_p2() {
    or_cond_i_83_fu_18276_p2 = (tmp_59_83_reg_33749.read() | tmp_60_83_reg_33754.read());
}

void needlemanWunsch::thread_or_cond_i_84_fu_18458_p2() {
    or_cond_i_84_fu_18458_p2 = (tmp_59_84_reg_33851.read() | tmp_60_84_reg_33856.read());
}

void needlemanWunsch::thread_or_cond_i_85_fu_18630_p2() {
    or_cond_i_85_fu_18630_p2 = (tmp_59_85_reg_33950.read() | tmp_60_85_reg_33955.read());
}

void needlemanWunsch::thread_or_cond_i_86_fu_18799_p2() {
    or_cond_i_86_fu_18799_p2 = (tmp_59_86_reg_34057.read() | tmp_60_86_reg_34062.read());
}

void needlemanWunsch::thread_or_cond_i_87_fu_18979_p2() {
    or_cond_i_87_fu_18979_p2 = (tmp_59_87_reg_34159.read() | tmp_60_87_reg_34164.read());
}

void needlemanWunsch::thread_or_cond_i_88_fu_19148_p2() {
    or_cond_i_88_fu_19148_p2 = (tmp_59_88_reg_34266.read() | tmp_60_88_reg_34271.read());
}

void needlemanWunsch::thread_or_cond_i_89_fu_19323_p2() {
    or_cond_i_89_fu_19323_p2 = (tmp_59_89_reg_34368.read() | tmp_60_89_reg_34373.read());
}

void needlemanWunsch::thread_or_cond_i_8_fu_5381_p2() {
    or_cond_i_8_fu_5381_p2 = (tmp_59_8_reg_25212.read() | tmp_60_8_reg_25217.read());
}

void needlemanWunsch::thread_or_cond_i_90_fu_19505_p2() {
    or_cond_i_90_fu_19505_p2 = (tmp_59_90_reg_34470.read() | tmp_60_90_reg_34475.read());
}

void needlemanWunsch::thread_or_cond_i_91_fu_19672_p2() {
    or_cond_i_91_fu_19672_p2 = (tmp_59_91_reg_34569.read() | tmp_60_91_reg_34574.read());
}

void needlemanWunsch::thread_or_cond_i_92_fu_19847_p2() {
    or_cond_i_92_fu_19847_p2 = (tmp_59_92_reg_34671.read() | tmp_60_92_reg_34676.read());
}

void needlemanWunsch::thread_or_cond_i_93_fu_20022_p2() {
    or_cond_i_93_fu_20022_p2 = (tmp_59_93_reg_34773.read() | tmp_60_93_reg_34778.read());
}

void needlemanWunsch::thread_or_cond_i_94_fu_20197_p2() {
    or_cond_i_94_fu_20197_p2 = (tmp_59_94_reg_34875.read() | tmp_60_94_reg_34880.read());
}

void needlemanWunsch::thread_or_cond_i_95_fu_20385_p2() {
    or_cond_i_95_fu_20385_p2 = (tmp_59_95_reg_34977.read() | tmp_60_95_reg_34982.read());
}

void needlemanWunsch::thread_or_cond_i_96_fu_20516_p2() {
    or_cond_i_96_fu_20516_p2 = (tmp_59_96_reg_35098.read() | tmp_60_96_reg_35103.read());
}

void needlemanWunsch::thread_or_cond_i_97_fu_20646_p2() {
    or_cond_i_97_fu_20646_p2 = (tmp_59_97_reg_35182.read() | tmp_60_97_reg_35187.read());
}

void needlemanWunsch::thread_or_cond_i_98_fu_20735_p2() {
    or_cond_i_98_fu_20735_p2 = (tmp_59_98_reg_35255.read() | tmp_60_98_reg_35260.read());
}

void needlemanWunsch::thread_or_cond_i_9_fu_5560_p2() {
    or_cond_i_9_fu_5560_p2 = (tmp_59_9_reg_25356.read() | tmp_60_9_reg_25361.read());
}

void needlemanWunsch::thread_or_cond_i_s_fu_5730_p2() {
    or_cond_i_s_fu_5730_p2 = (tmp_59_s_reg_25506.read() | tmp_60_s_reg_25511.read());
}

void needlemanWunsch::thread_orig1_addr_10_gep_fu_726_p3() {
    orig1_addr_10_gep_fu_726_p3 =  (sc_lv<7>) (ap_const_lv64_A);
}

void needlemanWunsch::thread_orig1_addr_11_gep_fu_742_p3() {
    orig1_addr_11_gep_fu_742_p3 =  (sc_lv<7>) (ap_const_lv64_B);
}

void needlemanWunsch::thread_orig1_addr_12_gep_fu_758_p3() {
    orig1_addr_12_gep_fu_758_p3 =  (sc_lv<7>) (ap_const_lv64_C);
}

void needlemanWunsch::thread_orig1_addr_13_gep_fu_774_p3() {
    orig1_addr_13_gep_fu_774_p3 =  (sc_lv<7>) (ap_const_lv64_D);
}

void needlemanWunsch::thread_orig1_addr_14_gep_fu_790_p3() {
    orig1_addr_14_gep_fu_790_p3 =  (sc_lv<7>) (ap_const_lv64_E);
}

void needlemanWunsch::thread_orig1_addr_15_gep_fu_806_p3() {
    orig1_addr_15_gep_fu_806_p3 =  (sc_lv<7>) (ap_const_lv64_F);
}

void needlemanWunsch::thread_orig1_addr_16_gep_fu_822_p3() {
    orig1_addr_16_gep_fu_822_p3 =  (sc_lv<7>) (ap_const_lv64_10);
}

void needlemanWunsch::thread_orig1_addr_17_gep_fu_846_p3() {
    orig1_addr_17_gep_fu_846_p3 =  (sc_lv<7>) (ap_const_lv64_11);
}

void needlemanWunsch::thread_orig1_addr_18_gep_fu_862_p3() {
    orig1_addr_18_gep_fu_862_p3 =  (sc_lv<7>) (ap_const_lv64_12);
}

void needlemanWunsch::thread_orig1_addr_19_gep_fu_878_p3() {
    orig1_addr_19_gep_fu_878_p3 =  (sc_lv<7>) (ap_const_lv64_13);
}

void needlemanWunsch::thread_orig1_addr_1_gep_fu_582_p3() {
    orig1_addr_1_gep_fu_582_p3 =  (sc_lv<7>) (ap_const_lv64_1);
}

void needlemanWunsch::thread_orig1_addr_20_gep_fu_894_p3() {
    orig1_addr_20_gep_fu_894_p3 =  (sc_lv<7>) (ap_const_lv64_14);
}

void needlemanWunsch::thread_orig1_addr_21_gep_fu_910_p3() {
    orig1_addr_21_gep_fu_910_p3 =  (sc_lv<7>) (ap_const_lv64_15);
}

void needlemanWunsch::thread_orig1_addr_22_gep_fu_926_p3() {
    orig1_addr_22_gep_fu_926_p3 =  (sc_lv<7>) (ap_const_lv64_16);
}

void needlemanWunsch::thread_orig1_addr_23_gep_fu_942_p3() {
    orig1_addr_23_gep_fu_942_p3 =  (sc_lv<7>) (ap_const_lv64_17);
}

void needlemanWunsch::thread_orig1_addr_24_gep_fu_958_p3() {
    orig1_addr_24_gep_fu_958_p3 =  (sc_lv<7>) (ap_const_lv64_18);
}

void needlemanWunsch::thread_orig1_addr_25_gep_fu_974_p3() {
    orig1_addr_25_gep_fu_974_p3 =  (sc_lv<7>) (ap_const_lv64_19);
}

void needlemanWunsch::thread_orig1_addr_26_gep_fu_990_p3() {
    orig1_addr_26_gep_fu_990_p3 =  (sc_lv<7>) (ap_const_lv64_1A);
}

void needlemanWunsch::thread_orig1_addr_27_gep_fu_1006_p3() {
    orig1_addr_27_gep_fu_1006_p3 =  (sc_lv<7>) (ap_const_lv64_1B);
}

void needlemanWunsch::thread_orig1_addr_28_gep_fu_1022_p3() {
    orig1_addr_28_gep_fu_1022_p3 =  (sc_lv<7>) (ap_const_lv64_1C);
}

void needlemanWunsch::thread_orig1_addr_29_gep_fu_1038_p3() {
    orig1_addr_29_gep_fu_1038_p3 =  (sc_lv<7>) (ap_const_lv64_1D);
}

void needlemanWunsch::thread_orig1_addr_2_gep_fu_598_p3() {
    orig1_addr_2_gep_fu_598_p3 =  (sc_lv<7>) (ap_const_lv64_2);
}

void needlemanWunsch::thread_orig1_addr_30_gep_fu_1054_p3() {
    orig1_addr_30_gep_fu_1054_p3 =  (sc_lv<7>) (ap_const_lv64_1E);
}

void needlemanWunsch::thread_orig1_addr_31_gep_fu_1070_p3() {
    orig1_addr_31_gep_fu_1070_p3 =  (sc_lv<7>) (ap_const_lv64_1F);
}

void needlemanWunsch::thread_orig1_addr_32_gep_fu_1086_p3() {
    orig1_addr_32_gep_fu_1086_p3 =  (sc_lv<7>) (ap_const_lv64_20);
}

void needlemanWunsch::thread_orig1_addr_33_gep_fu_1110_p3() {
    orig1_addr_33_gep_fu_1110_p3 =  (sc_lv<7>) (ap_const_lv64_21);
}

void needlemanWunsch::thread_orig1_addr_34_gep_fu_1126_p3() {
    orig1_addr_34_gep_fu_1126_p3 =  (sc_lv<7>) (ap_const_lv64_22);
}

void needlemanWunsch::thread_orig1_addr_35_gep_fu_1142_p3() {
    orig1_addr_35_gep_fu_1142_p3 =  (sc_lv<7>) (ap_const_lv64_23);
}

void needlemanWunsch::thread_orig1_addr_36_gep_fu_1158_p3() {
    orig1_addr_36_gep_fu_1158_p3 =  (sc_lv<7>) (ap_const_lv64_24);
}

void needlemanWunsch::thread_orig1_addr_37_gep_fu_1174_p3() {
    orig1_addr_37_gep_fu_1174_p3 =  (sc_lv<7>) (ap_const_lv64_25);
}

void needlemanWunsch::thread_orig1_addr_38_gep_fu_1190_p3() {
    orig1_addr_38_gep_fu_1190_p3 =  (sc_lv<7>) (ap_const_lv64_26);
}

void needlemanWunsch::thread_orig1_addr_39_gep_fu_1206_p3() {
    orig1_addr_39_gep_fu_1206_p3 =  (sc_lv<7>) (ap_const_lv64_27);
}

void needlemanWunsch::thread_orig1_addr_3_gep_fu_614_p3() {
    orig1_addr_3_gep_fu_614_p3 =  (sc_lv<7>) (ap_const_lv64_3);
}

void needlemanWunsch::thread_orig1_addr_40_gep_fu_1222_p3() {
    orig1_addr_40_gep_fu_1222_p3 =  (sc_lv<7>) (ap_const_lv64_28);
}

void needlemanWunsch::thread_orig1_addr_41_gep_fu_1238_p3() {
    orig1_addr_41_gep_fu_1238_p3 =  (sc_lv<7>) (ap_const_lv64_29);
}

void needlemanWunsch::thread_orig1_addr_42_gep_fu_1254_p3() {
    orig1_addr_42_gep_fu_1254_p3 =  (sc_lv<7>) (ap_const_lv64_2A);
}

void needlemanWunsch::thread_orig1_addr_43_gep_fu_1270_p3() {
    orig1_addr_43_gep_fu_1270_p3 =  (sc_lv<7>) (ap_const_lv64_2B);
}

void needlemanWunsch::thread_orig1_addr_44_gep_fu_1286_p3() {
    orig1_addr_44_gep_fu_1286_p3 =  (sc_lv<7>) (ap_const_lv64_2C);
}

void needlemanWunsch::thread_orig1_addr_45_gep_fu_1302_p3() {
    orig1_addr_45_gep_fu_1302_p3 =  (sc_lv<7>) (ap_const_lv64_2D);
}

void needlemanWunsch::thread_orig1_addr_46_gep_fu_1318_p3() {
    orig1_addr_46_gep_fu_1318_p3 =  (sc_lv<7>) (ap_const_lv64_2E);
}

void needlemanWunsch::thread_orig1_addr_47_gep_fu_1334_p3() {
    orig1_addr_47_gep_fu_1334_p3 =  (sc_lv<7>) (ap_const_lv64_2F);
}

void needlemanWunsch::thread_orig1_addr_48_gep_fu_1350_p3() {
    orig1_addr_48_gep_fu_1350_p3 =  (sc_lv<7>) (ap_const_lv64_30);
}

void needlemanWunsch::thread_orig1_addr_49_gep_fu_1374_p3() {
    orig1_addr_49_gep_fu_1374_p3 =  (sc_lv<7>) (ap_const_lv64_31);
}

void needlemanWunsch::thread_orig1_addr_4_gep_fu_630_p3() {
    orig1_addr_4_gep_fu_630_p3 =  (sc_lv<7>) (ap_const_lv64_4);
}

void needlemanWunsch::thread_orig1_addr_50_gep_fu_1390_p3() {
    orig1_addr_50_gep_fu_1390_p3 =  (sc_lv<7>) (ap_const_lv64_32);
}

void needlemanWunsch::thread_orig1_addr_51_gep_fu_1406_p3() {
    orig1_addr_51_gep_fu_1406_p3 =  (sc_lv<7>) (ap_const_lv64_33);
}

void needlemanWunsch::thread_orig1_addr_52_gep_fu_1422_p3() {
    orig1_addr_52_gep_fu_1422_p3 =  (sc_lv<7>) (ap_const_lv64_34);
}

void needlemanWunsch::thread_orig1_addr_53_gep_fu_1438_p3() {
    orig1_addr_53_gep_fu_1438_p3 =  (sc_lv<7>) (ap_const_lv64_35);
}

void needlemanWunsch::thread_orig1_addr_54_gep_fu_1454_p3() {
    orig1_addr_54_gep_fu_1454_p3 =  (sc_lv<7>) (ap_const_lv64_36);
}

void needlemanWunsch::thread_orig1_addr_55_gep_fu_1470_p3() {
    orig1_addr_55_gep_fu_1470_p3 =  (sc_lv<7>) (ap_const_lv64_37);
}

void needlemanWunsch::thread_orig1_addr_56_gep_fu_1486_p3() {
    orig1_addr_56_gep_fu_1486_p3 =  (sc_lv<7>) (ap_const_lv64_38);
}

void needlemanWunsch::thread_orig1_addr_57_gep_fu_1502_p3() {
    orig1_addr_57_gep_fu_1502_p3 =  (sc_lv<7>) (ap_const_lv64_39);
}

void needlemanWunsch::thread_orig1_addr_58_gep_fu_1518_p3() {
    orig1_addr_58_gep_fu_1518_p3 =  (sc_lv<7>) (ap_const_lv64_3A);
}

void needlemanWunsch::thread_orig1_addr_59_gep_fu_1534_p3() {
    orig1_addr_59_gep_fu_1534_p3 =  (sc_lv<7>) (ap_const_lv64_3B);
}

void needlemanWunsch::thread_orig1_addr_5_gep_fu_646_p3() {
    orig1_addr_5_gep_fu_646_p3 =  (sc_lv<7>) (ap_const_lv64_5);
}

void needlemanWunsch::thread_orig1_addr_60_gep_fu_1550_p3() {
    orig1_addr_60_gep_fu_1550_p3 =  (sc_lv<7>) (ap_const_lv64_3C);
}

void needlemanWunsch::thread_orig1_addr_61_gep_fu_1566_p3() {
    orig1_addr_61_gep_fu_1566_p3 =  (sc_lv<7>) (ap_const_lv64_3D);
}

void needlemanWunsch::thread_orig1_addr_62_gep_fu_1582_p3() {
    orig1_addr_62_gep_fu_1582_p3 =  (sc_lv<7>) (ap_const_lv64_3E);
}

void needlemanWunsch::thread_orig1_addr_63_gep_fu_1598_p3() {
    orig1_addr_63_gep_fu_1598_p3 =  (sc_lv<7>) (ap_const_lv64_3F);
}

void needlemanWunsch::thread_orig1_addr_64_gep_fu_1614_p3() {
    orig1_addr_64_gep_fu_1614_p3 =  (sc_lv<7>) (ap_const_lv64_40);
}

void needlemanWunsch::thread_orig1_addr_65_gep_fu_1638_p3() {
    orig1_addr_65_gep_fu_1638_p3 =  (sc_lv<7>) (ap_const_lv64_41);
}

void needlemanWunsch::thread_orig1_addr_66_gep_fu_1654_p3() {
    orig1_addr_66_gep_fu_1654_p3 =  (sc_lv<7>) (ap_const_lv64_42);
}

void needlemanWunsch::thread_orig1_addr_67_gep_fu_1670_p3() {
    orig1_addr_67_gep_fu_1670_p3 =  (sc_lv<7>) (ap_const_lv64_43);
}

void needlemanWunsch::thread_orig1_addr_68_gep_fu_1686_p3() {
    orig1_addr_68_gep_fu_1686_p3 =  (sc_lv<7>) (ap_const_lv64_44);
}

void needlemanWunsch::thread_orig1_addr_69_gep_fu_1702_p3() {
    orig1_addr_69_gep_fu_1702_p3 =  (sc_lv<7>) (ap_const_lv64_45);
}

void needlemanWunsch::thread_orig1_addr_6_gep_fu_662_p3() {
    orig1_addr_6_gep_fu_662_p3 =  (sc_lv<7>) (ap_const_lv64_6);
}

void needlemanWunsch::thread_orig1_addr_70_gep_fu_1718_p3() {
    orig1_addr_70_gep_fu_1718_p3 =  (sc_lv<7>) (ap_const_lv64_46);
}

void needlemanWunsch::thread_orig1_addr_71_gep_fu_1734_p3() {
    orig1_addr_71_gep_fu_1734_p3 =  (sc_lv<7>) (ap_const_lv64_47);
}

void needlemanWunsch::thread_orig1_addr_72_gep_fu_1750_p3() {
    orig1_addr_72_gep_fu_1750_p3 =  (sc_lv<7>) (ap_const_lv64_48);
}

void needlemanWunsch::thread_orig1_addr_73_gep_fu_1766_p3() {
    orig1_addr_73_gep_fu_1766_p3 =  (sc_lv<7>) (ap_const_lv64_49);
}

void needlemanWunsch::thread_orig1_addr_74_gep_fu_1782_p3() {
    orig1_addr_74_gep_fu_1782_p3 =  (sc_lv<7>) (ap_const_lv64_4A);
}

void needlemanWunsch::thread_orig1_addr_75_gep_fu_1798_p3() {
    orig1_addr_75_gep_fu_1798_p3 =  (sc_lv<7>) (ap_const_lv64_4B);
}

void needlemanWunsch::thread_orig1_addr_76_gep_fu_1814_p3() {
    orig1_addr_76_gep_fu_1814_p3 =  (sc_lv<7>) (ap_const_lv64_4C);
}

void needlemanWunsch::thread_orig1_addr_77_gep_fu_1830_p3() {
    orig1_addr_77_gep_fu_1830_p3 =  (sc_lv<7>) (ap_const_lv64_4D);
}

void needlemanWunsch::thread_orig1_addr_78_gep_fu_1846_p3() {
    orig1_addr_78_gep_fu_1846_p3 =  (sc_lv<7>) (ap_const_lv64_4E);
}

void needlemanWunsch::thread_orig1_addr_79_gep_fu_1862_p3() {
    orig1_addr_79_gep_fu_1862_p3 =  (sc_lv<7>) (ap_const_lv64_4F);
}

void needlemanWunsch::thread_orig1_addr_7_gep_fu_678_p3() {
    orig1_addr_7_gep_fu_678_p3 =  (sc_lv<7>) (ap_const_lv64_7);
}

void needlemanWunsch::thread_orig1_addr_80_gep_fu_1878_p3() {
    orig1_addr_80_gep_fu_1878_p3 =  (sc_lv<7>) (ap_const_lv64_50);
}

void needlemanWunsch::thread_orig1_addr_81_gep_fu_1902_p3() {
    orig1_addr_81_gep_fu_1902_p3 =  (sc_lv<7>) (ap_const_lv64_51);
}

void needlemanWunsch::thread_orig1_addr_82_gep_fu_1918_p3() {
    orig1_addr_82_gep_fu_1918_p3 =  (sc_lv<7>) (ap_const_lv64_52);
}

void needlemanWunsch::thread_orig1_addr_83_gep_fu_1934_p3() {
    orig1_addr_83_gep_fu_1934_p3 =  (sc_lv<7>) (ap_const_lv64_53);
}

void needlemanWunsch::thread_orig1_addr_84_gep_fu_1950_p3() {
    orig1_addr_84_gep_fu_1950_p3 =  (sc_lv<7>) (ap_const_lv64_54);
}

void needlemanWunsch::thread_orig1_addr_85_gep_fu_1966_p3() {
    orig1_addr_85_gep_fu_1966_p3 =  (sc_lv<7>) (ap_const_lv64_55);
}

void needlemanWunsch::thread_orig1_addr_86_gep_fu_1982_p3() {
    orig1_addr_86_gep_fu_1982_p3 =  (sc_lv<7>) (ap_const_lv64_56);
}

void needlemanWunsch::thread_orig1_addr_87_gep_fu_1998_p3() {
    orig1_addr_87_gep_fu_1998_p3 =  (sc_lv<7>) (ap_const_lv64_57);
}

void needlemanWunsch::thread_orig1_addr_88_gep_fu_2014_p3() {
    orig1_addr_88_gep_fu_2014_p3 =  (sc_lv<7>) (ap_const_lv64_58);
}

void needlemanWunsch::thread_orig1_addr_89_gep_fu_2030_p3() {
    orig1_addr_89_gep_fu_2030_p3 =  (sc_lv<7>) (ap_const_lv64_59);
}

void needlemanWunsch::thread_orig1_addr_8_gep_fu_694_p3() {
    orig1_addr_8_gep_fu_694_p3 =  (sc_lv<7>) (ap_const_lv64_8);
}

void needlemanWunsch::thread_orig1_addr_90_gep_fu_2046_p3() {
    orig1_addr_90_gep_fu_2046_p3 =  (sc_lv<7>) (ap_const_lv64_5A);
}

void needlemanWunsch::thread_orig1_addr_91_gep_fu_2062_p3() {
    orig1_addr_91_gep_fu_2062_p3 =  (sc_lv<7>) (ap_const_lv64_5B);
}

void needlemanWunsch::thread_orig1_addr_92_gep_fu_2078_p3() {
    orig1_addr_92_gep_fu_2078_p3 =  (sc_lv<7>) (ap_const_lv64_5C);
}

void needlemanWunsch::thread_orig1_addr_93_gep_fu_2094_p3() {
    orig1_addr_93_gep_fu_2094_p3 =  (sc_lv<7>) (ap_const_lv64_5D);
}

void needlemanWunsch::thread_orig1_addr_94_gep_fu_2110_p3() {
    orig1_addr_94_gep_fu_2110_p3 =  (sc_lv<7>) (ap_const_lv64_5E);
}

void needlemanWunsch::thread_orig1_addr_95_gep_fu_2126_p3() {
    orig1_addr_95_gep_fu_2126_p3 =  (sc_lv<7>) (ap_const_lv64_5F);
}

void needlemanWunsch::thread_orig1_addr_96_gep_fu_2142_p3() {
    orig1_addr_96_gep_fu_2142_p3 =  (sc_lv<7>) (ap_const_lv64_60);
}

void needlemanWunsch::thread_orig1_addr_97_gep_fu_2166_p3() {
    orig1_addr_97_gep_fu_2166_p3 =  (sc_lv<7>) (ap_const_lv64_61);
}

void needlemanWunsch::thread_orig1_addr_98_gep_fu_2182_p3() {
    orig1_addr_98_gep_fu_2182_p3 =  (sc_lv<7>) (ap_const_lv64_62);
}

void needlemanWunsch::thread_orig1_addr_99_gep_fu_2198_p3() {
    orig1_addr_99_gep_fu_2198_p3 =  (sc_lv<7>) (ap_const_lv64_63);
}

void needlemanWunsch::thread_orig1_addr_9_gep_fu_710_p3() {
    orig1_addr_9_gep_fu_710_p3 =  (sc_lv<7>) (ap_const_lv64_9);
}

void needlemanWunsch::thread_orig1_addr_gep_fu_558_p3() {
    orig1_addr_gep_fu_558_p3 =  (sc_lv<7>) (ap_const_lv64_0);
}

void needlemanWunsch::thread_orig1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        orig1_address0 = orig1_addr_47_reg_21353.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read()))) {
        orig1_address0 = orig1_addr_41_reg_21285.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read()))) {
        orig1_address0 = orig1_addr_35_reg_21216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read()))) {
        orig1_address0 = orig1_addr_29_reg_21142.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read()))) {
        orig1_address0 = orig1_addr_23_reg_21073.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read()))) {
        orig1_address0 = orig1_addr_17_reg_21004.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read()))) {
        orig1_address0 = orig1_addr_11_reg_20930.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read()))) {
        orig1_address0 = orig1_addr_5_reg_20861.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read()))) {
        orig1_address0 = orig1_addr_3_reg_20837.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read()))) {
        orig1_address0 = orig1_addr_1_reg_20813.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read()))) {
        orig1_address0 = orig1_addr_99_reg_21985.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read()))) {
        orig1_address0 = orig1_addr_97_reg_21962.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read()))) {
        orig1_address0 = orig1_addr_96_reg_21945.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        orig1_address0 = orig1_addr_95_reg_21933.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read()))) {
        orig1_address0 = orig1_addr_94_reg_21921.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read()))) {
        orig1_address0 = orig1_addr_93_reg_21909.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read()))) {
        orig1_address0 = orig1_addr_92_reg_21897.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read()))) {
        orig1_address0 = orig1_addr_91_reg_21885.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read()))) {
        orig1_address0 = orig1_addr_90_reg_21873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read()))) {
        orig1_address0 = orig1_addr_89_reg_21861.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read()))) {
        orig1_address0 = orig1_addr_88_reg_21849.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read()))) {
        orig1_address0 = orig1_addr_87_reg_21837.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read()))) {
        orig1_address0 = orig1_addr_86_reg_21825.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read()))) {
        orig1_address0 = orig1_addr_85_reg_21813.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read()))) {
        orig1_address0 = orig1_addr_84_reg_21801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read()))) {
        orig1_address0 = orig1_addr_83_reg_21789.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read()))) {
        orig1_address0 = orig1_addr_82_reg_21777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read()))) {
        orig1_address0 = orig1_addr_81_reg_21765.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read()))) {
        orig1_address0 = orig1_addr_80_reg_21748.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read()))) {
        orig1_address0 = orig1_addr_79_reg_21736.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read()))) {
        orig1_address0 = orig1_addr_78_reg_21724.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read()))) {
        orig1_address0 = orig1_addr_77_reg_21712.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read()))) {
        orig1_address0 = orig1_addr_76_reg_21700.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read()))) {
        orig1_address0 = orig1_addr_75_reg_21688.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read()))) {
        orig1_address0 = orig1_addr_74_reg_21676.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read()))) {
        orig1_address0 = orig1_addr_73_reg_21664.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read()))) {
        orig1_address0 = orig1_addr_72_reg_21652.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_50.read()))) {
        orig1_address0 = orig1_addr_70_reg_21629.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read()))) {
        orig1_address0 = orig1_addr_69_reg_21617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_48.read()))) {
        orig1_address0 = orig1_addr_67_reg_21594.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read()))) {
        orig1_address0 = orig1_addr_66_reg_21582.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read()))) {
        orig1_address0 = orig1_addr_64_reg_21554.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read()))) {
        orig1_address0 = orig1_addr_63_reg_21542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read()))) {
        orig1_address0 = orig1_addr_61_reg_21519.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read()))) {
        orig1_address0 = orig1_addr_60_reg_21507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read()))) {
        orig1_address0 = orig1_addr_58_reg_21484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read()))) {
        orig1_address0 = orig1_addr_57_reg_21472.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read()))) {
        orig1_address0 = orig1_addr_55_reg_21449.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read()))) {
        orig1_address0 = orig1_addr_54_reg_21437.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read()))) {
        orig1_address0 = orig1_addr_52_reg_21414.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read()))) {
        orig1_address0 = orig1_addr_51_reg_21402.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())))) {
        orig1_address0 = orig1_addr_49_reg_21380.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        orig1_address0 = orig1_addr_48_reg_21365.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read()))) {
        orig1_address0 = orig1_addr_46_reg_21342.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read())))) {
        orig1_address0 = orig1_addr_45_reg_21331.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_32.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read())))) {
        orig1_address0 = orig1_addr_43_reg_21309.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read()))) {
        orig1_address0 = orig1_addr_42_reg_21297.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_30.read()))) {
        orig1_address0 = orig1_addr_40_reg_21273.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read())))) {
        orig1_address0 = orig1_addr_39_reg_21262.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_28.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read())))) {
        orig1_address0 = orig1_addr_37_reg_21240.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read()))) {
        orig1_address0 = orig1_addr_36_reg_21228.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_26.read()))) {
        orig1_address0 = orig1_addr_34_reg_21204.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read())))) {
        orig1_address0 = orig1_addr_33_reg_21193.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read())))) {
        orig1_address0 = orig1_addr_31_reg_21166.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read()))) {
        orig1_address0 = orig1_addr_30_reg_21154.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read()))) {
        orig1_address0 = orig1_addr_28_reg_21130.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read())))) {
        orig1_address0 = orig1_addr_27_reg_21119.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_20.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read())))) {
        orig1_address0 = orig1_addr_25_reg_21097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read()))) {
        orig1_address0 = orig1_addr_24_reg_21085.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read()))) {
        orig1_address0 = orig1_addr_22_reg_21061.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read())))) {
        orig1_address0 = orig1_addr_21_reg_21050.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read())))) {
        orig1_address0 = orig1_addr_19_reg_21028.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        orig1_address0 = orig1_addr_18_reg_21016.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        orig1_address0 = orig1_addr_16_reg_20987.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read())))) {
        orig1_address0 = orig1_addr_15_reg_20976.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read())))) {
        orig1_address0 = orig1_addr_13_reg_20954.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        orig1_address0 = orig1_addr_12_reg_20942.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        orig1_address0 = orig1_addr_10_reg_20918.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read())))) {
        orig1_address0 = orig1_addr_9_reg_20907.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read())))) {
        orig1_address0 = orig1_addr_7_reg_20885.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        orig1_address0 = orig1_addr_6_reg_20873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        orig1_address0 = orig1_addr_4_reg_20849.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        orig1_address0 = orig1_addr_2_reg_20825.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        orig1_address0 = orig1_addr_reg_20796.read();
    } else {
        orig1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void needlemanWunsch::thread_orig1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        orig1_address1 = orig1_addr_99_reg_21985.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        orig1_address1 = orig1_addr_97_reg_21962.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read()))) {
        orig1_address1 = orig1_addr_96_reg_21945.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read()))) {
        orig1_address1 = orig1_addr_95_reg_21933.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read()))) {
        orig1_address1 = orig1_addr_94_reg_21921.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read()))) {
        orig1_address1 = orig1_addr_93_reg_21909.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read()))) {
        orig1_address1 = orig1_addr_92_reg_21897.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read()))) {
        orig1_address1 = orig1_addr_91_reg_21885.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read()))) {
        orig1_address1 = orig1_addr_90_reg_21873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read()))) {
        orig1_address1 = orig1_addr_89_reg_21861.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read()))) {
        orig1_address1 = orig1_addr_88_reg_21849.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read()))) {
        orig1_address1 = orig1_addr_87_reg_21837.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read()))) {
        orig1_address1 = orig1_addr_86_reg_21825.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read()))) {
        orig1_address1 = orig1_addr_85_reg_21813.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read()))) {
        orig1_address1 = orig1_addr_84_reg_21801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read()))) {
        orig1_address1 = orig1_addr_83_reg_21789.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read()))) {
        orig1_address1 = orig1_addr_82_reg_21777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read()))) {
        orig1_address1 = orig1_addr_81_reg_21765.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read()))) {
        orig1_address1 = orig1_addr_80_reg_21748.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read()))) {
        orig1_address1 = orig1_addr_79_reg_21736.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read()))) {
        orig1_address1 = orig1_addr_78_reg_21724.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read()))) {
        orig1_address1 = orig1_addr_77_reg_21712.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read()))) {
        orig1_address1 = orig1_addr_76_reg_21700.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read()))) {
        orig1_address1 = orig1_addr_75_reg_21688.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read()))) {
        orig1_address1 = orig1_addr_74_reg_21676.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read()))) {
        orig1_address1 = orig1_addr_73_reg_21664.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read()))) {
        orig1_address1 = orig1_addr_72_reg_21652.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read()))) {
        orig1_address1 = orig1_addr_70_reg_21629.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read()))) {
        orig1_address1 = orig1_addr_69_reg_21617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read()))) {
        orig1_address1 = orig1_addr_67_reg_21594.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read()))) {
        orig1_address1 = orig1_addr_66_reg_21582.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read()))) {
        orig1_address1 = orig1_addr_64_reg_21554.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read()))) {
        orig1_address1 = orig1_addr_63_reg_21542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read()))) {
        orig1_address1 = orig1_addr_61_reg_21519.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read()))) {
        orig1_address1 = orig1_addr_60_reg_21507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read()))) {
        orig1_address1 = orig1_addr_58_reg_21484.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read()))) {
        orig1_address1 = orig1_addr_57_reg_21472.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read()))) {
        orig1_address1 = orig1_addr_55_reg_21449.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        orig1_address1 = orig1_addr_54_reg_21437.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        orig1_address1 = orig1_addr_52_reg_21414.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        orig1_address1 = orig1_addr_51_reg_21402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read()))) {
        orig1_address1 = orig1_addr_46_reg_21342.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read()))) {
        orig1_address1 = orig1_addr_42_reg_21297.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read()))) {
        orig1_address1 = orig1_addr_40_reg_21273.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read()))) {
        orig1_address1 = orig1_addr_36_reg_21228.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read()))) {
        orig1_address1 = orig1_addr_34_reg_21204.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read()))) {
        orig1_address1 = orig1_addr_30_reg_21154.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read()))) {
        orig1_address1 = orig1_addr_28_reg_21130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read()))) {
        orig1_address1 = orig1_addr_24_reg_21085.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read()))) {
        orig1_address1 = orig1_addr_22_reg_21061.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read()))) {
        orig1_address1 = orig1_addr_18_reg_21016.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read()))) {
        orig1_address1 = orig1_addr_16_reg_20987.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read()))) {
        orig1_address1 = orig1_addr_12_reg_20942.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read()))) {
        orig1_address1 = orig1_addr_10_reg_20918.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read()))) {
        orig1_address1 = orig1_addr_6_reg_20873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read()))) {
        orig1_address1 = orig1_addr_4_reg_20849.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read()))) {
        orig1_address1 = orig1_addr_2_reg_20825.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read()))) {
        orig1_address1 = orig1_addr_reg_20796.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read())))) {
        orig1_address1 = orig1_addr_98_reg_21974.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_50.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read())))) {
        orig1_address1 = orig1_addr_71_reg_21641.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_48.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read())))) {
        orig1_address1 = orig1_addr_68_reg_21606.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read())))) {
        orig1_address1 = orig1_addr_65_reg_21571.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read())))) {
        orig1_address1 = orig1_addr_62_reg_21531.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read())))) {
        orig1_address1 = orig1_addr_59_reg_21496.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read())))) {
        orig1_address1 = orig1_addr_56_reg_21461.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())))) {
        orig1_address1 = orig1_addr_53_reg_21426.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())))) {
        orig1_address1 = orig1_addr_50_reg_21391.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read()))) {
        orig1_address1 = orig1_addr_47_reg_21353.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_32.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read())))) {
        orig1_address1 = orig1_addr_44_reg_21320.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_30.read()))) {
        orig1_address1 = orig1_addr_41_reg_21285.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_28.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read())))) {
        orig1_address1 = orig1_addr_38_reg_21251.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_26.read()))) {
        orig1_address1 = orig1_addr_35_reg_21216.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read())))) {
        orig1_address1 = orig1_addr_32_reg_21177.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read()))) {
        orig1_address1 = orig1_addr_29_reg_21142.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_20.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read())))) {
        orig1_address1 = orig1_addr_26_reg_21108.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read()))) {
        orig1_address1 = orig1_addr_23_reg_21073.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read())))) {
        orig1_address1 = orig1_addr_20_reg_21039.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        orig1_address1 = orig1_addr_17_reg_21004.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read())))) {
        orig1_address1 = orig1_addr_14_reg_20965.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        orig1_address1 = orig1_addr_11_reg_20930.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read())))) {
        orig1_address1 = orig1_addr_8_reg_20896.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        orig1_address1 = orig1_addr_5_reg_20861.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        orig1_address1 = orig1_addr_3_reg_20837.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        orig1_address1 = orig1_addr_1_reg_20813.read();
    } else {
        orig1_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void needlemanWunsch::thread_orig1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          !(ap_sig_bdd_197.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_20.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_26.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_28.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_30.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_32.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_48.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_50.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())))) {
        orig1_ce0 = ap_const_logic_1;
    } else {
        orig1_ce0 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_orig1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          !(ap_sig_bdd_197.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_20.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_26.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_28.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_30.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_32.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_48.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_50.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        orig1_ce1 = ap_const_logic_1;
    } else {
        orig1_ce1 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_orig1_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        orig1_d0 = prev_orig_out_2_i_48_reg_30216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        orig1_d0 = prev_orig_out_2_i_47_reg_30103.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        orig1_d0 = prev_orig_out_2_i_46_reg_29989.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read()))) {
        orig1_d0 = prev_orig_out_2_i_44_reg_29765.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read()))) {
        orig1_d0 = prev_orig_out_2_i_42_reg_29519.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read()))) {
        orig1_d0 = prev_orig_out_2_i_40_reg_29288.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read()))) {
        orig1_d0 = prev_orig_out_2_i_38_reg_29054.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read()))) {
        orig1_d0 = prev_orig_out_2_i_36_reg_28815.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read()))) {
        orig1_d0 = prev_orig_out_2_i_34_reg_28581.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read()))) {
        orig1_d0 = prev_orig_out_2_i_32_reg_28342.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read()))) {
        orig1_d0 = prev_orig_out_2_i_30_reg_28098.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read()))) {
        orig1_d0 = prev_orig_out_2_i_28_reg_27864.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read()))) {
        orig1_d0 = prev_orig_out_2_i_26_reg_27631.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read()))) {
        orig1_d0 = prev_orig_out_2_i_24_reg_27385.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read()))) {
        orig1_d0 = prev_orig_out_2_i_22_reg_27151.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read()))) {
        orig1_d0 = prev_orig_out_2_i_20_reg_26906.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read()))) {
        orig1_d0 = prev_orig_out_2_i_18_reg_26663.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read()))) {
        orig1_d0 = prev_orig_out_2_i_16_reg_26421.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read()))) {
        orig1_d0 = prev_orig_out_2_i_14_reg_26170.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read()))) {
        orig1_d0 = prev_orig_out_2_i_12_reg_25928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read()))) {
        orig1_d0 = prev_orig_out_2_i_10_reg_25684.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read()))) {
        orig1_d0 = prev_orig_out_2_i_9_reg_25495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read()))) {
        orig1_d0 = prev_orig_out_2_i_7_reg_25345.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read()))) {
        orig1_d0 = prev_orig_out_2_i_5_reg_25201.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read()))) {
        orig1_d0 = prev_orig_out_2_i_3_reg_25065.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read()))) {
        orig1_d0 = prev_orig_out_2_i_1_reg_24929.read();
    } else {
        orig1_d0 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void needlemanWunsch::thread_orig1_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        orig1_d1 = prev_orig_out_2_i_98_reg_35281.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        orig1_d1 = prev_orig_out_2_i_97_reg_35228.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        orig1_d1 = prev_orig_out_2_i_96_reg_35145.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read()))) {
        orig1_d1 = prev_orig_out_2_i_95_reg_35061.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read()))) {
        orig1_d1 = prev_orig_out_2_i_94_reg_34935.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read()))) {
        orig1_d1 = prev_orig_out_2_i_93_reg_34833.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read()))) {
        orig1_d1 = prev_orig_out_2_i_92_reg_34731.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read()))) {
        orig1_d1 = prev_orig_out_2_i_91_reg_34629.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read()))) {
        orig1_d1 = prev_orig_out_2_i_90_reg_34532.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read()))) {
        orig1_d1 = prev_orig_out_2_i_89_reg_34428.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read()))) {
        orig1_d1 = prev_orig_out_2_i_88_reg_34326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read()))) {
        orig1_d1 = prev_orig_out_2_i_87_reg_34224.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read()))) {
        orig1_d1 = prev_orig_out_2_i_86_reg_34117.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read()))) {
        orig1_d1 = prev_orig_out_2_i_85_reg_34015.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read()))) {
        orig1_d1 = prev_orig_out_2_i_84_reg_33913.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read()))) {
        orig1_d1 = prev_orig_out_2_i_83_reg_33809.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read()))) {
        orig1_d1 = prev_orig_out_2_i_82_reg_33707.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read()))) {
        orig1_d1 = prev_orig_out_2_i_81_reg_33605.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read()))) {
        orig1_d1 = prev_orig_out_2_i_80_reg_33503.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read()))) {
        orig1_d1 = prev_orig_out_2_i_79_reg_33399.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read()))) {
        orig1_d1 = prev_orig_out_2_i_78_reg_33295.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read()))) {
        orig1_d1 = prev_orig_out_2_i_77_reg_33191.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read()))) {
        orig1_d1 = prev_orig_out_2_i_76_reg_33094.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read()))) {
        orig1_d1 = prev_orig_out_2_i_75_reg_32990.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read()))) {
        orig1_d1 = prev_orig_out_2_i_74_reg_32888.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read()))) {
        orig1_d1 = prev_orig_out_2_i_73_reg_32786.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read()))) {
        orig1_d1 = prev_orig_out_2_i_72_reg_32684.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read()))) {
        orig1_d1 = prev_orig_out_2_i_71_reg_32582.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read()))) {
        orig1_d1 = prev_orig_out_2_i_70_reg_32480.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read()))) {
        orig1_d1 = prev_orig_out_2_i_69_reg_32378.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read()))) {
        orig1_d1 = prev_orig_out_2_i_68_reg_32276.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read()))) {
        orig1_d1 = prev_orig_out_2_i_67_reg_32179.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read()))) {
        orig1_d1 = prev_orig_out_2_i_66_reg_32080.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read()))) {
        orig1_d1 = prev_orig_out_2_i_65_reg_31981.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read()))) {
        orig1_d1 = prev_orig_out_2_i_64_reg_31882.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read()))) {
        orig1_d1 = prev_orig_out_2_i_63_reg_31783.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read()))) {
        orig1_d1 = prev_orig_out_2_i_62_reg_31679.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read()))) {
        orig1_d1 = prev_orig_out_2_i_61_reg_31577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read()))) {
        orig1_d1 = prev_orig_out_2_i_60_reg_31473.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read()))) {
        orig1_d1 = prev_orig_out_2_i_59_reg_31366.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read()))) {
        orig1_d1 = prev_orig_out_2_i_58_reg_31269.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read()))) {
        orig1_d1 = prev_orig_out_2_i_57_reg_31160.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read()))) {
        orig1_d1 = prev_orig_out_2_i_56_reg_31058.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read()))) {
        orig1_d1 = prev_orig_out_2_i_55_reg_30954.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read()))) {
        orig1_d1 = prev_orig_out_2_i_54_reg_30850.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        orig1_d1 = prev_orig_out_2_i_53_reg_30748.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        orig1_d1 = prev_orig_out_2_i_52_reg_30639.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        orig1_d1 = prev_orig_out_2_i_51_reg_30537.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        orig1_d1 = prev_orig_out_2_i_50_reg_30433.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        orig1_d1 = prev_orig_out_2_i_49_reg_30331.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read()))) {
        orig1_d1 = prev_orig_out_2_i_45_reg_29869.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        orig1_d1 = prev_orig_out_2_i_43_reg_29638.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read()))) {
        orig1_d1 = prev_orig_out_2_i_41_reg_29404.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read()))) {
        orig1_d1 = prev_orig_out_2_i_39_reg_29163.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read()))) {
        orig1_d1 = prev_orig_out_2_i_37_reg_28929.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read()))) {
        orig1_d1 = prev_orig_out_2_i_35_reg_28700.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read()))) {
        orig1_d1 = prev_orig_out_2_i_33_reg_28456.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read()))) {
        orig1_d1 = prev_orig_out_2_i_31_reg_28217.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read()))) {
        orig1_d1 = prev_orig_out_2_i_29_reg_27978.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read()))) {
        orig1_d1 = prev_orig_out_2_i_27_reg_27742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read()))) {
        orig1_d1 = prev_orig_out_2_i_25_reg_27504.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read()))) {
        orig1_d1 = prev_orig_out_2_i_23_reg_27260.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read()))) {
        orig1_d1 = prev_orig_out_2_i_21_reg_27034.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read()))) {
        orig1_d1 = prev_orig_out_2_i_19_reg_26791.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read()))) {
        orig1_d1 = prev_orig_out_2_i_17_reg_26542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read()))) {
        orig1_d1 = prev_orig_out_2_i_15_reg_26304.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read()))) {
        orig1_d1 = prev_orig_out_2_i_13_reg_26049.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read()))) {
        orig1_d1 = prev_orig_out_2_i_11_reg_25812.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read()))) {
        orig1_d1 = prev_orig_out_2_i_s_reg_25568.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read()))) {
        orig1_d1 = prev_orig_out_2_i_8_reg_25422.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read()))) {
        orig1_d1 = prev_orig_out_2_i_6_reg_25278.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read()))) {
        orig1_d1 = prev_orig_out_2_i_4_reg_25135.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read()))) {
        orig1_d1 = prev_orig_out_2_i_2_reg_24999.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read()))) {
        orig1_d1 = orig2_load_1_1_tmp_3_reg_24863.read();
    } else {
        orig1_d1 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void needlemanWunsch::thread_orig1_we0() {
    if (((!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read())))) {
        orig1_we0 = ap_const_logic_1;
    } else {
        orig1_we0 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_orig1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it2.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_21991.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_21991_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        orig1_we1 = ap_const_logic_1;
    } else {
        orig1_we1 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_orig2_load_1_10_fu_5587_p3() {
    orig2_load_1_10_fu_5587_p3 = (!or_cond_i1_s_reg_25391.read()[0].is_01())? sc_lv<20>(): ((or_cond_i1_s_reg_25391.read()[0].to_bool())? prev_orig_out_7_s_fu_5581_p3.read(): grp_fu_2754_p3.read());
}

void needlemanWunsch::thread_orig2_load_1_11_fu_5695_p3() {
    orig2_load_1_11_fu_5695_p3 = (!or_cond_i1_10_fu_5667_p2.read()[0].is_01())? sc_lv<20>(): ((or_cond_i1_10_fu_5667_p2.read()[0].to_bool())? prev_orig_out_7_10_fu_5681_p3.read(): grp_fu_2767_p3.read());
}

void needlemanWunsch::thread_orig2_load_1_12_fu_5854_p3() {
    orig2_load_1_12_fu_5854_p3 = (!or_cond_i1_11_fu_5826_p2.read()[0].is_01())? sc_lv<20>(): ((or_cond_i1_11_fu_5826_p2.read()[0].to_bool())? prev_orig_out_7_11_fu_5840_p3.read(): grp_fu_2780_p3.read());
}

}

