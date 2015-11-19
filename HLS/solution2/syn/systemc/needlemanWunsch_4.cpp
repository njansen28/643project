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
    ap_return = max_orig_reg_2329.read();
}

void needlemanWunsch::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void needlemanWunsch::thread_ap_sig_bdd_1157() {
    ap_sig_bdd_1157 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void needlemanWunsch::thread_ap_sig_bdd_143() {
    ap_sig_bdd_143 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void needlemanWunsch::thread_ap_sig_bdd_197() {
    ap_sig_bdd_197 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void needlemanWunsch::thread_ap_sig_bdd_19934() {
    ap_sig_bdd_19934 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(101, 101));
}

void needlemanWunsch::thread_ap_sig_bdd_205() {
    ap_sig_bdd_205 = (esl_seteq<1,1,1>(ref_genome_TVALID.read(), ap_const_logic_0) && !esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0));
}

void needlemanWunsch::thread_ap_sig_bdd_221() {
    ap_sig_bdd_221 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(8, 8));
}

void needlemanWunsch::thread_ap_sig_bdd_2260() {
    ap_sig_bdd_2260 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(25, 25));
}

void needlemanWunsch::thread_ap_sig_bdd_230() {
    ap_sig_bdd_230 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(9, 9));
}

void needlemanWunsch::thread_ap_sig_bdd_2306() {
    ap_sig_bdd_2306 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(27, 27));
}

void needlemanWunsch::thread_ap_sig_bdd_2354() {
    ap_sig_bdd_2354 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(29, 29));
}

void needlemanWunsch::thread_ap_sig_bdd_239() {
    ap_sig_bdd_239 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(10, 10));
}

void needlemanWunsch::thread_ap_sig_bdd_2401() {
    ap_sig_bdd_2401 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(31, 31));
}

void needlemanWunsch::thread_ap_sig_bdd_2449() {
    ap_sig_bdd_2449 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(33, 33));
}

void needlemanWunsch::thread_ap_sig_bdd_248() {
    ap_sig_bdd_248 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(14, 14));
}

void needlemanWunsch::thread_ap_sig_bdd_2496() {
    ap_sig_bdd_2496 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(35, 35));
}

void needlemanWunsch::thread_ap_sig_bdd_2544() {
    ap_sig_bdd_2544 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(37, 37));
}

void needlemanWunsch::thread_ap_sig_bdd_257() {
    ap_sig_bdd_257 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(26, 26));
}

void needlemanWunsch::thread_ap_sig_bdd_2589() {
    ap_sig_bdd_2589 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(39, 39));
}

void needlemanWunsch::thread_ap_sig_bdd_2636() {
    ap_sig_bdd_2636 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(41, 41));
}

void needlemanWunsch::thread_ap_sig_bdd_268() {
    ap_sig_bdd_268 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(4, 4));
}

void needlemanWunsch::thread_ap_sig_bdd_2720() {
    ap_sig_bdd_2720 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(45, 45));
}

void needlemanWunsch::thread_ap_sig_bdd_2755() {
    ap_sig_bdd_2755 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(46, 46));
}

void needlemanWunsch::thread_ap_sig_bdd_280() {
    ap_sig_bdd_280 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(12, 12));
}

void needlemanWunsch::thread_ap_sig_bdd_2816() {
    ap_sig_bdd_2816 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(49, 49));
}

void needlemanWunsch::thread_ap_sig_bdd_2863() {
    ap_sig_bdd_2863 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(51, 51));
}

void needlemanWunsch::thread_ap_sig_bdd_288() {
    ap_sig_bdd_288 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(20, 20));
}

void needlemanWunsch::thread_ap_sig_bdd_2953() {
    ap_sig_bdd_2953 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(55, 55));
}

void needlemanWunsch::thread_ap_sig_bdd_3001() {
    ap_sig_bdd_3001 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(57, 57));
}

void needlemanWunsch::thread_ap_sig_bdd_301() {
    ap_sig_bdd_301 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(5, 5));
}

void needlemanWunsch::thread_ap_sig_bdd_3035() {
    ap_sig_bdd_3035 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(58, 58));
}

void needlemanWunsch::thread_ap_sig_bdd_3056() {
    ap_sig_bdd_3056 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(59, 59));
}

void needlemanWunsch::thread_ap_sig_bdd_3090() {
    ap_sig_bdd_3090 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(60, 60));
}

void needlemanWunsch::thread_ap_sig_bdd_3114() {
    ap_sig_bdd_3114 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(61, 61));
}

void needlemanWunsch::thread_ap_sig_bdd_314() {
    ap_sig_bdd_314 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(11, 11));
}

void needlemanWunsch::thread_ap_sig_bdd_3148() {
    ap_sig_bdd_3148 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(62, 62));
}

void needlemanWunsch::thread_ap_sig_bdd_3170() {
    ap_sig_bdd_3170 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(63, 63));
}

void needlemanWunsch::thread_ap_sig_bdd_3215() {
    ap_sig_bdd_3215 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(65, 65));
}

void needlemanWunsch::thread_ap_sig_bdd_3247() {
    ap_sig_bdd_3247 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(66, 66));
}

void needlemanWunsch::thread_ap_sig_bdd_325() {
    ap_sig_bdd_325 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(13, 13));
}

void needlemanWunsch::thread_ap_sig_bdd_3269() {
    ap_sig_bdd_3269 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(67, 67));
}

void needlemanWunsch::thread_ap_sig_bdd_3301() {
    ap_sig_bdd_3301 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(68, 68));
}

void needlemanWunsch::thread_ap_sig_bdd_3322() {
    ap_sig_bdd_3322 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(69, 69));
}

void needlemanWunsch::thread_ap_sig_bdd_3354() {
    ap_sig_bdd_3354 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(70, 70));
}

void needlemanWunsch::thread_ap_sig_bdd_336() {
    ap_sig_bdd_336 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void needlemanWunsch::thread_ap_sig_bdd_3375() {
    ap_sig_bdd_3375 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(71, 71));
}

void needlemanWunsch::thread_ap_sig_bdd_3409() {
    ap_sig_bdd_3409 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(72, 72));
}

void needlemanWunsch::thread_ap_sig_bdd_3432() {
    ap_sig_bdd_3432 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(73, 73));
}

void needlemanWunsch::thread_ap_sig_bdd_346() {
    ap_sig_bdd_346 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(24, 24));
}

void needlemanWunsch::thread_ap_sig_bdd_3464() {
    ap_sig_bdd_3464 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(74, 74));
}

void needlemanWunsch::thread_ap_sig_bdd_3486() {
    ap_sig_bdd_3486 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(75, 75));
}

void needlemanWunsch::thread_ap_sig_bdd_3518() {
    ap_sig_bdd_3518 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(76, 76));
}

void needlemanWunsch::thread_ap_sig_bdd_3542() {
    ap_sig_bdd_3542 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(77, 77));
}

void needlemanWunsch::thread_ap_sig_bdd_357() {
    ap_sig_bdd_357 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(16, 16));
}

void needlemanWunsch::thread_ap_sig_bdd_3576() {
    ap_sig_bdd_3576 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(78, 78));
}

void needlemanWunsch::thread_ap_sig_bdd_3599() {
    ap_sig_bdd_3599 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(79, 79));
}

void needlemanWunsch::thread_ap_sig_bdd_3645() {
    ap_sig_bdd_3645 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(81, 81));
}

void needlemanWunsch::thread_ap_sig_bdd_366() {
    ap_sig_bdd_366 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(32, 32));
}

void needlemanWunsch::thread_ap_sig_bdd_3679() {
    ap_sig_bdd_3679 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(82, 82));
}

void needlemanWunsch::thread_ap_sig_bdd_3702() {
    ap_sig_bdd_3702 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(83, 83));
}

void needlemanWunsch::thread_ap_sig_bdd_3736() {
    ap_sig_bdd_3736 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(84, 84));
}

void needlemanWunsch::thread_ap_sig_bdd_3757() {
    ap_sig_bdd_3757 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(85, 85));
}

void needlemanWunsch::thread_ap_sig_bdd_377() {
    ap_sig_bdd_377 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(30, 30));
}

void needlemanWunsch::thread_ap_sig_bdd_3789() {
    ap_sig_bdd_3789 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(86, 86));
}

void needlemanWunsch::thread_ap_sig_bdd_3809() {
    ap_sig_bdd_3809 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(87, 87));
}

void needlemanWunsch::thread_ap_sig_bdd_3841() {
    ap_sig_bdd_3841 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(88, 88));
}

void needlemanWunsch::thread_ap_sig_bdd_3865() {
    ap_sig_bdd_3865 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(89, 89));
}

void needlemanWunsch::thread_ap_sig_bdd_3899() {
    ap_sig_bdd_3899 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(90, 90));
}

void needlemanWunsch::thread_ap_sig_bdd_390() {
    ap_sig_bdd_390 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(36, 36));
}

void needlemanWunsch::thread_ap_sig_bdd_3922() {
    ap_sig_bdd_3922 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(91, 91));
}

void needlemanWunsch::thread_ap_sig_bdd_3956() {
    ap_sig_bdd_3956 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(92, 92));
}

void needlemanWunsch::thread_ap_sig_bdd_3978() {
    ap_sig_bdd_3978 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(93, 93));
}

void needlemanWunsch::thread_ap_sig_bdd_400() {
    ap_sig_bdd_400 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(7, 7));
}

void needlemanWunsch::thread_ap_sig_bdd_4012() {
    ap_sig_bdd_4012 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(94, 94));
}

void needlemanWunsch::thread_ap_sig_bdd_4032() {
    ap_sig_bdd_4032 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(95, 95));
}

void needlemanWunsch::thread_ap_sig_bdd_4064() {
    ap_sig_bdd_4064 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(96, 96));
}

void needlemanWunsch::thread_ap_sig_bdd_408() {
    ap_sig_bdd_408 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(15, 15));
}

void needlemanWunsch::thread_ap_sig_bdd_4086() {
    ap_sig_bdd_4086 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(97, 97));
}

void needlemanWunsch::thread_ap_sig_bdd_4133() {
    ap_sig_bdd_4133 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(99, 99));
}

void needlemanWunsch::thread_ap_sig_bdd_4167() {
    ap_sig_bdd_4167 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(100, 100));
}

void needlemanWunsch::thread_ap_sig_bdd_417() {
    ap_sig_bdd_417 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(52, 52));
}

void needlemanWunsch::thread_ap_sig_bdd_430() {
    ap_sig_bdd_430 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(53, 53));
}

void needlemanWunsch::thread_ap_sig_bdd_440() {
    ap_sig_bdd_440 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(18, 18));
}

void needlemanWunsch::thread_ap_sig_bdd_449() {
    ap_sig_bdd_449 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(54, 54));
}

void needlemanWunsch::thread_ap_sig_bdd_465() {
    ap_sig_bdd_465 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(22, 22));
}

void needlemanWunsch::thread_ap_sig_bdd_474() {
    ap_sig_bdd_474 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(38, 38));
}

void needlemanWunsch::thread_ap_sig_bdd_486() {
    ap_sig_bdd_486 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(28, 28));
}

void needlemanWunsch::thread_ap_sig_bdd_498() {
    ap_sig_bdd_498 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(34, 34));
}

void needlemanWunsch::thread_ap_sig_bdd_510() {
    ap_sig_bdd_510 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(40, 40));
}

void needlemanWunsch::thread_ap_sig_bdd_519() {
    ap_sig_bdd_519 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(17, 17));
}

void needlemanWunsch::thread_ap_sig_bdd_530() {
    ap_sig_bdd_530 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(19, 19));
}

void needlemanWunsch::thread_ap_sig_bdd_540() {
    ap_sig_bdd_540 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(43, 43));
}

void needlemanWunsch::thread_ap_sig_bdd_549() {
    ap_sig_bdd_549 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(21, 21));
}

void needlemanWunsch::thread_ap_sig_bdd_557() {
    ap_sig_bdd_557 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(47, 47));
}

void needlemanWunsch::thread_ap_sig_bdd_567() {
    ap_sig_bdd_567 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(48, 48));
}

void needlemanWunsch::thread_ap_sig_bdd_576() {
    ap_sig_bdd_576 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(23, 23));
}

void needlemanWunsch::thread_ap_sig_bdd_593() {
    ap_sig_bdd_593 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(80, 80));
}

void needlemanWunsch::thread_ap_sig_bdd_604() {
    ap_sig_bdd_604 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(6, 6));
}

void needlemanWunsch::thread_ap_sig_bdd_614() {
    ap_sig_bdd_614 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(44, 44));
}

void needlemanWunsch::thread_ap_sig_bdd_629() {
    ap_sig_bdd_629 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(64, 64));
}

void needlemanWunsch::thread_ap_sig_bdd_648() {
    ap_sig_bdd_648 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(98, 98));
}

void needlemanWunsch::thread_ap_sig_bdd_660() {
    ap_sig_bdd_660 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(50, 50));
}

void needlemanWunsch::thread_ap_sig_bdd_672() {
    ap_sig_bdd_672 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(56, 56));
}

void needlemanWunsch::thread_ap_sig_bdd_683() {
    ap_sig_bdd_683 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(42, 42));
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg0_fsm_1() {
    if (ap_sig_bdd_1157.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg10_fsm_11() {
    if (ap_sig_bdd_314.read()) {
        ap_sig_cseq_ST_pp0_stg10_fsm_11 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg10_fsm_11 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg11_fsm_12() {
    if (ap_sig_bdd_280.read()) {
        ap_sig_cseq_ST_pp0_stg11_fsm_12 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg11_fsm_12 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg12_fsm_13() {
    if (ap_sig_bdd_325.read()) {
        ap_sig_cseq_ST_pp0_stg12_fsm_13 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg12_fsm_13 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg13_fsm_14() {
    if (ap_sig_bdd_248.read()) {
        ap_sig_cseq_ST_pp0_stg13_fsm_14 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg13_fsm_14 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg14_fsm_15() {
    if (ap_sig_bdd_408.read()) {
        ap_sig_cseq_ST_pp0_stg14_fsm_15 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg14_fsm_15 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg15_fsm_16() {
    if (ap_sig_bdd_357.read()) {
        ap_sig_cseq_ST_pp0_stg15_fsm_16 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg15_fsm_16 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg16_fsm_17() {
    if (ap_sig_bdd_519.read()) {
        ap_sig_cseq_ST_pp0_stg16_fsm_17 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg16_fsm_17 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg17_fsm_18() {
    if (ap_sig_bdd_440.read()) {
        ap_sig_cseq_ST_pp0_stg17_fsm_18 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg17_fsm_18 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg18_fsm_19() {
    if (ap_sig_bdd_530.read()) {
        ap_sig_cseq_ST_pp0_stg18_fsm_19 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg18_fsm_19 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg19_fsm_20() {
    if (ap_sig_bdd_288.read()) {
        ap_sig_cseq_ST_pp0_stg19_fsm_20 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg19_fsm_20 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg1_fsm_2() {
    if (ap_sig_bdd_197.read()) {
        ap_sig_cseq_ST_pp0_stg1_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg1_fsm_2 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg20_fsm_21() {
    if (ap_sig_bdd_549.read()) {
        ap_sig_cseq_ST_pp0_stg20_fsm_21 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg20_fsm_21 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg21_fsm_22() {
    if (ap_sig_bdd_465.read()) {
        ap_sig_cseq_ST_pp0_stg21_fsm_22 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg21_fsm_22 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg22_fsm_23() {
    if (ap_sig_bdd_576.read()) {
        ap_sig_cseq_ST_pp0_stg22_fsm_23 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg22_fsm_23 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg23_fsm_24() {
    if (ap_sig_bdd_346.read()) {
        ap_sig_cseq_ST_pp0_stg23_fsm_24 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg23_fsm_24 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg24_fsm_25() {
    if (ap_sig_bdd_2260.read()) {
        ap_sig_cseq_ST_pp0_stg24_fsm_25 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg24_fsm_25 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg25_fsm_26() {
    if (ap_sig_bdd_257.read()) {
        ap_sig_cseq_ST_pp0_stg25_fsm_26 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg25_fsm_26 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg26_fsm_27() {
    if (ap_sig_bdd_2306.read()) {
        ap_sig_cseq_ST_pp0_stg26_fsm_27 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg26_fsm_27 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg27_fsm_28() {
    if (ap_sig_bdd_486.read()) {
        ap_sig_cseq_ST_pp0_stg27_fsm_28 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg27_fsm_28 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg28_fsm_29() {
    if (ap_sig_bdd_2354.read()) {
        ap_sig_cseq_ST_pp0_stg28_fsm_29 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg28_fsm_29 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg29_fsm_30() {
    if (ap_sig_bdd_377.read()) {
        ap_sig_cseq_ST_pp0_stg29_fsm_30 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg29_fsm_30 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg2_fsm_3() {
    if (ap_sig_bdd_336.read()) {
        ap_sig_cseq_ST_pp0_stg2_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg2_fsm_3 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg30_fsm_31() {
    if (ap_sig_bdd_2401.read()) {
        ap_sig_cseq_ST_pp0_stg30_fsm_31 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg30_fsm_31 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg31_fsm_32() {
    if (ap_sig_bdd_366.read()) {
        ap_sig_cseq_ST_pp0_stg31_fsm_32 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg31_fsm_32 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg32_fsm_33() {
    if (ap_sig_bdd_2449.read()) {
        ap_sig_cseq_ST_pp0_stg32_fsm_33 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg32_fsm_33 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg33_fsm_34() {
    if (ap_sig_bdd_498.read()) {
        ap_sig_cseq_ST_pp0_stg33_fsm_34 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg33_fsm_34 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg34_fsm_35() {
    if (ap_sig_bdd_2496.read()) {
        ap_sig_cseq_ST_pp0_stg34_fsm_35 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg34_fsm_35 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg35_fsm_36() {
    if (ap_sig_bdd_390.read()) {
        ap_sig_cseq_ST_pp0_stg35_fsm_36 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg35_fsm_36 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg36_fsm_37() {
    if (ap_sig_bdd_2544.read()) {
        ap_sig_cseq_ST_pp0_stg36_fsm_37 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg36_fsm_37 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg37_fsm_38() {
    if (ap_sig_bdd_474.read()) {
        ap_sig_cseq_ST_pp0_stg37_fsm_38 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg37_fsm_38 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg38_fsm_39() {
    if (ap_sig_bdd_2589.read()) {
        ap_sig_cseq_ST_pp0_stg38_fsm_39 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg38_fsm_39 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg39_fsm_40() {
    if (ap_sig_bdd_510.read()) {
        ap_sig_cseq_ST_pp0_stg39_fsm_40 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg39_fsm_40 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg3_fsm_4() {
    if (ap_sig_bdd_268.read()) {
        ap_sig_cseq_ST_pp0_stg3_fsm_4 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg3_fsm_4 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg40_fsm_41() {
    if (ap_sig_bdd_2636.read()) {
        ap_sig_cseq_ST_pp0_stg40_fsm_41 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg40_fsm_41 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg41_fsm_42() {
    if (ap_sig_bdd_683.read()) {
        ap_sig_cseq_ST_pp0_stg41_fsm_42 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg41_fsm_42 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg42_fsm_43() {
    if (ap_sig_bdd_540.read()) {
        ap_sig_cseq_ST_pp0_stg42_fsm_43 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg42_fsm_43 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg43_fsm_44() {
    if (ap_sig_bdd_614.read()) {
        ap_sig_cseq_ST_pp0_stg43_fsm_44 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg43_fsm_44 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg44_fsm_45() {
    if (ap_sig_bdd_2720.read()) {
        ap_sig_cseq_ST_pp0_stg44_fsm_45 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg44_fsm_45 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg45_fsm_46() {
    if (ap_sig_bdd_2755.read()) {
        ap_sig_cseq_ST_pp0_stg45_fsm_46 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg45_fsm_46 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg46_fsm_47() {
    if (ap_sig_bdd_557.read()) {
        ap_sig_cseq_ST_pp0_stg46_fsm_47 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg46_fsm_47 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg47_fsm_48() {
    if (ap_sig_bdd_567.read()) {
        ap_sig_cseq_ST_pp0_stg47_fsm_48 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg47_fsm_48 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg48_fsm_49() {
    if (ap_sig_bdd_2816.read()) {
        ap_sig_cseq_ST_pp0_stg48_fsm_49 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg48_fsm_49 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg49_fsm_50() {
    if (ap_sig_bdd_660.read()) {
        ap_sig_cseq_ST_pp0_stg49_fsm_50 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg49_fsm_50 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg4_fsm_5() {
    if (ap_sig_bdd_301.read()) {
        ap_sig_cseq_ST_pp0_stg4_fsm_5 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg4_fsm_5 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg50_fsm_51() {
    if (ap_sig_bdd_2863.read()) {
        ap_sig_cseq_ST_pp0_stg50_fsm_51 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg50_fsm_51 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg51_fsm_52() {
    if (ap_sig_bdd_417.read()) {
        ap_sig_cseq_ST_pp0_stg51_fsm_52 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg51_fsm_52 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg52_fsm_53() {
    if (ap_sig_bdd_430.read()) {
        ap_sig_cseq_ST_pp0_stg52_fsm_53 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg52_fsm_53 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg53_fsm_54() {
    if (ap_sig_bdd_449.read()) {
        ap_sig_cseq_ST_pp0_stg53_fsm_54 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg53_fsm_54 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg54_fsm_55() {
    if (ap_sig_bdd_2953.read()) {
        ap_sig_cseq_ST_pp0_stg54_fsm_55 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg54_fsm_55 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg55_fsm_56() {
    if (ap_sig_bdd_672.read()) {
        ap_sig_cseq_ST_pp0_stg55_fsm_56 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg55_fsm_56 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg56_fsm_57() {
    if (ap_sig_bdd_3001.read()) {
        ap_sig_cseq_ST_pp0_stg56_fsm_57 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg56_fsm_57 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg57_fsm_58() {
    if (ap_sig_bdd_3035.read()) {
        ap_sig_cseq_ST_pp0_stg57_fsm_58 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg57_fsm_58 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg58_fsm_59() {
    if (ap_sig_bdd_3056.read()) {
        ap_sig_cseq_ST_pp0_stg58_fsm_59 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg58_fsm_59 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg59_fsm_60() {
    if (ap_sig_bdd_3090.read()) {
        ap_sig_cseq_ST_pp0_stg59_fsm_60 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg59_fsm_60 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg5_fsm_6() {
    if (ap_sig_bdd_604.read()) {
        ap_sig_cseq_ST_pp0_stg5_fsm_6 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg5_fsm_6 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg60_fsm_61() {
    if (ap_sig_bdd_3114.read()) {
        ap_sig_cseq_ST_pp0_stg60_fsm_61 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg60_fsm_61 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg61_fsm_62() {
    if (ap_sig_bdd_3148.read()) {
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
    if (ap_sig_bdd_629.read()) {
        ap_sig_cseq_ST_pp0_stg63_fsm_64 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg63_fsm_64 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg64_fsm_65() {
    if (ap_sig_bdd_3215.read()) {
        ap_sig_cseq_ST_pp0_stg64_fsm_65 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg64_fsm_65 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg65_fsm_66() {
    if (ap_sig_bdd_3247.read()) {
        ap_sig_cseq_ST_pp0_stg65_fsm_66 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg65_fsm_66 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg66_fsm_67() {
    if (ap_sig_bdd_3269.read()) {
        ap_sig_cseq_ST_pp0_stg66_fsm_67 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg66_fsm_67 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg67_fsm_68() {
    if (ap_sig_bdd_3301.read()) {
        ap_sig_cseq_ST_pp0_stg67_fsm_68 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg67_fsm_68 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg68_fsm_69() {
    if (ap_sig_bdd_3322.read()) {
        ap_sig_cseq_ST_pp0_stg68_fsm_69 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg68_fsm_69 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg69_fsm_70() {
    if (ap_sig_bdd_3354.read()) {
        ap_sig_cseq_ST_pp0_stg69_fsm_70 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg69_fsm_70 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg6_fsm_7() {
    if (ap_sig_bdd_400.read()) {
        ap_sig_cseq_ST_pp0_stg6_fsm_7 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg6_fsm_7 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg70_fsm_71() {
    if (ap_sig_bdd_3375.read()) {
        ap_sig_cseq_ST_pp0_stg70_fsm_71 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg70_fsm_71 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg71_fsm_72() {
    if (ap_sig_bdd_3409.read()) {
        ap_sig_cseq_ST_pp0_stg71_fsm_72 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg71_fsm_72 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg72_fsm_73() {
    if (ap_sig_bdd_3432.read()) {
        ap_sig_cseq_ST_pp0_stg72_fsm_73 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg72_fsm_73 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg73_fsm_74() {
    if (ap_sig_bdd_3464.read()) {
        ap_sig_cseq_ST_pp0_stg73_fsm_74 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg73_fsm_74 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg74_fsm_75() {
    if (ap_sig_bdd_3486.read()) {
        ap_sig_cseq_ST_pp0_stg74_fsm_75 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg74_fsm_75 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg75_fsm_76() {
    if (ap_sig_bdd_3518.read()) {
        ap_sig_cseq_ST_pp0_stg75_fsm_76 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg75_fsm_76 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg76_fsm_77() {
    if (ap_sig_bdd_3542.read()) {
        ap_sig_cseq_ST_pp0_stg76_fsm_77 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg76_fsm_77 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg77_fsm_78() {
    if (ap_sig_bdd_3576.read()) {
        ap_sig_cseq_ST_pp0_stg77_fsm_78 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg77_fsm_78 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg78_fsm_79() {
    if (ap_sig_bdd_3599.read()) {
        ap_sig_cseq_ST_pp0_stg78_fsm_79 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg78_fsm_79 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg79_fsm_80() {
    if (ap_sig_bdd_593.read()) {
        ap_sig_cseq_ST_pp0_stg79_fsm_80 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg79_fsm_80 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg7_fsm_8() {
    if (ap_sig_bdd_221.read()) {
        ap_sig_cseq_ST_pp0_stg7_fsm_8 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg7_fsm_8 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg80_fsm_81() {
    if (ap_sig_bdd_3645.read()) {
        ap_sig_cseq_ST_pp0_stg80_fsm_81 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg80_fsm_81 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg81_fsm_82() {
    if (ap_sig_bdd_3679.read()) {
        ap_sig_cseq_ST_pp0_stg81_fsm_82 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg81_fsm_82 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg82_fsm_83() {
    if (ap_sig_bdd_3702.read()) {
        ap_sig_cseq_ST_pp0_stg82_fsm_83 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg82_fsm_83 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg83_fsm_84() {
    if (ap_sig_bdd_3736.read()) {
        ap_sig_cseq_ST_pp0_stg83_fsm_84 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg83_fsm_84 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg84_fsm_85() {
    if (ap_sig_bdd_3757.read()) {
        ap_sig_cseq_ST_pp0_stg84_fsm_85 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg84_fsm_85 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg85_fsm_86() {
    if (ap_sig_bdd_3789.read()) {
        ap_sig_cseq_ST_pp0_stg85_fsm_86 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg85_fsm_86 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg86_fsm_87() {
    if (ap_sig_bdd_3809.read()) {
        ap_sig_cseq_ST_pp0_stg86_fsm_87 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg86_fsm_87 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg87_fsm_88() {
    if (ap_sig_bdd_3841.read()) {
        ap_sig_cseq_ST_pp0_stg87_fsm_88 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg87_fsm_88 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg88_fsm_89() {
    if (ap_sig_bdd_3865.read()) {
        ap_sig_cseq_ST_pp0_stg88_fsm_89 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg88_fsm_89 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg89_fsm_90() {
    if (ap_sig_bdd_3899.read()) {
        ap_sig_cseq_ST_pp0_stg89_fsm_90 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg89_fsm_90 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg8_fsm_9() {
    if (ap_sig_bdd_230.read()) {
        ap_sig_cseq_ST_pp0_stg8_fsm_9 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg8_fsm_9 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg90_fsm_91() {
    if (ap_sig_bdd_3922.read()) {
        ap_sig_cseq_ST_pp0_stg90_fsm_91 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg90_fsm_91 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg91_fsm_92() {
    if (ap_sig_bdd_3956.read()) {
        ap_sig_cseq_ST_pp0_stg91_fsm_92 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg91_fsm_92 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg92_fsm_93() {
    if (ap_sig_bdd_3978.read()) {
        ap_sig_cseq_ST_pp0_stg92_fsm_93 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg92_fsm_93 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg93_fsm_94() {
    if (ap_sig_bdd_4012.read()) {
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
    if (ap_sig_bdd_4064.read()) {
        ap_sig_cseq_ST_pp0_stg95_fsm_96 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg95_fsm_96 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg96_fsm_97() {
    if (ap_sig_bdd_4086.read()) {
        ap_sig_cseq_ST_pp0_stg96_fsm_97 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg96_fsm_97 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg97_fsm_98() {
    if (ap_sig_bdd_648.read()) {
        ap_sig_cseq_ST_pp0_stg97_fsm_98 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg97_fsm_98 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg98_fsm_99() {
    if (ap_sig_bdd_4133.read()) {
        ap_sig_cseq_ST_pp0_stg98_fsm_99 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg98_fsm_99 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg99_fsm_100() {
    if (ap_sig_bdd_4167.read()) {
        ap_sig_cseq_ST_pp0_stg99_fsm_100 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg99_fsm_100 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_ap_sig_cseq_ST_pp0_stg9_fsm_10() {
    if (ap_sig_bdd_239.read()) {
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
    if (ap_sig_bdd_19934.read()) {
        ap_sig_cseq_ST_st207_fsm_101 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st207_fsm_101 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_diag_score_0_v_i1_10_cast_cast_fu_5376_p3() {
    diag_score_0_v_i1_10_cast_cast_fu_5376_p3 = (!tmp_47_10_reg_24004.read()[0].is_01())? sc_lv<8>(): ((tmp_47_10_reg_24004.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_11_cast_cast_fu_5537_p3() {
    diag_score_0_v_i1_11_cast_cast_fu_5537_p3 = (!tmp_47_11_reg_24009.read()[0].is_01())? sc_lv<8>(): ((tmp_47_11_reg_24009.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_12_cast_cast_fu_5698_p3() {
    diag_score_0_v_i1_12_cast_cast_fu_5698_p3 = (!tmp_47_12_reg_24014.read()[0].is_01())? sc_lv<8>(): ((tmp_47_12_reg_24014.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_13_cast_cast_fu_5866_p3() {
    diag_score_0_v_i1_13_cast_cast_fu_5866_p3 = (!tmp_47_13_reg_24019.read()[0].is_01())? sc_lv<8>(): ((tmp_47_13_reg_24019.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_14_cast_cast_fu_6018_p3() {
    diag_score_0_v_i1_14_cast_cast_fu_6018_p3 = (!tmp_47_14_reg_24024.read()[0].is_01())? sc_lv<8>(): ((tmp_47_14_reg_24024.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_15_cast_cast_fu_6185_p3() {
    diag_score_0_v_i1_15_cast_cast_fu_6185_p3 = (!tmp_47_15_reg_24029.read()[0].is_01())? sc_lv<8>(): ((tmp_47_15_reg_24029.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_16_cast_cast_fu_6337_p3() {
    diag_score_0_v_i1_16_cast_cast_fu_6337_p3 = (!tmp_47_16_reg_24034.read()[0].is_01())? sc_lv<8>(): ((tmp_47_16_reg_24034.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_17_cast_cast_fu_6504_p3() {
    diag_score_0_v_i1_17_cast_cast_fu_6504_p3 = (!tmp_47_17_reg_24039.read()[0].is_01())? sc_lv<8>(): ((tmp_47_17_reg_24039.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_18_cast_cast_fu_6656_p3() {
    diag_score_0_v_i1_18_cast_cast_fu_6656_p3 = (!tmp_47_18_reg_24044.read()[0].is_01())? sc_lv<8>(): ((tmp_47_18_reg_24044.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_19_cast_cast_fu_6824_p3() {
    diag_score_0_v_i1_19_cast_cast_fu_6824_p3 = (!tmp_47_19_reg_24049.read()[0].is_01())? sc_lv<8>(): ((tmp_47_19_reg_24049.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_1_cast_cast_fu_3233_p3() {
    diag_score_0_v_i1_1_cast_cast_fu_3233_p3 = (!tmp_47_1_reg_22734.read()[0].is_01())? sc_lv<8>(): ((tmp_47_1_reg_22734.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_20_cast_cast_fu_6982_p3() {
    diag_score_0_v_i1_20_cast_cast_fu_6982_p3 = (!tmp_47_20_reg_24054.read()[0].is_01())? sc_lv<8>(): ((tmp_47_20_reg_24054.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_21_cast_cast_fu_7154_p3() {
    diag_score_0_v_i1_21_cast_cast_fu_7154_p3 = (!tmp_47_21_reg_24059.read()[0].is_01())? sc_lv<8>(): ((tmp_47_21_reg_24059.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_22_cast_cast_fu_7320_p3() {
    diag_score_0_v_i1_22_cast_cast_fu_7320_p3 = (!tmp_47_22_reg_24064.read()[0].is_01())? sc_lv<8>(): ((tmp_47_22_reg_24064.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_23_cast_cast_fu_7491_p3() {
    diag_score_0_v_i1_23_cast_cast_fu_7491_p3 = (!tmp_47_23_reg_24069.read()[0].is_01())? sc_lv<8>(): ((tmp_47_23_reg_24069.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_24_cast_cast_fu_7657_p3() {
    diag_score_0_v_i1_24_cast_cast_fu_7657_p3 = (!tmp_47_24_reg_24074.read()[0].is_01())? sc_lv<8>(): ((tmp_47_24_reg_24074.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_25_cast_cast_fu_7823_p3() {
    diag_score_0_v_i1_25_cast_cast_fu_7823_p3 = (!tmp_47_25_reg_24079.read()[0].is_01())? sc_lv<8>(): ((tmp_47_25_reg_24079.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_26_cast_cast_fu_7998_p3() {
    diag_score_0_v_i1_26_cast_cast_fu_7998_p3 = (!tmp_47_26_reg_24084.read()[0].is_01())? sc_lv<8>(): ((tmp_47_26_reg_24084.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_27_cast_cast_fu_8168_p3() {
    diag_score_0_v_i1_27_cast_cast_fu_8168_p3 = (!tmp_47_27_reg_24089.read()[0].is_01())? sc_lv<8>(): ((tmp_47_27_reg_24089.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_28_cast_cast_fu_8332_p3() {
    diag_score_0_v_i1_28_cast_cast_fu_8332_p3 = (!tmp_47_28_reg_24094.read()[0].is_01())? sc_lv<8>(): ((tmp_47_28_reg_24094.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_29_cast_cast_fu_8507_p3() {
    diag_score_0_v_i1_29_cast_cast_fu_8507_p3 = (!tmp_47_29_reg_24099.read()[0].is_01())? sc_lv<8>(): ((tmp_47_29_reg_24099.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_2_cast_cast_fu_3253_p3() {
    diag_score_0_v_i1_2_cast_cast_fu_3253_p3 = (!tmp_47_2_reg_22739.read()[0].is_01())? sc_lv<8>(): ((tmp_47_2_reg_22739.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_30_cast_cast_fu_8684_p3() {
    diag_score_0_v_i1_30_cast_cast_fu_8684_p3 = (!tmp_47_30_reg_24104.read()[0].is_01())? sc_lv<8>(): ((tmp_47_30_reg_24104.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_31_cast_cast_fu_8846_p3() {
    diag_score_0_v_i1_31_cast_cast_fu_8846_p3 = (!tmp_47_31_reg_24109.read()[0].is_01())? sc_lv<8>(): ((tmp_47_31_reg_24109.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_32_cast_cast_fu_9020_p3() {
    diag_score_0_v_i1_32_cast_cast_fu_9020_p3 = (!tmp_47_32_reg_24114.read()[0].is_01())? sc_lv<8>(): ((tmp_47_32_reg_24114.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_33_cast_cast_fu_9184_p3() {
    diag_score_0_v_i1_33_cast_cast_fu_9184_p3 = (!tmp_47_33_reg_24119.read()[0].is_01())? sc_lv<8>(): ((tmp_47_33_reg_24119.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_34_cast_cast_fu_9345_p3() {
    diag_score_0_v_i1_34_cast_cast_fu_9345_p3 = (!tmp_47_34_reg_24124.read()[0].is_01())? sc_lv<8>(): ((tmp_47_34_reg_24124.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_35_cast_cast_fu_9527_p3() {
    diag_score_0_v_i1_35_cast_cast_fu_9527_p3 = (!tmp_47_35_reg_24129.read()[0].is_01())? sc_lv<8>(): ((tmp_47_35_reg_24129.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_36_cast_cast_fu_9696_p3() {
    diag_score_0_v_i1_36_cast_cast_fu_9696_p3 = (!tmp_47_36_reg_24134.read()[0].is_01())? sc_lv<8>(): ((tmp_47_36_reg_24134.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_37_cast_cast_fu_9851_p3() {
    diag_score_0_v_i1_37_cast_cast_fu_9851_p3 = (!tmp_47_37_reg_24139.read()[0].is_01())? sc_lv<8>(): ((tmp_47_37_reg_24139.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_38_cast_cast_fu_10025_p3() {
    diag_score_0_v_i1_38_cast_cast_fu_10025_p3 = (!tmp_47_38_reg_24144.read()[0].is_01())? sc_lv<8>(): ((tmp_47_38_reg_24144.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_39_cast_cast_fu_10190_p3() {
    diag_score_0_v_i1_39_cast_cast_fu_10190_p3 = (!tmp_47_39_reg_24149.read()[0].is_01())? sc_lv<8>(): ((tmp_47_39_reg_24149.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_3_cast_cast_fu_3377_p3() {
    diag_score_0_v_i1_3_cast_cast_fu_3377_p3 = (!tmp_47_3_reg_23006.read()[0].is_01())? sc_lv<8>(): ((tmp_47_3_reg_23006.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_40_cast_cast_fu_10360_p3() {
    diag_score_0_v_i1_40_cast_cast_fu_10360_p3 = (!tmp_47_40_reg_24154.read()[0].is_01())? sc_lv<8>(): ((tmp_47_40_reg_24154.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_41_cast_cast_fu_10536_p3() {
    diag_score_0_v_i1_41_cast_cast_fu_10536_p3 = (!tmp_47_41_reg_24159.read()[0].is_01())? sc_lv<8>(): ((tmp_47_41_reg_24159.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_42_cast_cast_fu_10706_p3() {
    diag_score_0_v_i1_42_cast_cast_fu_10706_p3 = (!tmp_47_42_reg_24164.read()[0].is_01())? sc_lv<8>(): ((tmp_47_42_reg_24164.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_43_cast_cast_fu_10867_p3() {
    diag_score_0_v_i1_43_cast_cast_fu_10867_p3 = (!tmp_47_43_reg_24169.read()[0].is_01())? sc_lv<8>(): ((tmp_47_43_reg_24169.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_44_cast_cast_fu_11041_p3() {
    diag_score_0_v_i1_44_cast_cast_fu_11041_p3 = (!tmp_47_44_reg_24174.read()[0].is_01())? sc_lv<8>(): ((tmp_47_44_reg_24174.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_45_cast_cast_fu_11206_p3() {
    diag_score_0_v_i1_45_cast_cast_fu_11206_p3 = (!tmp_47_45_reg_24179.read()[0].is_01())? sc_lv<8>(): ((tmp_47_45_reg_24179.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_46_cast_cast_fu_11382_p3() {
    diag_score_0_v_i1_46_cast_cast_fu_11382_p3 = (!tmp_47_46_reg_24184.read()[0].is_01())? sc_lv<8>(): ((tmp_47_46_reg_24184.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_47_cast_cast_fu_11544_p3() {
    diag_score_0_v_i1_47_cast_cast_fu_11544_p3 = (!tmp_47_47_reg_24189.read()[0].is_01())? sc_lv<8>(): ((tmp_47_47_reg_24189.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_48_cast_cast_fu_11720_p3() {
    diag_score_0_v_i1_48_cast_cast_fu_11720_p3 = (!tmp_47_48_reg_24194.read()[0].is_01())? sc_lv<8>(): ((tmp_47_48_reg_24194.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_49_cast_cast_fu_11884_p3() {
    diag_score_0_v_i1_49_cast_cast_fu_11884_p3 = (!tmp_47_49_reg_24199.read()[0].is_01())? sc_lv<8>(): ((tmp_47_49_reg_24199.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_4_cast_cast_fu_3590_p3() {
    diag_score_0_v_i1_4_cast_cast_fu_3590_p3 = (!tmp_47_4_reg_23288.read()[0].is_01())? sc_lv<8>(): ((tmp_47_4_reg_23288.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_50_cast_cast_fu_12055_p3() {
    diag_score_0_v_i1_50_cast_cast_fu_12055_p3 = (!tmp_47_50_reg_24204.read()[0].is_01())? sc_lv<8>(): ((tmp_47_50_reg_24204.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_51_cast_cast_fu_12236_p3() {
    diag_score_0_v_i1_51_cast_cast_fu_12236_p3 = (!tmp_47_51_reg_24209.read()[0].is_01())? sc_lv<8>(): ((tmp_47_51_reg_24209.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_52_cast_cast_fu_12393_p3() {
    diag_score_0_v_i1_52_cast_cast_fu_12393_p3 = (!tmp_47_52_reg_24214.read()[0].is_01())? sc_lv<8>(): ((tmp_47_52_reg_24214.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_53_cast_cast_fu_12574_p3() {
    diag_score_0_v_i1_53_cast_cast_fu_12574_p3 = (!tmp_47_53_reg_24219.read()[0].is_01())? sc_lv<8>(): ((tmp_47_53_reg_24219.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_54_cast_cast_fu_12743_p3() {
    diag_score_0_v_i1_54_cast_cast_fu_12743_p3 = (!tmp_47_54_reg_24224.read()[0].is_01())? sc_lv<8>(): ((tmp_47_54_reg_24224.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_55_cast_cast_fu_12915_p3() {
    diag_score_0_v_i1_55_cast_cast_fu_12915_p3 = (!tmp_47_55_reg_24229.read()[0].is_01())? sc_lv<8>(): ((tmp_47_55_reg_24229.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_56_cast_cast_fu_13072_p3() {
    diag_score_0_v_i1_56_cast_cast_fu_13072_p3 = (!tmp_47_56_reg_24234.read()[0].is_01())? sc_lv<8>(): ((tmp_47_56_reg_24234.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_57_cast_cast_fu_13248_p3() {
    diag_score_0_v_i1_57_cast_cast_fu_13248_p3 = (!ap_reg_ppstg_tmp_47_57_reg_24239_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_57_reg_24239_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_58_cast_cast_fu_13428_p3() {
    diag_score_0_v_i1_58_cast_cast_fu_13428_p3 = (!ap_reg_ppstg_tmp_47_58_reg_23424_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_58_reg_23424_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_59_cast_cast_fu_13598_p3() {
    diag_score_0_v_i1_59_cast_cast_fu_13598_p3 = (!ap_reg_ppstg_tmp_47_59_reg_24244_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_59_reg_24244_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_5_cast_cast_fu_3690_p3() {
    diag_score_0_v_i1_5_cast_cast_fu_3690_p3 = (!tmp_47_5_reg_23401.read()[0].is_01())? sc_lv<8>(): ((tmp_47_5_reg_23401.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_60_cast_cast_fu_13773_p3() {
    diag_score_0_v_i1_60_cast_cast_fu_13773_p3 = (!ap_reg_ppstg_tmp_47_60_reg_24249_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_60_reg_24249_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_61_cast_cast_fu_13947_p3() {
    diag_score_0_v_i1_61_cast_cast_fu_13947_p3 = (!ap_reg_ppstg_tmp_47_61_reg_24254_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_61_reg_24254_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_62_cast_cast_fu_14123_p3() {
    diag_score_0_v_i1_62_cast_cast_fu_14123_p3 = (!ap_reg_ppstg_tmp_47_62_reg_24259_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_62_reg_24259_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_63_cast_cast_fu_14290_p3() {
    diag_score_0_v_i1_63_cast_cast_fu_14290_p3 = (!ap_reg_ppstg_tmp_47_63_reg_24264_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_63_reg_24264_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_64_cast_cast_fu_14472_p3() {
    diag_score_0_v_i1_64_cast_cast_fu_14472_p3 = (!ap_reg_ppstg_tmp_47_64_reg_24269_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_64_reg_24269_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_65_cast_cast_fu_14639_p3() {
    diag_score_0_v_i1_65_cast_cast_fu_14639_p3 = (!ap_reg_ppstg_tmp_47_65_reg_24274_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_65_reg_24274_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_66_cast_cast_fu_14814_p3() {
    diag_score_0_v_i1_66_cast_cast_fu_14814_p3 = (!ap_reg_ppstg_tmp_47_66_reg_24279_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_66_reg_24279_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_67_cast_cast_fu_14989_p3() {
    diag_score_0_v_i1_67_cast_cast_fu_14989_p3 = (!ap_reg_ppstg_tmp_47_67_reg_24284_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_67_reg_24284_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_68_cast_cast_fu_15164_p3() {
    diag_score_0_v_i1_68_cast_cast_fu_15164_p3 = (!ap_reg_ppstg_tmp_47_68_reg_24289_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_68_reg_24289_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_69_cast_cast_fu_15339_p3() {
    diag_score_0_v_i1_69_cast_cast_fu_15339_p3 = (!ap_reg_ppstg_tmp_47_69_reg_24294_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_69_reg_24294_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_6_cast_cast_fu_3869_p3() {
    diag_score_0_v_i1_6_cast_cast_fu_3869_p3 = (!tmp_47_6_reg_23635.read()[0].is_01())? sc_lv<8>(): ((tmp_47_6_reg_23635.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_70_cast_cast_fu_15514_p3() {
    diag_score_0_v_i1_70_cast_cast_fu_15514_p3 = (!ap_reg_ppstg_tmp_47_70_reg_24299_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_70_reg_24299_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_71_cast_cast_fu_15689_p3() {
    diag_score_0_v_i1_71_cast_cast_fu_15689_p3 = (!ap_reg_ppstg_tmp_47_71_reg_24304_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_71_reg_24304_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_72_cast_cast_fu_15864_p3() {
    diag_score_0_v_i1_72_cast_cast_fu_15864_p3 = (!ap_reg_ppstg_tmp_47_72_reg_23646_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_72_reg_23646_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_73_cast_cast_fu_16046_p3() {
    diag_score_0_v_i1_73_cast_cast_fu_16046_p3 = (!ap_reg_ppstg_tmp_47_73_reg_23651_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_73_reg_23651_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_74_cast_cast_fu_16220_p3() {
    diag_score_0_v_i1_74_cast_cast_fu_16220_p3 = (!ap_reg_ppstg_tmp_47_74_reg_24309_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_74_reg_24309_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_75_cast_cast_fu_16387_p3() {
    diag_score_0_v_i1_75_cast_cast_fu_16387_p3 = (!ap_reg_ppstg_tmp_47_75_reg_24314_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_75_reg_24314_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_76_cast_cast_fu_16562_p3() {
    diag_score_0_v_i1_76_cast_cast_fu_16562_p3 = (!ap_reg_ppstg_tmp_47_76_reg_24319_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_76_reg_24319_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_77_cast_cast_fu_16749_p3() {
    diag_score_0_v_i1_77_cast_cast_fu_16749_p3 = (!ap_reg_ppstg_tmp_47_77_reg_24324_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_77_reg_24324_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_78_cast_cast_fu_16922_p3() {
    diag_score_0_v_i1_78_cast_cast_fu_16922_p3 = (!ap_reg_ppstg_tmp_47_78_reg_24329_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_78_reg_24329_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_79_cast_cast_fu_17083_p3() {
    diag_score_0_v_i1_79_cast_cast_fu_17083_p3 = (!ap_reg_ppstg_tmp_47_79_reg_24334_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_79_reg_24334_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_7_cast_cast_fu_4066_p3() {
    diag_score_0_v_i1_7_cast_cast_fu_4066_p3 = (!tmp_47_7_reg_23867.read()[0].is_01())? sc_lv<8>(): ((tmp_47_7_reg_23867.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_80_cast_cast_fu_17263_p3() {
    diag_score_0_v_i1_80_cast_cast_fu_17263_p3 = (!ap_reg_ppstg_tmp_47_80_reg_24339_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_80_reg_24339_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_81_cast_cast_fu_17444_p3() {
    diag_score_0_v_i1_81_cast_cast_fu_17444_p3 = (!ap_reg_ppstg_tmp_47_81_reg_24344_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_81_reg_24344_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_82_cast_cast_fu_17610_p3() {
    diag_score_0_v_i1_82_cast_cast_fu_17610_p3 = (!ap_reg_ppstg_tmp_47_82_reg_24349_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_82_reg_24349_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_83_cast_cast_fu_17791_p3() {
    diag_score_0_v_i1_83_cast_cast_fu_17791_p3 = (!ap_reg_ppstg_tmp_47_83_reg_24354_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_83_reg_24354_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_84_cast_cast_fu_17959_p3() {
    diag_score_0_v_i1_84_cast_cast_fu_17959_p3 = (!ap_reg_ppstg_tmp_47_84_reg_24359_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_84_reg_24359_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_85_cast_cast_fu_18126_p3() {
    diag_score_0_v_i1_85_cast_cast_fu_18126_p3 = (!ap_reg_ppstg_tmp_47_85_reg_24364_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_85_reg_24364_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_86_cast_cast_fu_18301_p3() {
    diag_score_0_v_i1_86_cast_cast_fu_18301_p3 = (!ap_reg_ppstg_tmp_47_86_reg_24369_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_86_reg_24369_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_87_cast_cast_fu_18476_p3() {
    diag_score_0_v_i1_87_cast_cast_fu_18476_p3 = (!ap_reg_ppstg_tmp_47_87_reg_24374_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_87_reg_24374_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_88_cast_cast_fu_18658_p3() {
    diag_score_0_v_i1_88_cast_cast_fu_18658_p3 = (!ap_reg_ppstg_tmp_47_88_reg_24379_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_88_reg_24379_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_89_cast_cast_fu_18837_p3() {
    diag_score_0_v_i1_89_cast_cast_fu_18837_p3 = (!ap_reg_ppstg_tmp_47_89_reg_24384_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_89_reg_24384_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_8_cast_cast_fu_4895_p3() {
    diag_score_0_v_i1_8_cast_cast_fu_4895_p3 = (!tmp_47_8_reg_23989.read()[0].is_01())? sc_lv<8>(): ((tmp_47_8_reg_23989.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_90_cast_cast_fu_18998_p3() {
    diag_score_0_v_i1_90_cast_cast_fu_18998_p3 = (!ap_reg_ppstg_tmp_47_90_reg_24389_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_90_reg_24389_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_91_cast_cast_fu_19173_p3() {
    diag_score_0_v_i1_91_cast_cast_fu_19173_p3 = (!ap_reg_ppstg_tmp_47_91_reg_24394_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_91_reg_24394_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_92_cast_cast_fu_19360_p3() {
    diag_score_0_v_i1_92_cast_cast_fu_19360_p3 = (!ap_reg_ppstg_tmp_47_92_reg_24399_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_92_reg_24399_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_93_cast_cast_fu_19521_p3() {
    diag_score_0_v_i1_93_cast_cast_fu_19521_p3 = (!ap_reg_ppstg_tmp_47_93_reg_24404_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_93_reg_24404_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_94_cast_cast_fu_19696_p3() {
    diag_score_0_v_i1_94_cast_cast_fu_19696_p3 = (!ap_reg_ppstg_tmp_47_94_reg_24409_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_94_reg_24409_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_95_cast_cast_fu_19871_p3() {
    diag_score_0_v_i1_95_cast_cast_fu_19871_p3 = (!ap_reg_ppstg_tmp_47_95_reg_24414_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_95_reg_24414_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_96_cast_cast_fu_20051_p3() {
    diag_score_0_v_i1_96_cast_cast_fu_20051_p3 = (!ap_reg_ppstg_tmp_47_96_reg_24419_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_96_reg_24419_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_97_cast_cast_fu_20220_p3() {
    diag_score_0_v_i1_97_cast_cast_fu_20220_p3 = (!ap_reg_ppstg_tmp_47_97_reg_24424_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_97_reg_24424_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_98_cast_cast_fu_20408_p3() {
    diag_score_0_v_i1_98_cast_cast_fu_20408_p3 = (!ap_reg_ppstg_tmp_47_98_reg_24429_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_47_98_reg_24429_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_9_cast_cast_fu_5056_p3() {
    diag_score_0_v_i1_9_cast_cast_fu_5056_p3 = (!tmp_47_9_reg_23994.read()[0].is_01())? sc_lv<8>(): ((tmp_47_9_reg_23994.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_cast_cast_6_fu_5224_p3() {
    diag_score_0_v_i1_cast_cast_6_fu_5224_p3 = (!tmp_47_s_reg_23999.read()[0].is_01())? sc_lv<8>(): ((tmp_47_s_reg_23999.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i1_cast_cast_fu_3169_p3() {
    diag_score_0_v_i1_cast_cast_fu_3169_p3 = (!tmp_6_fu_3164_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_6_fu_3164_p2.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_10_cast_cast_fu_5643_p3() {
    diag_score_0_v_i_10_cast_cast_fu_5643_p3 = (!tmp_56_10_reg_24471.read()[0].is_01())? sc_lv<8>(): ((tmp_56_10_reg_24471.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_11_cast_cast_fu_5804_p3() {
    diag_score_0_v_i_11_cast_cast_fu_5804_p3 = (!tmp_56_11_reg_24476.read()[0].is_01())? sc_lv<8>(): ((tmp_56_11_reg_24476.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_12_cast_cast_fu_5963_p3() {
    diag_score_0_v_i_12_cast_cast_fu_5963_p3 = (!tmp_56_12_reg_24481.read()[0].is_01())? sc_lv<8>(): ((tmp_56_12_reg_24481.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_13_cast_cast_fu_6123_p3() {
    diag_score_0_v_i_13_cast_cast_fu_6123_p3 = (!tmp_56_13_reg_24486.read()[0].is_01())? sc_lv<8>(): ((tmp_56_13_reg_24486.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_14_cast_cast_fu_6282_p3() {
    diag_score_0_v_i_14_cast_cast_fu_6282_p3 = (!tmp_56_14_reg_24491.read()[0].is_01())? sc_lv<8>(): ((tmp_56_14_reg_24491.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_15_cast_cast_fu_6442_p3() {
    diag_score_0_v_i_15_cast_cast_fu_6442_p3 = (!tmp_56_15_reg_24496.read()[0].is_01())? sc_lv<8>(): ((tmp_56_15_reg_24496.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_16_cast_cast_fu_6601_p3() {
    diag_score_0_v_i_16_cast_cast_fu_6601_p3 = (!tmp_56_16_reg_24501.read()[0].is_01())? sc_lv<8>(): ((tmp_56_16_reg_24501.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_17_cast_cast_fu_6762_p3() {
    diag_score_0_v_i_17_cast_cast_fu_6762_p3 = (!tmp_56_17_reg_24506.read()[0].is_01())? sc_lv<8>(): ((tmp_56_17_reg_24506.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_18_cast_cast_fu_6921_p3() {
    diag_score_0_v_i_18_cast_cast_fu_6921_p3 = (!tmp_56_18_reg_24511.read()[0].is_01())? sc_lv<8>(): ((tmp_56_18_reg_24511.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_19_cast_cast_fu_7088_p3() {
    diag_score_0_v_i_19_cast_cast_fu_7088_p3 = (!tmp_56_19_reg_24516.read()[0].is_01())? sc_lv<8>(): ((tmp_56_19_reg_24516.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_1_cast_cast_fu_3337_p3() {
    diag_score_0_v_i_1_cast_cast_fu_3337_p3 = (!tmp_56_1_reg_22964.read()[0].is_01())? sc_lv<8>(): ((tmp_56_1_reg_22964.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_20_cast_cast_fu_7260_p3() {
    diag_score_0_v_i_20_cast_cast_fu_7260_p3 = (!tmp_56_20_reg_24521.read()[0].is_01())? sc_lv<8>(): ((tmp_56_20_reg_24521.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_21_cast_cast_fu_7425_p3() {
    diag_score_0_v_i_21_cast_cast_fu_7425_p3 = (!tmp_56_21_reg_24526.read()[0].is_01())? sc_lv<8>(): ((tmp_56_21_reg_24526.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_22_cast_cast_fu_7597_p3() {
    diag_score_0_v_i_22_cast_cast_fu_7597_p3 = (!tmp_56_22_reg_24531.read()[0].is_01())? sc_lv<8>(): ((tmp_56_22_reg_24531.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_23_cast_cast_fu_7763_p3() {
    diag_score_0_v_i_23_cast_cast_fu_7763_p3 = (!tmp_56_23_reg_24536.read()[0].is_01())? sc_lv<8>(): ((tmp_56_23_reg_24536.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_24_cast_cast_fu_7929_p3() {
    diag_score_0_v_i_24_cast_cast_fu_7929_p3 = (!tmp_56_24_reg_24541.read()[0].is_01())? sc_lv<8>(): ((tmp_56_24_reg_24541.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_25_cast_cast_fu_8103_p3() {
    diag_score_0_v_i_25_cast_cast_fu_8103_p3 = (!tmp_56_25_reg_24546.read()[0].is_01())? sc_lv<8>(): ((tmp_56_25_reg_24546.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_26_cast_cast_fu_8274_p3() {
    diag_score_0_v_i_26_cast_cast_fu_8274_p3 = (!tmp_56_26_reg_24551.read()[0].is_01())? sc_lv<8>(): ((tmp_56_26_reg_24551.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_27_cast_cast_fu_8437_p3() {
    diag_score_0_v_i_27_cast_cast_fu_8437_p3 = (!tmp_56_27_reg_24556.read()[0].is_01())? sc_lv<8>(): ((tmp_56_27_reg_24556.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_28_cast_cast_fu_8612_p3() {
    diag_score_0_v_i_28_cast_cast_fu_8612_p3 = (!tmp_56_28_reg_24561.read()[0].is_01())? sc_lv<8>(): ((tmp_56_28_reg_24561.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_29_cast_cast_fu_8781_p3() {
    diag_score_0_v_i_29_cast_cast_fu_8781_p3 = (!tmp_56_29_reg_24566.read()[0].is_01())? sc_lv<8>(): ((tmp_56_29_reg_24566.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_2_cast_cast_fu_3475_p3() {
    diag_score_0_v_i_2_cast_cast_fu_3475_p3 = (!tmp_56_2_reg_22969.read()[0].is_01())? sc_lv<8>(): ((tmp_56_2_reg_22969.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_30_cast_cast_fu_8943_p3() {
    diag_score_0_v_i_30_cast_cast_fu_8943_p3 = (!tmp_56_30_reg_24571.read()[0].is_01())? sc_lv<8>(): ((tmp_56_30_reg_24571.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_31_cast_cast_fu_9117_p3() {
    diag_score_0_v_i_31_cast_cast_fu_9117_p3 = (!tmp_56_31_reg_24576.read()[0].is_01())? sc_lv<8>(): ((tmp_56_31_reg_24576.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_32_cast_cast_fu_9281_p3() {
    diag_score_0_v_i_32_cast_cast_fu_9281_p3 = (!tmp_56_32_reg_24581.read()[0].is_01())? sc_lv<8>(): ((tmp_56_32_reg_24581.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_33_cast_cast_fu_9450_p3() {
    diag_score_0_v_i_33_cast_cast_fu_9450_p3 = (!tmp_56_33_reg_24586.read()[0].is_01())? sc_lv<8>(): ((tmp_56_33_reg_24586.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_34_cast_cast_fu_9624_p3() {
    diag_score_0_v_i_34_cast_cast_fu_9624_p3 = (!tmp_56_34_reg_24591.read()[0].is_01())? sc_lv<8>(): ((tmp_56_34_reg_24591.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_35_cast_cast_fu_9793_p3() {
    diag_score_0_v_i_35_cast_cast_fu_9793_p3 = (!tmp_56_35_reg_24596.read()[0].is_01())? sc_lv<8>(): ((tmp_56_35_reg_24596.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_36_cast_cast_fu_9956_p3() {
    diag_score_0_v_i_36_cast_cast_fu_9956_p3 = (!tmp_56_36_reg_24601.read()[0].is_01())? sc_lv<8>(): ((tmp_56_36_reg_24601.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_37_cast_cast_fu_10130_p3() {
    diag_score_0_v_i_37_cast_cast_fu_10130_p3 = (!tmp_56_37_reg_24606.read()[0].is_01())? sc_lv<8>(): ((tmp_56_37_reg_24606.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_38_cast_cast_fu_10296_p3() {
    diag_score_0_v_i_38_cast_cast_fu_10296_p3 = (!tmp_56_38_reg_24611.read()[0].is_01())? sc_lv<8>(): ((tmp_56_38_reg_24611.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_39_cast_cast_fu_10465_p3() {
    diag_score_0_v_i_39_cast_cast_fu_10465_p3 = (!tmp_56_39_reg_24616.read()[0].is_01())? sc_lv<8>(): ((tmp_56_39_reg_24616.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_3_cast_cast_fu_3637_p3() {
    diag_score_0_v_i_3_cast_cast_fu_3637_p3 = (!tmp_56_3_reg_23067.read()[0].is_01())? sc_lv<8>(): ((tmp_56_3_reg_23067.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_40_cast_cast_fu_10633_p3() {
    diag_score_0_v_i_40_cast_cast_fu_10633_p3 = (!tmp_56_40_reg_24621.read()[0].is_01())? sc_lv<8>(): ((tmp_56_40_reg_24621.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_41_cast_cast_fu_10803_p3() {
    diag_score_0_v_i_41_cast_cast_fu_10803_p3 = (!tmp_56_41_reg_24626.read()[0].is_01())? sc_lv<8>(): ((tmp_56_41_reg_24626.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_42_cast_cast_fu_10972_p3() {
    diag_score_0_v_i_42_cast_cast_fu_10972_p3 = (!tmp_56_42_reg_24631.read()[0].is_01())? sc_lv<8>(): ((tmp_56_42_reg_24631.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_43_cast_cast_fu_11146_p3() {
    diag_score_0_v_i_43_cast_cast_fu_11146_p3 = (!tmp_56_43_reg_24636.read()[0].is_01())? sc_lv<8>(): ((tmp_56_43_reg_24636.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_44_cast_cast_fu_11311_p3() {
    diag_score_0_v_i_44_cast_cast_fu_11311_p3 = (!tmp_56_44_reg_24641.read()[0].is_01())? sc_lv<8>(): ((tmp_56_44_reg_24641.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_45_cast_cast_fu_11479_p3() {
    diag_score_0_v_i_45_cast_cast_fu_11479_p3 = (!tmp_56_45_reg_24646.read()[0].is_01())? sc_lv<8>(): ((tmp_56_45_reg_24646.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_46_cast_cast_fu_11649_p3() {
    diag_score_0_v_i_46_cast_cast_fu_11649_p3 = (!tmp_56_46_reg_24651.read()[0].is_01())? sc_lv<8>(): ((tmp_56_46_reg_24651.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_47_cast_cast_fu_11826_p3() {
    diag_score_0_v_i_47_cast_cast_fu_11826_p3 = (!tmp_56_47_reg_24656.read()[0].is_01())? sc_lv<8>(): ((tmp_56_47_reg_24656.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_48_cast_cast_fu_11989_p3() {
    diag_score_0_v_i_48_cast_cast_fu_11989_p3 = (!tmp_56_48_reg_24661.read()[0].is_01())? sc_lv<8>(): ((tmp_56_48_reg_24661.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_49_cast_cast_fu_12160_p3() {
    diag_score_0_v_i_49_cast_cast_fu_12160_p3 = (!tmp_56_49_reg_24666.read()[0].is_01())? sc_lv<8>(): ((tmp_56_49_reg_24666.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_4_cast_cast_fu_3816_p3() {
    diag_score_0_v_i_4_cast_cast_fu_3816_p3 = (!tmp_56_4_reg_23357.read()[0].is_01())? sc_lv<8>(): ((tmp_56_4_reg_23357.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_50_cast_cast_fu_12333_p3() {
    diag_score_0_v_i_50_cast_cast_fu_12333_p3 = (!tmp_56_50_reg_24671.read()[0].is_01())? sc_lv<8>(): ((tmp_56_50_reg_24671.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_51_cast_cast_fu_12499_p3() {
    diag_score_0_v_i_51_cast_cast_fu_12499_p3 = (!tmp_56_51_reg_24676.read()[0].is_01())? sc_lv<8>(): ((tmp_56_51_reg_24676.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_52_cast_cast_fu_12679_p3() {
    diag_score_0_v_i_52_cast_cast_fu_12679_p3 = (!tmp_56_52_reg_24681.read()[0].is_01())? sc_lv<8>(): ((tmp_56_52_reg_24681.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_53_cast_cast_fu_12848_p3() {
    diag_score_0_v_i_53_cast_cast_fu_12848_p3 = (!tmp_56_53_reg_24686.read()[0].is_01())? sc_lv<8>(): ((tmp_56_53_reg_24686.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_54_cast_cast_fu_13012_p3() {
    diag_score_0_v_i_54_cast_cast_fu_13012_p3 = (!tmp_56_54_reg_24691.read()[0].is_01())? sc_lv<8>(): ((tmp_56_54_reg_24691.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_55_cast_cast_fu_13178_p3() {
    diag_score_0_v_i_55_cast_cast_fu_13178_p3 = (!ap_reg_ppstg_tmp_56_55_reg_24696_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_55_reg_24696_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_56_cast_cast_fu_13353_p3() {
    diag_score_0_v_i_56_cast_cast_fu_13353_p3 = (!ap_reg_ppstg_tmp_56_56_reg_24701_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_56_reg_24701_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_57_cast_cast_fu_13533_p3() {
    diag_score_0_v_i_57_cast_cast_fu_13533_p3 = (!ap_reg_ppstg_tmp_56_57_reg_24706_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_57_reg_24706_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_58_cast_cast_fu_13704_p3() {
    diag_score_0_v_i_58_cast_cast_fu_13704_p3 = (!ap_reg_ppstg_tmp_56_58_reg_23485_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_58_reg_23485_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_59_cast_cast_fu_13878_p3() {
    diag_score_0_v_i_59_cast_cast_fu_13878_p3 = (!ap_reg_ppstg_tmp_56_59_reg_24711_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_59_reg_24711_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_5_cast_cast_fu_4013_p3() {
    diag_score_0_v_i_5_cast_cast_fu_4013_p3 = (!tmp_56_5_reg_23480.read()[0].is_01())? sc_lv<8>(): ((tmp_56_5_reg_23480.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_60_cast_cast_fu_14052_p3() {
    diag_score_0_v_i_60_cast_cast_fu_14052_p3 = (!ap_reg_ppstg_tmp_56_60_reg_24716_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_60_reg_24716_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_61_cast_cast_fu_14220_p3() {
    diag_score_0_v_i_61_cast_cast_fu_14220_p3 = (!ap_reg_ppstg_tmp_56_61_reg_24721_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_61_reg_24721_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_62_cast_cast_fu_14395_p3() {
    diag_score_0_v_i_62_cast_cast_fu_14395_p3 = (!ap_reg_ppstg_tmp_56_62_reg_24726_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_62_reg_24726_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_63_cast_cast_fu_14569_p3() {
    diag_score_0_v_i_63_cast_cast_fu_14569_p3 = (!ap_reg_ppstg_tmp_56_63_reg_24731_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_63_reg_24731_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_64_cast_cast_fu_14744_p3() {
    diag_score_0_v_i_64_cast_cast_fu_14744_p3 = (!ap_reg_ppstg_tmp_56_64_reg_24736_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_64_reg_24736_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_65_cast_cast_fu_14919_p3() {
    diag_score_0_v_i_65_cast_cast_fu_14919_p3 = (!ap_reg_ppstg_tmp_56_65_reg_24741_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_65_reg_24741_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_66_cast_cast_fu_15094_p3() {
    diag_score_0_v_i_66_cast_cast_fu_15094_p3 = (!ap_reg_ppstg_tmp_56_66_reg_24746_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_66_reg_24746_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_67_cast_cast_fu_15269_p3() {
    diag_score_0_v_i_67_cast_cast_fu_15269_p3 = (!ap_reg_ppstg_tmp_56_67_reg_24751_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_67_reg_24751_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_68_cast_cast_fu_15444_p3() {
    diag_score_0_v_i_68_cast_cast_fu_15444_p3 = (!ap_reg_ppstg_tmp_56_68_reg_24756_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_68_reg_24756_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_69_cast_cast_fu_15619_p3() {
    diag_score_0_v_i_69_cast_cast_fu_15619_p3 = (!ap_reg_ppstg_tmp_56_69_reg_24761_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_69_reg_24761_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_6_cast_cast_fu_4840_p3() {
    diag_score_0_v_i_6_cast_cast_fu_4840_p3 = (!tmp_56_6_reg_23713.read()[0].is_01())? sc_lv<8>(): ((tmp_56_6_reg_23713.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_70_cast_cast_fu_15794_p3() {
    diag_score_0_v_i_70_cast_cast_fu_15794_p3 = (!ap_reg_ppstg_tmp_56_70_reg_24766_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_70_reg_24766_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_71_cast_cast_fu_15969_p3() {
    diag_score_0_v_i_71_cast_cast_fu_15969_p3 = (!ap_reg_ppstg_tmp_56_71_reg_24771_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_71_reg_24771_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_72_cast_cast_fu_16143_p3() {
    diag_score_0_v_i_72_cast_cast_fu_16143_p3 = (!ap_reg_ppstg_tmp_56_72_reg_23718_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_72_reg_23718_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_73_cast_cast_fu_16317_p3() {
    diag_score_0_v_i_73_cast_cast_fu_16317_p3 = (!ap_reg_ppstg_tmp_56_73_reg_23723_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_73_reg_23723_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_74_cast_cast_fu_16492_p3() {
    diag_score_0_v_i_74_cast_cast_fu_16492_p3 = (!ap_reg_ppstg_tmp_56_74_reg_24776_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_74_reg_24776_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_75_cast_cast_fu_16667_p3() {
    diag_score_0_v_i_75_cast_cast_fu_16667_p3 = (!ap_reg_ppstg_tmp_56_75_reg_24781_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_75_reg_24781_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_76_cast_cast_fu_16846_p3() {
    diag_score_0_v_i_76_cast_cast_fu_16846_p3 = (!ap_reg_ppstg_tmp_56_76_reg_24786_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_76_reg_24786_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_77_cast_cast_fu_17019_p3() {
    diag_score_0_v_i_77_cast_cast_fu_17019_p3 = (!ap_reg_ppstg_tmp_56_77_reg_24791_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_77_reg_24791_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_78_cast_cast_fu_17188_p3() {
    diag_score_0_v_i_78_cast_cast_fu_17188_p3 = (!ap_reg_ppstg_tmp_56_78_reg_24796_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_78_reg_24796_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_79_cast_cast_fu_17368_p3() {
    diag_score_0_v_i_79_cast_cast_fu_17368_p3 = (!ap_reg_ppstg_tmp_56_79_reg_24801_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_79_reg_24801_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_7_cast_cast_fu_5001_p3() {
    diag_score_0_v_i_7_cast_cast_fu_5001_p3 = (!tmp_56_7_reg_23953.read()[0].is_01())? sc_lv<8>(): ((tmp_56_7_reg_23953.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_80_cast_cast_fu_17541_p3() {
    diag_score_0_v_i_80_cast_cast_fu_17541_p3 = (!ap_reg_ppstg_tmp_56_80_reg_24806_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_80_reg_24806_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_81_cast_cast_fu_17715_p3() {
    diag_score_0_v_i_81_cast_cast_fu_17715_p3 = (!ap_reg_ppstg_tmp_56_81_reg_24811_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_81_reg_24811_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_82_cast_cast_fu_17888_p3() {
    diag_score_0_v_i_82_cast_cast_fu_17888_p3 = (!ap_reg_ppstg_tmp_56_82_reg_24816_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_82_reg_24816_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_83_cast_cast_fu_18056_p3() {
    diag_score_0_v_i_83_cast_cast_fu_18056_p3 = (!ap_reg_ppstg_tmp_56_83_reg_24821_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_83_reg_24821_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_84_cast_cast_fu_18231_p3() {
    diag_score_0_v_i_84_cast_cast_fu_18231_p3 = (!ap_reg_ppstg_tmp_56_84_reg_24826_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_84_reg_24826_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_85_cast_cast_fu_18406_p3() {
    diag_score_0_v_i_85_cast_cast_fu_18406_p3 = (!ap_reg_ppstg_tmp_56_85_reg_24831_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_85_reg_24831_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_86_cast_cast_fu_18581_p3() {
    diag_score_0_v_i_86_cast_cast_fu_18581_p3 = (!ap_reg_ppstg_tmp_56_86_reg_24836_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_86_reg_24836_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_87_cast_cast_fu_18755_p3() {
    diag_score_0_v_i_87_cast_cast_fu_18755_p3 = (!ap_reg_ppstg_tmp_56_87_reg_24841_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_87_reg_24841_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_88_cast_cast_fu_18934_p3() {
    diag_score_0_v_i_88_cast_cast_fu_18934_p3 = (!ap_reg_ppstg_tmp_56_88_reg_24846_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_88_reg_24846_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_89_cast_cast_fu_19103_p3() {
    diag_score_0_v_i_89_cast_cast_fu_19103_p3 = (!ap_reg_ppstg_tmp_56_89_reg_24851_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_89_reg_24851_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_8_cast_cast_fu_5162_p3() {
    diag_score_0_v_i_8_cast_cast_fu_5162_p3 = (!tmp_56_8_reg_24456.read()[0].is_01())? sc_lv<8>(): ((tmp_56_8_reg_24456.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_90_cast_cast_fu_19278_p3() {
    diag_score_0_v_i_90_cast_cast_fu_19278_p3 = (!ap_reg_ppstg_tmp_56_90_reg_24856_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_90_reg_24856_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_91_cast_cast_fu_19457_p3() {
    diag_score_0_v_i_91_cast_cast_fu_19457_p3 = (!ap_reg_ppstg_tmp_56_91_reg_24861_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_91_reg_24861_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_92_cast_cast_fu_19626_p3() {
    diag_score_0_v_i_92_cast_cast_fu_19626_p3 = (!ap_reg_ppstg_tmp_56_92_reg_24866_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_92_reg_24866_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_93_cast_cast_fu_19801_p3() {
    diag_score_0_v_i_93_cast_cast_fu_19801_p3 = (!ap_reg_ppstg_tmp_56_93_reg_24871_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_93_reg_24871_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_94_cast_cast_fu_19976_p3() {
    diag_score_0_v_i_94_cast_cast_fu_19976_p3 = (!ap_reg_ppstg_tmp_56_94_reg_24876_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_94_reg_24876_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_95_cast_cast_fu_20156_p3() {
    diag_score_0_v_i_95_cast_cast_fu_20156_p3 = (!ap_reg_ppstg_tmp_56_95_reg_24881_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_95_reg_24881_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_96_cast_cast_fu_20325_p3() {
    diag_score_0_v_i_96_cast_cast_fu_20325_p3 = (!ap_reg_ppstg_tmp_56_96_reg_24886_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_96_reg_24886_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_97_cast_cast_fu_20505_p3() {
    diag_score_0_v_i_97_cast_cast_fu_20505_p3 = (!ap_reg_ppstg_tmp_56_97_reg_24891_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_97_reg_24891_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_98_cast_cast_fu_20635_p3() {
    diag_score_0_v_i_98_cast_cast_fu_20635_p3 = (!ap_reg_ppstg_tmp_56_98_reg_24896_pp0_it1.read()[0].is_01())? sc_lv<8>(): ((ap_reg_ppstg_tmp_56_98_reg_24896_pp0_it1.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_9_cast_cast_fu_5321_p3() {
    diag_score_0_v_i_9_cast_cast_fu_5321_p3 = (!tmp_56_9_reg_24461.read()[0].is_01())? sc_lv<8>(): ((tmp_56_9_reg_24461.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_cast_cast_7_fu_5482_p3() {
    diag_score_0_v_i_cast_cast_7_fu_5482_p3 = (!tmp_56_s_reg_24466.read()[0].is_01())? sc_lv<8>(): ((tmp_56_s_reg_24466.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_diag_score_0_v_i_cast_cast_fu_3330_p3() {
    diag_score_0_v_i_cast_cast_fu_3330_p3 = (!tmp_116_reg_22959.read()[0].is_01())? sc_lv<8>(): ((tmp_116_reg_22959.read()[0].to_bool())? ap_const_lv8_1: ap_const_lv8_FF);
}

void needlemanWunsch::thread_grp_fu_2353_p4() {
    grp_fu_2353_p4 = ref_genome_TDATA.read().range(0, 7);
}

void needlemanWunsch::thread_grp_fu_2363_p4() {
    grp_fu_2363_p4 = read_r_Dout_A.read().range(3, 2);
}

void needlemanWunsch::thread_grp_fu_2373_p4() {
    grp_fu_2373_p4 = read_r_Dout_A.read().range(5, 4);
}

void needlemanWunsch::thread_grp_fu_2383_p4() {
    grp_fu_2383_p4 = read_r_Dout_A.read().range(7, 6);
}

void needlemanWunsch::thread_grp_fu_2423_p2() {
    grp_fu_2423_p2 = (!grp_fu_2383_p4.read().is_01() || !tmp_80_reg_22266.read().is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_2383_p4.read() == tmp_80_reg_22266.read());
}

void needlemanWunsch::thread_grp_fu_2428_p2() {
    grp_fu_2428_p2 = (!grp_fu_2383_p4.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_2383_p4.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_grp_fu_2433_p2() {
    grp_fu_2433_p2 = (!grp_fu_2363_p4.read().is_01() || !tmp_80_reg_22266.read().is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_2363_p4.read() == tmp_80_reg_22266.read());
}

void needlemanWunsch::thread_grp_fu_2438_p2() {
    grp_fu_2438_p2 = (!grp_fu_2373_p4.read().is_01() || !tmp_80_reg_22266.read().is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_2373_p4.read() == tmp_80_reg_22266.read());
}

void needlemanWunsch::thread_grp_fu_2443_p2() {
    grp_fu_2443_p2 = (!grp_fu_2363_p4.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_2363_p4.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_grp_fu_2448_p2() {
    grp_fu_2448_p2 = (!grp_fu_2373_p4.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_2373_p4.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_grp_fu_2603_p2() {
    grp_fu_2603_p2 = (!ap_const_lv8_FF.is_01() || !reg_2453.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2453.read()));
}

void needlemanWunsch::thread_grp_fu_2609_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) {
            grp_fu_2609_p1 = tmp_80_reg_22266.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            grp_fu_2609_p1 = tmp_80_fu_3144_p1.read();
        } else {
            grp_fu_2609_p1 = "XX";
        }
    } else {
        grp_fu_2609_p1 = "XX";
    }
}

void needlemanWunsch::thread_grp_fu_2609_p2() {
    grp_fu_2609_p2 = (!reg_2457.read().is_01() || !grp_fu_2609_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2457.read() == grp_fu_2609_p1.read());
}

void needlemanWunsch::thread_grp_fu_2614_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) {
            grp_fu_2614_p1 = tmp_80_reg_22266.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            grp_fu_2614_p1 = tmp_80_fu_3144_p1.read();
        } else {
            grp_fu_2614_p1 = "XX";
        }
    } else {
        grp_fu_2614_p1 = "XX";
    }
}

void needlemanWunsch::thread_grp_fu_2614_p2() {
    grp_fu_2614_p2 = (!reg_2466.read().is_01() || !grp_fu_2614_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2466.read() == grp_fu_2614_p1.read());
}

void needlemanWunsch::thread_grp_fu_2619_p2() {
    grp_fu_2619_p2 = (!ap_const_lv8_FF.is_01() || !reg_2490.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2490.read()));
}

void needlemanWunsch::thread_grp_fu_2625_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) {
            grp_fu_2625_p1 = tmp_248_reg_22865.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) {
            grp_fu_2625_p1 = tmp_248_fu_3278_p1.read();
        } else {
            grp_fu_2625_p1 = "XX";
        }
    } else {
        grp_fu_2625_p1 = "XX";
    }
}

void needlemanWunsch::thread_grp_fu_2625_p2() {
    grp_fu_2625_p2 = (!reg_2457.read().is_01() || !grp_fu_2625_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2457.read() == grp_fu_2625_p1.read());
}

void needlemanWunsch::thread_grp_fu_2630_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) {
            grp_fu_2630_p1 = tmp_248_reg_22865.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) {
            grp_fu_2630_p1 = tmp_248_fu_3278_p1.read();
        } else {
            grp_fu_2630_p1 = "XX";
        }
    } else {
        grp_fu_2630_p1 = "XX";
    }
}

void needlemanWunsch::thread_grp_fu_2630_p2() {
    grp_fu_2630_p2 = (!reg_2466.read().is_01() || !grp_fu_2630_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2466.read() == grp_fu_2630_p1.read());
}

void needlemanWunsch::thread_grp_fu_2635_p2() {
    grp_fu_2635_p2 = (!reg_2470.read().is_01() || !tmp_80_reg_22266.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2470.read() == tmp_80_reg_22266.read());
}

void needlemanWunsch::thread_grp_fu_2640_p2() {
    grp_fu_2640_p2 = (!reg_2470.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2470.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_grp_fu_2645_p2() {
    grp_fu_2645_p2 = (!ap_const_lv8_FF.is_01() || !reg_2461.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2461.read()));
}

void needlemanWunsch::thread_grp_fu_2651_p2() {
    grp_fu_2651_p2 = (!reg_2474.read().is_01() || !tmp_80_reg_22266.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2474.read() == tmp_80_reg_22266.read());
}

void needlemanWunsch::thread_grp_fu_2656_p2() {
    grp_fu_2656_p2 = (!reg_2474.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2474.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_grp_fu_2661_p3() {
    grp_fu_2661_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: reg_2486.read());
}

void needlemanWunsch::thread_grp_fu_2668_p3() {
    grp_fu_2668_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? tmp_1_reg_22120.read(): reg_2486.read());
}

void needlemanWunsch::thread_grp_fu_2674_p3() {
    grp_fu_2674_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: reg_2494.read());
}

void needlemanWunsch::thread_grp_fu_2681_p2() {
    grp_fu_2681_p2 = (!reg_2478.read().is_01() || !tmp_80_reg_22266.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2478.read() == tmp_80_reg_22266.read());
}

void needlemanWunsch::thread_grp_fu_2686_p2() {
    grp_fu_2686_p2 = (!reg_2478.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2478.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_grp_fu_2691_p3() {
    grp_fu_2691_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? tmp_1_reg_22120.read(): reg_2494.read());
}

void needlemanWunsch::thread_grp_fu_2697_p3() {
    grp_fu_2697_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: reg_2499.read());
}

void needlemanWunsch::thread_grp_fu_2704_p3() {
    grp_fu_2704_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? tmp_1_reg_22120.read(): reg_2499.read());
}

void needlemanWunsch::thread_grp_fu_2710_p3() {
    grp_fu_2710_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: reg_2503.read());
}

void needlemanWunsch::thread_grp_fu_2717_p2() {
    grp_fu_2717_p2 = (!reg_2482.read().is_01() || !tmp_80_reg_22266.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2482.read() == tmp_80_reg_22266.read());
}

void needlemanWunsch::thread_grp_fu_2722_p2() {
    grp_fu_2722_p2 = (!reg_2482.read().is_01() || !tmp_248_reg_22865.read().is_01())? sc_lv<1>(): sc_lv<1>(reg_2482.read() == tmp_248_reg_22865.read());
}

void needlemanWunsch::thread_grp_fu_2727_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_2727_p1 = ap_reg_ppstg_tmp_1_reg_22120_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read())))) {
        grp_fu_2727_p1 = tmp_1_reg_22120.read();
    } else {
        grp_fu_2727_p1 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void needlemanWunsch::thread_grp_fu_2727_p3() {
    grp_fu_2727_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? grp_fu_2727_p1.read(): reg_2503.read());
}

void needlemanWunsch::thread_grp_fu_2733_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2733_p0 = ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read())))) {
        grp_fu_2733_p0 = tmp_5_reg_22360.read();
    } else {
        grp_fu_2733_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2733_p3() {
    grp_fu_2733_p3 = (!grp_fu_2733_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2733_p0.read()[0].to_bool())? ap_const_lv20_0: reg_2508.read());
}

void needlemanWunsch::thread_grp_fu_2740_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2740_p0 = ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read())))) {
        grp_fu_2740_p0 = tmp_5_reg_22360.read();
    } else {
        grp_fu_2740_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2740_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2740_p1 = ap_reg_ppstg_tmp_1_reg_22120_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read())))) {
        grp_fu_2740_p1 = tmp_1_reg_22120.read();
    } else {
        grp_fu_2740_p1 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void needlemanWunsch::thread_grp_fu_2740_p3() {
    grp_fu_2740_p3 = (!grp_fu_2740_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2740_p0.read()[0].to_bool())? grp_fu_2740_p1.read(): reg_2508.read());
}

void needlemanWunsch::thread_grp_fu_2746_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2746_p0 = ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read())))) {
        grp_fu_2746_p0 = tmp_5_reg_22360.read();
    } else {
        grp_fu_2746_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2746_p3() {
    grp_fu_2746_p3 = (!grp_fu_2746_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2746_p0.read()[0].to_bool())? ap_const_lv20_0: reg_2512.read());
}

void needlemanWunsch::thread_grp_fu_2753_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2753_p0 = ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read())))) {
        grp_fu_2753_p0 = tmp_5_reg_22360.read();
    } else {
        grp_fu_2753_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2753_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2753_p1 = ap_reg_ppstg_tmp_1_reg_22120_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read())))) {
        grp_fu_2753_p1 = tmp_1_reg_22120.read();
    } else {
        grp_fu_2753_p1 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void needlemanWunsch::thread_grp_fu_2753_p3() {
    grp_fu_2753_p3 = (!grp_fu_2753_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2753_p0.read()[0].to_bool())? grp_fu_2753_p1.read(): reg_2512.read());
}

void needlemanWunsch::thread_grp_fu_2759_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        grp_fu_2759_p0 = ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read())))) {
        grp_fu_2759_p0 = tmp_5_reg_22360.read();
    } else {
        grp_fu_2759_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2759_p3() {
    grp_fu_2759_p3 = (!grp_fu_2759_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2759_p0.read()[0].to_bool())? ap_const_lv20_0: reg_2517.read());
}

void needlemanWunsch::thread_grp_fu_2766_p3() {
    grp_fu_2766_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? tmp_1_reg_22120.read(): reg_2517.read());
}

void needlemanWunsch::thread_grp_fu_2772_p3() {
    grp_fu_2772_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: reg_2521.read());
}

void needlemanWunsch::thread_grp_fu_2779_p2() {
    grp_fu_2779_p2 = (!ap_const_lv8_FF.is_01() || !reg_2530.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2530.read()));
}

void needlemanWunsch::thread_grp_fu_2785_p3() {
    grp_fu_2785_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? tmp_1_reg_22120.read(): reg_2521.read());
}

void needlemanWunsch::thread_grp_fu_2791_p3() {
    grp_fu_2791_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: reg_2525.read());
}

void needlemanWunsch::thread_grp_fu_2798_p3() {
    grp_fu_2798_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? tmp_1_reg_22120.read(): reg_2525.read());
}

void needlemanWunsch::thread_grp_fu_2804_p2() {
    grp_fu_2804_p2 = (!ap_const_lv8_FF.is_01() || !reg_2544.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2544.read()));
}

void needlemanWunsch::thread_grp_fu_2810_p3() {
    grp_fu_2810_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: reg_2535.read());
}

void needlemanWunsch::thread_grp_fu_2817_p2() {
    grp_fu_2817_p2 = (!ap_const_lv8_FF.is_01() || !reg_2548.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2548.read()));
}

void needlemanWunsch::thread_grp_fu_2823_p3() {
    grp_fu_2823_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? tmp_1_reg_22120.read(): reg_2535.read());
}

void needlemanWunsch::thread_grp_fu_2829_p3() {
    grp_fu_2829_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: reg_2539.read());
}

void needlemanWunsch::thread_grp_fu_2836_p3() {
    grp_fu_2836_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? tmp_1_reg_22120.read(): reg_2539.read());
}

void needlemanWunsch::thread_grp_fu_2842_p2() {
    grp_fu_2842_p2 = (!ap_const_lv8_FF.is_01() || !reg_2558.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2558.read()));
}

void needlemanWunsch::thread_grp_fu_2848_p2() {
    grp_fu_2848_p2 = (!ap_const_lv8_FF.is_01() || !reg_2562.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2562.read()));
}

void needlemanWunsch::thread_grp_fu_2854_p3() {
    grp_fu_2854_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? ap_const_lv20_0: reg_2553.read());
}

void needlemanWunsch::thread_grp_fu_2861_p3() {
    grp_fu_2861_p3 = (!tmp_5_reg_22360.read()[0].is_01())? sc_lv<20>(): ((tmp_5_reg_22360.read()[0].to_bool())? tmp_1_reg_22120.read(): reg_2553.read());
}

void needlemanWunsch::thread_grp_fu_2867_p2() {
    grp_fu_2867_p2 = (!ap_const_lv8_FF.is_01() || !reg_2572.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2572.read()));
}

void needlemanWunsch::thread_grp_fu_2873_p2() {
    grp_fu_2873_p2 = (!ap_const_lv8_FF.is_01() || !reg_2576.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2576.read()));
}

void needlemanWunsch::thread_grp_fu_2879_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        grp_fu_2879_p0 = ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read()))) {
        grp_fu_2879_p0 = tmp_5_reg_22360.read();
    } else {
        grp_fu_2879_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2879_p3() {
    grp_fu_2879_p3 = (!grp_fu_2879_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2879_p0.read()[0].to_bool())? ap_const_lv20_0: reg_2567.read());
}

void needlemanWunsch::thread_grp_fu_2886_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        grp_fu_2886_p0 = ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read()))) {
        grp_fu_2886_p0 = tmp_5_reg_22360.read();
    } else {
        grp_fu_2886_p0 =  (sc_lv<1>) ("X");
    }
}

void needlemanWunsch::thread_grp_fu_2886_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        grp_fu_2886_p1 = ap_reg_ppstg_tmp_1_reg_22120_pp0_it1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read()))) {
        grp_fu_2886_p1 = tmp_1_reg_22120.read();
    } else {
        grp_fu_2886_p1 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void needlemanWunsch::thread_grp_fu_2886_p3() {
    grp_fu_2886_p3 = (!grp_fu_2886_p0.read()[0].is_01())? sc_lv<20>(): ((grp_fu_2886_p0.read()[0].to_bool())? grp_fu_2886_p1.read(): reg_2567.read());
}

void needlemanWunsch::thread_grp_fu_2892_p2() {
    grp_fu_2892_p2 = (!ap_const_lv8_FF.is_01() || !reg_2581.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2581.read()));
}

void needlemanWunsch::thread_grp_fu_2898_p2() {
    grp_fu_2898_p2 = (!ap_const_lv8_FF.is_01() || !reg_2585.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2585.read()));
}

void needlemanWunsch::thread_grp_fu_2904_p2() {
    grp_fu_2904_p2 = (!ap_const_lv8_FF.is_01() || !reg_2590.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2590.read()));
}

void needlemanWunsch::thread_grp_fu_2910_p2() {
    grp_fu_2910_p2 = (!ap_const_lv8_FF.is_01() || !reg_2594.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2594.read()));
}

void needlemanWunsch::thread_grp_fu_2916_p2() {
    grp_fu_2916_p2 = (!ap_const_lv8_FF.is_01() || !reg_2599.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_FF) + sc_biguint<8>(reg_2599.read()));
}

void needlemanWunsch::thread_i_fu_3739_p2() {
    i_fu_3739_p2 = (!ap_const_lv20_2.is_01() || !prev_orig_out_reg_2317.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_2) + sc_biguint<20>(prev_orig_out_reg_2317.read()));
}

void needlemanWunsch::thread_max_orig_1_fu_20724_p3() {
    max_orig_1_fu_20724_p3 = (!tmp_7_fu_20718_p2.read()[0].is_01())? sc_lv<20>(): ((tmp_7_fu_20718_p2.read()[0].to_bool())? orig2_load_2_s_reg_35234.read(): max_orig_reg_2329.read());
}

void needlemanWunsch::thread_max_orig_2_fu_20812_p3() {
    max_orig_2_fu_20812_p3 = (!tmp_s_fu_20807_p2.read()[0].is_01())? sc_lv<20>(): ((tmp_s_fu_20807_p2.read()[0].to_bool())? prev_orig_out_2_i_98_reg_35299.read(): max_orig_1_reg_35252.read());
}

void needlemanWunsch::thread_max_score_1_fu_20731_p3() {
    max_score_1_fu_20731_p3 = (!tmp_7_fu_20718_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_7_fu_20718_p2.read()[0].to_bool())? max_score_3_fu_20715_p1.read(): max_score_reg_2341.read());
}

void needlemanWunsch::thread_max_score_2_fu_20818_p3() {
    max_score_2_fu_20818_p3 = (!tmp_s_fu_20807_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_s_fu_20807_p2.read()[0].to_bool())? max_score_4_fu_20804_p1.read(): max_score_1_reg_35257.read());
}

void needlemanWunsch::thread_max_score_3_fu_20715_p1() {
    max_score_3_fu_20715_p1 = esl_sext<32,8>(score2_load_2_s_reg_35228.read());
}

void needlemanWunsch::thread_max_score_4_fu_20804_p1() {
    max_score_4_fu_20804_p1 = esl_sext<32,8>(prev_score_out_2_i_98_reg_35293.read());
}

void needlemanWunsch::thread_needlemanWunsch_AXILiteS_s_axi_U_ap_dummy_ce() {
    needlemanWunsch_AXILiteS_s_axi_U_ap_dummy_ce = ap_const_logic_1;
}

void needlemanWunsch::thread_or_cond1_i1_10_fu_5659_p2() {
    or_cond1_i1_10_fu_5659_p2 = (tmp_52_10_reg_25476.read() | tmp_53_10_reg_25481.read());
}

void needlemanWunsch::thread_or_cond1_i1_11_fu_5820_p2() {
    or_cond1_i1_11_fu_5820_p2 = (tmp_52_11_reg_25597.read() | tmp_53_11_reg_25602.read());
}

void needlemanWunsch::thread_or_cond1_i1_12_fu_5979_p2() {
    or_cond1_i1_12_fu_5979_p2 = (tmp_52_12_reg_25720.read() | tmp_53_12_reg_25725.read());
}

void needlemanWunsch::thread_or_cond1_i1_13_fu_6139_p2() {
    or_cond1_i1_13_fu_6139_p2 = (tmp_52_13_reg_25846.read() | tmp_53_13_reg_25851.read());
}

void needlemanWunsch::thread_or_cond1_i1_14_fu_6298_p2() {
    or_cond1_i1_14_fu_6298_p2 = (tmp_52_14_reg_25969.read() | tmp_53_14_reg_25974.read());
}

void needlemanWunsch::thread_or_cond1_i1_15_fu_6458_p2() {
    or_cond1_i1_15_fu_6458_p2 = (tmp_52_15_reg_26095.read() | tmp_53_15_reg_26100.read());
}

void needlemanWunsch::thread_or_cond1_i1_16_fu_6617_p2() {
    or_cond1_i1_16_fu_6617_p2 = (tmp_52_16_reg_26218.read() | tmp_53_16_reg_26223.read());
}

void needlemanWunsch::thread_or_cond1_i1_17_fu_6778_p2() {
    or_cond1_i1_17_fu_6778_p2 = (tmp_52_17_reg_26345.read() | tmp_53_17_reg_26350.read());
}

void needlemanWunsch::thread_or_cond1_i1_18_fu_6943_p2() {
    or_cond1_i1_18_fu_6943_p2 = (tmp_52_18_reg_26462.read() | tmp_53_18_reg_26467.read());
}

void needlemanWunsch::thread_or_cond1_i1_19_fu_7115_p2() {
    or_cond1_i1_19_fu_7115_p2 = (tmp_52_19_reg_26583.read() | tmp_53_19_reg_26588.read());
}

void needlemanWunsch::thread_or_cond1_i1_1_fu_3353_p2() {
    or_cond1_i1_1_fu_3353_p2 = (tmp_52_1_reg_22996.read() | tmp_53_1_reg_23001.read());
}

void needlemanWunsch::thread_or_cond1_i1_20_fu_7281_p2() {
    or_cond1_i1_20_fu_7281_p2 = (tmp_52_20_reg_26704.read() | tmp_53_20_reg_26709.read());
}

void needlemanWunsch::thread_or_cond1_i1_21_fu_7447_p2() {
    or_cond1_i1_21_fu_7447_p2 = (tmp_52_21_reg_26830.read() | tmp_53_21_reg_26835.read());
}

void needlemanWunsch::thread_or_cond1_i1_22_fu_7619_p2() {
    or_cond1_i1_22_fu_7619_p2 = (tmp_52_22_reg_26950.read() | tmp_53_22_reg_26955.read());
}

void needlemanWunsch::thread_or_cond1_i1_23_fu_7784_p2() {
    or_cond1_i1_23_fu_7784_p2 = (tmp_52_23_reg_27071.read() | tmp_53_23_reg_27076.read());
}

void needlemanWunsch::thread_or_cond1_i1_24_fu_7951_p2() {
    or_cond1_i1_24_fu_7951_p2 = (tmp_52_24_reg_27191.read() | tmp_53_24_reg_27196.read());
}

void needlemanWunsch::thread_or_cond1_i1_25_fu_8125_p2() {
    or_cond1_i1_25_fu_8125_p2 = (tmp_52_25_reg_27310.read() | tmp_53_25_reg_27315.read());
}

void needlemanWunsch::thread_or_cond1_i1_26_fu_8290_p2() {
    or_cond1_i1_26_fu_8290_p2 = (tmp_52_26_reg_27430.read() | tmp_53_26_reg_27435.read());
}

void needlemanWunsch::thread_or_cond1_i1_27_fu_8459_p2() {
    or_cond1_i1_27_fu_8459_p2 = (tmp_52_27_reg_27544.read() | tmp_53_27_reg_27549.read());
}

void needlemanWunsch::thread_or_cond1_i1_28_fu_8634_p2() {
    or_cond1_i1_28_fu_8634_p2 = (tmp_52_28_reg_27669.read() | tmp_53_28_reg_27674.read());
}

void needlemanWunsch::thread_or_cond1_i1_29_fu_8797_p2() {
    or_cond1_i1_29_fu_8797_p2 = (tmp_52_29_reg_27785.read() | tmp_53_29_reg_27790.read());
}

void needlemanWunsch::thread_or_cond1_i1_2_fu_3491_p2() {
    or_cond1_i1_2_fu_3491_p2 = (tmp_52_2_reg_23176.read() | tmp_53_2_reg_23181.read());
}

void needlemanWunsch::thread_or_cond1_i1_30_fu_8965_p2() {
    or_cond1_i1_30_fu_8965_p2 = (tmp_52_30_reg_27902.read() | tmp_53_30_reg_27907.read());
}

void needlemanWunsch::thread_or_cond1_i1_31_fu_9139_p2() {
    or_cond1_i1_31_fu_9139_p2 = (tmp_52_31_reg_28018.read() | tmp_53_31_reg_28023.read());
}

void needlemanWunsch::thread_or_cond1_i1_32_fu_9302_p2() {
    or_cond1_i1_32_fu_9302_p2 = (tmp_52_32_reg_28135.read() | tmp_53_32_reg_28140.read());
}

void needlemanWunsch::thread_or_cond1_i1_33_fu_9472_p2() {
    or_cond1_i1_33_fu_9472_p2 = (tmp_52_33_reg_28249.read() | tmp_53_33_reg_28254.read());
}

void needlemanWunsch::thread_or_cond1_i1_34_fu_9646_p2() {
    or_cond1_i1_34_fu_9646_p2 = (tmp_52_34_reg_28371.read() | tmp_53_34_reg_28376.read());
}

void needlemanWunsch::thread_or_cond1_i1_35_fu_9809_p2() {
    or_cond1_i1_35_fu_9809_p2 = (tmp_52_35_reg_28487.read() | tmp_53_35_reg_28492.read());
}

void needlemanWunsch::thread_or_cond1_i1_36_fu_9978_p2() {
    or_cond1_i1_36_fu_9978_p2 = (tmp_52_36_reg_28612.read() | tmp_53_36_reg_28617.read());
}

void needlemanWunsch::thread_or_cond1_i1_37_fu_10152_p2() {
    or_cond1_i1_37_fu_10152_p2 = (tmp_52_37_reg_28731.read() | tmp_53_37_reg_28736.read());
}

void needlemanWunsch::thread_or_cond1_i1_38_fu_10317_p2() {
    or_cond1_i1_38_fu_10317_p2 = (tmp_52_38_reg_28846.read() | tmp_53_38_reg_28851.read());
}

void needlemanWunsch::thread_or_cond1_i1_39_fu_10487_p2() {
    or_cond1_i1_39_fu_10487_p2 = (tmp_52_39_reg_28965.read() | tmp_53_39_reg_28970.read());
}

void needlemanWunsch::thread_or_cond1_i1_3_fu_3659_p2() {
    or_cond1_i1_3_fu_3659_p2 = (tmp_52_3_reg_23383.read() | tmp_53_3_reg_23388.read());
}

void needlemanWunsch::thread_or_cond1_i1_40_fu_10660_p2() {
    or_cond1_i1_40_fu_10660_p2 = (tmp_52_40_reg_29082.read() | tmp_53_40_reg_29087.read());
}

void needlemanWunsch::thread_or_cond1_i1_41_fu_10824_p2() {
    or_cond1_i1_41_fu_10824_p2 = (tmp_52_41_reg_29193.read() | tmp_53_41_reg_29198.read());
}

void needlemanWunsch::thread_or_cond1_i1_42_fu_10994_p2() {
    or_cond1_i1_42_fu_10994_p2 = (tmp_52_42_reg_29318.read() | tmp_53_42_reg_29323.read());
}

void needlemanWunsch::thread_or_cond1_i1_43_fu_11168_p2() {
    or_cond1_i1_43_fu_11168_p2 = (tmp_52_43_reg_29437.read() | tmp_53_43_reg_29442.read());
}

void needlemanWunsch::thread_or_cond1_i1_44_fu_11332_p2() {
    or_cond1_i1_44_fu_11332_p2 = (tmp_52_44_reg_29557.read() | tmp_53_44_reg_29562.read());
}

void needlemanWunsch::thread_or_cond1_i1_45_fu_11501_p2() {
    or_cond1_i1_45_fu_11501_p2 = (tmp_52_45_reg_29668.read() | tmp_53_45_reg_29673.read());
}

void needlemanWunsch::thread_or_cond1_i1_46_fu_11676_p2() {
    or_cond1_i1_46_fu_11676_p2 = (tmp_52_46_reg_29788.read() | tmp_53_46_reg_29793.read());
}

void needlemanWunsch::thread_or_cond1_i1_47_fu_11842_p2() {
    or_cond1_i1_47_fu_11842_p2 = (tmp_52_47_reg_29902.read() | tmp_53_47_reg_29907.read());
}

void needlemanWunsch::thread_or_cond1_i1_48_fu_12011_p2() {
    or_cond1_i1_48_fu_12011_p2 = (tmp_52_48_reg_30022.read() | tmp_53_48_reg_30027.read());
}

void needlemanWunsch::thread_or_cond1_i1_49_fu_12182_p2() {
    or_cond1_i1_49_fu_12182_p2 = (tmp_52_49_reg_30141.read() | tmp_53_49_reg_30146.read());
}

void needlemanWunsch::thread_or_cond1_i1_4_fu_3845_p2() {
    or_cond1_i1_4_fu_3845_p2 = (tmp_52_4_reg_23625.read() | tmp_53_4_reg_23630.read());
}

void needlemanWunsch::thread_or_cond1_i1_50_fu_12355_p2() {
    or_cond1_i1_50_fu_12355_p2 = (tmp_52_50_reg_30251.read() | tmp_53_50_reg_30256.read());
}

void needlemanWunsch::thread_or_cond1_i1_51_fu_12526_p2() {
    or_cond1_i1_51_fu_12526_p2 = (tmp_52_51_reg_30354.read() | tmp_53_51_reg_30359.read());
}

void needlemanWunsch::thread_or_cond1_i1_52_fu_12701_p2() {
    or_cond1_i1_52_fu_12701_p2 = (tmp_52_52_reg_30466.read() | tmp_53_52_reg_30471.read());
}

void needlemanWunsch::thread_or_cond1_i1_53_fu_12869_p2() {
    or_cond1_i1_53_fu_12869_p2 = (tmp_52_53_reg_30568.read() | tmp_53_53_reg_30573.read());
}

void needlemanWunsch::thread_or_cond1_i1_54_fu_13034_p2() {
    or_cond1_i1_54_fu_13034_p2 = (tmp_52_54_reg_30672.read() | tmp_53_54_reg_30677.read());
}

void needlemanWunsch::thread_or_cond1_i1_55_fu_13205_p2() {
    or_cond1_i1_55_fu_13205_p2 = (tmp_52_55_reg_30769.read() | tmp_53_55_reg_30774.read());
}

void needlemanWunsch::thread_or_cond1_i1_56_fu_13380_p2() {
    or_cond1_i1_56_fu_13380_p2 = (tmp_52_56_reg_30871.read() | tmp_53_56_reg_30876.read());
}

void needlemanWunsch::thread_or_cond1_i1_57_fu_13555_p2() {
    or_cond1_i1_57_fu_13555_p2 = (tmp_52_57_reg_30978.read() | tmp_53_57_reg_30983.read());
}

void needlemanWunsch::thread_or_cond1_i1_58_fu_13726_p2() {
    or_cond1_i1_58_fu_13726_p2 = (tmp_52_58_reg_31080.read() | tmp_53_58_reg_31085.read());
}

void needlemanWunsch::thread_or_cond1_i1_59_fu_13900_p2() {
    or_cond1_i1_59_fu_13900_p2 = (tmp_52_59_reg_31187.read() | tmp_53_59_reg_31192.read());
}

void needlemanWunsch::thread_or_cond1_i1_5_fu_4042_p2() {
    or_cond1_i1_5_fu_4042_p2 = (tmp_52_5_reg_23857.read() | tmp_53_5_reg_23862.read());
}

void needlemanWunsch::thread_or_cond1_i1_60_fu_14074_p2() {
    or_cond1_i1_60_fu_14074_p2 = (tmp_52_60_reg_31294.read() | tmp_53_60_reg_31299.read());
}

void needlemanWunsch::thread_or_cond1_i1_61_fu_14247_p2() {
    or_cond1_i1_61_fu_14247_p2 = (tmp_52_61_reg_31393.read() | tmp_53_61_reg_31398.read());
}

void needlemanWunsch::thread_or_cond1_i1_62_fu_14422_p2() {
    or_cond1_i1_62_fu_14422_p2 = (tmp_52_62_reg_31495.read() | tmp_53_62_reg_31500.read());
}

void needlemanWunsch::thread_or_cond1_i1_63_fu_14596_p2() {
    or_cond1_i1_63_fu_14596_p2 = (tmp_52_63_reg_31594.read() | tmp_53_63_reg_31599.read());
}

void needlemanWunsch::thread_or_cond1_i1_64_fu_14771_p2() {
    or_cond1_i1_64_fu_14771_p2 = (tmp_52_64_reg_31696.read() | tmp_53_64_reg_31701.read());
}

void needlemanWunsch::thread_or_cond1_i1_65_fu_14946_p2() {
    or_cond1_i1_65_fu_14946_p2 = (tmp_52_65_reg_31798.read() | tmp_53_65_reg_31803.read());
}

void needlemanWunsch::thread_or_cond1_i1_66_fu_15121_p2() {
    or_cond1_i1_66_fu_15121_p2 = (tmp_52_66_reg_31900.read() | tmp_53_66_reg_31905.read());
}

void needlemanWunsch::thread_or_cond1_i1_67_fu_15296_p2() {
    or_cond1_i1_67_fu_15296_p2 = (tmp_52_67_reg_32002.read() | tmp_53_67_reg_32007.read());
}

void needlemanWunsch::thread_or_cond1_i1_68_fu_15471_p2() {
    or_cond1_i1_68_fu_15471_p2 = (tmp_52_68_reg_32104.read() | tmp_53_68_reg_32109.read());
}

void needlemanWunsch::thread_or_cond1_i1_69_fu_15646_p2() {
    or_cond1_i1_69_fu_15646_p2 = (tmp_52_69_reg_32206.read() | tmp_53_69_reg_32211.read());
}

void needlemanWunsch::thread_or_cond1_i1_6_fu_4856_p2() {
    or_cond1_i1_6_fu_4856_p2 = (tmp_52_6_reg_24929.read() | tmp_53_6_reg_24934.read());
}

void needlemanWunsch::thread_or_cond1_i1_70_fu_15821_p2() {
    or_cond1_i1_70_fu_15821_p2 = (tmp_52_70_reg_32308.read() | tmp_53_70_reg_32313.read());
}

void needlemanWunsch::thread_or_cond1_i1_71_fu_15996_p2() {
    or_cond1_i1_71_fu_15996_p2 = (tmp_52_71_reg_32410.read() | tmp_53_71_reg_32415.read());
}

void needlemanWunsch::thread_or_cond1_i1_72_fu_16170_p2() {
    or_cond1_i1_72_fu_16170_p2 = (tmp_52_72_reg_32509.read() | tmp_53_72_reg_32514.read());
}

void needlemanWunsch::thread_or_cond1_i1_73_fu_16344_p2() {
    or_cond1_i1_73_fu_16344_p2 = (tmp_52_73_reg_32608.read() | tmp_53_73_reg_32613.read());
}

void needlemanWunsch::thread_or_cond1_i1_74_fu_16519_p2() {
    or_cond1_i1_74_fu_16519_p2 = (tmp_52_74_reg_32710.read() | tmp_53_74_reg_32715.read());
}

void needlemanWunsch::thread_or_cond1_i1_75_fu_16694_p2() {
    or_cond1_i1_75_fu_16694_p2 = (tmp_52_75_reg_32812.read() | tmp_53_75_reg_32817.read());
}

void needlemanWunsch::thread_or_cond1_i1_76_fu_16868_p2() {
    or_cond1_i1_76_fu_16868_p2 = (tmp_52_76_reg_32916.read() | tmp_53_76_reg_32921.read());
}

void needlemanWunsch::thread_or_cond1_i1_77_fu_17041_p2() {
    or_cond1_i1_77_fu_17041_p2 = (tmp_52_77_reg_33020.read() | tmp_53_77_reg_33025.read());
}

void needlemanWunsch::thread_or_cond1_i1_78_fu_17215_p2() {
    or_cond1_i1_78_fu_17215_p2 = (tmp_52_78_reg_33122.read() | tmp_53_78_reg_33127.read());
}

void needlemanWunsch::thread_or_cond1_i1_79_fu_17390_p2() {
    or_cond1_i1_79_fu_17390_p2 = (tmp_52_79_reg_33229.read() | tmp_53_79_reg_33234.read());
}

void needlemanWunsch::thread_or_cond1_i1_7_fu_5017_p2() {
    or_cond1_i1_7_fu_5017_p2 = (tmp_52_7_reg_25032.read() | tmp_53_7_reg_25037.read());
}

void needlemanWunsch::thread_or_cond1_i1_80_fu_17563_p2() {
    or_cond1_i1_80_fu_17563_p2 = (tmp_52_80_reg_33333.read() | tmp_53_80_reg_33338.read());
}

void needlemanWunsch::thread_or_cond1_i1_81_fu_17737_p2() {
    or_cond1_i1_81_fu_17737_p2 = (tmp_52_81_reg_33440.read() | tmp_53_81_reg_33445.read());
}

void needlemanWunsch::thread_or_cond1_i1_82_fu_17910_p2() {
    or_cond1_i1_82_fu_17910_p2 = (tmp_52_82_reg_33544.read() | tmp_53_82_reg_33549.read());
}

void needlemanWunsch::thread_or_cond1_i1_83_fu_18083_p2() {
    or_cond1_i1_83_fu_18083_p2 = (tmp_52_83_reg_33643.read() | tmp_53_83_reg_33648.read());
}

void needlemanWunsch::thread_or_cond1_i1_84_fu_18258_p2() {
    or_cond1_i1_84_fu_18258_p2 = (tmp_52_84_reg_33745.read() | tmp_53_84_reg_33750.read());
}

void needlemanWunsch::thread_or_cond1_i1_85_fu_18433_p2() {
    or_cond1_i1_85_fu_18433_p2 = (tmp_52_85_reg_33847.read() | tmp_53_85_reg_33852.read());
}

void needlemanWunsch::thread_or_cond1_i1_86_fu_18608_p2() {
    or_cond1_i1_86_fu_18608_p2 = (tmp_52_86_reg_33949.read() | tmp_53_86_reg_33954.read());
}

void needlemanWunsch::thread_or_cond1_i1_87_fu_18782_p2() {
    or_cond1_i1_87_fu_18782_p2 = (tmp_52_87_reg_34048.read() | tmp_53_87_reg_34053.read());
}

void needlemanWunsch::thread_or_cond1_i1_88_fu_18956_p2() {
    or_cond1_i1_88_fu_18956_p2 = (tmp_52_88_reg_34152.read() | tmp_53_88_reg_34157.read());
}

void needlemanWunsch::thread_or_cond1_i1_89_fu_19130_p2() {
    or_cond1_i1_89_fu_19130_p2 = (tmp_52_89_reg_34254.read() | tmp_53_89_reg_34259.read());
}

void needlemanWunsch::thread_or_cond1_i1_8_fu_5178_p2() {
    or_cond1_i1_8_fu_5178_p2 = (tmp_52_8_reg_25141.read() | tmp_53_8_reg_25146.read());
}

void needlemanWunsch::thread_or_cond1_i1_90_fu_19305_p2() {
    or_cond1_i1_90_fu_19305_p2 = (tmp_52_90_reg_34356.read() | tmp_53_90_reg_34361.read());
}

void needlemanWunsch::thread_or_cond1_i1_91_fu_19479_p2() {
    or_cond1_i1_91_fu_19479_p2 = (tmp_52_91_reg_34460.read() | tmp_53_91_reg_34465.read());
}

void needlemanWunsch::thread_or_cond1_i1_92_fu_19653_p2() {
    or_cond1_i1_92_fu_19653_p2 = (tmp_52_92_reg_34562.read() | tmp_53_92_reg_34567.read());
}

void needlemanWunsch::thread_or_cond1_i1_93_fu_19828_p2() {
    or_cond1_i1_93_fu_19828_p2 = (tmp_52_93_reg_34664.read() | tmp_53_93_reg_34669.read());
}

void needlemanWunsch::thread_or_cond1_i1_94_fu_20003_p2() {
    or_cond1_i1_94_fu_20003_p2 = (tmp_52_94_reg_34766.read() | tmp_53_94_reg_34771.read());
}

void needlemanWunsch::thread_or_cond1_i1_95_fu_20178_p2() {
    or_cond1_i1_95_fu_20178_p2 = (tmp_52_95_reg_34873.read() | tmp_53_95_reg_34878.read());
}

void needlemanWunsch::thread_or_cond1_i1_96_fu_20346_p2() {
    or_cond1_i1_96_fu_20346_p2 = (tmp_52_96_reg_34975.read() | tmp_53_96_reg_34980.read());
}

void needlemanWunsch::thread_or_cond1_i1_97_fu_20521_p2() {
    or_cond1_i1_97_fu_20521_p2 = (tmp_52_97_reg_35101.read() | tmp_53_97_reg_35106.read());
}

void needlemanWunsch::thread_or_cond1_i1_98_fu_20651_p2() {
    or_cond1_i1_98_fu_20651_p2 = (tmp_52_98_reg_35185.read() | tmp_53_98_reg_35190.read());
}

void needlemanWunsch::thread_or_cond1_i1_9_fu_5337_p2() {
    or_cond1_i1_9_fu_5337_p2 = (tmp_52_9_reg_25252.read() | tmp_53_9_reg_25257.read());
}

void needlemanWunsch::thread_or_cond1_i1_s_fu_5498_p2() {
    or_cond1_i1_s_fu_5498_p2 = (tmp_52_s_reg_25361.read() | tmp_53_s_reg_25366.read());
}

void needlemanWunsch::thread_or_cond1_i_10_fu_5883_p2() {
    or_cond1_i_10_fu_5883_p2 = (tmp_59_10_reg_25646.read() | tmp_60_10_reg_25651.read());
}

void needlemanWunsch::thread_or_cond1_i_11_fu_6035_p2() {
    or_cond1_i_11_fu_6035_p2 = (tmp_59_11_reg_25769.read() | tmp_60_11_reg_25774.read());
}

void needlemanWunsch::thread_or_cond1_i_12_fu_6202_p2() {
    or_cond1_i_12_fu_6202_p2 = (tmp_59_12_reg_25895.read() | tmp_60_12_reg_25900.read());
}

void needlemanWunsch::thread_or_cond1_i_13_fu_6354_p2() {
    or_cond1_i_13_fu_6354_p2 = (tmp_59_13_reg_26018.read() | tmp_60_13_reg_26023.read());
}

void needlemanWunsch::thread_or_cond1_i_14_fu_6521_p2() {
    or_cond1_i_14_fu_6521_p2 = (tmp_59_14_reg_26144.read() | tmp_60_14_reg_26149.read());
}

void needlemanWunsch::thread_or_cond1_i_15_fu_6673_p2() {
    or_cond1_i_15_fu_6673_p2 = (tmp_59_15_reg_26267.read() | tmp_60_15_reg_26272.read());
}

void needlemanWunsch::thread_or_cond1_i_16_fu_6841_p2() {
    or_cond1_i_16_fu_6841_p2 = (tmp_59_16_reg_26388.read() | tmp_60_16_reg_26393.read());
}

void needlemanWunsch::thread_or_cond1_i_17_fu_6999_p2() {
    or_cond1_i_17_fu_6999_p2 = (tmp_59_17_reg_26505.read() | tmp_60_17_reg_26510.read());
}

void needlemanWunsch::thread_or_cond1_i_18_fu_7171_p2() {
    or_cond1_i_18_fu_7171_p2 = (tmp_59_18_reg_26620.read() | tmp_60_18_reg_26625.read());
}

void needlemanWunsch::thread_or_cond1_i_19_fu_7337_p2() {
    or_cond1_i_19_fu_7337_p2 = (tmp_59_19_reg_26747.read() | tmp_60_19_reg_26752.read());
}

void needlemanWunsch::thread_or_cond1_i_1_fu_3530_p2() {
    or_cond1_i_1_fu_3530_p2 = (tmp_59_1_reg_23249.read() | tmp_60_1_reg_23254.read());
}

void needlemanWunsch::thread_or_cond1_i_20_fu_7508_p2() {
    or_cond1_i_20_fu_7508_p2 = (tmp_59_20_reg_26867.read() | tmp_60_20_reg_26872.read());
}

void needlemanWunsch::thread_or_cond1_i_21_fu_7674_p2() {
    or_cond1_i_21_fu_7674_p2 = (tmp_59_21_reg_26993.read() | tmp_60_21_reg_26998.read());
}

void needlemanWunsch::thread_or_cond1_i_22_fu_7840_p2() {
    or_cond1_i_22_fu_7840_p2 = (tmp_59_22_reg_27114.read() | tmp_60_22_reg_27119.read());
}

void needlemanWunsch::thread_or_cond1_i_23_fu_8015_p2() {
    or_cond1_i_23_fu_8015_p2 = (tmp_59_23_reg_27228.read() | tmp_60_23_reg_27233.read());
}

void needlemanWunsch::thread_or_cond1_i_24_fu_8185_p2() {
    or_cond1_i_24_fu_8185_p2 = (tmp_59_24_reg_27347.read() | tmp_60_24_reg_27352.read());
}

void needlemanWunsch::thread_or_cond1_i_25_fu_8349_p2() {
    or_cond1_i_25_fu_8349_p2 = (tmp_59_25_reg_27467.read() | tmp_60_25_reg_27472.read());
}

void needlemanWunsch::thread_or_cond1_i_26_fu_8524_p2() {
    or_cond1_i_26_fu_8524_p2 = (tmp_59_26_reg_27581.read() | tmp_60_26_reg_27586.read());
}

void needlemanWunsch::thread_or_cond1_i_27_fu_8701_p2() {
    or_cond1_i_27_fu_8701_p2 = (tmp_59_27_reg_27706.read() | tmp_60_27_reg_27711.read());
}

void needlemanWunsch::thread_or_cond1_i_28_fu_8863_p2() {
    or_cond1_i_28_fu_8863_p2 = (tmp_59_28_reg_27822.read() | tmp_60_28_reg_27827.read());
}

void needlemanWunsch::thread_or_cond1_i_29_fu_9037_p2() {
    or_cond1_i_29_fu_9037_p2 = (tmp_59_29_reg_27939.read() | tmp_60_29_reg_27944.read());
}

void needlemanWunsch::thread_or_cond1_i_2_fu_3722_p2() {
    or_cond1_i_2_fu_3722_p2 = (tmp_59_2_reg_23462.read() | tmp_60_2_reg_23467.read());
}

void needlemanWunsch::thread_or_cond1_i_30_fu_9201_p2() {
    or_cond1_i_30_fu_9201_p2 = (tmp_59_30_reg_28055.read() | tmp_60_30_reg_28060.read());
}

void needlemanWunsch::thread_or_cond1_i_31_fu_9362_p2() {
    or_cond1_i_31_fu_9362_p2 = (tmp_59_31_reg_28172.read() | tmp_60_31_reg_28177.read());
}

void needlemanWunsch::thread_or_cond1_i_32_fu_9544_p2() {
    or_cond1_i_32_fu_9544_p2 = (tmp_59_32_reg_28286.read() | tmp_60_32_reg_28291.read());
}

void needlemanWunsch::thread_or_cond1_i_33_fu_9713_p2() {
    or_cond1_i_33_fu_9713_p2 = (tmp_59_33_reg_28408.read() | tmp_60_33_reg_28413.read());
}

void needlemanWunsch::thread_or_cond1_i_34_fu_9868_p2() {
    or_cond1_i_34_fu_9868_p2 = (tmp_59_34_reg_28524.read() | tmp_60_34_reg_28529.read());
}

void needlemanWunsch::thread_or_cond1_i_35_fu_10042_p2() {
    or_cond1_i_35_fu_10042_p2 = (tmp_59_35_reg_28649.read() | tmp_60_35_reg_28654.read());
}

void needlemanWunsch::thread_or_cond1_i_36_fu_10207_p2() {
    or_cond1_i_36_fu_10207_p2 = (tmp_59_36_reg_28768.read() | tmp_60_36_reg_28773.read());
}

void needlemanWunsch::thread_or_cond1_i_37_fu_10377_p2() {
    or_cond1_i_37_fu_10377_p2 = (tmp_59_37_reg_28883.read() | tmp_60_37_reg_28888.read());
}

void needlemanWunsch::thread_or_cond1_i_38_fu_10553_p2() {
    or_cond1_i_38_fu_10553_p2 = (tmp_59_38_reg_29002.read() | tmp_60_38_reg_29007.read());
}

void needlemanWunsch::thread_or_cond1_i_39_fu_10723_p2() {
    or_cond1_i_39_fu_10723_p2 = (tmp_59_39_reg_29119.read() | tmp_60_39_reg_29124.read());
}

void needlemanWunsch::thread_or_cond1_i_3_fu_3905_p2() {
    or_cond1_i_3_fu_3905_p2 = (tmp_59_3_reg_23695.read() | tmp_60_3_reg_23700.read());
}

void needlemanWunsch::thread_or_cond1_i_40_fu_10884_p2() {
    or_cond1_i_40_fu_10884_p2 = (tmp_59_40_reg_29230.read() | tmp_60_40_reg_29235.read());
}

void needlemanWunsch::thread_or_cond1_i_41_fu_11058_p2() {
    or_cond1_i_41_fu_11058_p2 = (tmp_59_41_reg_29355.read() | tmp_60_41_reg_29360.read());
}

void needlemanWunsch::thread_or_cond1_i_42_fu_11223_p2() {
    or_cond1_i_42_fu_11223_p2 = (tmp_59_42_reg_29474.read() | tmp_60_42_reg_29479.read());
}

void needlemanWunsch::thread_or_cond1_i_43_fu_11399_p2() {
    or_cond1_i_43_fu_11399_p2 = (tmp_59_43_reg_29594.read() | tmp_60_43_reg_29599.read());
}

void needlemanWunsch::thread_or_cond1_i_44_fu_11561_p2() {
    or_cond1_i_44_fu_11561_p2 = (tmp_59_44_reg_29705.read() | tmp_60_44_reg_29710.read());
}

void needlemanWunsch::thread_or_cond1_i_45_fu_11737_p2() {
    or_cond1_i_45_fu_11737_p2 = (tmp_59_45_reg_29825.read() | tmp_60_45_reg_29830.read());
}

void needlemanWunsch::thread_or_cond1_i_46_fu_11901_p2() {
    or_cond1_i_46_fu_11901_p2 = (tmp_59_46_reg_29939.read() | tmp_60_46_reg_29944.read());
}

void needlemanWunsch::thread_or_cond1_i_47_fu_12072_p2() {
    or_cond1_i_47_fu_12072_p2 = (tmp_59_47_reg_30059.read() | tmp_60_47_reg_30064.read());
}

void needlemanWunsch::thread_or_cond1_i_48_fu_12253_p2() {
    or_cond1_i_48_fu_12253_p2 = (tmp_59_48_reg_30166.read() | tmp_60_48_reg_30171.read());
}

void needlemanWunsch::thread_or_cond1_i_49_fu_12410_p2() {
    or_cond1_i_49_fu_12410_p2 = (tmp_59_49_reg_30282.read() | tmp_60_49_reg_30287.read());
}

void needlemanWunsch::thread_or_cond1_i_4_fu_4419_p2() {
    or_cond1_i_4_fu_4419_p2 = (tmp_59_4_reg_23935.read() | tmp_60_4_reg_23940.read());
}

void needlemanWunsch::thread_or_cond1_i_50_fu_12591_p2() {
    or_cond1_i_50_fu_12591_p2 = (tmp_59_50_reg_30384.read() | tmp_60_50_reg_30389.read());
}

void needlemanWunsch::thread_or_cond1_i_51_fu_12760_p2() {
    or_cond1_i_51_fu_12760_p2 = (tmp_59_51_reg_30491.read() | tmp_60_51_reg_30496.read());
}

void needlemanWunsch::thread_or_cond1_i_52_fu_12932_p2() {
    or_cond1_i_52_fu_12932_p2 = (tmp_59_52_reg_30593.read() | tmp_60_52_reg_30598.read());
}

void needlemanWunsch::thread_or_cond1_i_53_fu_13089_p2() {
    or_cond1_i_53_fu_13089_p2 = (tmp_59_53_reg_30697.read() | tmp_60_53_reg_30702.read());
}

void needlemanWunsch::thread_or_cond1_i_54_fu_13265_p2() {
    or_cond1_i_54_fu_13265_p2 = (tmp_59_54_reg_30794.read() | tmp_60_54_reg_30799.read());
}

void needlemanWunsch::thread_or_cond1_i_55_fu_13445_p2() {
    or_cond1_i_55_fu_13445_p2 = (tmp_59_55_reg_30896.read() | tmp_60_55_reg_30901.read());
}

void needlemanWunsch::thread_or_cond1_i_56_fu_13615_p2() {
    or_cond1_i_56_fu_13615_p2 = (tmp_59_56_reg_31003.read() | tmp_60_56_reg_31008.read());
}

void needlemanWunsch::thread_or_cond1_i_57_fu_13790_p2() {
    or_cond1_i_57_fu_13790_p2 = (tmp_59_57_reg_31105.read() | tmp_60_57_reg_31110.read());
}

void needlemanWunsch::thread_or_cond1_i_58_fu_13964_p2() {
    or_cond1_i_58_fu_13964_p2 = (tmp_59_58_reg_31212.read() | tmp_60_58_reg_31217.read());
}

void needlemanWunsch::thread_or_cond1_i_59_fu_14140_p2() {
    or_cond1_i_59_fu_14140_p2 = (tmp_59_59_reg_31319.read() | tmp_60_59_reg_31324.read());
}

void needlemanWunsch::thread_or_cond1_i_5_fu_4912_p2() {
    or_cond1_i_5_fu_4912_p2 = (tmp_59_5_reg_24960.read() | tmp_60_5_reg_24965.read());
}

void needlemanWunsch::thread_or_cond1_i_60_fu_14307_p2() {
    or_cond1_i_60_fu_14307_p2 = (tmp_59_60_reg_31418.read() | tmp_60_60_reg_31423.read());
}

void needlemanWunsch::thread_or_cond1_i_61_fu_14489_p2() {
    or_cond1_i_61_fu_14489_p2 = (tmp_59_61_reg_31520.read() | tmp_60_61_reg_31525.read());
}

void needlemanWunsch::thread_or_cond1_i_62_fu_14656_p2() {
    or_cond1_i_62_fu_14656_p2 = (tmp_59_62_reg_31619.read() | tmp_60_62_reg_31624.read());
}

void needlemanWunsch::thread_or_cond1_i_63_fu_14831_p2() {
    or_cond1_i_63_fu_14831_p2 = (tmp_59_63_reg_31721.read() | tmp_60_63_reg_31726.read());
}

void needlemanWunsch::thread_or_cond1_i_64_fu_15006_p2() {
    or_cond1_i_64_fu_15006_p2 = (tmp_59_64_reg_31823.read() | tmp_60_64_reg_31828.read());
}

void needlemanWunsch::thread_or_cond1_i_65_fu_15181_p2() {
    or_cond1_i_65_fu_15181_p2 = (tmp_59_65_reg_31925.read() | tmp_60_65_reg_31930.read());
}

void needlemanWunsch::thread_or_cond1_i_66_fu_15356_p2() {
    or_cond1_i_66_fu_15356_p2 = (tmp_59_66_reg_32027.read() | tmp_60_66_reg_32032.read());
}

void needlemanWunsch::thread_or_cond1_i_67_fu_15531_p2() {
    or_cond1_i_67_fu_15531_p2 = (tmp_59_67_reg_32129.read() | tmp_60_67_reg_32134.read());
}

void needlemanWunsch::thread_or_cond1_i_68_fu_15706_p2() {
    or_cond1_i_68_fu_15706_p2 = (tmp_59_68_reg_32231.read() | tmp_60_68_reg_32236.read());
}

void needlemanWunsch::thread_or_cond1_i_69_fu_15881_p2() {
    or_cond1_i_69_fu_15881_p2 = (tmp_59_69_reg_32333.read() | tmp_60_69_reg_32338.read());
}

void needlemanWunsch::thread_or_cond1_i_6_fu_5073_p2() {
    or_cond1_i_6_fu_5073_p2 = (tmp_59_6_reg_25069.read() | tmp_60_6_reg_25074.read());
}

void needlemanWunsch::thread_or_cond1_i_70_fu_16063_p2() {
    or_cond1_i_70_fu_16063_p2 = (tmp_59_70_reg_32435.read() | tmp_60_70_reg_32440.read());
}

void needlemanWunsch::thread_or_cond1_i_71_fu_16237_p2() {
    or_cond1_i_71_fu_16237_p2 = (tmp_59_71_reg_32534.read() | tmp_60_71_reg_32539.read());
}

void needlemanWunsch::thread_or_cond1_i_72_fu_16404_p2() {
    or_cond1_i_72_fu_16404_p2 = (tmp_59_72_reg_32633.read() | tmp_60_72_reg_32638.read());
}

void needlemanWunsch::thread_or_cond1_i_73_fu_16579_p2() {
    or_cond1_i_73_fu_16579_p2 = (tmp_59_73_reg_32735.read() | tmp_60_73_reg_32740.read());
}

void needlemanWunsch::thread_or_cond1_i_74_fu_16766_p2() {
    or_cond1_i_74_fu_16766_p2 = (tmp_59_74_reg_32837.read() | tmp_60_74_reg_32842.read());
}

void needlemanWunsch::thread_or_cond1_i_75_fu_16939_p2() {
    or_cond1_i_75_fu_16939_p2 = (tmp_59_75_reg_32941.read() | tmp_60_75_reg_32946.read());
}

void needlemanWunsch::thread_or_cond1_i_76_fu_17100_p2() {
    or_cond1_i_76_fu_17100_p2 = (tmp_59_76_reg_33045.read() | tmp_60_76_reg_33050.read());
}

void needlemanWunsch::thread_or_cond1_i_77_fu_17280_p2() {
    or_cond1_i_77_fu_17280_p2 = (tmp_59_77_reg_33147.read() | tmp_60_77_reg_33152.read());
}

void needlemanWunsch::thread_or_cond1_i_78_fu_17461_p2() {
    or_cond1_i_78_fu_17461_p2 = (tmp_59_78_reg_33254.read() | tmp_60_78_reg_33259.read());
}

void needlemanWunsch::thread_or_cond1_i_79_fu_17627_p2() {
    or_cond1_i_79_fu_17627_p2 = (tmp_59_79_reg_33358.read() | tmp_60_79_reg_33363.read());
}

void needlemanWunsch::thread_or_cond1_i_7_fu_5241_p2() {
    or_cond1_i_7_fu_5241_p2 = (tmp_59_7_reg_25178.read() | tmp_60_7_reg_25183.read());
}

void needlemanWunsch::thread_or_cond1_i_80_fu_17808_p2() {
    or_cond1_i_80_fu_17808_p2 = (tmp_59_80_reg_33465.read() | tmp_60_80_reg_33470.read());
}

void needlemanWunsch::thread_or_cond1_i_81_fu_17976_p2() {
    or_cond1_i_81_fu_17976_p2 = (tmp_59_81_reg_33569.read() | tmp_60_81_reg_33574.read());
}

void needlemanWunsch::thread_or_cond1_i_82_fu_18143_p2() {
    or_cond1_i_82_fu_18143_p2 = (tmp_59_82_reg_33668.read() | tmp_60_82_reg_33673.read());
}

void needlemanWunsch::thread_or_cond1_i_83_fu_18318_p2() {
    or_cond1_i_83_fu_18318_p2 = (tmp_59_83_reg_33770.read() | tmp_60_83_reg_33775.read());
}

void needlemanWunsch::thread_or_cond1_i_84_fu_18493_p2() {
    or_cond1_i_84_fu_18493_p2 = (tmp_59_84_reg_33872.read() | tmp_60_84_reg_33877.read());
}

void needlemanWunsch::thread_or_cond1_i_85_fu_18675_p2() {
    or_cond1_i_85_fu_18675_p2 = (tmp_59_85_reg_33974.read() | tmp_60_85_reg_33979.read());
}

void needlemanWunsch::thread_or_cond1_i_86_fu_18854_p2() {
    or_cond1_i_86_fu_18854_p2 = (tmp_59_86_reg_34073.read() | tmp_60_86_reg_34078.read());
}

void needlemanWunsch::thread_or_cond1_i_87_fu_19015_p2() {
    or_cond1_i_87_fu_19015_p2 = (tmp_59_87_reg_34177.read() | tmp_60_87_reg_34182.read());
}

void needlemanWunsch::thread_or_cond1_i_88_fu_19190_p2() {
    or_cond1_i_88_fu_19190_p2 = (tmp_59_88_reg_34279.read() | tmp_60_88_reg_34284.read());
}

void needlemanWunsch::thread_or_cond1_i_89_fu_19377_p2() {
    or_cond1_i_89_fu_19377_p2 = (tmp_59_89_reg_34381.read() | tmp_60_89_reg_34386.read());
}

void needlemanWunsch::thread_or_cond1_i_8_fu_5393_p2() {
    or_cond1_i_8_fu_5393_p2 = (tmp_59_8_reg_25289.read() | tmp_60_8_reg_25294.read());
}

void needlemanWunsch::thread_or_cond1_i_90_fu_19538_p2() {
    or_cond1_i_90_fu_19538_p2 = (tmp_59_90_reg_34485.read() | tmp_60_90_reg_34490.read());
}

void needlemanWunsch::thread_or_cond1_i_91_fu_19713_p2() {
    or_cond1_i_91_fu_19713_p2 = (tmp_59_91_reg_34587.read() | tmp_60_91_reg_34592.read());
}

void needlemanWunsch::thread_or_cond1_i_92_fu_19888_p2() {
    or_cond1_i_92_fu_19888_p2 = (tmp_59_92_reg_34689.read() | tmp_60_92_reg_34694.read());
}

void needlemanWunsch::thread_or_cond1_i_93_fu_20068_p2() {
    or_cond1_i_93_fu_20068_p2 = (tmp_59_93_reg_34791.read() | tmp_60_93_reg_34796.read());
}

void needlemanWunsch::thread_or_cond1_i_94_fu_20237_p2() {
    or_cond1_i_94_fu_20237_p2 = (tmp_59_94_reg_34898.read() | tmp_60_94_reg_34903.read());
}

void needlemanWunsch::thread_or_cond1_i_95_fu_20425_p2() {
    or_cond1_i_95_fu_20425_p2 = (tmp_59_95_reg_35000.read() | tmp_60_95_reg_35005.read());
}

void needlemanWunsch::thread_or_cond1_i_96_fu_20555_p2() {
    or_cond1_i_96_fu_20555_p2 = (tmp_59_96_reg_35126.read() | tmp_60_96_reg_35131.read());
}

void needlemanWunsch::thread_or_cond1_i_97_fu_20685_p2() {
    or_cond1_i_97_fu_20685_p2 = (tmp_59_97_reg_35210.read() | tmp_60_97_reg_35215.read());
}

void needlemanWunsch::thread_or_cond1_i_98_fu_20774_p2() {
    or_cond1_i_98_fu_20774_p2 = (tmp_59_98_reg_35283.read() | tmp_60_98_reg_35288.read());
}

void needlemanWunsch::thread_or_cond1_i_9_fu_5554_p2() {
    or_cond1_i_9_fu_5554_p2 = (tmp_59_9_reg_25404.read() | tmp_60_9_reg_25409.read());
}

void needlemanWunsch::thread_or_cond1_i_s_fu_5715_p2() {
    or_cond1_i_s_fu_5715_p2 = (tmp_59_s_reg_25525.read() | tmp_60_s_reg_25530.read());
}

void needlemanWunsch::thread_or_cond_i1_10_fu_5655_p2() {
    or_cond_i1_10_fu_5655_p2 = (tmp_48_10_reg_25466.read() | tmp_49_10_reg_25471.read());
}

void needlemanWunsch::thread_or_cond_i1_11_fu_5816_p2() {
    or_cond_i1_11_fu_5816_p2 = (tmp_48_11_reg_25587.read() | tmp_49_11_reg_25592.read());
}

void needlemanWunsch::thread_or_cond_i1_12_fu_5975_p2() {
    or_cond_i1_12_fu_5975_p2 = (tmp_48_12_reg_25710.read() | tmp_49_12_reg_25715.read());
}

void needlemanWunsch::thread_or_cond_i1_13_fu_6135_p2() {
    or_cond_i1_13_fu_6135_p2 = (tmp_48_13_reg_25836.read() | tmp_49_13_reg_25841.read());
}

void needlemanWunsch::thread_or_cond_i1_14_fu_6294_p2() {
    or_cond_i1_14_fu_6294_p2 = (tmp_48_14_reg_25959.read() | tmp_49_14_reg_25964.read());
}

void needlemanWunsch::thread_or_cond_i1_15_fu_6454_p2() {
    or_cond_i1_15_fu_6454_p2 = (tmp_48_15_reg_26085.read() | tmp_49_15_reg_26090.read());
}

void needlemanWunsch::thread_or_cond_i1_16_fu_6613_p2() {
    or_cond_i1_16_fu_6613_p2 = (tmp_48_16_reg_26208.read() | tmp_49_16_reg_26213.read());
}

void needlemanWunsch::thread_or_cond_i1_17_fu_6774_p2() {
    or_cond_i1_17_fu_6774_p2 = (tmp_48_17_reg_26335.read() | tmp_49_17_reg_26340.read());
}

void needlemanWunsch::thread_or_cond_i1_18_fu_6939_p2() {
    or_cond_i1_18_fu_6939_p2 = (tmp_48_18_reg_26452.read() | tmp_49_18_reg_26457.read());
}

void needlemanWunsch::thread_or_cond_i1_19_fu_7111_p2() {
    or_cond_i1_19_fu_7111_p2 = (tmp_48_19_reg_26573.read() | tmp_49_19_reg_26578.read());
}

void needlemanWunsch::thread_or_cond_i1_1_fu_3349_p2() {
    or_cond_i1_1_fu_3349_p2 = (tmp_48_1_reg_22986.read() | tmp_49_1_reg_22991.read());
}

void needlemanWunsch::thread_or_cond_i1_20_fu_7277_p2() {
    or_cond_i1_20_fu_7277_p2 = (tmp_48_20_reg_26694.read() | tmp_49_20_reg_26699.read());
}

void needlemanWunsch::thread_or_cond_i1_21_fu_7443_p2() {
    or_cond_i1_21_fu_7443_p2 = (tmp_48_21_reg_26820.read() | tmp_49_21_reg_26825.read());
}

void needlemanWunsch::thread_or_cond_i1_22_fu_7615_p2() {
    or_cond_i1_22_fu_7615_p2 = (tmp_48_22_reg_26940.read() | tmp_49_22_reg_26945.read());
}

void needlemanWunsch::thread_or_cond_i1_23_fu_7780_p2() {
    or_cond_i1_23_fu_7780_p2 = (tmp_48_23_reg_27061.read() | tmp_49_23_reg_27066.read());
}

void needlemanWunsch::thread_or_cond_i1_24_fu_7947_p2() {
    or_cond_i1_24_fu_7947_p2 = (tmp_48_24_reg_27181.read() | tmp_49_24_reg_27186.read());
}

void needlemanWunsch::thread_or_cond_i1_25_fu_8121_p2() {
    or_cond_i1_25_fu_8121_p2 = (tmp_48_25_reg_27300.read() | tmp_49_25_reg_27305.read());
}

void needlemanWunsch::thread_or_cond_i1_26_fu_8286_p2() {
    or_cond_i1_26_fu_8286_p2 = (tmp_48_26_reg_27420.read() | tmp_49_26_reg_27425.read());
}

void needlemanWunsch::thread_or_cond_i1_27_fu_8455_p2() {
    or_cond_i1_27_fu_8455_p2 = (tmp_48_27_reg_27534.read() | tmp_49_27_reg_27539.read());
}

void needlemanWunsch::thread_or_cond_i1_28_fu_8630_p2() {
    or_cond_i1_28_fu_8630_p2 = (tmp_48_28_reg_27659.read() | tmp_49_28_reg_27664.read());
}

void needlemanWunsch::thread_or_cond_i1_29_fu_8793_p2() {
    or_cond_i1_29_fu_8793_p2 = (tmp_48_29_reg_27775.read() | tmp_49_29_reg_27780.read());
}

void needlemanWunsch::thread_or_cond_i1_2_fu_3487_p2() {
    or_cond_i1_2_fu_3487_p2 = (tmp_48_2_reg_23166.read() | tmp_49_2_reg_23171.read());
}

void needlemanWunsch::thread_or_cond_i1_30_fu_8961_p2() {
    or_cond_i1_30_fu_8961_p2 = (tmp_48_30_reg_27892.read() | tmp_49_30_reg_27897.read());
}

void needlemanWunsch::thread_or_cond_i1_31_fu_9135_p2() {
    or_cond_i1_31_fu_9135_p2 = (tmp_48_31_reg_28008.read() | tmp_49_31_reg_28013.read());
}

void needlemanWunsch::thread_or_cond_i1_32_fu_9298_p2() {
    or_cond_i1_32_fu_9298_p2 = (tmp_48_32_reg_28125.read() | tmp_49_32_reg_28130.read());
}

void needlemanWunsch::thread_or_cond_i1_33_fu_9468_p2() {
    or_cond_i1_33_fu_9468_p2 = (tmp_48_33_reg_28239.read() | tmp_49_33_reg_28244.read());
}

void needlemanWunsch::thread_or_cond_i1_34_fu_9642_p2() {
    or_cond_i1_34_fu_9642_p2 = (tmp_48_34_reg_28361.read() | tmp_49_34_reg_28366.read());
}

void needlemanWunsch::thread_or_cond_i1_35_fu_9805_p2() {
    or_cond_i1_35_fu_9805_p2 = (tmp_48_35_reg_28477.read() | tmp_49_35_reg_28482.read());
}

void needlemanWunsch::thread_or_cond_i1_36_fu_9974_p2() {
    or_cond_i1_36_fu_9974_p2 = (tmp_48_36_reg_28602.read() | tmp_49_36_reg_28607.read());
}

void needlemanWunsch::thread_or_cond_i1_37_fu_10148_p2() {
    or_cond_i1_37_fu_10148_p2 = (tmp_48_37_reg_28721.read() | tmp_49_37_reg_28726.read());
}

void needlemanWunsch::thread_or_cond_i1_38_fu_10313_p2() {
    or_cond_i1_38_fu_10313_p2 = (tmp_48_38_reg_28836.read() | tmp_49_38_reg_28841.read());
}

void needlemanWunsch::thread_or_cond_i1_39_fu_10483_p2() {
    or_cond_i1_39_fu_10483_p2 = (tmp_48_39_reg_28955.read() | tmp_49_39_reg_28960.read());
}

void needlemanWunsch::thread_or_cond_i1_3_fu_3655_p2() {
    or_cond_i1_3_fu_3655_p2 = (tmp_48_3_reg_23373.read() | tmp_49_3_reg_23378.read());
}

void needlemanWunsch::thread_or_cond_i1_40_fu_10656_p2() {
    or_cond_i1_40_fu_10656_p2 = (tmp_48_40_reg_29072.read() | tmp_49_40_reg_29077.read());
}

void needlemanWunsch::thread_or_cond_i1_41_fu_10820_p2() {
    or_cond_i1_41_fu_10820_p2 = (tmp_48_41_reg_29183.read() | tmp_49_41_reg_29188.read());
}

void needlemanWunsch::thread_or_cond_i1_42_fu_10990_p2() {
    or_cond_i1_42_fu_10990_p2 = (tmp_48_42_reg_29308.read() | tmp_49_42_reg_29313.read());
}

void needlemanWunsch::thread_or_cond_i1_43_fu_11164_p2() {
    or_cond_i1_43_fu_11164_p2 = (tmp_48_43_reg_29427.read() | tmp_49_43_reg_29432.read());
}

void needlemanWunsch::thread_or_cond_i1_44_fu_11328_p2() {
    or_cond_i1_44_fu_11328_p2 = (tmp_48_44_reg_29547.read() | tmp_49_44_reg_29552.read());
}

void needlemanWunsch::thread_or_cond_i1_45_fu_11497_p2() {
    or_cond_i1_45_fu_11497_p2 = (tmp_48_45_reg_29658.read() | tmp_49_45_reg_29663.read());
}

void needlemanWunsch::thread_or_cond_i1_46_fu_11672_p2() {
    or_cond_i1_46_fu_11672_p2 = (tmp_48_46_reg_29778.read() | tmp_49_46_reg_29783.read());
}

void needlemanWunsch::thread_or_cond_i1_47_fu_11838_p2() {
    or_cond_i1_47_fu_11838_p2 = (tmp_48_47_reg_29892.read() | tmp_49_47_reg_29897.read());
}

void needlemanWunsch::thread_or_cond_i1_48_fu_12007_p2() {
    or_cond_i1_48_fu_12007_p2 = (tmp_48_48_reg_30012.read() | tmp_49_48_reg_30017.read());
}

void needlemanWunsch::thread_or_cond_i1_49_fu_12178_p2() {
    or_cond_i1_49_fu_12178_p2 = (tmp_48_49_reg_30131.read() | tmp_49_49_reg_30136.read());
}

void needlemanWunsch::thread_or_cond_i1_4_fu_3841_p2() {
    or_cond_i1_4_fu_3841_p2 = (tmp_48_4_reg_23615.read() | tmp_49_4_reg_23620.read());
}

void needlemanWunsch::thread_or_cond_i1_50_fu_12351_p2() {
    or_cond_i1_50_fu_12351_p2 = (tmp_48_50_reg_30241.read() | tmp_49_50_reg_30246.read());
}

void needlemanWunsch::thread_or_cond_i1_51_fu_12522_p2() {
    or_cond_i1_51_fu_12522_p2 = (tmp_48_51_reg_30344.read() | tmp_49_51_reg_30349.read());
}

void needlemanWunsch::thread_or_cond_i1_52_fu_12697_p2() {
    or_cond_i1_52_fu_12697_p2 = (tmp_48_52_reg_30456.read() | tmp_49_52_reg_30461.read());
}

void needlemanWunsch::thread_or_cond_i1_53_fu_12865_p2() {
    or_cond_i1_53_fu_12865_p2 = (tmp_48_53_reg_30558.read() | tmp_49_53_reg_30563.read());
}

void needlemanWunsch::thread_or_cond_i1_54_fu_13030_p2() {
    or_cond_i1_54_fu_13030_p2 = (tmp_48_54_reg_30662.read() | tmp_49_54_reg_30667.read());
}

void needlemanWunsch::thread_or_cond_i1_55_fu_13201_p2() {
    or_cond_i1_55_fu_13201_p2 = (tmp_48_55_reg_30759.read() | tmp_49_55_reg_30764.read());
}

void needlemanWunsch::thread_or_cond_i1_56_fu_13376_p2() {
    or_cond_i1_56_fu_13376_p2 = (tmp_48_56_reg_30861.read() | tmp_49_56_reg_30866.read());
}

void needlemanWunsch::thread_or_cond_i1_57_fu_13551_p2() {
    or_cond_i1_57_fu_13551_p2 = (tmp_48_57_reg_30968.read() | tmp_49_57_reg_30973.read());
}

void needlemanWunsch::thread_or_cond_i1_58_fu_13722_p2() {
    or_cond_i1_58_fu_13722_p2 = (tmp_48_58_reg_31070.read() | tmp_49_58_reg_31075.read());
}

void needlemanWunsch::thread_or_cond_i1_59_fu_13896_p2() {
    or_cond_i1_59_fu_13896_p2 = (tmp_48_59_reg_31177.read() | tmp_49_59_reg_31182.read());
}

void needlemanWunsch::thread_or_cond_i1_5_fu_4038_p2() {
    or_cond_i1_5_fu_4038_p2 = (tmp_48_5_reg_23847.read() | tmp_49_5_reg_23852.read());
}

void needlemanWunsch::thread_or_cond_i1_60_fu_14070_p2() {
    or_cond_i1_60_fu_14070_p2 = (tmp_48_60_reg_31284.read() | tmp_49_60_reg_31289.read());
}

void needlemanWunsch::thread_or_cond_i1_61_fu_14243_p2() {
    or_cond_i1_61_fu_14243_p2 = (tmp_48_61_reg_31383.read() | tmp_49_61_reg_31388.read());
}

void needlemanWunsch::thread_or_cond_i1_62_fu_14418_p2() {
    or_cond_i1_62_fu_14418_p2 = (tmp_48_62_reg_31485.read() | tmp_49_62_reg_31490.read());
}

void needlemanWunsch::thread_or_cond_i1_63_fu_14592_p2() {
    or_cond_i1_63_fu_14592_p2 = (tmp_48_63_reg_31584.read() | tmp_49_63_reg_31589.read());
}

void needlemanWunsch::thread_or_cond_i1_64_fu_14767_p2() {
    or_cond_i1_64_fu_14767_p2 = (tmp_48_64_reg_31686.read() | tmp_49_64_reg_31691.read());
}

void needlemanWunsch::thread_or_cond_i1_65_fu_14942_p2() {
    or_cond_i1_65_fu_14942_p2 = (tmp_48_65_reg_31788.read() | tmp_49_65_reg_31793.read());
}

void needlemanWunsch::thread_or_cond_i1_66_fu_15117_p2() {
    or_cond_i1_66_fu_15117_p2 = (tmp_48_66_reg_31890.read() | tmp_49_66_reg_31895.read());
}

void needlemanWunsch::thread_or_cond_i1_67_fu_15292_p2() {
    or_cond_i1_67_fu_15292_p2 = (tmp_48_67_reg_31992.read() | tmp_49_67_reg_31997.read());
}

void needlemanWunsch::thread_or_cond_i1_68_fu_15467_p2() {
    or_cond_i1_68_fu_15467_p2 = (tmp_48_68_reg_32094.read() | tmp_49_68_reg_32099.read());
}

void needlemanWunsch::thread_or_cond_i1_69_fu_15642_p2() {
    or_cond_i1_69_fu_15642_p2 = (tmp_48_69_reg_32196.read() | tmp_49_69_reg_32201.read());
}

void needlemanWunsch::thread_or_cond_i1_6_fu_4852_p2() {
    or_cond_i1_6_fu_4852_p2 = (tmp_48_6_reg_24919.read() | tmp_49_6_reg_24924.read());
}

void needlemanWunsch::thread_or_cond_i1_70_fu_15817_p2() {
    or_cond_i1_70_fu_15817_p2 = (tmp_48_70_reg_32298.read() | tmp_49_70_reg_32303.read());
}

void needlemanWunsch::thread_or_cond_i1_71_fu_15992_p2() {
    or_cond_i1_71_fu_15992_p2 = (tmp_48_71_reg_32400.read() | tmp_49_71_reg_32405.read());
}

void needlemanWunsch::thread_or_cond_i1_72_fu_16166_p2() {
    or_cond_i1_72_fu_16166_p2 = (tmp_48_72_reg_32499.read() | tmp_49_72_reg_32504.read());
}

void needlemanWunsch::thread_or_cond_i1_73_fu_16340_p2() {
    or_cond_i1_73_fu_16340_p2 = (tmp_48_73_reg_32598.read() | tmp_49_73_reg_32603.read());
}

void needlemanWunsch::thread_or_cond_i1_74_fu_16515_p2() {
    or_cond_i1_74_fu_16515_p2 = (tmp_48_74_reg_32700.read() | tmp_49_74_reg_32705.read());
}

void needlemanWunsch::thread_or_cond_i1_75_fu_16690_p2() {
    or_cond_i1_75_fu_16690_p2 = (tmp_48_75_reg_32802.read() | tmp_49_75_reg_32807.read());
}

void needlemanWunsch::thread_or_cond_i1_76_fu_16864_p2() {
    or_cond_i1_76_fu_16864_p2 = (tmp_48_76_reg_32906.read() | tmp_49_76_reg_32911.read());
}

void needlemanWunsch::thread_or_cond_i1_77_fu_17037_p2() {
    or_cond_i1_77_fu_17037_p2 = (tmp_48_77_reg_33010.read() | tmp_49_77_reg_33015.read());
}

void needlemanWunsch::thread_or_cond_i1_78_fu_17211_p2() {
    or_cond_i1_78_fu_17211_p2 = (tmp_48_78_reg_33112.read() | tmp_49_78_reg_33117.read());
}

void needlemanWunsch::thread_or_cond_i1_79_fu_17386_p2() {
    or_cond_i1_79_fu_17386_p2 = (tmp_48_79_reg_33219.read() | tmp_49_79_reg_33224.read());
}

void needlemanWunsch::thread_or_cond_i1_7_fu_5013_p2() {
    or_cond_i1_7_fu_5013_p2 = (tmp_48_7_reg_25022.read() | tmp_49_7_reg_25027.read());
}

void needlemanWunsch::thread_or_cond_i1_80_fu_17559_p2() {
    or_cond_i1_80_fu_17559_p2 = (tmp_48_80_reg_33323.read() | tmp_49_80_reg_33328.read());
}

void needlemanWunsch::thread_or_cond_i1_81_fu_17733_p2() {
    or_cond_i1_81_fu_17733_p2 = (tmp_48_81_reg_33430.read() | tmp_49_81_reg_33435.read());
}

void needlemanWunsch::thread_or_cond_i1_82_fu_17906_p2() {
    or_cond_i1_82_fu_17906_p2 = (tmp_48_82_reg_33534.read() | tmp_49_82_reg_33539.read());
}

void needlemanWunsch::thread_or_cond_i1_83_fu_18079_p2() {
    or_cond_i1_83_fu_18079_p2 = (tmp_48_83_reg_33633.read() | tmp_49_83_reg_33638.read());
}

void needlemanWunsch::thread_or_cond_i1_84_fu_18254_p2() {
    or_cond_i1_84_fu_18254_p2 = (tmp_48_84_reg_33735.read() | tmp_49_84_reg_33740.read());
}

void needlemanWunsch::thread_or_cond_i1_85_fu_18429_p2() {
    or_cond_i1_85_fu_18429_p2 = (tmp_48_85_reg_33837.read() | tmp_49_85_reg_33842.read());
}

void needlemanWunsch::thread_or_cond_i1_86_fu_18604_p2() {
    or_cond_i1_86_fu_18604_p2 = (tmp_48_86_reg_33939.read() | tmp_49_86_reg_33944.read());
}

void needlemanWunsch::thread_or_cond_i1_87_fu_18778_p2() {
    or_cond_i1_87_fu_18778_p2 = (tmp_48_87_reg_34038.read() | tmp_49_87_reg_34043.read());
}

void needlemanWunsch::thread_or_cond_i1_88_fu_18952_p2() {
    or_cond_i1_88_fu_18952_p2 = (tmp_48_88_reg_34142.read() | tmp_49_88_reg_34147.read());
}

void needlemanWunsch::thread_or_cond_i1_89_fu_19126_p2() {
    or_cond_i1_89_fu_19126_p2 = (tmp_48_89_reg_34244.read() | tmp_49_89_reg_34249.read());
}

void needlemanWunsch::thread_or_cond_i1_8_fu_5174_p2() {
    or_cond_i1_8_fu_5174_p2 = (tmp_48_8_reg_25131.read() | tmp_49_8_reg_25136.read());
}

void needlemanWunsch::thread_or_cond_i1_90_fu_19301_p2() {
    or_cond_i1_90_fu_19301_p2 = (tmp_48_90_reg_34346.read() | tmp_49_90_reg_34351.read());
}

void needlemanWunsch::thread_or_cond_i1_91_fu_19475_p2() {
    or_cond_i1_91_fu_19475_p2 = (tmp_48_91_reg_34450.read() | tmp_49_91_reg_34455.read());
}

void needlemanWunsch::thread_or_cond_i1_92_fu_19649_p2() {
    or_cond_i1_92_fu_19649_p2 = (tmp_48_92_reg_34552.read() | tmp_49_92_reg_34557.read());
}

void needlemanWunsch::thread_or_cond_i1_93_fu_19824_p2() {
    or_cond_i1_93_fu_19824_p2 = (tmp_48_93_reg_34654.read() | tmp_49_93_reg_34659.read());
}

void needlemanWunsch::thread_or_cond_i1_94_fu_19999_p2() {
    or_cond_i1_94_fu_19999_p2 = (tmp_48_94_reg_34756.read() | tmp_49_94_reg_34761.read());
}

void needlemanWunsch::thread_or_cond_i1_95_fu_20174_p2() {
    or_cond_i1_95_fu_20174_p2 = (tmp_48_95_reg_34863.read() | tmp_49_95_reg_34868.read());
}

void needlemanWunsch::thread_or_cond_i1_96_fu_20342_p2() {
    or_cond_i1_96_fu_20342_p2 = (tmp_48_96_reg_34965.read() | tmp_49_96_reg_34970.read());
}

void needlemanWunsch::thread_or_cond_i1_97_fu_20517_p2() {
    or_cond_i1_97_fu_20517_p2 = (tmp_48_97_reg_35091.read() | tmp_49_97_reg_35096.read());
}

void needlemanWunsch::thread_or_cond_i1_98_fu_20647_p2() {
    or_cond_i1_98_fu_20647_p2 = (tmp_48_98_reg_35175.read() | tmp_49_98_reg_35180.read());
}

void needlemanWunsch::thread_or_cond_i1_9_fu_5333_p2() {
    or_cond_i1_9_fu_5333_p2 = (tmp_48_9_reg_25242.read() | tmp_49_9_reg_25247.read());
}

void needlemanWunsch::thread_or_cond_i1_s_fu_5494_p2() {
    or_cond_i1_s_fu_5494_p2 = (tmp_48_s_reg_25351.read() | tmp_49_s_reg_25356.read());
}

void needlemanWunsch::thread_or_cond_i_10_fu_5879_p2() {
    or_cond_i_10_fu_5879_p2 = (tmp_57_10_reg_25636.read() | tmp_58_10_reg_25641.read());
}

void needlemanWunsch::thread_or_cond_i_11_fu_6031_p2() {
    or_cond_i_11_fu_6031_p2 = (tmp_57_11_reg_25759.read() | tmp_58_11_reg_25764.read());
}

void needlemanWunsch::thread_or_cond_i_12_fu_6198_p2() {
    or_cond_i_12_fu_6198_p2 = (tmp_57_12_reg_25885.read() | tmp_58_12_reg_25890.read());
}

void needlemanWunsch::thread_or_cond_i_13_fu_6350_p2() {
    or_cond_i_13_fu_6350_p2 = (tmp_57_13_reg_26008.read() | tmp_58_13_reg_26013.read());
}

void needlemanWunsch::thread_or_cond_i_14_fu_6517_p2() {
    or_cond_i_14_fu_6517_p2 = (tmp_57_14_reg_26134.read() | tmp_58_14_reg_26139.read());
}

void needlemanWunsch::thread_or_cond_i_15_fu_6669_p2() {
    or_cond_i_15_fu_6669_p2 = (tmp_57_15_reg_26257.read() | tmp_58_15_reg_26262.read());
}

void needlemanWunsch::thread_or_cond_i_16_fu_6837_p2() {
    or_cond_i_16_fu_6837_p2 = (tmp_57_16_reg_26378.read() | tmp_58_16_reg_26383.read());
}

void needlemanWunsch::thread_or_cond_i_17_fu_6995_p2() {
    or_cond_i_17_fu_6995_p2 = (tmp_57_17_reg_26495.read() | tmp_58_17_reg_26500.read());
}

void needlemanWunsch::thread_or_cond_i_18_fu_7167_p2() {
    or_cond_i_18_fu_7167_p2 = (tmp_57_18_reg_26610.read() | tmp_58_18_reg_26615.read());
}

void needlemanWunsch::thread_or_cond_i_19_fu_7333_p2() {
    or_cond_i_19_fu_7333_p2 = (tmp_57_19_reg_26737.read() | tmp_58_19_reg_26742.read());
}

void needlemanWunsch::thread_or_cond_i_1_fu_3526_p2() {
    or_cond_i_1_fu_3526_p2 = (tmp_57_1_reg_23239.read() | tmp_58_1_reg_23244.read());
}

void needlemanWunsch::thread_or_cond_i_20_fu_7504_p2() {
    or_cond_i_20_fu_7504_p2 = (tmp_57_20_reg_26857.read() | tmp_58_20_reg_26862.read());
}

void needlemanWunsch::thread_or_cond_i_21_fu_7670_p2() {
    or_cond_i_21_fu_7670_p2 = (tmp_57_21_reg_26983.read() | tmp_58_21_reg_26988.read());
}

void needlemanWunsch::thread_or_cond_i_22_fu_7836_p2() {
    or_cond_i_22_fu_7836_p2 = (tmp_57_22_reg_27104.read() | tmp_58_22_reg_27109.read());
}

void needlemanWunsch::thread_or_cond_i_23_fu_8011_p2() {
    or_cond_i_23_fu_8011_p2 = (tmp_57_23_reg_27218.read() | tmp_58_23_reg_27223.read());
}

void needlemanWunsch::thread_or_cond_i_24_fu_8181_p2() {
    or_cond_i_24_fu_8181_p2 = (tmp_57_24_reg_27337.read() | tmp_58_24_reg_27342.read());
}

void needlemanWunsch::thread_or_cond_i_25_fu_8345_p2() {
    or_cond_i_25_fu_8345_p2 = (tmp_57_25_reg_27457.read() | tmp_58_25_reg_27462.read());
}

void needlemanWunsch::thread_or_cond_i_26_fu_8520_p2() {
    or_cond_i_26_fu_8520_p2 = (tmp_57_26_reg_27571.read() | tmp_58_26_reg_27576.read());
}

void needlemanWunsch::thread_or_cond_i_27_fu_8697_p2() {
    or_cond_i_27_fu_8697_p2 = (tmp_57_27_reg_27696.read() | tmp_58_27_reg_27701.read());
}

void needlemanWunsch::thread_or_cond_i_28_fu_8859_p2() {
    or_cond_i_28_fu_8859_p2 = (tmp_57_28_reg_27812.read() | tmp_58_28_reg_27817.read());
}

void needlemanWunsch::thread_or_cond_i_29_fu_9033_p2() {
    or_cond_i_29_fu_9033_p2 = (tmp_57_29_reg_27929.read() | tmp_58_29_reg_27934.read());
}

void needlemanWunsch::thread_or_cond_i_2_fu_3718_p2() {
    or_cond_i_2_fu_3718_p2 = (tmp_57_2_reg_23452.read() | tmp_58_2_reg_23457.read());
}

void needlemanWunsch::thread_or_cond_i_30_fu_9197_p2() {
    or_cond_i_30_fu_9197_p2 = (tmp_57_30_reg_28045.read() | tmp_58_30_reg_28050.read());
}

void needlemanWunsch::thread_or_cond_i_31_fu_9358_p2() {
    or_cond_i_31_fu_9358_p2 = (tmp_57_31_reg_28162.read() | tmp_58_31_reg_28167.read());
}

void needlemanWunsch::thread_or_cond_i_32_fu_9540_p2() {
    or_cond_i_32_fu_9540_p2 = (tmp_57_32_reg_28276.read() | tmp_58_32_reg_28281.read());
}

void needlemanWunsch::thread_or_cond_i_33_fu_9709_p2() {
    or_cond_i_33_fu_9709_p2 = (tmp_57_33_reg_28398.read() | tmp_58_33_reg_28403.read());
}

void needlemanWunsch::thread_or_cond_i_34_fu_9864_p2() {
    or_cond_i_34_fu_9864_p2 = (tmp_57_34_reg_28514.read() | tmp_58_34_reg_28519.read());
}

void needlemanWunsch::thread_or_cond_i_35_fu_10038_p2() {
    or_cond_i_35_fu_10038_p2 = (tmp_57_35_reg_28639.read() | tmp_58_35_reg_28644.read());
}

void needlemanWunsch::thread_or_cond_i_36_fu_10203_p2() {
    or_cond_i_36_fu_10203_p2 = (tmp_57_36_reg_28758.read() | tmp_58_36_reg_28763.read());
}

void needlemanWunsch::thread_or_cond_i_37_fu_10373_p2() {
    or_cond_i_37_fu_10373_p2 = (tmp_57_37_reg_28873.read() | tmp_58_37_reg_28878.read());
}

void needlemanWunsch::thread_or_cond_i_38_fu_10549_p2() {
    or_cond_i_38_fu_10549_p2 = (tmp_57_38_reg_28992.read() | tmp_58_38_reg_28997.read());
}

void needlemanWunsch::thread_or_cond_i_39_fu_10719_p2() {
    or_cond_i_39_fu_10719_p2 = (tmp_57_39_reg_29109.read() | tmp_58_39_reg_29114.read());
}

void needlemanWunsch::thread_or_cond_i_3_fu_3901_p2() {
    or_cond_i_3_fu_3901_p2 = (tmp_57_3_reg_23685.read() | tmp_58_3_reg_23690.read());
}

void needlemanWunsch::thread_or_cond_i_40_fu_10880_p2() {
    or_cond_i_40_fu_10880_p2 = (tmp_57_40_reg_29220.read() | tmp_58_40_reg_29225.read());
}

void needlemanWunsch::thread_or_cond_i_41_fu_11054_p2() {
    or_cond_i_41_fu_11054_p2 = (tmp_57_41_reg_29345.read() | tmp_58_41_reg_29350.read());
}

void needlemanWunsch::thread_or_cond_i_42_fu_11219_p2() {
    or_cond_i_42_fu_11219_p2 = (tmp_57_42_reg_29464.read() | tmp_58_42_reg_29469.read());
}

void needlemanWunsch::thread_or_cond_i_43_fu_11395_p2() {
    or_cond_i_43_fu_11395_p2 = (tmp_57_43_reg_29584.read() | tmp_58_43_reg_29589.read());
}

void needlemanWunsch::thread_or_cond_i_44_fu_11557_p2() {
    or_cond_i_44_fu_11557_p2 = (tmp_57_44_reg_29695.read() | tmp_58_44_reg_29700.read());
}

void needlemanWunsch::thread_or_cond_i_45_fu_11733_p2() {
    or_cond_i_45_fu_11733_p2 = (tmp_57_45_reg_29815.read() | tmp_58_45_reg_29820.read());
}

void needlemanWunsch::thread_or_cond_i_46_fu_11897_p2() {
    or_cond_i_46_fu_11897_p2 = (tmp_57_46_reg_29929.read() | tmp_58_46_reg_29934.read());
}

void needlemanWunsch::thread_or_cond_i_47_fu_12068_p2() {
    or_cond_i_47_fu_12068_p2 = (tmp_57_47_reg_30049.read() | tmp_58_47_reg_30054.read());
}

void needlemanWunsch::thread_or_cond_i_48_fu_12249_p2() {
    or_cond_i_48_fu_12249_p2 = (tmp_57_48_reg_30156.read() | tmp_58_48_reg_30161.read());
}

void needlemanWunsch::thread_or_cond_i_49_fu_12406_p2() {
    or_cond_i_49_fu_12406_p2 = (tmp_57_49_reg_30272.read() | tmp_58_49_reg_30277.read());
}

void needlemanWunsch::thread_or_cond_i_4_fu_4415_p2() {
    or_cond_i_4_fu_4415_p2 = (tmp_57_4_reg_23925.read() | tmp_58_4_reg_23930.read());
}

void needlemanWunsch::thread_or_cond_i_50_fu_12587_p2() {
    or_cond_i_50_fu_12587_p2 = (tmp_57_50_reg_30374.read() | tmp_58_50_reg_30379.read());
}

void needlemanWunsch::thread_or_cond_i_51_fu_12756_p2() {
    or_cond_i_51_fu_12756_p2 = (tmp_57_51_reg_30481.read() | tmp_58_51_reg_30486.read());
}

void needlemanWunsch::thread_or_cond_i_52_fu_12928_p2() {
    or_cond_i_52_fu_12928_p2 = (tmp_57_52_reg_30583.read() | tmp_58_52_reg_30588.read());
}

void needlemanWunsch::thread_or_cond_i_53_fu_13085_p2() {
    or_cond_i_53_fu_13085_p2 = (tmp_57_53_reg_30687.read() | tmp_58_53_reg_30692.read());
}

void needlemanWunsch::thread_or_cond_i_54_fu_13261_p2() {
    or_cond_i_54_fu_13261_p2 = (tmp_57_54_reg_30784.read() | tmp_58_54_reg_30789.read());
}

void needlemanWunsch::thread_or_cond_i_55_fu_13441_p2() {
    or_cond_i_55_fu_13441_p2 = (tmp_57_55_reg_30886.read() | tmp_58_55_reg_30891.read());
}

void needlemanWunsch::thread_or_cond_i_56_fu_13611_p2() {
    or_cond_i_56_fu_13611_p2 = (tmp_57_56_reg_30993.read() | tmp_58_56_reg_30998.read());
}

void needlemanWunsch::thread_or_cond_i_57_fu_13786_p2() {
    or_cond_i_57_fu_13786_p2 = (tmp_57_57_reg_31095.read() | tmp_58_57_reg_31100.read());
}

void needlemanWunsch::thread_or_cond_i_58_fu_13960_p2() {
    or_cond_i_58_fu_13960_p2 = (tmp_57_58_reg_31202.read() | tmp_58_58_reg_31207.read());
}

void needlemanWunsch::thread_or_cond_i_59_fu_14136_p2() {
    or_cond_i_59_fu_14136_p2 = (tmp_57_59_reg_31309.read() | tmp_58_59_reg_31314.read());
}

void needlemanWunsch::thread_or_cond_i_5_fu_4908_p2() {
    or_cond_i_5_fu_4908_p2 = (tmp_57_5_reg_24950.read() | tmp_58_5_reg_24955.read());
}

void needlemanWunsch::thread_or_cond_i_60_fu_14303_p2() {
    or_cond_i_60_fu_14303_p2 = (tmp_57_60_reg_31408.read() | tmp_58_60_reg_31413.read());
}

void needlemanWunsch::thread_or_cond_i_61_fu_14485_p2() {
    or_cond_i_61_fu_14485_p2 = (tmp_57_61_reg_31510.read() | tmp_58_61_reg_31515.read());
}

void needlemanWunsch::thread_or_cond_i_62_fu_14652_p2() {
    or_cond_i_62_fu_14652_p2 = (tmp_57_62_reg_31609.read() | tmp_58_62_reg_31614.read());
}

void needlemanWunsch::thread_or_cond_i_63_fu_14827_p2() {
    or_cond_i_63_fu_14827_p2 = (tmp_57_63_reg_31711.read() | tmp_58_63_reg_31716.read());
}

void needlemanWunsch::thread_or_cond_i_64_fu_15002_p2() {
    or_cond_i_64_fu_15002_p2 = (tmp_57_64_reg_31813.read() | tmp_58_64_reg_31818.read());
}

void needlemanWunsch::thread_or_cond_i_65_fu_15177_p2() {
    or_cond_i_65_fu_15177_p2 = (tmp_57_65_reg_31915.read() | tmp_58_65_reg_31920.read());
}

void needlemanWunsch::thread_or_cond_i_66_fu_15352_p2() {
    or_cond_i_66_fu_15352_p2 = (tmp_57_66_reg_32017.read() | tmp_58_66_reg_32022.read());
}

void needlemanWunsch::thread_or_cond_i_67_fu_15527_p2() {
    or_cond_i_67_fu_15527_p2 = (tmp_57_67_reg_32119.read() | tmp_58_67_reg_32124.read());
}

void needlemanWunsch::thread_or_cond_i_68_fu_15702_p2() {
    or_cond_i_68_fu_15702_p2 = (tmp_57_68_reg_32221.read() | tmp_58_68_reg_32226.read());
}

void needlemanWunsch::thread_or_cond_i_69_fu_15877_p2() {
    or_cond_i_69_fu_15877_p2 = (tmp_57_69_reg_32323.read() | tmp_58_69_reg_32328.read());
}

void needlemanWunsch::thread_or_cond_i_6_fu_5069_p2() {
    or_cond_i_6_fu_5069_p2 = (tmp_57_6_reg_25059.read() | tmp_58_6_reg_25064.read());
}

void needlemanWunsch::thread_or_cond_i_70_fu_16059_p2() {
    or_cond_i_70_fu_16059_p2 = (tmp_57_70_reg_32425.read() | tmp_58_70_reg_32430.read());
}

void needlemanWunsch::thread_or_cond_i_71_fu_16233_p2() {
    or_cond_i_71_fu_16233_p2 = (tmp_57_71_reg_32524.read() | tmp_58_71_reg_32529.read());
}

void needlemanWunsch::thread_or_cond_i_72_fu_16400_p2() {
    or_cond_i_72_fu_16400_p2 = (tmp_57_72_reg_32623.read() | tmp_58_72_reg_32628.read());
}

void needlemanWunsch::thread_or_cond_i_73_fu_16575_p2() {
    or_cond_i_73_fu_16575_p2 = (tmp_57_73_reg_32725.read() | tmp_58_73_reg_32730.read());
}

void needlemanWunsch::thread_or_cond_i_74_fu_16762_p2() {
    or_cond_i_74_fu_16762_p2 = (tmp_57_74_reg_32827.read() | tmp_58_74_reg_32832.read());
}

void needlemanWunsch::thread_or_cond_i_75_fu_16935_p2() {
    or_cond_i_75_fu_16935_p2 = (tmp_57_75_reg_32931.read() | tmp_58_75_reg_32936.read());
}

void needlemanWunsch::thread_or_cond_i_76_fu_17096_p2() {
    or_cond_i_76_fu_17096_p2 = (tmp_57_76_reg_33035.read() | tmp_58_76_reg_33040.read());
}

void needlemanWunsch::thread_or_cond_i_77_fu_17276_p2() {
    or_cond_i_77_fu_17276_p2 = (tmp_57_77_reg_33137.read() | tmp_58_77_reg_33142.read());
}

void needlemanWunsch::thread_or_cond_i_78_fu_17457_p2() {
    or_cond_i_78_fu_17457_p2 = (tmp_57_78_reg_33244.read() | tmp_58_78_reg_33249.read());
}

void needlemanWunsch::thread_or_cond_i_79_fu_17623_p2() {
    or_cond_i_79_fu_17623_p2 = (tmp_57_79_reg_33348.read() | tmp_58_79_reg_33353.read());
}

void needlemanWunsch::thread_or_cond_i_7_fu_5237_p2() {
    or_cond_i_7_fu_5237_p2 = (tmp_57_7_reg_25168.read() | tmp_58_7_reg_25173.read());
}

void needlemanWunsch::thread_or_cond_i_80_fu_17804_p2() {
    or_cond_i_80_fu_17804_p2 = (tmp_57_80_reg_33455.read() | tmp_58_80_reg_33460.read());
}

void needlemanWunsch::thread_or_cond_i_81_fu_17972_p2() {
    or_cond_i_81_fu_17972_p2 = (tmp_57_81_reg_33559.read() | tmp_58_81_reg_33564.read());
}

void needlemanWunsch::thread_or_cond_i_82_fu_18139_p2() {
    or_cond_i_82_fu_18139_p2 = (tmp_57_82_reg_33658.read() | tmp_58_82_reg_33663.read());
}

void needlemanWunsch::thread_or_cond_i_83_fu_18314_p2() {
    or_cond_i_83_fu_18314_p2 = (tmp_57_83_reg_33760.read() | tmp_58_83_reg_33765.read());
}

void needlemanWunsch::thread_or_cond_i_84_fu_18489_p2() {
    or_cond_i_84_fu_18489_p2 = (tmp_57_84_reg_33862.read() | tmp_58_84_reg_33867.read());
}

void needlemanWunsch::thread_or_cond_i_85_fu_18671_p2() {
    or_cond_i_85_fu_18671_p2 = (tmp_57_85_reg_33964.read() | tmp_58_85_reg_33969.read());
}

void needlemanWunsch::thread_or_cond_i_86_fu_18850_p2() {
    or_cond_i_86_fu_18850_p2 = (tmp_57_86_reg_34063.read() | tmp_58_86_reg_34068.read());
}

void needlemanWunsch::thread_or_cond_i_87_fu_19011_p2() {
    or_cond_i_87_fu_19011_p2 = (tmp_57_87_reg_34167.read() | tmp_58_87_reg_34172.read());
}

void needlemanWunsch::thread_or_cond_i_88_fu_19186_p2() {
    or_cond_i_88_fu_19186_p2 = (tmp_57_88_reg_34269.read() | tmp_58_88_reg_34274.read());
}

void needlemanWunsch::thread_or_cond_i_89_fu_19373_p2() {
    or_cond_i_89_fu_19373_p2 = (tmp_57_89_reg_34371.read() | tmp_58_89_reg_34376.read());
}

void needlemanWunsch::thread_or_cond_i_8_fu_5389_p2() {
    or_cond_i_8_fu_5389_p2 = (tmp_57_8_reg_25279.read() | tmp_58_8_reg_25284.read());
}

void needlemanWunsch::thread_or_cond_i_90_fu_19534_p2() {
    or_cond_i_90_fu_19534_p2 = (tmp_57_90_reg_34475.read() | tmp_58_90_reg_34480.read());
}

void needlemanWunsch::thread_or_cond_i_91_fu_19709_p2() {
    or_cond_i_91_fu_19709_p2 = (tmp_57_91_reg_34577.read() | tmp_58_91_reg_34582.read());
}

void needlemanWunsch::thread_or_cond_i_92_fu_19884_p2() {
    or_cond_i_92_fu_19884_p2 = (tmp_57_92_reg_34679.read() | tmp_58_92_reg_34684.read());
}

void needlemanWunsch::thread_or_cond_i_93_fu_20064_p2() {
    or_cond_i_93_fu_20064_p2 = (tmp_57_93_reg_34781.read() | tmp_58_93_reg_34786.read());
}

void needlemanWunsch::thread_or_cond_i_94_fu_20233_p2() {
    or_cond_i_94_fu_20233_p2 = (tmp_57_94_reg_34888.read() | tmp_58_94_reg_34893.read());
}

void needlemanWunsch::thread_or_cond_i_95_fu_20421_p2() {
    or_cond_i_95_fu_20421_p2 = (tmp_57_95_reg_34990.read() | tmp_58_95_reg_34995.read());
}

void needlemanWunsch::thread_or_cond_i_96_fu_20551_p2() {
    or_cond_i_96_fu_20551_p2 = (tmp_57_96_reg_35116.read() | tmp_58_96_reg_35121.read());
}

void needlemanWunsch::thread_or_cond_i_97_fu_20681_p2() {
    or_cond_i_97_fu_20681_p2 = (tmp_57_97_reg_35200.read() | tmp_58_97_reg_35205.read());
}

void needlemanWunsch::thread_or_cond_i_98_fu_20770_p2() {
    or_cond_i_98_fu_20770_p2 = (tmp_57_98_reg_35273.read() | tmp_58_98_reg_35278.read());
}

void needlemanWunsch::thread_or_cond_i_9_fu_5550_p2() {
    or_cond_i_9_fu_5550_p2 = (tmp_57_9_reg_25394.read() | tmp_58_9_reg_25399.read());
}

void needlemanWunsch::thread_or_cond_i_s_fu_5711_p2() {
    or_cond_i_s_fu_5711_p2 = (tmp_57_s_reg_25515.read() | tmp_58_s_reg_25520.read());
}

void needlemanWunsch::thread_orig1_addr_10_gep_fu_688_p3() {
    orig1_addr_10_gep_fu_688_p3 =  (sc_lv<7>) (ap_const_lv64_A);
}

void needlemanWunsch::thread_orig1_addr_11_gep_fu_704_p3() {
    orig1_addr_11_gep_fu_704_p3 =  (sc_lv<7>) (ap_const_lv64_B);
}

void needlemanWunsch::thread_orig1_addr_12_gep_fu_720_p3() {
    orig1_addr_12_gep_fu_720_p3 =  (sc_lv<7>) (ap_const_lv64_C);
}

void needlemanWunsch::thread_orig1_addr_13_gep_fu_744_p3() {
    orig1_addr_13_gep_fu_744_p3 =  (sc_lv<7>) (ap_const_lv64_D);
}

void needlemanWunsch::thread_orig1_addr_14_gep_fu_760_p3() {
    orig1_addr_14_gep_fu_760_p3 =  (sc_lv<7>) (ap_const_lv64_E);
}

void needlemanWunsch::thread_orig1_addr_15_gep_fu_776_p3() {
    orig1_addr_15_gep_fu_776_p3 =  (sc_lv<7>) (ap_const_lv64_F);
}

void needlemanWunsch::thread_orig1_addr_16_gep_fu_792_p3() {
    orig1_addr_16_gep_fu_792_p3 =  (sc_lv<7>) (ap_const_lv64_10);
}

void needlemanWunsch::thread_orig1_addr_17_gep_fu_816_p3() {
    orig1_addr_17_gep_fu_816_p3 =  (sc_lv<7>) (ap_const_lv64_11);
}

void needlemanWunsch::thread_orig1_addr_18_gep_fu_832_p3() {
    orig1_addr_18_gep_fu_832_p3 =  (sc_lv<7>) (ap_const_lv64_12);
}

void needlemanWunsch::thread_orig1_addr_19_gep_fu_848_p3() {
    orig1_addr_19_gep_fu_848_p3 =  (sc_lv<7>) (ap_const_lv64_13);
}

void needlemanWunsch::thread_orig1_addr_1_gep_fu_528_p3() {
    orig1_addr_1_gep_fu_528_p3 =  (sc_lv<7>) (ap_const_lv64_1);
}

void needlemanWunsch::thread_orig1_addr_20_gep_fu_864_p3() {
    orig1_addr_20_gep_fu_864_p3 =  (sc_lv<7>) (ap_const_lv64_14);
}

void needlemanWunsch::thread_orig1_addr_21_gep_fu_888_p3() {
    orig1_addr_21_gep_fu_888_p3 =  (sc_lv<7>) (ap_const_lv64_15);
}

void needlemanWunsch::thread_orig1_addr_22_gep_fu_904_p3() {
    orig1_addr_22_gep_fu_904_p3 =  (sc_lv<7>) (ap_const_lv64_16);
}

void needlemanWunsch::thread_orig1_addr_23_gep_fu_920_p3() {
    orig1_addr_23_gep_fu_920_p3 =  (sc_lv<7>) (ap_const_lv64_17);
}

void needlemanWunsch::thread_orig1_addr_24_gep_fu_936_p3() {
    orig1_addr_24_gep_fu_936_p3 =  (sc_lv<7>) (ap_const_lv64_18);
}

void needlemanWunsch::thread_orig1_addr_25_gep_fu_960_p3() {
    orig1_addr_25_gep_fu_960_p3 =  (sc_lv<7>) (ap_const_lv64_19);
}

void needlemanWunsch::thread_orig1_addr_26_gep_fu_976_p3() {
    orig1_addr_26_gep_fu_976_p3 =  (sc_lv<7>) (ap_const_lv64_1A);
}

void needlemanWunsch::thread_orig1_addr_27_gep_fu_992_p3() {
    orig1_addr_27_gep_fu_992_p3 =  (sc_lv<7>) (ap_const_lv64_1B);
}

void needlemanWunsch::thread_orig1_addr_28_gep_fu_1008_p3() {
    orig1_addr_28_gep_fu_1008_p3 =  (sc_lv<7>) (ap_const_lv64_1C);
}

void needlemanWunsch::thread_orig1_addr_29_gep_fu_1032_p3() {
    orig1_addr_29_gep_fu_1032_p3 =  (sc_lv<7>) (ap_const_lv64_1D);
}

void needlemanWunsch::thread_orig1_addr_2_gep_fu_544_p3() {
    orig1_addr_2_gep_fu_544_p3 =  (sc_lv<7>) (ap_const_lv64_2);
}

void needlemanWunsch::thread_orig1_addr_30_gep_fu_1048_p3() {
    orig1_addr_30_gep_fu_1048_p3 =  (sc_lv<7>) (ap_const_lv64_1E);
}

void needlemanWunsch::thread_orig1_addr_31_gep_fu_1064_p3() {
    orig1_addr_31_gep_fu_1064_p3 =  (sc_lv<7>) (ap_const_lv64_1F);
}

void needlemanWunsch::thread_orig1_addr_32_gep_fu_1080_p3() {
    orig1_addr_32_gep_fu_1080_p3 =  (sc_lv<7>) (ap_const_lv64_20);
}

void needlemanWunsch::thread_orig1_addr_33_gep_fu_1104_p3() {
    orig1_addr_33_gep_fu_1104_p3 =  (sc_lv<7>) (ap_const_lv64_21);
}

void needlemanWunsch::thread_orig1_addr_34_gep_fu_1120_p3() {
    orig1_addr_34_gep_fu_1120_p3 =  (sc_lv<7>) (ap_const_lv64_22);
}

void needlemanWunsch::thread_orig1_addr_35_gep_fu_1136_p3() {
    orig1_addr_35_gep_fu_1136_p3 =  (sc_lv<7>) (ap_const_lv64_23);
}

void needlemanWunsch::thread_orig1_addr_36_gep_fu_1152_p3() {
    orig1_addr_36_gep_fu_1152_p3 =  (sc_lv<7>) (ap_const_lv64_24);
}

void needlemanWunsch::thread_orig1_addr_37_gep_fu_1176_p3() {
    orig1_addr_37_gep_fu_1176_p3 =  (sc_lv<7>) (ap_const_lv64_25);
}

void needlemanWunsch::thread_orig1_addr_38_gep_fu_1192_p3() {
    orig1_addr_38_gep_fu_1192_p3 =  (sc_lv<7>) (ap_const_lv64_26);
}

void needlemanWunsch::thread_orig1_addr_39_gep_fu_1208_p3() {
    orig1_addr_39_gep_fu_1208_p3 =  (sc_lv<7>) (ap_const_lv64_27);
}

void needlemanWunsch::thread_orig1_addr_3_gep_fu_560_p3() {
    orig1_addr_3_gep_fu_560_p3 =  (sc_lv<7>) (ap_const_lv64_3);
}

void needlemanWunsch::thread_orig1_addr_40_gep_fu_1224_p3() {
    orig1_addr_40_gep_fu_1224_p3 =  (sc_lv<7>) (ap_const_lv64_28);
}

void needlemanWunsch::thread_orig1_addr_41_gep_fu_1248_p3() {
    orig1_addr_41_gep_fu_1248_p3 =  (sc_lv<7>) (ap_const_lv64_29);
}

void needlemanWunsch::thread_orig1_addr_42_gep_fu_1264_p3() {
    orig1_addr_42_gep_fu_1264_p3 =  (sc_lv<7>) (ap_const_lv64_2A);
}

void needlemanWunsch::thread_orig1_addr_43_gep_fu_1280_p3() {
    orig1_addr_43_gep_fu_1280_p3 =  (sc_lv<7>) (ap_const_lv64_2B);
}

void needlemanWunsch::thread_orig1_addr_44_gep_fu_1296_p3() {
    orig1_addr_44_gep_fu_1296_p3 =  (sc_lv<7>) (ap_const_lv64_2C);
}

void needlemanWunsch::thread_orig1_addr_45_gep_fu_1320_p3() {
    orig1_addr_45_gep_fu_1320_p3 =  (sc_lv<7>) (ap_const_lv64_2D);
}

void needlemanWunsch::thread_orig1_addr_46_gep_fu_1336_p3() {
    orig1_addr_46_gep_fu_1336_p3 =  (sc_lv<7>) (ap_const_lv64_2E);
}

void needlemanWunsch::thread_orig1_addr_47_gep_fu_1352_p3() {
    orig1_addr_47_gep_fu_1352_p3 =  (sc_lv<7>) (ap_const_lv64_2F);
}

void needlemanWunsch::thread_orig1_addr_48_gep_fu_1368_p3() {
    orig1_addr_48_gep_fu_1368_p3 =  (sc_lv<7>) (ap_const_lv64_30);
}

void needlemanWunsch::thread_orig1_addr_49_gep_fu_1392_p3() {
    orig1_addr_49_gep_fu_1392_p3 =  (sc_lv<7>) (ap_const_lv64_31);
}

void needlemanWunsch::thread_orig1_addr_4_gep_fu_576_p3() {
    orig1_addr_4_gep_fu_576_p3 =  (sc_lv<7>) (ap_const_lv64_4);
}

void needlemanWunsch::thread_orig1_addr_50_gep_fu_1408_p3() {
    orig1_addr_50_gep_fu_1408_p3 =  (sc_lv<7>) (ap_const_lv64_32);
}

void needlemanWunsch::thread_orig1_addr_51_gep_fu_1424_p3() {
    orig1_addr_51_gep_fu_1424_p3 =  (sc_lv<7>) (ap_const_lv64_33);
}

void needlemanWunsch::thread_orig1_addr_52_gep_fu_1440_p3() {
    orig1_addr_52_gep_fu_1440_p3 =  (sc_lv<7>) (ap_const_lv64_34);
}

void needlemanWunsch::thread_orig1_addr_53_gep_fu_1464_p3() {
    orig1_addr_53_gep_fu_1464_p3 =  (sc_lv<7>) (ap_const_lv64_35);
}

void needlemanWunsch::thread_orig1_addr_54_gep_fu_1480_p3() {
    orig1_addr_54_gep_fu_1480_p3 =  (sc_lv<7>) (ap_const_lv64_36);
}

void needlemanWunsch::thread_orig1_addr_55_gep_fu_1496_p3() {
    orig1_addr_55_gep_fu_1496_p3 =  (sc_lv<7>) (ap_const_lv64_37);
}

void needlemanWunsch::thread_orig1_addr_56_gep_fu_1512_p3() {
    orig1_addr_56_gep_fu_1512_p3 =  (sc_lv<7>) (ap_const_lv64_38);
}

void needlemanWunsch::thread_orig1_addr_57_gep_fu_1536_p3() {
    orig1_addr_57_gep_fu_1536_p3 =  (sc_lv<7>) (ap_const_lv64_39);
}

void needlemanWunsch::thread_orig1_addr_58_gep_fu_1552_p3() {
    orig1_addr_58_gep_fu_1552_p3 =  (sc_lv<7>) (ap_const_lv64_3A);
}

void needlemanWunsch::thread_orig1_addr_59_gep_fu_1568_p3() {
    orig1_addr_59_gep_fu_1568_p3 =  (sc_lv<7>) (ap_const_lv64_3B);
}

void needlemanWunsch::thread_orig1_addr_5_gep_fu_600_p3() {
    orig1_addr_5_gep_fu_600_p3 =  (sc_lv<7>) (ap_const_lv64_5);
}

void needlemanWunsch::thread_orig1_addr_60_gep_fu_1584_p3() {
    orig1_addr_60_gep_fu_1584_p3 =  (sc_lv<7>) (ap_const_lv64_3C);
}

void needlemanWunsch::thread_orig1_addr_61_gep_fu_1608_p3() {
    orig1_addr_61_gep_fu_1608_p3 =  (sc_lv<7>) (ap_const_lv64_3D);
}

void needlemanWunsch::thread_orig1_addr_62_gep_fu_1624_p3() {
    orig1_addr_62_gep_fu_1624_p3 =  (sc_lv<7>) (ap_const_lv64_3E);
}

void needlemanWunsch::thread_orig1_addr_63_gep_fu_1640_p3() {
    orig1_addr_63_gep_fu_1640_p3 =  (sc_lv<7>) (ap_const_lv64_3F);
}

void needlemanWunsch::thread_orig1_addr_64_gep_fu_1656_p3() {
    orig1_addr_64_gep_fu_1656_p3 =  (sc_lv<7>) (ap_const_lv64_40);
}

void needlemanWunsch::thread_orig1_addr_65_gep_fu_1680_p3() {
    orig1_addr_65_gep_fu_1680_p3 =  (sc_lv<7>) (ap_const_lv64_41);
}

void needlemanWunsch::thread_orig1_addr_66_gep_fu_1696_p3() {
    orig1_addr_66_gep_fu_1696_p3 =  (sc_lv<7>) (ap_const_lv64_42);
}

void needlemanWunsch::thread_orig1_addr_67_gep_fu_1712_p3() {
    orig1_addr_67_gep_fu_1712_p3 =  (sc_lv<7>) (ap_const_lv64_43);
}

void needlemanWunsch::thread_orig1_addr_68_gep_fu_1728_p3() {
    orig1_addr_68_gep_fu_1728_p3 =  (sc_lv<7>) (ap_const_lv64_44);
}

void needlemanWunsch::thread_orig1_addr_69_gep_fu_1752_p3() {
    orig1_addr_69_gep_fu_1752_p3 =  (sc_lv<7>) (ap_const_lv64_45);
}

void needlemanWunsch::thread_orig1_addr_6_gep_fu_616_p3() {
    orig1_addr_6_gep_fu_616_p3 =  (sc_lv<7>) (ap_const_lv64_6);
}

void needlemanWunsch::thread_orig1_addr_70_gep_fu_1768_p3() {
    orig1_addr_70_gep_fu_1768_p3 =  (sc_lv<7>) (ap_const_lv64_46);
}

void needlemanWunsch::thread_orig1_addr_71_gep_fu_1784_p3() {
    orig1_addr_71_gep_fu_1784_p3 =  (sc_lv<7>) (ap_const_lv64_47);
}

void needlemanWunsch::thread_orig1_addr_72_gep_fu_1800_p3() {
    orig1_addr_72_gep_fu_1800_p3 =  (sc_lv<7>) (ap_const_lv64_48);
}

void needlemanWunsch::thread_orig1_addr_73_gep_fu_1824_p3() {
    orig1_addr_73_gep_fu_1824_p3 =  (sc_lv<7>) (ap_const_lv64_49);
}

void needlemanWunsch::thread_orig1_addr_74_gep_fu_1840_p3() {
    orig1_addr_74_gep_fu_1840_p3 =  (sc_lv<7>) (ap_const_lv64_4A);
}

void needlemanWunsch::thread_orig1_addr_75_gep_fu_1856_p3() {
    orig1_addr_75_gep_fu_1856_p3 =  (sc_lv<7>) (ap_const_lv64_4B);
}

void needlemanWunsch::thread_orig1_addr_76_gep_fu_1872_p3() {
    orig1_addr_76_gep_fu_1872_p3 =  (sc_lv<7>) (ap_const_lv64_4C);
}

void needlemanWunsch::thread_orig1_addr_77_gep_fu_1896_p3() {
    orig1_addr_77_gep_fu_1896_p3 =  (sc_lv<7>) (ap_const_lv64_4D);
}

void needlemanWunsch::thread_orig1_addr_78_gep_fu_1912_p3() {
    orig1_addr_78_gep_fu_1912_p3 =  (sc_lv<7>) (ap_const_lv64_4E);
}

void needlemanWunsch::thread_orig1_addr_79_gep_fu_1928_p3() {
    orig1_addr_79_gep_fu_1928_p3 =  (sc_lv<7>) (ap_const_lv64_4F);
}

void needlemanWunsch::thread_orig1_addr_7_gep_fu_632_p3() {
    orig1_addr_7_gep_fu_632_p3 =  (sc_lv<7>) (ap_const_lv64_7);
}

void needlemanWunsch::thread_orig1_addr_80_gep_fu_1944_p3() {
    orig1_addr_80_gep_fu_1944_p3 =  (sc_lv<7>) (ap_const_lv64_50);
}

void needlemanWunsch::thread_orig1_addr_81_gep_fu_1968_p3() {
    orig1_addr_81_gep_fu_1968_p3 =  (sc_lv<7>) (ap_const_lv64_51);
}

void needlemanWunsch::thread_orig1_addr_82_gep_fu_1984_p3() {
    orig1_addr_82_gep_fu_1984_p3 =  (sc_lv<7>) (ap_const_lv64_52);
}

void needlemanWunsch::thread_orig1_addr_83_gep_fu_2000_p3() {
    orig1_addr_83_gep_fu_2000_p3 =  (sc_lv<7>) (ap_const_lv64_53);
}

void needlemanWunsch::thread_orig1_addr_84_gep_fu_2016_p3() {
    orig1_addr_84_gep_fu_2016_p3 =  (sc_lv<7>) (ap_const_lv64_54);
}

void needlemanWunsch::thread_orig1_addr_85_gep_fu_2040_p3() {
    orig1_addr_85_gep_fu_2040_p3 =  (sc_lv<7>) (ap_const_lv64_55);
}

void needlemanWunsch::thread_orig1_addr_86_gep_fu_2056_p3() {
    orig1_addr_86_gep_fu_2056_p3 =  (sc_lv<7>) (ap_const_lv64_56);
}

void needlemanWunsch::thread_orig1_addr_87_gep_fu_2072_p3() {
    orig1_addr_87_gep_fu_2072_p3 =  (sc_lv<7>) (ap_const_lv64_57);
}

void needlemanWunsch::thread_orig1_addr_88_gep_fu_2088_p3() {
    orig1_addr_88_gep_fu_2088_p3 =  (sc_lv<7>) (ap_const_lv64_58);
}

void needlemanWunsch::thread_orig1_addr_89_gep_fu_2112_p3() {
    orig1_addr_89_gep_fu_2112_p3 =  (sc_lv<7>) (ap_const_lv64_59);
}

void needlemanWunsch::thread_orig1_addr_8_gep_fu_648_p3() {
    orig1_addr_8_gep_fu_648_p3 =  (sc_lv<7>) (ap_const_lv64_8);
}

void needlemanWunsch::thread_orig1_addr_90_gep_fu_2128_p3() {
    orig1_addr_90_gep_fu_2128_p3 =  (sc_lv<7>) (ap_const_lv64_5A);
}

void needlemanWunsch::thread_orig1_addr_91_gep_fu_2144_p3() {
    orig1_addr_91_gep_fu_2144_p3 =  (sc_lv<7>) (ap_const_lv64_5B);
}

void needlemanWunsch::thread_orig1_addr_92_gep_fu_2160_p3() {
    orig1_addr_92_gep_fu_2160_p3 =  (sc_lv<7>) (ap_const_lv64_5C);
}

void needlemanWunsch::thread_orig1_addr_93_gep_fu_2184_p3() {
    orig1_addr_93_gep_fu_2184_p3 =  (sc_lv<7>) (ap_const_lv64_5D);
}

void needlemanWunsch::thread_orig1_addr_94_gep_fu_2200_p3() {
    orig1_addr_94_gep_fu_2200_p3 =  (sc_lv<7>) (ap_const_lv64_5E);
}

void needlemanWunsch::thread_orig1_addr_95_gep_fu_2216_p3() {
    orig1_addr_95_gep_fu_2216_p3 =  (sc_lv<7>) (ap_const_lv64_5F);
}

void needlemanWunsch::thread_orig1_addr_96_gep_fu_2232_p3() {
    orig1_addr_96_gep_fu_2232_p3 =  (sc_lv<7>) (ap_const_lv64_60);
}

void needlemanWunsch::thread_orig1_addr_97_gep_fu_2256_p3() {
    orig1_addr_97_gep_fu_2256_p3 =  (sc_lv<7>) (ap_const_lv64_61);
}

void needlemanWunsch::thread_orig1_addr_98_gep_fu_2272_p3() {
    orig1_addr_98_gep_fu_2272_p3 =  (sc_lv<7>) (ap_const_lv64_62);
}

void needlemanWunsch::thread_orig1_addr_99_gep_fu_2288_p3() {
    orig1_addr_99_gep_fu_2288_p3 =  (sc_lv<7>) (ap_const_lv64_63);
}

void needlemanWunsch::thread_orig1_addr_9_gep_fu_672_p3() {
    orig1_addr_9_gep_fu_672_p3 =  (sc_lv<7>) (ap_const_lv64_9);
}

void needlemanWunsch::thread_orig1_addr_gep_fu_504_p3() {
    orig1_addr_gep_fu_504_p3 =  (sc_lv<7>) (ap_const_lv64_0);
}

void needlemanWunsch::thread_orig1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        orig1_address0 = orig1_addr_47_reg_21433.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read()))) {
        orig1_address0 = orig1_addr_41_reg_21360.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read()))) {
        orig1_address0 = orig1_addr_35_reg_21281.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read()))) {
        orig1_address0 = orig1_addr_29_reg_21207.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read()))) {
        orig1_address0 = orig1_addr_23_reg_21128.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read()))) {
        orig1_address0 = orig1_addr_17_reg_21054.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read()))) {
        orig1_address0 = orig1_addr_11_reg_20975.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read()))) {
        orig1_address0 = orig1_addr_5_reg_20901.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read()))) {
        orig1_address0 = orig1_addr_3_reg_20872.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read()))) {
        orig1_address0 = orig1_addr_1_reg_20848.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read()))) {
        orig1_address0 = orig1_addr_99_reg_22110.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read()))) {
        orig1_address0 = orig1_addr_97_reg_22087.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read()))) {
        orig1_address0 = orig1_addr_96_reg_22070.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        orig1_address0 = orig1_addr_95_reg_22058.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read()))) {
        orig1_address0 = orig1_addr_94_reg_22046.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read()))) {
        orig1_address0 = orig1_addr_93_reg_22034.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read()))) {
        orig1_address0 = orig1_addr_92_reg_22017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read()))) {
        orig1_address0 = orig1_addr_91_reg_22005.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read()))) {
        orig1_address0 = orig1_addr_90_reg_21993.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read()))) {
        orig1_address0 = orig1_addr_89_reg_21981.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read()))) {
        orig1_address0 = orig1_addr_88_reg_21964.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read()))) {
        orig1_address0 = orig1_addr_87_reg_21952.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read()))) {
        orig1_address0 = orig1_addr_86_reg_21940.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read()))) {
        orig1_address0 = orig1_addr_85_reg_21928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read()))) {
        orig1_address0 = orig1_addr_84_reg_21911.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read()))) {
        orig1_address0 = orig1_addr_83_reg_21899.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read()))) {
        orig1_address0 = orig1_addr_82_reg_21887.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read()))) {
        orig1_address0 = orig1_addr_81_reg_21875.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read()))) {
        orig1_address0 = orig1_addr_80_reg_21858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read()))) {
        orig1_address0 = orig1_addr_79_reg_21846.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read()))) {
        orig1_address0 = orig1_addr_78_reg_21834.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read()))) {
        orig1_address0 = orig1_addr_77_reg_21822.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read()))) {
        orig1_address0 = orig1_addr_76_reg_21805.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read()))) {
        orig1_address0 = orig1_addr_75_reg_21793.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read()))) {
        orig1_address0 = orig1_addr_74_reg_21781.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read()))) {
        orig1_address0 = orig1_addr_73_reg_21769.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read()))) {
        orig1_address0 = orig1_addr_72_reg_21752.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_50.read()))) {
        orig1_address0 = orig1_addr_70_reg_21729.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read()))) {
        orig1_address0 = orig1_addr_69_reg_21717.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_48.read()))) {
        orig1_address0 = orig1_addr_67_reg_21689.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read()))) {
        orig1_address0 = orig1_addr_66_reg_21677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read()))) {
        orig1_address0 = orig1_addr_64_reg_21649.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read()))) {
        orig1_address0 = orig1_addr_63_reg_21637.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read()))) {
        orig1_address0 = orig1_addr_61_reg_21614.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read()))) {
        orig1_address0 = orig1_addr_60_reg_21597.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read()))) {
        orig1_address0 = orig1_addr_58_reg_21574.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read()))) {
        orig1_address0 = orig1_addr_57_reg_21562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read()))) {
        orig1_address0 = orig1_addr_55_reg_21534.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read()))) {
        orig1_address0 = orig1_addr_54_reg_21522.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read()))) {
        orig1_address0 = orig1_addr_52_reg_21494.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read()))) {
        orig1_address0 = orig1_addr_51_reg_21482.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())))) {
        orig1_address0 = orig1_addr_49_reg_21460.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        orig1_address0 = orig1_addr_48_reg_21445.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read()))) {
        orig1_address0 = orig1_addr_46_reg_21422.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read())))) {
        orig1_address0 = orig1_addr_45_reg_21411.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_32.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read())))) {
        orig1_address0 = orig1_addr_43_reg_21384.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read()))) {
        orig1_address0 = orig1_addr_42_reg_21372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_30.read()))) {
        orig1_address0 = orig1_addr_40_reg_21343.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read())))) {
        orig1_address0 = orig1_addr_39_reg_21332.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_28.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read())))) {
        orig1_address0 = orig1_addr_37_reg_21310.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read()))) {
        orig1_address0 = orig1_addr_36_reg_21293.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_26.read()))) {
        orig1_address0 = orig1_addr_34_reg_21269.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read())))) {
        orig1_address0 = orig1_addr_33_reg_21258.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read())))) {
        orig1_address0 = orig1_addr_31_reg_21231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read()))) {
        orig1_address0 = orig1_addr_30_reg_21219.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read()))) {
        orig1_address0 = orig1_addr_28_reg_21190.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read())))) {
        orig1_address0 = orig1_addr_27_reg_21179.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_20.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read())))) {
        orig1_address0 = orig1_addr_25_reg_21157.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read()))) {
        orig1_address0 = orig1_addr_24_reg_21140.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read()))) {
        orig1_address0 = orig1_addr_22_reg_21116.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read())))) {
        orig1_address0 = orig1_addr_21_reg_21105.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read())))) {
        orig1_address0 = orig1_addr_19_reg_21078.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        orig1_address0 = orig1_addr_18_reg_21066.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        orig1_address0 = orig1_addr_16_reg_21037.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read())))) {
        orig1_address0 = orig1_addr_15_reg_21026.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read())))) {
        orig1_address0 = orig1_addr_13_reg_21004.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        orig1_address0 = orig1_addr_12_reg_20987.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        orig1_address0 = orig1_addr_10_reg_20963.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read())))) {
        orig1_address0 = orig1_addr_9_reg_20952.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read())))) {
        orig1_address0 = orig1_addr_7_reg_20925.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        orig1_address0 = orig1_addr_6_reg_20913.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        orig1_address0 = orig1_addr_4_reg_20884.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        orig1_address0 = orig1_addr_2_reg_20860.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        orig1_address0 = orig1_addr_reg_20831.read();
    } else {
        orig1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void needlemanWunsch::thread_orig1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        orig1_address1 = orig1_addr_99_reg_22110.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        orig1_address1 = orig1_addr_97_reg_22087.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read()))) {
        orig1_address1 = orig1_addr_96_reg_22070.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read()))) {
        orig1_address1 = orig1_addr_95_reg_22058.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read()))) {
        orig1_address1 = orig1_addr_94_reg_22046.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read()))) {
        orig1_address1 = orig1_addr_93_reg_22034.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read()))) {
        orig1_address1 = orig1_addr_92_reg_22017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read()))) {
        orig1_address1 = orig1_addr_91_reg_22005.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read()))) {
        orig1_address1 = orig1_addr_90_reg_21993.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read()))) {
        orig1_address1 = orig1_addr_89_reg_21981.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read()))) {
        orig1_address1 = orig1_addr_88_reg_21964.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read()))) {
        orig1_address1 = orig1_addr_87_reg_21952.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read()))) {
        orig1_address1 = orig1_addr_86_reg_21940.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read()))) {
        orig1_address1 = orig1_addr_85_reg_21928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read()))) {
        orig1_address1 = orig1_addr_84_reg_21911.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read()))) {
        orig1_address1 = orig1_addr_83_reg_21899.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read()))) {
        orig1_address1 = orig1_addr_82_reg_21887.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read()))) {
        orig1_address1 = orig1_addr_81_reg_21875.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read()))) {
        orig1_address1 = orig1_addr_80_reg_21858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read()))) {
        orig1_address1 = orig1_addr_79_reg_21846.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read()))) {
        orig1_address1 = orig1_addr_78_reg_21834.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read()))) {
        orig1_address1 = orig1_addr_77_reg_21822.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read()))) {
        orig1_address1 = orig1_addr_76_reg_21805.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read()))) {
        orig1_address1 = orig1_addr_75_reg_21793.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read()))) {
        orig1_address1 = orig1_addr_74_reg_21781.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read()))) {
        orig1_address1 = orig1_addr_73_reg_21769.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read()))) {
        orig1_address1 = orig1_addr_72_reg_21752.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read()))) {
        orig1_address1 = orig1_addr_70_reg_21729.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read()))) {
        orig1_address1 = orig1_addr_69_reg_21717.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read()))) {
        orig1_address1 = orig1_addr_67_reg_21689.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read()))) {
        orig1_address1 = orig1_addr_66_reg_21677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read()))) {
        orig1_address1 = orig1_addr_64_reg_21649.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read()))) {
        orig1_address1 = orig1_addr_63_reg_21637.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read()))) {
        orig1_address1 = orig1_addr_61_reg_21614.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read()))) {
        orig1_address1 = orig1_addr_60_reg_21597.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read()))) {
        orig1_address1 = orig1_addr_58_reg_21574.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read()))) {
        orig1_address1 = orig1_addr_57_reg_21562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read()))) {
        orig1_address1 = orig1_addr_55_reg_21534.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        orig1_address1 = orig1_addr_54_reg_21522.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        orig1_address1 = orig1_addr_52_reg_21494.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        orig1_address1 = orig1_addr_51_reg_21482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read()))) {
        orig1_address1 = orig1_addr_46_reg_21422.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read()))) {
        orig1_address1 = orig1_addr_42_reg_21372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read()))) {
        orig1_address1 = orig1_addr_40_reg_21343.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read()))) {
        orig1_address1 = orig1_addr_36_reg_21293.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read()))) {
        orig1_address1 = orig1_addr_34_reg_21269.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read()))) {
        orig1_address1 = orig1_addr_30_reg_21219.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read()))) {
        orig1_address1 = orig1_addr_28_reg_21190.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read()))) {
        orig1_address1 = orig1_addr_24_reg_21140.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read()))) {
        orig1_address1 = orig1_addr_22_reg_21116.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read()))) {
        orig1_address1 = orig1_addr_18_reg_21066.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read()))) {
        orig1_address1 = orig1_addr_16_reg_21037.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read()))) {
        orig1_address1 = orig1_addr_12_reg_20987.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read()))) {
        orig1_address1 = orig1_addr_10_reg_20963.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read()))) {
        orig1_address1 = orig1_addr_6_reg_20913.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read()))) {
        orig1_address1 = orig1_addr_4_reg_20884.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read()))) {
        orig1_address1 = orig1_addr_2_reg_20860.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read()))) {
        orig1_address1 = orig1_addr_reg_20831.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read())))) {
        orig1_address1 = orig1_addr_98_reg_22099.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_50.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read())))) {
        orig1_address1 = orig1_addr_71_reg_21741.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_48.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read())))) {
        orig1_address1 = orig1_addr_68_reg_21701.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read())))) {
        orig1_address1 = orig1_addr_65_reg_21666.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read())))) {
        orig1_address1 = orig1_addr_62_reg_21626.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read())))) {
        orig1_address1 = orig1_addr_59_reg_21586.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read())))) {
        orig1_address1 = orig1_addr_56_reg_21546.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())))) {
        orig1_address1 = orig1_addr_53_reg_21511.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())))) {
        orig1_address1 = orig1_addr_50_reg_21471.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read()))) {
        orig1_address1 = orig1_addr_47_reg_21433.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_32.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read())))) {
        orig1_address1 = orig1_addr_44_reg_21395.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_30.read()))) {
        orig1_address1 = orig1_addr_41_reg_21360.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_28.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read())))) {
        orig1_address1 = orig1_addr_38_reg_21321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_26.read()))) {
        orig1_address1 = orig1_addr_35_reg_21281.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read())))) {
        orig1_address1 = orig1_addr_32_reg_21242.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read()))) {
        orig1_address1 = orig1_addr_29_reg_21207.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_20.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read())))) {
        orig1_address1 = orig1_addr_26_reg_21168.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read()))) {
        orig1_address1 = orig1_addr_23_reg_21128.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read())))) {
        orig1_address1 = orig1_addr_20_reg_21089.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        orig1_address1 = orig1_addr_17_reg_21054.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read())))) {
        orig1_address1 = orig1_addr_14_reg_21015.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        orig1_address1 = orig1_addr_11_reg_20975.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read())))) {
        orig1_address1 = orig1_addr_8_reg_20936.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        orig1_address1 = orig1_addr_5_reg_20901.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        orig1_address1 = orig1_addr_3_reg_20872.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        orig1_address1 = orig1_addr_1_reg_20848.read();
    } else {
        orig1_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void needlemanWunsch::thread_orig1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
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
          !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && 
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
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
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
          !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && 
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
        orig1_d0 = prev_orig_out_2_i_48_reg_30229.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        orig1_d0 = prev_orig_out_2_i_47_reg_30114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        orig1_d0 = prev_orig_out_2_i_46_reg_29995.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read()))) {
        orig1_d0 = prev_orig_out_2_i_44_reg_29761.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read()))) {
        orig1_d0 = prev_orig_out_2_i_42_reg_29530.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read()))) {
        orig1_d0 = prev_orig_out_2_i_40_reg_29291.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read()))) {
        orig1_d0 = prev_orig_out_2_i_38_reg_29060.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read()))) {
        orig1_d0 = prev_orig_out_2_i_36_reg_28819.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read()))) {
        orig1_d0 = prev_orig_out_2_i_34_reg_28585.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read()))) {
        orig1_d0 = prev_orig_out_2_i_32_reg_28349.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read()))) {
        orig1_d0 = prev_orig_out_2_i_30_reg_28113.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read()))) {
        orig1_d0 = prev_orig_out_2_i_28_reg_27880.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read()))) {
        orig1_d0 = prev_orig_out_2_i_26_reg_27642.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read()))) {
        orig1_d0 = prev_orig_out_2_i_24_reg_27403.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read()))) {
        orig1_d0 = prev_orig_out_2_i_22_reg_27164.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read()))) {
        orig1_d0 = prev_orig_out_2_i_20_reg_26923.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read()))) {
        orig1_d0 = prev_orig_out_2_i_18_reg_26677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read()))) {
        orig1_d0 = prev_orig_out_2_i_16_reg_26440.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read()))) {
        orig1_d0 = prev_orig_out_2_i_14_reg_26196.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read()))) {
        orig1_d0 = prev_orig_out_2_i_12_reg_25947.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read()))) {
        orig1_d0 = prev_orig_out_2_i_10_reg_25698.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read()))) {
        orig1_d0 = prev_orig_out_2_i_9_reg_25449.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read()))) {
        orig1_d0 = prev_orig_out_2_i_7_reg_25230.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read()))) {
        orig1_d0 = prev_orig_out_2_i_5_reg_25005.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read()))) {
        orig1_d0 = prev_orig_out_2_i_3_reg_24434.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read()))) {
        orig1_d0 = prev_orig_out_2_i_1_reg_23807.read();
    } else {
        orig1_d0 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void needlemanWunsch::thread_orig1_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        orig1_d1 = prev_orig_out_2_i_98_reg_35299.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        orig1_d1 = prev_orig_out_2_i_97_reg_35246.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        orig1_d1 = prev_orig_out_2_i_96_reg_35163.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read()))) {
        orig1_d1 = prev_orig_out_2_i_95_reg_35079.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read()))) {
        orig1_d1 = prev_orig_out_2_i_94_reg_34948.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read()))) {
        orig1_d1 = prev_orig_out_2_i_93_reg_34846.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read()))) {
        orig1_d1 = prev_orig_out_2_i_92_reg_34739.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read()))) {
        orig1_d1 = prev_orig_out_2_i_91_reg_34637.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read()))) {
        orig1_d1 = prev_orig_out_2_i_90_reg_34535.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read()))) {
        orig1_d1 = prev_orig_out_2_i_89_reg_34438.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read()))) {
        orig1_d1 = prev_orig_out_2_i_88_reg_34329.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read()))) {
        orig1_d1 = prev_orig_out_2_i_87_reg_34227.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read()))) {
        orig1_d1 = prev_orig_out_2_i_86_reg_34130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read()))) {
        orig1_d1 = prev_orig_out_2_i_85_reg_34026.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read()))) {
        orig1_d1 = prev_orig_out_2_i_84_reg_33922.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read()))) {
        orig1_d1 = prev_orig_out_2_i_83_reg_33820.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read()))) {
        orig1_d1 = prev_orig_out_2_i_82_reg_33718.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read()))) {
        orig1_d1 = prev_orig_out_2_i_81_reg_33621.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read()))) {
        orig1_d1 = prev_orig_out_2_i_80_reg_33522.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read()))) {
        orig1_d1 = prev_orig_out_2_i_79_reg_33413.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read()))) {
        orig1_d1 = prev_orig_out_2_i_78_reg_33311.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read()))) {
        orig1_d1 = prev_orig_out_2_i_77_reg_33202.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read()))) {
        orig1_d1 = prev_orig_out_2_i_76_reg_33095.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read()))) {
        orig1_d1 = prev_orig_out_2_i_75_reg_32998.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read()))) {
        orig1_d1 = prev_orig_out_2_i_74_reg_32894.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read()))) {
        orig1_d1 = prev_orig_out_2_i_73_reg_32785.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read()))) {
        orig1_d1 = prev_orig_out_2_i_72_reg_32683.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read()))) {
        orig1_d1 = prev_orig_out_2_i_71_reg_32586.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read()))) {
        orig1_d1 = prev_orig_out_2_i_70_reg_32487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read()))) {
        orig1_d1 = prev_orig_out_2_i_69_reg_32383.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read()))) {
        orig1_d1 = prev_orig_out_2_i_68_reg_32281.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read()))) {
        orig1_d1 = prev_orig_out_2_i_67_reg_32179.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read()))) {
        orig1_d1 = prev_orig_out_2_i_66_reg_32077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read()))) {
        orig1_d1 = prev_orig_out_2_i_65_reg_31975.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read()))) {
        orig1_d1 = prev_orig_out_2_i_64_reg_31873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read()))) {
        orig1_d1 = prev_orig_out_2_i_63_reg_31771.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read()))) {
        orig1_d1 = prev_orig_out_2_i_62_reg_31669.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read()))) {
        orig1_d1 = prev_orig_out_2_i_61_reg_31572.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read()))) {
        orig1_d1 = prev_orig_out_2_i_60_reg_31468.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read()))) {
        orig1_d1 = prev_orig_out_2_i_59_reg_31371.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read()))) {
        orig1_d1 = prev_orig_out_2_i_58_reg_31267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read()))) {
        orig1_d1 = prev_orig_out_2_i_57_reg_31160.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read()))) {
        orig1_d1 = prev_orig_out_2_i_56_reg_31053.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read()))) {
        orig1_d1 = prev_orig_out_2_i_55_reg_30951.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read()))) {
        orig1_d1 = prev_orig_out_2_i_54_reg_30844.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        orig1_d1 = prev_orig_out_2_i_53_reg_30742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        orig1_d1 = prev_orig_out_2_i_52_reg_30650.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        orig1_d1 = prev_orig_out_2_i_51_reg_30541.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        orig1_d1 = prev_orig_out_2_i_50_reg_30439.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        orig1_d1 = prev_orig_out_2_i_49_reg_30327.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read()))) {
        orig1_d1 = prev_orig_out_2_i_45_reg_29875.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        orig1_d1 = prev_orig_out_2_i_43_reg_29646.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read()))) {
        orig1_d1 = prev_orig_out_2_i_41_reg_29410.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read()))) {
        orig1_d1 = prev_orig_out_2_i_39_reg_29171.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read()))) {
        orig1_d1 = prev_orig_out_2_i_37_reg_28938.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read()))) {
        orig1_d1 = prev_orig_out_2_i_35_reg_28704.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read()))) {
        orig1_d1 = prev_orig_out_2_i_33_reg_28465.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read()))) {
        orig1_d1 = prev_orig_out_2_i_31_reg_28222.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read()))) {
        orig1_d1 = prev_orig_out_2_i_29_reg_27996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read()))) {
        orig1_d1 = prev_orig_out_2_i_27_reg_27763.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read()))) {
        orig1_d1 = prev_orig_out_2_i_25_reg_27517.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read()))) {
        orig1_d1 = prev_orig_out_2_i_23_reg_27283.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read()))) {
        orig1_d1 = prev_orig_out_2_i_21_reg_27044.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read()))) {
        orig1_d1 = prev_orig_out_2_i_19_reg_26803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read()))) {
        orig1_d1 = prev_orig_out_2_i_17_reg_26556.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read()))) {
        orig1_d1 = prev_orig_out_2_i_15_reg_26318.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read()))) {
        orig1_d1 = prev_orig_out_2_i_13_reg_26068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read()))) {
        orig1_d1 = prev_orig_out_2_i_11_reg_25819.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read()))) {
        orig1_d1 = prev_orig_out_2_i_s_reg_25570.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read()))) {
        orig1_d1 = prev_orig_out_2_i_8_reg_25334.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read()))) {
        orig1_d1 = prev_orig_out_2_i_6_reg_25114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read()))) {
        orig1_d1 = prev_orig_out_2_i_4_reg_24939.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read()))) {
        orig1_d1 = prev_orig_out_2_i_2_reg_23914.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read()))) {
        orig1_d1 = orig2_load_1_1_prev_orig_out_2_reg_23575.read();
    } else {
        orig1_d1 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void needlemanWunsch::thread_orig1_we0() {
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read())))) {
        orig1_we0 = ap_const_logic_1;
    } else {
        orig1_we0 = ap_const_logic_0;
    }
}

void needlemanWunsch::thread_orig1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it2.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        orig1_we1 = ap_const_logic_1;
    } else {
        orig1_we1 = ap_const_logic_0;
    }
}

}

