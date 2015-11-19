#include "needlemanWunsch.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void needlemanWunsch::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, tmp_fu_2962_p2.read()))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read()))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                     !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || 
                    (esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
                     esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read())))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read())) {
            ap_reg_ppiten_pp0_it2 = ap_reg_ppiten_pp0_it1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
            ap_reg_ppiten_pp0_it2 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it2.read()))) {
        max_orig_reg_2329 = max_orig_2_fu_20812_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        max_orig_reg_2329 = ap_const_lv20_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it2.read()))) {
        max_score_reg_2341 = max_score_2_fu_20818_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        max_score_reg_2341 = ap_const_lv32_FFFFFF9C;
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        prev_orig_out_reg_2317 = i_reg_23597.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        prev_orig_out_reg_2317 = ap_const_lv20_1;
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_20.read())))) {
        reg_2461 = score1_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                 !esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
                 !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) || 
                (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())))) {
        reg_2461 = score1_q1.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_30.read())))) {
        reg_2494 = orig1_q0.read();
    } else if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
                !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        reg_2494 = orig1_q1.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read())))) {
        reg_2503 = orig1_q0.read();
    } else if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        reg_2503 = orig1_q1.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        reg_2512 = orig1_q0.read();
    } else if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read())))) {
        reg_2512 = orig1_q1.read();
    }
    if (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read())) {
            reg_2525 = orig1_q0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) {
            reg_2525 = orig1_q1.read();
        }
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read())) || 
         (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read())))) {
        reg_2530 = score1_q0.read();
    } else if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        reg_2530 = score1_q1.read();
    }
    if (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_28.read())) {
            reg_2539 = orig1_q0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) {
            reg_2539 = orig1_q1.read();
        }
    }
    if (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read())) {
            reg_2548 = score1_q0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) {
            reg_2548 = score1_q1.read();
        }
    }
    if (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read())) {
            reg_2553 = orig1_q0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) {
            reg_2553 = orig1_q1.read();
        }
    }
    if (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_30.read())) {
            reg_2562 = score1_q0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) {
            reg_2562 = score1_q1.read();
        }
    }
    if (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read())) {
            reg_2567 = orig1_q0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) {
            reg_2567 = orig1_q1.read();
        }
    }
    if (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read())) {
            reg_2576 = score1_q0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read())) {
            reg_2576 = score1_q1.read();
        }
    }
    if (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read())) {
            reg_2585 = score1_q0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read())) {
            reg_2585 = score1_q1.read();
        }
    }
    if (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_48.read())) {
            reg_2594 = score1_q0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read())) {
            reg_2594 = score1_q1.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
        ap_reg_ppstg_tmp_1_reg_22120_pp0_it1 = tmp_1_reg_22120.read();
        ap_reg_ppstg_tmp_reg_22116_pp0_it1 = tmp_reg_22116.read();
        ap_reg_ppstg_tmp_reg_22116_pp0_it2 = ap_reg_ppstg_tmp_reg_22116_pp0_it1.read();
        tmp_reg_22116 = tmp_fu_2962_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) {
        ap_reg_ppstg_tmp_47_57_reg_24239_pp0_it1 = tmp_47_57_reg_24239.read();
        ap_reg_ppstg_tmp_47_59_reg_24244_pp0_it1 = tmp_47_59_reg_24244.read();
        ap_reg_ppstg_tmp_47_60_reg_24249_pp0_it1 = tmp_47_60_reg_24249.read();
        ap_reg_ppstg_tmp_47_61_reg_24254_pp0_it1 = tmp_47_61_reg_24254.read();
        ap_reg_ppstg_tmp_47_62_reg_24259_pp0_it1 = tmp_47_62_reg_24259.read();
        ap_reg_ppstg_tmp_47_63_reg_24264_pp0_it1 = tmp_47_63_reg_24264.read();
        ap_reg_ppstg_tmp_47_64_reg_24269_pp0_it1 = tmp_47_64_reg_24269.read();
        ap_reg_ppstg_tmp_47_65_reg_24274_pp0_it1 = tmp_47_65_reg_24274.read();
        ap_reg_ppstg_tmp_47_66_reg_24279_pp0_it1 = tmp_47_66_reg_24279.read();
        ap_reg_ppstg_tmp_47_67_reg_24284_pp0_it1 = tmp_47_67_reg_24284.read();
        ap_reg_ppstg_tmp_47_68_reg_24289_pp0_it1 = tmp_47_68_reg_24289.read();
        ap_reg_ppstg_tmp_47_69_reg_24294_pp0_it1 = tmp_47_69_reg_24294.read();
        ap_reg_ppstg_tmp_47_70_reg_24299_pp0_it1 = tmp_47_70_reg_24299.read();
        ap_reg_ppstg_tmp_47_71_reg_24304_pp0_it1 = tmp_47_71_reg_24304.read();
        ap_reg_ppstg_tmp_47_74_reg_24309_pp0_it1 = tmp_47_74_reg_24309.read();
        ap_reg_ppstg_tmp_47_75_reg_24314_pp0_it1 = tmp_47_75_reg_24314.read();
        ap_reg_ppstg_tmp_47_76_reg_24319_pp0_it1 = tmp_47_76_reg_24319.read();
        ap_reg_ppstg_tmp_47_77_reg_24324_pp0_it1 = tmp_47_77_reg_24324.read();
        ap_reg_ppstg_tmp_47_78_reg_24329_pp0_it1 = tmp_47_78_reg_24329.read();
        ap_reg_ppstg_tmp_47_79_reg_24334_pp0_it1 = tmp_47_79_reg_24334.read();
        ap_reg_ppstg_tmp_47_80_reg_24339_pp0_it1 = tmp_47_80_reg_24339.read();
        ap_reg_ppstg_tmp_47_81_reg_24344_pp0_it1 = tmp_47_81_reg_24344.read();
        ap_reg_ppstg_tmp_47_82_reg_24349_pp0_it1 = tmp_47_82_reg_24349.read();
        ap_reg_ppstg_tmp_47_83_reg_24354_pp0_it1 = tmp_47_83_reg_24354.read();
        ap_reg_ppstg_tmp_47_84_reg_24359_pp0_it1 = tmp_47_84_reg_24359.read();
        ap_reg_ppstg_tmp_47_85_reg_24364_pp0_it1 = tmp_47_85_reg_24364.read();
        ap_reg_ppstg_tmp_47_86_reg_24369_pp0_it1 = tmp_47_86_reg_24369.read();
        ap_reg_ppstg_tmp_47_87_reg_24374_pp0_it1 = tmp_47_87_reg_24374.read();
        ap_reg_ppstg_tmp_47_88_reg_24379_pp0_it1 = tmp_47_88_reg_24379.read();
        ap_reg_ppstg_tmp_47_89_reg_24384_pp0_it1 = tmp_47_89_reg_24384.read();
        ap_reg_ppstg_tmp_47_90_reg_24389_pp0_it1 = tmp_47_90_reg_24389.read();
        ap_reg_ppstg_tmp_47_91_reg_24394_pp0_it1 = tmp_47_91_reg_24394.read();
        ap_reg_ppstg_tmp_47_92_reg_24399_pp0_it1 = tmp_47_92_reg_24399.read();
        ap_reg_ppstg_tmp_47_93_reg_24404_pp0_it1 = tmp_47_93_reg_24404.read();
        ap_reg_ppstg_tmp_47_94_reg_24409_pp0_it1 = tmp_47_94_reg_24409.read();
        ap_reg_ppstg_tmp_47_95_reg_24414_pp0_it1 = tmp_47_95_reg_24414.read();
        ap_reg_ppstg_tmp_47_96_reg_24419_pp0_it1 = tmp_47_96_reg_24419.read();
        ap_reg_ppstg_tmp_47_97_reg_24424_pp0_it1 = tmp_47_97_reg_24424.read();
        ap_reg_ppstg_tmp_47_98_reg_24429_pp0_it1 = tmp_47_98_reg_24429.read();
        ap_reg_ppstg_tmp_56_55_reg_24696_pp0_it1 = tmp_56_55_reg_24696.read();
        ap_reg_ppstg_tmp_56_56_reg_24701_pp0_it1 = tmp_56_56_reg_24701.read();
        ap_reg_ppstg_tmp_56_57_reg_24706_pp0_it1 = tmp_56_57_reg_24706.read();
        ap_reg_ppstg_tmp_56_59_reg_24711_pp0_it1 = tmp_56_59_reg_24711.read();
        ap_reg_ppstg_tmp_56_60_reg_24716_pp0_it1 = tmp_56_60_reg_24716.read();
        ap_reg_ppstg_tmp_56_61_reg_24721_pp0_it1 = tmp_56_61_reg_24721.read();
        ap_reg_ppstg_tmp_56_62_reg_24726_pp0_it1 = tmp_56_62_reg_24726.read();
        ap_reg_ppstg_tmp_56_63_reg_24731_pp0_it1 = tmp_56_63_reg_24731.read();
        ap_reg_ppstg_tmp_56_64_reg_24736_pp0_it1 = tmp_56_64_reg_24736.read();
        ap_reg_ppstg_tmp_56_65_reg_24741_pp0_it1 = tmp_56_65_reg_24741.read();
        ap_reg_ppstg_tmp_56_66_reg_24746_pp0_it1 = tmp_56_66_reg_24746.read();
        ap_reg_ppstg_tmp_56_67_reg_24751_pp0_it1 = tmp_56_67_reg_24751.read();
        ap_reg_ppstg_tmp_56_68_reg_24756_pp0_it1 = tmp_56_68_reg_24756.read();
        ap_reg_ppstg_tmp_56_69_reg_24761_pp0_it1 = tmp_56_69_reg_24761.read();
        ap_reg_ppstg_tmp_56_70_reg_24766_pp0_it1 = tmp_56_70_reg_24766.read();
        ap_reg_ppstg_tmp_56_71_reg_24771_pp0_it1 = tmp_56_71_reg_24771.read();
        ap_reg_ppstg_tmp_56_74_reg_24776_pp0_it1 = tmp_56_74_reg_24776.read();
        ap_reg_ppstg_tmp_56_75_reg_24781_pp0_it1 = tmp_56_75_reg_24781.read();
        ap_reg_ppstg_tmp_56_76_reg_24786_pp0_it1 = tmp_56_76_reg_24786.read();
        ap_reg_ppstg_tmp_56_77_reg_24791_pp0_it1 = tmp_56_77_reg_24791.read();
        ap_reg_ppstg_tmp_56_78_reg_24796_pp0_it1 = tmp_56_78_reg_24796.read();
        ap_reg_ppstg_tmp_56_79_reg_24801_pp0_it1 = tmp_56_79_reg_24801.read();
        ap_reg_ppstg_tmp_56_80_reg_24806_pp0_it1 = tmp_56_80_reg_24806.read();
        ap_reg_ppstg_tmp_56_81_reg_24811_pp0_it1 = tmp_56_81_reg_24811.read();
        ap_reg_ppstg_tmp_56_82_reg_24816_pp0_it1 = tmp_56_82_reg_24816.read();
        ap_reg_ppstg_tmp_56_83_reg_24821_pp0_it1 = tmp_56_83_reg_24821.read();
        ap_reg_ppstg_tmp_56_84_reg_24826_pp0_it1 = tmp_56_84_reg_24826.read();
        ap_reg_ppstg_tmp_56_85_reg_24831_pp0_it1 = tmp_56_85_reg_24831.read();
        ap_reg_ppstg_tmp_56_86_reg_24836_pp0_it1 = tmp_56_86_reg_24836.read();
        ap_reg_ppstg_tmp_56_87_reg_24841_pp0_it1 = tmp_56_87_reg_24841.read();
        ap_reg_ppstg_tmp_56_88_reg_24846_pp0_it1 = tmp_56_88_reg_24846.read();
        ap_reg_ppstg_tmp_56_89_reg_24851_pp0_it1 = tmp_56_89_reg_24851.read();
        ap_reg_ppstg_tmp_56_90_reg_24856_pp0_it1 = tmp_56_90_reg_24856.read();
        ap_reg_ppstg_tmp_56_91_reg_24861_pp0_it1 = tmp_56_91_reg_24861.read();
        ap_reg_ppstg_tmp_56_92_reg_24866_pp0_it1 = tmp_56_92_reg_24866.read();
        ap_reg_ppstg_tmp_56_93_reg_24871_pp0_it1 = tmp_56_93_reg_24871.read();
        ap_reg_ppstg_tmp_56_94_reg_24876_pp0_it1 = tmp_56_94_reg_24876.read();
        ap_reg_ppstg_tmp_56_95_reg_24881_pp0_it1 = tmp_56_95_reg_24881.read();
        ap_reg_ppstg_tmp_56_96_reg_24886_pp0_it1 = tmp_56_96_reg_24886.read();
        ap_reg_ppstg_tmp_56_97_reg_24891_pp0_it1 = tmp_56_97_reg_24891.read();
        ap_reg_ppstg_tmp_56_98_reg_24896_pp0_it1 = tmp_56_98_reg_24896.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) {
        ap_reg_ppstg_tmp_47_58_reg_23424_pp0_it1 = tmp_47_58_reg_23424.read();
        ap_reg_ppstg_tmp_56_58_reg_23485_pp0_it1 = tmp_56_58_reg_23485.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) {
        ap_reg_ppstg_tmp_47_72_reg_23646_pp0_it1 = tmp_47_72_reg_23646.read();
        ap_reg_ppstg_tmp_47_73_reg_23651_pp0_it1 = tmp_47_73_reg_23651.read();
        ap_reg_ppstg_tmp_56_72_reg_23718_pp0_it1 = tmp_56_72_reg_23718.read();
        ap_reg_ppstg_tmp_56_73_reg_23723_pp0_it1 = tmp_56_73_reg_23723.read();
    }
    if ((!(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        ap_reg_ppstg_tmp_5_reg_22360_pp0_it1 = tmp_5_reg_22360.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        diag_score_0_v_i1_cast_cast_reg_22728 = diag_score_0_v_i1_cast_cast_fu_3169_p3.read();
        tmp_114_reg_22744 = tmp_114_fu_3177_p1.read();
        tmp_122_reg_22768 = tmp_122_fu_3181_p1.read();
        tmp_21_reg_22750 = read_r_Dout_A.read().range(3, 2);
        tmp_22_reg_22756 = read_r_Dout_A.read().range(5, 4);
        tmp_23_reg_22762 = read_r_Dout_A.read().range(7, 6);
        tmp_245_reg_22792 = tmp_245_fu_3204_p2.read();
        tmp_246_reg_22797 = tmp_246_fu_3210_p2.read();
        tmp_25_reg_22774 = read_r_Dout_B.read().range(3, 2);
        tmp_26_reg_22780 = read_r_Dout_B.read().range(5, 4);
        tmp_27_reg_22786 = read_r_Dout_B.read().range(7, 6);
        tmp_47_1_reg_22734 = grp_fu_2609_p2.read();
        tmp_47_2_reg_22739 = grp_fu_2614_p2.read();
        tmp_5_reg_22360 = tmp_5_fu_3150_p2.read();
        tmp_80_reg_22266 = tmp_80_fu_3144_p1.read();
        tmp_8_reg_22722 = tmp_8_fu_3156_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        diag_score_0_v_i_cast_cast_reg_23053 = diag_score_0_v_i_cast_cast_fu_3330_p3.read();
        prev_score_out_0_op_i1_1_reg_22979 = prev_score_out_0_op_i1_1_fu_3296_p2.read();
        prev_score_out_8_1_reg_23059 = prev_score_out_8_1_fu_3344_p2.read();
        tmp_137_reg_23011 = tmp_137_fu_3322_p1.read();
        tmp_213_reg_23029 = tmp_213_fu_3326_p1.read();
        tmp_27_1_reg_22974 = tmp_27_1_fu_3289_p3.read();
        tmp_37_reg_23017 = read_r_Dout_A.read().range(3, 2);
        tmp_38_reg_23023 = read_r_Dout_A.read().range(5, 4);
        tmp_41_reg_23035 = read_r_Dout_B.read().range(3, 2);
        tmp_42_reg_23041 = read_r_Dout_B.read().range(5, 4);
        tmp_43_reg_23047 = read_r_Dout_B.read().range(7, 6);
        tmp_47_3_reg_23006 = grp_fu_2635_p2.read();
        tmp_48_1_reg_22986 = tmp_48_1_fu_3301_p2.read();
        tmp_49_1_reg_22991 = tmp_49_1_fu_3306_p2.read();
        tmp_52_1_reg_22996 = tmp_52_1_fu_3311_p2.read();
        tmp_53_1_reg_23001 = tmp_53_1_fu_3316_p2.read();
        tmp_56_3_reg_23067 = grp_fu_2640_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        i_reg_23597 = i_fu_3739_p2.read();
    }
    if ((!(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it2.read()))) {
        max_orig_1_reg_35252 = max_orig_1_fu_20724_p3.read();
        max_score_1_reg_35257 = max_score_1_fu_20731_p3.read();
        phitmp100_reg_35263 = phitmp100_fu_20739_p2.read();
        prev_score_out_0_op_i_98_reg_35268 = prev_score_out_0_op_i_98_fu_20744_p2.read();
        tmp_57_98_reg_35273 = tmp_57_98_fu_20749_p2.read();
        tmp_58_98_reg_35278 = tmp_58_98_fu_20754_p2.read();
        tmp_59_98_reg_35283 = tmp_59_98_fu_20759_p2.read();
        tmp_60_98_reg_35288 = tmp_60_98_fu_20764_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        or_cond1_i1_1_reg_23077 = or_cond1_i1_1_fu_3353_p2.read();
        or_cond_i1_1_reg_23072 = or_cond_i1_1_fu_3349_p2.read();
        prev_score_out_0_op_i1_1_diag_s_reg_23149 = prev_score_out_0_op_i1_1_diag_s_fu_3402_p3.read();
        prev_score_out_6_3_reg_23088 = prev_score_out_6_3_fu_3384_p2.read();
        score2_load_1_2_reg_23082 = score2_load_1_2_fu_3363_p3.read();
        tmp_117_reg_23144 = tmp_117_fu_3398_p2.read();
        tmp_214_reg_23096 = tmp_214_fu_3390_p1.read();
        tmp_215_reg_23120 = tmp_215_fu_3394_p1.read();
        tmp_45_reg_23102 = read_r_Dout_A.read().range(3, 2);
        tmp_46_reg_23108 = read_r_Dout_A.read().range(5, 4);
        tmp_47_reg_23114 = read_r_Dout_A.read().range(7, 6);
        tmp_49_reg_23126 = read_r_Dout_B.read().range(3, 2);
        tmp_50_reg_23132 = read_r_Dout_B.read().range(5, 4);
        tmp_51_reg_23138 = read_r_Dout_B.read().range(7, 6);
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        or_cond1_i1_2_reg_23272 = or_cond1_i1_2_fu_3491_p2.read();
        or_cond1_i_1_reg_23346 = or_cond1_i_1_fu_3530_p2.read();
        or_cond_i1_2_reg_23267 = or_cond_i1_2_fu_3487_p2.read();
        or_cond_i_1_reg_23341 = or_cond_i_1_fu_3526_p2.read();
        prev_score_out_2_i_1_reg_23351 = prev_score_out_2_i_1_fu_3540_p3.read();
        score2_load_1_3_reg_23277 = score2_load_1_3_fu_3501_p3.read();
        tmp_218_reg_23293 = tmp_218_fu_3518_p1.read();
        tmp_219_reg_23317 = tmp_219_fu_3522_p1.read();
        tmp_47_4_reg_23288 = tmp_47_4_fu_3514_p2.read();
        tmp_56_4_reg_23357 = tmp_56_4_fu_3547_p2.read();
        tmp_61_reg_23299 = read_r_Dout_A.read().range(3, 2);
        tmp_62_reg_23305 = read_r_Dout_A.read().range(5, 4);
        tmp_63_reg_23311 = read_r_Dout_A.read().range(7, 6);
        tmp_65_reg_23323 = read_r_Dout_B.read().range(3, 2);
        tmp_66_reg_23329 = read_r_Dout_B.read().range(5, 4);
        tmp_67_reg_23335 = read_r_Dout_B.read().range(7, 6);
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        or_cond1_i1_3_reg_23501 = or_cond1_i1_3_fu_3659_p2.read();
        or_cond1_i_2_reg_23586 = or_cond1_i_2_fu_3722_p2.read();
        or_cond_i1_3_reg_23496 = or_cond_i1_3_fu_3655_p2.read();
        or_cond_i_2_reg_23581 = or_cond_i_2_fu_3718_p2.read();
        orig2_load_1_1_prev_orig_out_2_reg_23575 = orig2_load_1_1_prev_orig_out_2_fu_3711_p3.read();
        orig2_load_1_1_reg_23490 = orig2_load_1_1_fu_3649_p3.read();
        prev_score_out_2_i_2_reg_23591 = prev_score_out_2_i_2_fu_3732_p3.read();
        prev_score_out_6_5_reg_23519 = prev_score_out_6_5_fu_3697_p2.read();
        score2_load_1_4_reg_23506 = score2_load_1_4_fu_3669_p3.read();
        tmp_222_reg_23527 = tmp_222_fu_3703_p1.read();
        tmp_223_reg_23551 = tmp_223_fu_3707_p1.read();
        tmp_27_4_reg_23512 = tmp_27_4_fu_3676_p3.read();
        tmp_77_reg_23533 = read_r_Dout_A.read().range(3, 2);
        tmp_78_reg_23539 = read_r_Dout_A.read().range(5, 4);
        tmp_79_reg_23545 = read_r_Dout_A.read().range(7, 6);
        tmp_81_reg_23557 = read_r_Dout_B.read().range(3, 2);
        tmp_82_reg_23563 = read_r_Dout_B.read().range(5, 4);
        tmp_83_reg_23569 = read_r_Dout_B.read().range(7, 6);
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        or_cond1_i1_4_reg_23740 = or_cond1_i1_4_fu_3845_p2.read();
        or_cond1_i_3_reg_23818 = or_cond1_i_3_fu_3905_p2.read();
        or_cond_i1_4_reg_23735 = or_cond_i1_4_fu_3841_p2.read();
        or_cond_i_3_reg_23813 = or_cond_i_3_fu_3901_p2.read();
        orig2_load_1_3_reg_23728 = orig2_load_1_3_fu_3834_p3.read();
        prev_orig_out_2_i_1_reg_23807 = prev_orig_out_2_i_1_fu_3895_p3.read();
        prev_score_out_2_i_3_reg_23823 = prev_score_out_2_i_3_fu_3915_p3.read();
        prev_score_out_6_6_reg_23751 = prev_score_out_6_6_fu_3876_p2.read();
        score2_load_1_5_reg_23745 = score2_load_1_5_fu_3855_p3.read();
        tmp_226_reg_23759 = tmp_226_fu_3882_p1.read();
        tmp_227_reg_23783 = tmp_227_fu_3886_p1.read();
        tmp_93_reg_23765 = read_r_Dout_A.read().range(3, 2);
        tmp_94_reg_23771 = read_r_Dout_A.read().range(5, 4);
        tmp_95_reg_23777 = read_r_Dout_A.read().range(7, 6);
        tmp_97_reg_23789 = read_r_Dout_B.read().range(3, 2);
        tmp_98_reg_23795 = read_r_Dout_B.read().range(5, 4);
        tmp_99_reg_23801 = read_r_Dout_B.read().range(7, 6);
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        or_cond1_i1_5_reg_23970 = or_cond1_i1_5_fu_4042_p2.read();
        or_cond1_i_4_reg_24445 = or_cond1_i_4_fu_4419_p2.read();
        or_cond_i1_5_reg_23965 = or_cond_i1_5_fu_4038_p2.read();
        or_cond_i_4_reg_24440 = or_cond_i_4_fu_4415_p2.read();
        orig2_load_1_5_reg_23958 = orig2_load_1_5_fu_4031_p3.read();
        prev_orig_out_2_i_3_reg_24434 = prev_orig_out_2_i_3_fu_4409_p3.read();
        prev_score_out_2_i_4_reg_24450 = prev_score_out_2_i_4_fu_4429_p3.read();
        prev_score_out_6_7_reg_23981 = prev_score_out_6_7_fu_4073_p2.read();
        score2_load_1_6_reg_23975 = score2_load_1_6_fu_4052_p3.read();
        tmp_47_10_reg_24004 = tmp_47_10_fu_4091_p2.read();
        tmp_47_11_reg_24009 = tmp_47_11_fu_4095_p2.read();
        tmp_47_12_reg_24014 = tmp_47_12_fu_4099_p2.read();
        tmp_47_13_reg_24019 = tmp_47_13_fu_4103_p2.read();
        tmp_47_14_reg_24024 = tmp_47_14_fu_4107_p2.read();
        tmp_47_15_reg_24029 = tmp_47_15_fu_4111_p2.read();
        tmp_47_16_reg_24034 = grp_fu_2609_p2.read();
        tmp_47_17_reg_24039 = grp_fu_2614_p2.read();
        tmp_47_18_reg_24044 = tmp_47_18_fu_4115_p2.read();
        tmp_47_19_reg_24049 = tmp_47_19_fu_4119_p2.read();
        tmp_47_20_reg_24054 = tmp_47_20_fu_4123_p2.read();
        tmp_47_21_reg_24059 = tmp_47_21_fu_4127_p2.read();
        tmp_47_22_reg_24064 = tmp_47_22_fu_4131_p2.read();
        tmp_47_23_reg_24069 = tmp_47_23_fu_4135_p2.read();
        tmp_47_24_reg_24074 = tmp_47_24_fu_4139_p2.read();
        tmp_47_25_reg_24079 = tmp_47_25_fu_4143_p2.read();
        tmp_47_26_reg_24084 = grp_fu_2635_p2.read();
        tmp_47_27_reg_24089 = tmp_47_27_fu_4147_p2.read();
        tmp_47_28_reg_24094 = tmp_47_28_fu_4151_p2.read();
        tmp_47_29_reg_24099 = tmp_47_29_fu_4155_p2.read();
        tmp_47_30_reg_24104 = tmp_47_30_fu_4159_p2.read();
        tmp_47_31_reg_24109 = tmp_47_31_fu_4163_p2.read();
        tmp_47_32_reg_24114 = tmp_47_32_fu_4167_p2.read();
        tmp_47_33_reg_24119 = tmp_47_33_fu_4171_p2.read();
        tmp_47_34_reg_24124 = tmp_47_34_fu_4175_p2.read();
        tmp_47_35_reg_24129 = tmp_47_35_fu_4179_p2.read();
        tmp_47_36_reg_24134 = tmp_47_36_fu_4183_p2.read();
        tmp_47_37_reg_24139 = tmp_47_37_fu_4187_p2.read();
        tmp_47_38_reg_24144 = tmp_47_38_fu_4191_p2.read();
        tmp_47_39_reg_24149 = tmp_47_39_fu_4195_p2.read();
        tmp_47_40_reg_24154 = tmp_47_40_fu_4199_p2.read();
        tmp_47_41_reg_24159 = tmp_47_41_fu_4203_p2.read();
        tmp_47_42_reg_24164 = tmp_47_42_fu_4207_p2.read();
        tmp_47_43_reg_24169 = tmp_47_43_fu_4211_p2.read();
        tmp_47_44_reg_24174 = tmp_47_44_fu_4215_p2.read();
        tmp_47_45_reg_24179 = tmp_47_45_fu_4219_p2.read();
        tmp_47_46_reg_24184 = tmp_47_46_fu_4223_p2.read();
        tmp_47_47_reg_24189 = tmp_47_47_fu_4227_p2.read();
        tmp_47_48_reg_24194 = tmp_47_48_fu_4231_p2.read();
        tmp_47_49_reg_24199 = tmp_47_49_fu_4235_p2.read();
        tmp_47_50_reg_24204 = tmp_47_50_fu_4239_p2.read();
        tmp_47_51_reg_24209 = tmp_47_51_fu_4243_p2.read();
        tmp_47_52_reg_24214 = tmp_47_52_fu_4247_p2.read();
        tmp_47_53_reg_24219 = tmp_47_53_fu_4251_p2.read();
        tmp_47_54_reg_24224 = tmp_47_54_fu_4255_p2.read();
        tmp_47_55_reg_24229 = tmp_47_55_fu_4259_p2.read();
        tmp_47_56_reg_24234 = tmp_47_56_fu_4263_p2.read();
        tmp_47_57_reg_24239 = tmp_47_57_fu_4267_p2.read();
        tmp_47_59_reg_24244 = tmp_47_59_fu_4271_p2.read();
        tmp_47_60_reg_24249 = grp_fu_2651_p2.read();
        tmp_47_61_reg_24254 = tmp_47_61_fu_4275_p2.read();
        tmp_47_62_reg_24259 = tmp_47_62_fu_4279_p2.read();
        tmp_47_63_reg_24264 = tmp_47_63_fu_4283_p2.read();
        tmp_47_64_reg_24269 = tmp_47_64_fu_4287_p2.read();
        tmp_47_65_reg_24274 = tmp_47_65_fu_4291_p2.read();
        tmp_47_66_reg_24279 = tmp_47_66_fu_4295_p2.read();
        tmp_47_67_reg_24284 = tmp_47_67_fu_4299_p2.read();
        tmp_47_68_reg_24289 = tmp_47_68_fu_4303_p2.read();
        tmp_47_69_reg_24294 = tmp_47_69_fu_4307_p2.read();
        tmp_47_70_reg_24299 = tmp_47_70_fu_4311_p2.read();
        tmp_47_71_reg_24304 = tmp_47_71_fu_4315_p2.read();
        tmp_47_74_reg_24309 = tmp_47_74_fu_4319_p2.read();
        tmp_47_75_reg_24314 = tmp_47_75_fu_4323_p2.read();
        tmp_47_76_reg_24319 = tmp_47_76_fu_4327_p2.read();
        tmp_47_77_reg_24324 = grp_fu_2681_p2.read();
        tmp_47_78_reg_24329 = tmp_47_78_fu_4331_p2.read();
        tmp_47_79_reg_24334 = tmp_47_79_fu_4335_p2.read();
        tmp_47_80_reg_24339 = tmp_47_80_fu_4339_p2.read();
        tmp_47_81_reg_24344 = tmp_47_81_fu_4343_p2.read();
        tmp_47_82_reg_24349 = tmp_47_82_fu_4347_p2.read();
        tmp_47_83_reg_24354 = tmp_47_83_fu_4351_p2.read();
        tmp_47_84_reg_24359 = tmp_47_84_fu_4355_p2.read();
        tmp_47_85_reg_24364 = tmp_47_85_fu_4359_p2.read();
        tmp_47_86_reg_24369 = tmp_47_86_fu_4363_p2.read();
        tmp_47_87_reg_24374 = tmp_47_87_fu_4367_p2.read();
        tmp_47_88_reg_24379 = tmp_47_88_fu_4371_p2.read();
        tmp_47_89_reg_24384 = tmp_47_89_fu_4375_p2.read();
        tmp_47_8_reg_23989 = tmp_47_8_fu_4079_p2.read();
        tmp_47_90_reg_24389 = tmp_47_90_fu_4379_p2.read();
        tmp_47_91_reg_24394 = tmp_47_91_fu_4383_p2.read();
        tmp_47_92_reg_24399 = tmp_47_92_fu_4387_p2.read();
        tmp_47_93_reg_24404 = tmp_47_93_fu_4391_p2.read();
        tmp_47_94_reg_24409 = grp_fu_2717_p2.read();
        tmp_47_95_reg_24414 = tmp_47_95_fu_4399_p2.read();
        tmp_47_96_reg_24419 = grp_fu_2433_p2.read();
        tmp_47_97_reg_24424 = grp_fu_2438_p2.read();
        tmp_47_98_reg_24429 = grp_fu_2423_p2.read();
        tmp_47_9_reg_23994 = tmp_47_9_fu_4083_p2.read();
        tmp_47_s_reg_23999 = tmp_47_s_fu_4087_p2.read();
        tmp_56_10_reg_24471 = tmp_56_10_fu_4448_p2.read();
        tmp_56_11_reg_24476 = tmp_56_11_fu_4452_p2.read();
        tmp_56_12_reg_24481 = tmp_56_12_fu_4456_p2.read();
        tmp_56_13_reg_24486 = tmp_56_13_fu_4460_p2.read();
        tmp_56_14_reg_24491 = tmp_56_14_fu_4464_p2.read();
        tmp_56_15_reg_24496 = tmp_56_15_fu_4468_p2.read();
        tmp_56_16_reg_24501 = grp_fu_2625_p2.read();
        tmp_56_17_reg_24506 = grp_fu_2630_p2.read();
        tmp_56_18_reg_24511 = tmp_56_18_fu_4472_p2.read();
        tmp_56_19_reg_24516 = tmp_56_19_fu_4476_p2.read();
        tmp_56_20_reg_24521 = tmp_56_20_fu_4480_p2.read();
        tmp_56_21_reg_24526 = tmp_56_21_fu_4484_p2.read();
        tmp_56_22_reg_24531 = tmp_56_22_fu_4488_p2.read();
        tmp_56_23_reg_24536 = tmp_56_23_fu_4492_p2.read();
        tmp_56_24_reg_24541 = tmp_56_24_fu_4496_p2.read();
        tmp_56_25_reg_24546 = tmp_56_25_fu_4500_p2.read();
        tmp_56_26_reg_24551 = grp_fu_2640_p2.read();
        tmp_56_27_reg_24556 = tmp_56_27_fu_4504_p2.read();
        tmp_56_28_reg_24561 = tmp_56_28_fu_4508_p2.read();
        tmp_56_29_reg_24566 = tmp_56_29_fu_4512_p2.read();
        tmp_56_30_reg_24571 = tmp_56_30_fu_4516_p2.read();
        tmp_56_31_reg_24576 = tmp_56_31_fu_4520_p2.read();
        tmp_56_32_reg_24581 = tmp_56_32_fu_4524_p2.read();
        tmp_56_33_reg_24586 = tmp_56_33_fu_4528_p2.read();
        tmp_56_34_reg_24591 = tmp_56_34_fu_4532_p2.read();
        tmp_56_35_reg_24596 = tmp_56_35_fu_4536_p2.read();
        tmp_56_36_reg_24601 = tmp_56_36_fu_4540_p2.read();
        tmp_56_37_reg_24606 = tmp_56_37_fu_4544_p2.read();
        tmp_56_38_reg_24611 = tmp_56_38_fu_4548_p2.read();
        tmp_56_39_reg_24616 = tmp_56_39_fu_4552_p2.read();
        tmp_56_40_reg_24621 = tmp_56_40_fu_4556_p2.read();
        tmp_56_41_reg_24626 = tmp_56_41_fu_4560_p2.read();
        tmp_56_42_reg_24631 = tmp_56_42_fu_4564_p2.read();
        tmp_56_43_reg_24636 = tmp_56_43_fu_4568_p2.read();
        tmp_56_44_reg_24641 = tmp_56_44_fu_4572_p2.read();
        tmp_56_45_reg_24646 = tmp_56_45_fu_4576_p2.read();
        tmp_56_46_reg_24651 = tmp_56_46_fu_4580_p2.read();
        tmp_56_47_reg_24656 = tmp_56_47_fu_4584_p2.read();
        tmp_56_48_reg_24661 = tmp_56_48_fu_4588_p2.read();
        tmp_56_49_reg_24666 = tmp_56_49_fu_4592_p2.read();
        tmp_56_50_reg_24671 = tmp_56_50_fu_4596_p2.read();
        tmp_56_51_reg_24676 = tmp_56_51_fu_4600_p2.read();
        tmp_56_52_reg_24681 = tmp_56_52_fu_4604_p2.read();
        tmp_56_53_reg_24686 = tmp_56_53_fu_4608_p2.read();
        tmp_56_54_reg_24691 = tmp_56_54_fu_4612_p2.read();
        tmp_56_55_reg_24696 = tmp_56_55_fu_4616_p2.read();
        tmp_56_56_reg_24701 = tmp_56_56_fu_4620_p2.read();
        tmp_56_57_reg_24706 = tmp_56_57_fu_4624_p2.read();
        tmp_56_59_reg_24711 = tmp_56_59_fu_4628_p2.read();
        tmp_56_60_reg_24716 = grp_fu_2656_p2.read();
        tmp_56_61_reg_24721 = tmp_56_61_fu_4632_p2.read();
        tmp_56_62_reg_24726 = tmp_56_62_fu_4636_p2.read();
        tmp_56_63_reg_24731 = tmp_56_63_fu_4640_p2.read();
        tmp_56_64_reg_24736 = tmp_56_64_fu_4644_p2.read();
        tmp_56_65_reg_24741 = tmp_56_65_fu_4648_p2.read();
        tmp_56_66_reg_24746 = tmp_56_66_fu_4652_p2.read();
        tmp_56_67_reg_24751 = tmp_56_67_fu_4656_p2.read();
        tmp_56_68_reg_24756 = tmp_56_68_fu_4660_p2.read();
        tmp_56_69_reg_24761 = tmp_56_69_fu_4664_p2.read();
        tmp_56_70_reg_24766 = tmp_56_70_fu_4668_p2.read();
        tmp_56_71_reg_24771 = tmp_56_71_fu_4672_p2.read();
        tmp_56_74_reg_24776 = tmp_56_74_fu_4676_p2.read();
        tmp_56_75_reg_24781 = tmp_56_75_fu_4680_p2.read();
        tmp_56_76_reg_24786 = tmp_56_76_fu_4684_p2.read();
        tmp_56_77_reg_24791 = grp_fu_2686_p2.read();
        tmp_56_78_reg_24796 = tmp_56_78_fu_4688_p2.read();
        tmp_56_79_reg_24801 = tmp_56_79_fu_4692_p2.read();
        tmp_56_80_reg_24806 = tmp_56_80_fu_4696_p2.read();
        tmp_56_81_reg_24811 = tmp_56_81_fu_4700_p2.read();
        tmp_56_82_reg_24816 = tmp_56_82_fu_4704_p2.read();
        tmp_56_83_reg_24821 = tmp_56_83_fu_4708_p2.read();
        tmp_56_84_reg_24826 = tmp_56_84_fu_4712_p2.read();
        tmp_56_85_reg_24831 = tmp_56_85_fu_4716_p2.read();
        tmp_56_86_reg_24836 = tmp_56_86_fu_4720_p2.read();
        tmp_56_87_reg_24841 = tmp_56_87_fu_4724_p2.read();
        tmp_56_88_reg_24846 = tmp_56_88_fu_4728_p2.read();
        tmp_56_89_reg_24851 = tmp_56_89_fu_4732_p2.read();
        tmp_56_8_reg_24456 = tmp_56_8_fu_4436_p2.read();
        tmp_56_90_reg_24856 = tmp_56_90_fu_4736_p2.read();
        tmp_56_91_reg_24861 = tmp_56_91_fu_4740_p2.read();
        tmp_56_92_reg_24866 = tmp_56_92_fu_4744_p2.read();
        tmp_56_93_reg_24871 = tmp_56_93_fu_4748_p2.read();
        tmp_56_94_reg_24876 = grp_fu_2722_p2.read();
        tmp_56_95_reg_24881 = tmp_56_95_fu_4752_p2.read();
        tmp_56_96_reg_24886 = grp_fu_2443_p2.read();
        tmp_56_97_reg_24891 = grp_fu_2448_p2.read();
        tmp_56_98_reg_24896 = grp_fu_2428_p2.read();
        tmp_56_9_reg_24461 = tmp_56_9_fu_4440_p2.read();
        tmp_56_s_reg_24466 = tmp_56_s_fu_4444_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        orig1_addr_10_reg_20963 = orig1_addr_10_gep_fu_688_p3.read();
        orig1_addr_11_reg_20975 = orig1_addr_11_gep_fu_704_p3.read();
        orig1_addr_12_reg_20987 = orig1_addr_12_gep_fu_720_p3.read();
        orig1_addr_13_reg_21004 = orig1_addr_13_gep_fu_744_p3.read();
        orig1_addr_14_reg_21015 = orig1_addr_14_gep_fu_760_p3.read();
        orig1_addr_15_reg_21026 = orig1_addr_15_gep_fu_776_p3.read();
        orig1_addr_16_reg_21037 = orig1_addr_16_gep_fu_792_p3.read();
        orig1_addr_17_reg_21054 = orig1_addr_17_gep_fu_816_p3.read();
        orig1_addr_18_reg_21066 = orig1_addr_18_gep_fu_832_p3.read();
        orig1_addr_19_reg_21078 = orig1_addr_19_gep_fu_848_p3.read();
        orig1_addr_1_reg_20848 = orig1_addr_1_gep_fu_528_p3.read();
        orig1_addr_20_reg_21089 = orig1_addr_20_gep_fu_864_p3.read();
        orig1_addr_21_reg_21105 = orig1_addr_21_gep_fu_888_p3.read();
        orig1_addr_22_reg_21116 = orig1_addr_22_gep_fu_904_p3.read();
        orig1_addr_23_reg_21128 = orig1_addr_23_gep_fu_920_p3.read();
        orig1_addr_24_reg_21140 = orig1_addr_24_gep_fu_936_p3.read();
        orig1_addr_25_reg_21157 = orig1_addr_25_gep_fu_960_p3.read();
        orig1_addr_26_reg_21168 = orig1_addr_26_gep_fu_976_p3.read();
        orig1_addr_27_reg_21179 = orig1_addr_27_gep_fu_992_p3.read();
        orig1_addr_28_reg_21190 = orig1_addr_28_gep_fu_1008_p3.read();
        orig1_addr_29_reg_21207 = orig1_addr_29_gep_fu_1032_p3.read();
        orig1_addr_2_reg_20860 = orig1_addr_2_gep_fu_544_p3.read();
        orig1_addr_30_reg_21219 = orig1_addr_30_gep_fu_1048_p3.read();
        orig1_addr_31_reg_21231 = orig1_addr_31_gep_fu_1064_p3.read();
        orig1_addr_32_reg_21242 = orig1_addr_32_gep_fu_1080_p3.read();
        orig1_addr_33_reg_21258 = orig1_addr_33_gep_fu_1104_p3.read();
        orig1_addr_34_reg_21269 = orig1_addr_34_gep_fu_1120_p3.read();
        orig1_addr_35_reg_21281 = orig1_addr_35_gep_fu_1136_p3.read();
        orig1_addr_36_reg_21293 = orig1_addr_36_gep_fu_1152_p3.read();
        orig1_addr_37_reg_21310 = orig1_addr_37_gep_fu_1176_p3.read();
        orig1_addr_38_reg_21321 = orig1_addr_38_gep_fu_1192_p3.read();
        orig1_addr_39_reg_21332 = orig1_addr_39_gep_fu_1208_p3.read();
        orig1_addr_3_reg_20872 = orig1_addr_3_gep_fu_560_p3.read();
        orig1_addr_40_reg_21343 = orig1_addr_40_gep_fu_1224_p3.read();
        orig1_addr_41_reg_21360 = orig1_addr_41_gep_fu_1248_p3.read();
        orig1_addr_42_reg_21372 = orig1_addr_42_gep_fu_1264_p3.read();
        orig1_addr_43_reg_21384 = orig1_addr_43_gep_fu_1280_p3.read();
        orig1_addr_44_reg_21395 = orig1_addr_44_gep_fu_1296_p3.read();
        orig1_addr_45_reg_21411 = orig1_addr_45_gep_fu_1320_p3.read();
        orig1_addr_46_reg_21422 = orig1_addr_46_gep_fu_1336_p3.read();
        orig1_addr_47_reg_21433 = orig1_addr_47_gep_fu_1352_p3.read();
        orig1_addr_48_reg_21445 = orig1_addr_48_gep_fu_1368_p3.read();
        orig1_addr_49_reg_21460 = orig1_addr_49_gep_fu_1392_p3.read();
        orig1_addr_4_reg_20884 = orig1_addr_4_gep_fu_576_p3.read();
        orig1_addr_50_reg_21471 = orig1_addr_50_gep_fu_1408_p3.read();
        orig1_addr_51_reg_21482 = orig1_addr_51_gep_fu_1424_p3.read();
        orig1_addr_52_reg_21494 = orig1_addr_52_gep_fu_1440_p3.read();
        orig1_addr_53_reg_21511 = orig1_addr_53_gep_fu_1464_p3.read();
        orig1_addr_54_reg_21522 = orig1_addr_54_gep_fu_1480_p3.read();
        orig1_addr_55_reg_21534 = orig1_addr_55_gep_fu_1496_p3.read();
        orig1_addr_56_reg_21546 = orig1_addr_56_gep_fu_1512_p3.read();
        orig1_addr_57_reg_21562 = orig1_addr_57_gep_fu_1536_p3.read();
        orig1_addr_58_reg_21574 = orig1_addr_58_gep_fu_1552_p3.read();
        orig1_addr_59_reg_21586 = orig1_addr_59_gep_fu_1568_p3.read();
        orig1_addr_5_reg_20901 = orig1_addr_5_gep_fu_600_p3.read();
        orig1_addr_60_reg_21597 = orig1_addr_60_gep_fu_1584_p3.read();
        orig1_addr_61_reg_21614 = orig1_addr_61_gep_fu_1608_p3.read();
        orig1_addr_62_reg_21626 = orig1_addr_62_gep_fu_1624_p3.read();
        orig1_addr_63_reg_21637 = orig1_addr_63_gep_fu_1640_p3.read();
        orig1_addr_64_reg_21649 = orig1_addr_64_gep_fu_1656_p3.read();
        orig1_addr_65_reg_21666 = orig1_addr_65_gep_fu_1680_p3.read();
        orig1_addr_66_reg_21677 = orig1_addr_66_gep_fu_1696_p3.read();
        orig1_addr_67_reg_21689 = orig1_addr_67_gep_fu_1712_p3.read();
        orig1_addr_68_reg_21701 = orig1_addr_68_gep_fu_1728_p3.read();
        orig1_addr_69_reg_21717 = orig1_addr_69_gep_fu_1752_p3.read();
        orig1_addr_6_reg_20913 = orig1_addr_6_gep_fu_616_p3.read();
        orig1_addr_70_reg_21729 = orig1_addr_70_gep_fu_1768_p3.read();
        orig1_addr_71_reg_21741 = orig1_addr_71_gep_fu_1784_p3.read();
        orig1_addr_72_reg_21752 = orig1_addr_72_gep_fu_1800_p3.read();
        orig1_addr_73_reg_21769 = orig1_addr_73_gep_fu_1824_p3.read();
        orig1_addr_74_reg_21781 = orig1_addr_74_gep_fu_1840_p3.read();
        orig1_addr_75_reg_21793 = orig1_addr_75_gep_fu_1856_p3.read();
        orig1_addr_76_reg_21805 = orig1_addr_76_gep_fu_1872_p3.read();
        orig1_addr_77_reg_21822 = orig1_addr_77_gep_fu_1896_p3.read();
        orig1_addr_78_reg_21834 = orig1_addr_78_gep_fu_1912_p3.read();
        orig1_addr_79_reg_21846 = orig1_addr_79_gep_fu_1928_p3.read();
        orig1_addr_7_reg_20925 = orig1_addr_7_gep_fu_632_p3.read();
        orig1_addr_80_reg_21858 = orig1_addr_80_gep_fu_1944_p3.read();
        orig1_addr_81_reg_21875 = orig1_addr_81_gep_fu_1968_p3.read();
        orig1_addr_82_reg_21887 = orig1_addr_82_gep_fu_1984_p3.read();
        orig1_addr_83_reg_21899 = orig1_addr_83_gep_fu_2000_p3.read();
        orig1_addr_84_reg_21911 = orig1_addr_84_gep_fu_2016_p3.read();
        orig1_addr_85_reg_21928 = orig1_addr_85_gep_fu_2040_p3.read();
        orig1_addr_86_reg_21940 = orig1_addr_86_gep_fu_2056_p3.read();
        orig1_addr_87_reg_21952 = orig1_addr_87_gep_fu_2072_p3.read();
        orig1_addr_88_reg_21964 = orig1_addr_88_gep_fu_2088_p3.read();
        orig1_addr_89_reg_21981 = orig1_addr_89_gep_fu_2112_p3.read();
        orig1_addr_8_reg_20936 = orig1_addr_8_gep_fu_648_p3.read();
        orig1_addr_90_reg_21993 = orig1_addr_90_gep_fu_2128_p3.read();
        orig1_addr_91_reg_22005 = orig1_addr_91_gep_fu_2144_p3.read();
        orig1_addr_92_reg_22017 = orig1_addr_92_gep_fu_2160_p3.read();
        orig1_addr_93_reg_22034 = orig1_addr_93_gep_fu_2184_p3.read();
        orig1_addr_94_reg_22046 = orig1_addr_94_gep_fu_2200_p3.read();
        orig1_addr_95_reg_22058 = orig1_addr_95_gep_fu_2216_p3.read();
        orig1_addr_96_reg_22070 = orig1_addr_96_gep_fu_2232_p3.read();
        orig1_addr_97_reg_22087 = orig1_addr_97_gep_fu_2256_p3.read();
        orig1_addr_98_reg_22099 = orig1_addr_98_gep_fu_2272_p3.read();
        orig1_addr_99_reg_22110 = orig1_addr_99_gep_fu_2288_p3.read();
        orig1_addr_9_reg_20952 = orig1_addr_9_gep_fu_672_p3.read();
        orig1_addr_reg_20831 = orig1_addr_gep_fu_504_p3.read();
        read_addr_10_reg_21349 =  (sc_lv<5>) (read_addr_10_gep_fu_1232_p3.read());
        read_addr_11_reg_21400 =  (sc_lv<5>) (read_addr_11_gep_fu_1304_p3.read());
        read_addr_12_reg_21450 =  (sc_lv<5>) (read_addr_12_gep_fu_1376_p3.read());
        read_addr_13_reg_21500 =  (sc_lv<5>) (read_addr_13_gep_fu_1448_p3.read());
        read_addr_14_reg_21551 =  (sc_lv<5>) (read_addr_14_gep_fu_1520_p3.read());
        read_addr_15_reg_21603 =  (sc_lv<5>) (read_addr_15_gep_fu_1592_p3.read());
        read_addr_16_reg_21655 =  (sc_lv<5>) (read_addr_16_gep_fu_1664_p3.read());
        read_addr_17_reg_21706 =  (sc_lv<5>) (read_addr_17_gep_fu_1736_p3.read());
        read_addr_18_reg_21758 =  (sc_lv<5>) (read_addr_18_gep_fu_1808_p3.read());
        read_addr_19_reg_21811 =  (sc_lv<5>) (read_addr_19_gep_fu_1880_p3.read());
        read_addr_1_reg_20890 =  (sc_lv<5>) (read_addr_1_gep_fu_584_p3.read());
        read_addr_20_reg_21864 =  (sc_lv<5>) (read_addr_20_gep_fu_1952_p3.read());
        read_addr_21_reg_21917 =  (sc_lv<5>) (read_addr_21_gep_fu_2024_p3.read());
        read_addr_22_reg_21970 =  (sc_lv<5>) (read_addr_22_gep_fu_2096_p3.read());
        read_addr_23_reg_22023 =  (sc_lv<5>) (read_addr_23_gep_fu_2168_p3.read());
        read_addr_24_reg_22076 =  (sc_lv<5>) (read_addr_24_gep_fu_2240_p3.read());
        read_addr_2_reg_20941 =  (sc_lv<5>) (read_addr_2_gep_fu_656_p3.read());
        read_addr_3_reg_20993 =  (sc_lv<5>) (read_addr_3_gep_fu_728_p3.read());
        read_addr_4_reg_21043 =  (sc_lv<5>) (read_addr_4_gep_fu_800_p3.read());
        read_addr_5_reg_21094 =  (sc_lv<5>) (read_addr_5_gep_fu_872_p3.read());
        read_addr_6_reg_21146 =  (sc_lv<5>) (read_addr_6_gep_fu_944_p3.read());
        read_addr_7_reg_21196 =  (sc_lv<5>) (read_addr_7_gep_fu_1016_p3.read());
        read_addr_8_reg_21247 =  (sc_lv<5>) (read_addr_8_gep_fu_1088_p3.read());
        read_addr_9_reg_21299 =  (sc_lv<5>) (read_addr_9_gep_fu_1160_p3.read());
        read_addr_reg_20837 =  (sc_lv<5>) (read_addr_gep_fu_512_p3.read());
        score1_addr_10_reg_20957 = score1_addr_10_gep_fu_680_p3.read();
        score1_addr_11_reg_20969 = score1_addr_11_gep_fu_696_p3.read();
        score1_addr_12_reg_20981 = score1_addr_12_gep_fu_712_p3.read();
        score1_addr_13_reg_20998 = score1_addr_13_gep_fu_736_p3.read();
        score1_addr_14_reg_21009 = score1_addr_14_gep_fu_752_p3.read();
        score1_addr_15_reg_21020 = score1_addr_15_gep_fu_768_p3.read();
        score1_addr_16_reg_21031 = score1_addr_16_gep_fu_784_p3.read();
        score1_addr_17_reg_21048 = score1_addr_17_gep_fu_808_p3.read();
        score1_addr_18_reg_21060 = score1_addr_18_gep_fu_824_p3.read();
        score1_addr_19_reg_21072 = score1_addr_19_gep_fu_840_p3.read();
        score1_addr_1_reg_20842 = score1_addr_1_gep_fu_520_p3.read();
        score1_addr_20_reg_21083 = score1_addr_20_gep_fu_856_p3.read();
        score1_addr_21_reg_21099 = score1_addr_21_gep_fu_880_p3.read();
        score1_addr_22_reg_21110 = score1_addr_22_gep_fu_896_p3.read();
        score1_addr_23_reg_21122 = score1_addr_23_gep_fu_912_p3.read();
        score1_addr_24_reg_21134 = score1_addr_24_gep_fu_928_p3.read();
        score1_addr_25_reg_21151 = score1_addr_25_gep_fu_952_p3.read();
        score1_addr_26_reg_21162 = score1_addr_26_gep_fu_968_p3.read();
        score1_addr_27_reg_21173 = score1_addr_27_gep_fu_984_p3.read();
        score1_addr_28_reg_21184 = score1_addr_28_gep_fu_1000_p3.read();
        score1_addr_29_reg_21201 = score1_addr_29_gep_fu_1024_p3.read();
        score1_addr_2_reg_20854 = score1_addr_2_gep_fu_536_p3.read();
        score1_addr_30_reg_21213 = score1_addr_30_gep_fu_1040_p3.read();
        score1_addr_31_reg_21225 = score1_addr_31_gep_fu_1056_p3.read();
        score1_addr_32_reg_21236 = score1_addr_32_gep_fu_1072_p3.read();
        score1_addr_33_reg_21252 = score1_addr_33_gep_fu_1096_p3.read();
        score1_addr_34_reg_21263 = score1_addr_34_gep_fu_1112_p3.read();
        score1_addr_35_reg_21275 = score1_addr_35_gep_fu_1128_p3.read();
        score1_addr_36_reg_21287 = score1_addr_36_gep_fu_1144_p3.read();
        score1_addr_37_reg_21304 = score1_addr_37_gep_fu_1168_p3.read();
        score1_addr_38_reg_21315 = score1_addr_38_gep_fu_1184_p3.read();
        score1_addr_39_reg_21326 = score1_addr_39_gep_fu_1200_p3.read();
        score1_addr_3_reg_20866 = score1_addr_3_gep_fu_552_p3.read();
        score1_addr_40_reg_21337 = score1_addr_40_gep_fu_1216_p3.read();
        score1_addr_41_reg_21354 = score1_addr_41_gep_fu_1240_p3.read();
        score1_addr_42_reg_21366 = score1_addr_42_gep_fu_1256_p3.read();
        score1_addr_43_reg_21378 = score1_addr_43_gep_fu_1272_p3.read();
        score1_addr_44_reg_21389 = score1_addr_44_gep_fu_1288_p3.read();
        score1_addr_45_reg_21405 = score1_addr_45_gep_fu_1312_p3.read();
        score1_addr_46_reg_21416 = score1_addr_46_gep_fu_1328_p3.read();
        score1_addr_47_reg_21428 = score1_addr_47_gep_fu_1344_p3.read();
        score1_addr_48_reg_21439 = score1_addr_48_gep_fu_1360_p3.read();
        score1_addr_49_reg_21455 = score1_addr_49_gep_fu_1384_p3.read();
        score1_addr_4_reg_20878 = score1_addr_4_gep_fu_568_p3.read();
        score1_addr_50_reg_21465 = score1_addr_50_gep_fu_1400_p3.read();
        score1_addr_51_reg_21476 = score1_addr_51_gep_fu_1416_p3.read();
        score1_addr_52_reg_21488 = score1_addr_52_gep_fu_1432_p3.read();
        score1_addr_53_reg_21505 = score1_addr_53_gep_fu_1456_p3.read();
        score1_addr_54_reg_21516 = score1_addr_54_gep_fu_1472_p3.read();
        score1_addr_55_reg_21528 = score1_addr_55_gep_fu_1488_p3.read();
        score1_addr_56_reg_21540 = score1_addr_56_gep_fu_1504_p3.read();
        score1_addr_57_reg_21556 = score1_addr_57_gep_fu_1528_p3.read();
        score1_addr_58_reg_21568 = score1_addr_58_gep_fu_1544_p3.read();
        score1_addr_59_reg_21580 = score1_addr_59_gep_fu_1560_p3.read();
        score1_addr_5_reg_20895 = score1_addr_5_gep_fu_592_p3.read();
        score1_addr_60_reg_21591 = score1_addr_60_gep_fu_1576_p3.read();
        score1_addr_61_reg_21608 = score1_addr_61_gep_fu_1600_p3.read();
        score1_addr_62_reg_21620 = score1_addr_62_gep_fu_1616_p3.read();
        score1_addr_63_reg_21631 = score1_addr_63_gep_fu_1632_p3.read();
        score1_addr_64_reg_21643 = score1_addr_64_gep_fu_1648_p3.read();
        score1_addr_65_reg_21660 = score1_addr_65_gep_fu_1672_p3.read();
        score1_addr_66_reg_21671 = score1_addr_66_gep_fu_1688_p3.read();
        score1_addr_67_reg_21683 = score1_addr_67_gep_fu_1704_p3.read();
        score1_addr_68_reg_21695 = score1_addr_68_gep_fu_1720_p3.read();
        score1_addr_69_reg_21711 = score1_addr_69_gep_fu_1744_p3.read();
        score1_addr_6_reg_20907 = score1_addr_6_gep_fu_608_p3.read();
        score1_addr_70_reg_21723 = score1_addr_70_gep_fu_1760_p3.read();
        score1_addr_71_reg_21735 = score1_addr_71_gep_fu_1776_p3.read();
        score1_addr_72_reg_21746 = score1_addr_72_gep_fu_1792_p3.read();
        score1_addr_73_reg_21763 = score1_addr_73_gep_fu_1816_p3.read();
        score1_addr_74_reg_21775 = score1_addr_74_gep_fu_1832_p3.read();
        score1_addr_75_reg_21787 = score1_addr_75_gep_fu_1848_p3.read();
        score1_addr_76_reg_21799 = score1_addr_76_gep_fu_1864_p3.read();
        score1_addr_77_reg_21816 = score1_addr_77_gep_fu_1888_p3.read();
        score1_addr_78_reg_21828 = score1_addr_78_gep_fu_1904_p3.read();
        score1_addr_79_reg_21840 = score1_addr_79_gep_fu_1920_p3.read();
        score1_addr_7_reg_20919 = score1_addr_7_gep_fu_624_p3.read();
        score1_addr_80_reg_21852 = score1_addr_80_gep_fu_1936_p3.read();
        score1_addr_81_reg_21869 = score1_addr_81_gep_fu_1960_p3.read();
        score1_addr_82_reg_21881 = score1_addr_82_gep_fu_1976_p3.read();
        score1_addr_83_reg_21893 = score1_addr_83_gep_fu_1992_p3.read();
        score1_addr_84_reg_21905 = score1_addr_84_gep_fu_2008_p3.read();
        score1_addr_85_reg_21922 = score1_addr_85_gep_fu_2032_p3.read();
        score1_addr_86_reg_21934 = score1_addr_86_gep_fu_2048_p3.read();
        score1_addr_87_reg_21946 = score1_addr_87_gep_fu_2064_p3.read();
        score1_addr_88_reg_21958 = score1_addr_88_gep_fu_2080_p3.read();
        score1_addr_89_reg_21975 = score1_addr_89_gep_fu_2104_p3.read();
        score1_addr_8_reg_20930 = score1_addr_8_gep_fu_640_p3.read();
        score1_addr_90_reg_21987 = score1_addr_90_gep_fu_2120_p3.read();
        score1_addr_91_reg_21999 = score1_addr_91_gep_fu_2136_p3.read();
        score1_addr_92_reg_22011 = score1_addr_92_gep_fu_2152_p3.read();
        score1_addr_93_reg_22028 = score1_addr_93_gep_fu_2176_p3.read();
        score1_addr_94_reg_22040 = score1_addr_94_gep_fu_2192_p3.read();
        score1_addr_95_reg_22052 = score1_addr_95_gep_fu_2208_p3.read();
        score1_addr_96_reg_22064 = score1_addr_96_gep_fu_2224_p3.read();
        score1_addr_97_reg_22081 = score1_addr_97_gep_fu_2248_p3.read();
        score1_addr_98_reg_22093 = score1_addr_98_gep_fu_2264_p3.read();
        score1_addr_99_reg_22104 = score1_addr_99_gep_fu_2280_p3.read();
        score1_addr_9_reg_20946 = score1_addr_9_gep_fu_664_p3.read();
        score1_addr_reg_20825 = score1_addr_gep_fu_496_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read()))) {
        orig1_load_19_reg_25042 = orig1_q0.read();
        orig1_load_20_reg_25048 = orig1_q1.read();
        prev_score_out_0_op_i1_7_reg_25016 = prev_score_out_0_op_i1_7_fu_4949_p2.read();
        prev_score_out_0_op_i_6_reg_25054 = prev_score_out_0_op_i_6_fu_4975_p2.read();
        prev_score_out_8_7_reg_25079 = prev_score_out_8_7_fu_5008_p2.read();
        tmp_27_7_reg_25011 = tmp_27_7_fu_4942_p3.read();
        tmp_48_7_reg_25022 = tmp_48_7_fu_4954_p2.read();
        tmp_49_7_reg_25027 = tmp_49_7_fu_4959_p2.read();
        tmp_52_7_reg_25032 = tmp_52_7_fu_4964_p2.read();
        tmp_53_7_reg_25037 = tmp_53_7_fu_4969_p2.read();
        tmp_57_6_reg_25059 = tmp_57_6_fu_4980_p2.read();
        tmp_58_6_reg_25064 = tmp_58_6_fu_4985_p2.read();
        tmp_59_6_reg_25069 = tmp_59_6_fu_4990_p2.read();
        tmp_60_6_reg_25074 = tmp_60_6_fu_4995_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read()))) {
        orig1_load_22_reg_25151 = orig1_q0.read();
        orig1_load_23_reg_25157 = orig1_q1.read();
        prev_score_out_0_op_i1_8_reg_25125 = prev_score_out_0_op_i1_8_fu_5110_p2.read();
        prev_score_out_0_op_i_7_reg_25163 = prev_score_out_0_op_i_7_fu_5136_p2.read();
        prev_score_out_8_8_reg_25188 = prev_score_out_8_8_fu_5169_p2.read();
        tmp_27_8_reg_25120 = tmp_27_8_fu_5103_p3.read();
        tmp_48_8_reg_25131 = tmp_48_8_fu_5115_p2.read();
        tmp_49_8_reg_25136 = tmp_49_8_fu_5120_p2.read();
        tmp_52_8_reg_25141 = tmp_52_8_fu_5125_p2.read();
        tmp_53_8_reg_25146 = tmp_53_8_fu_5130_p2.read();
        tmp_57_7_reg_25168 = tmp_57_7_fu_5141_p2.read();
        tmp_58_7_reg_25173 = tmp_58_7_fu_5146_p2.read();
        tmp_59_7_reg_25178 = tmp_59_7_fu_5151_p2.read();
        tmp_60_7_reg_25183 = tmp_60_7_fu_5156_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read()))) {
        orig1_load_25_reg_25262 = orig1_q0.read();
        orig1_load_26_reg_25268 = orig1_q1.read();
        prev_score_out_0_op_i1_9_reg_25236 = prev_score_out_0_op_i1_9_fu_5271_p2.read();
        prev_score_out_0_op_i_8_reg_25274 = prev_score_out_0_op_i_8_fu_5295_p2.read();
        prev_score_out_8_9_reg_25299 = prev_score_out_8_9_fu_5328_p2.read();
        tmp_48_9_reg_25242 = tmp_48_9_fu_5276_p2.read();
        tmp_49_9_reg_25247 = tmp_49_9_fu_5281_p2.read();
        tmp_52_9_reg_25252 = tmp_52_9_fu_5285_p2.read();
        tmp_53_9_reg_25257 = tmp_53_9_fu_5290_p2.read();
        tmp_57_8_reg_25279 = tmp_57_8_fu_5300_p2.read();
        tmp_58_8_reg_25284 = tmp_58_8_fu_5305_p2.read();
        tmp_59_8_reg_25289 = tmp_59_8_fu_5310_p2.read();
        tmp_60_8_reg_25294 = tmp_60_8_fu_5315_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read()))) {
        orig1_load_28_reg_25377 = orig1_q0.read();
        orig1_load_29_reg_25383 = orig1_q1.read();
        prev_score_out_0_op_i1_s_reg_25345 = prev_score_out_0_op_i1_s_fu_5430_p2.read();
        prev_score_out_0_op_i_9_reg_25389 = prev_score_out_0_op_i_9_fu_5456_p2.read();
        prev_score_out_8_s_reg_25414 = prev_score_out_8_s_fu_5489_p2.read();
        score1_load_26_reg_25371 = score1_q1.read();
        tmp_27_s_reg_25340 = tmp_27_s_fu_5423_p3.read();
        tmp_48_s_reg_25351 = tmp_48_s_fu_5435_p2.read();
        tmp_49_s_reg_25356 = tmp_49_s_fu_5440_p2.read();
        tmp_52_s_reg_25361 = tmp_52_s_fu_5445_p2.read();
        tmp_53_s_reg_25366 = tmp_53_s_fu_5450_p2.read();
        tmp_57_9_reg_25394 = tmp_57_9_fu_5461_p2.read();
        tmp_58_9_reg_25399 = tmp_58_9_fu_5466_p2.read();
        tmp_59_9_reg_25404 = tmp_59_9_fu_5471_p2.read();
        tmp_60_9_reg_25409 = tmp_60_9_fu_5476_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read()))) {
        orig1_load_31_reg_25498 = orig1_q0.read();
        orig1_load_32_reg_25504 = orig1_q1.read();
        prev_score_out_0_op_i1_10_reg_25460 = prev_score_out_0_op_i1_10_fu_5591_p2.read();
        prev_score_out_0_op_i_s_reg_25510 = prev_score_out_0_op_i_s_fu_5617_p2.read();
        prev_score_out_8_10_reg_25535 = prev_score_out_8_10_fu_5650_p2.read();
        score1_load_28_reg_25486 = score1_q0.read();
        score1_load_29_reg_25492 = score1_q1.read();
        tmp_27_10_reg_25455 = tmp_27_10_fu_5584_p3.read();
        tmp_48_10_reg_25466 = tmp_48_10_fu_5596_p2.read();
        tmp_49_10_reg_25471 = tmp_49_10_fu_5601_p2.read();
        tmp_52_10_reg_25476 = tmp_52_10_fu_5606_p2.read();
        tmp_53_10_reg_25481 = tmp_53_10_fu_5611_p2.read();
        tmp_57_s_reg_25515 = tmp_57_s_fu_5622_p2.read();
        tmp_58_s_reg_25520 = tmp_58_s_fu_5627_p2.read();
        tmp_59_s_reg_25525 = tmp_59_s_fu_5632_p2.read();
        tmp_60_s_reg_25530 = tmp_60_s_fu_5637_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read()))) {
        orig1_load_34_reg_25619 = orig1_q0.read();
        orig1_load_35_reg_25625 = orig1_q1.read();
        prev_score_out_0_op_i1_11_reg_25581 = prev_score_out_0_op_i1_11_fu_5752_p2.read();
        prev_score_out_0_op_i_10_reg_25631 = prev_score_out_0_op_i_10_fu_5778_p2.read();
        prev_score_out_8_11_reg_25656 = prev_score_out_8_11_fu_5811_p2.read();
        score1_load_31_reg_25607 = score1_q0.read();
        score1_load_32_reg_25613 = score1_q1.read();
        tmp_27_11_reg_25576 = tmp_27_11_fu_5745_p3.read();
        tmp_48_11_reg_25587 = tmp_48_11_fu_5757_p2.read();
        tmp_49_11_reg_25592 = tmp_49_11_fu_5762_p2.read();
        tmp_52_11_reg_25597 = tmp_52_11_fu_5767_p2.read();
        tmp_53_11_reg_25602 = tmp_53_11_fu_5772_p2.read();
        tmp_57_10_reg_25636 = tmp_57_10_fu_5783_p2.read();
        tmp_58_10_reg_25641 = tmp_58_10_fu_5788_p2.read();
        tmp_59_10_reg_25646 = tmp_59_10_fu_5793_p2.read();
        tmp_60_10_reg_25651 = tmp_60_10_fu_5798_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read()))) {
        orig1_load_37_reg_25742 = orig1_q0.read();
        orig1_load_38_reg_25748 = orig1_q1.read();
        prev_score_out_0_op_i1_12_reg_25704 = prev_score_out_0_op_i1_12_fu_5913_p2.read();
        prev_score_out_0_op_i_11_reg_25754 = prev_score_out_0_op_i_11_fu_5937_p2.read();
        prev_score_out_8_12_reg_25779 = prev_score_out_8_12_fu_5970_p2.read();
        score1_load_34_reg_25730 = score1_q0.read();
        score1_load_35_reg_25736 = score1_q1.read();
        tmp_48_12_reg_25710 = tmp_48_12_fu_5918_p2.read();
        tmp_49_12_reg_25715 = tmp_49_12_fu_5923_p2.read();
        tmp_52_12_reg_25720 = tmp_52_12_fu_5927_p2.read();
        tmp_53_12_reg_25725 = tmp_53_12_fu_5932_p2.read();
        tmp_57_11_reg_25759 = tmp_57_11_fu_5942_p2.read();
        tmp_58_11_reg_25764 = tmp_58_11_fu_5947_p2.read();
        tmp_59_11_reg_25769 = tmp_59_11_fu_5952_p2.read();
        tmp_60_11_reg_25774 = tmp_60_11_fu_5957_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read()))) {
        orig1_load_40_reg_25868 = orig1_q0.read();
        orig1_load_41_reg_25874 = orig1_q1.read();
        prev_score_out_0_op_i1_13_reg_25830 = prev_score_out_0_op_i1_13_fu_6071_p2.read();
        prev_score_out_0_op_i_12_reg_25880 = prev_score_out_0_op_i_12_fu_6097_p2.read();
        prev_score_out_8_13_reg_25905 = prev_score_out_8_13_fu_6130_p2.read();
        score1_load_37_reg_25856 = score1_q0.read();
        score1_load_38_reg_25862 = score1_q1.read();
        tmp_27_13_reg_25825 = tmp_27_13_fu_6065_p3.read();
        tmp_48_13_reg_25836 = tmp_48_13_fu_6076_p2.read();
        tmp_49_13_reg_25841 = tmp_49_13_fu_6081_p2.read();
        tmp_52_13_reg_25846 = tmp_52_13_fu_6086_p2.read();
        tmp_53_13_reg_25851 = tmp_53_13_fu_6091_p2.read();
        tmp_57_12_reg_25885 = tmp_57_12_fu_6102_p2.read();
        tmp_58_12_reg_25890 = tmp_58_12_fu_6107_p2.read();
        tmp_59_12_reg_25895 = tmp_59_12_fu_6112_p2.read();
        tmp_60_12_reg_25900 = tmp_60_12_fu_6117_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read()))) {
        orig1_load_43_reg_25991 = orig1_q0.read();
        orig1_load_44_reg_25997 = orig1_q1.read();
        prev_score_out_0_op_i1_14_reg_25953 = prev_score_out_0_op_i1_14_fu_6232_p2.read();
        prev_score_out_0_op_i_13_reg_26003 = prev_score_out_0_op_i_13_fu_6256_p2.read();
        prev_score_out_8_14_reg_26028 = prev_score_out_8_14_fu_6289_p2.read();
        score1_load_40_reg_25979 = score1_q0.read();
        score1_load_41_reg_25985 = score1_q1.read();
        tmp_48_14_reg_25959 = tmp_48_14_fu_6237_p2.read();
        tmp_49_14_reg_25964 = tmp_49_14_fu_6242_p2.read();
        tmp_52_14_reg_25969 = tmp_52_14_fu_6246_p2.read();
        tmp_53_14_reg_25974 = tmp_53_14_fu_6251_p2.read();
        tmp_57_13_reg_26008 = tmp_57_13_fu_6261_p2.read();
        tmp_58_13_reg_26013 = tmp_58_13_fu_6266_p2.read();
        tmp_59_13_reg_26018 = tmp_59_13_fu_6271_p2.read();
        tmp_60_13_reg_26023 = tmp_60_13_fu_6276_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read()))) {
        orig1_load_46_reg_26117 = orig1_q0.read();
        orig1_load_47_reg_26123 = orig1_q1.read();
        prev_score_out_0_op_i1_15_reg_26079 = prev_score_out_0_op_i1_15_fu_6390_p2.read();
        prev_score_out_0_op_i_14_reg_26129 = prev_score_out_0_op_i_14_fu_6416_p2.read();
        prev_score_out_8_15_reg_26154 = prev_score_out_8_15_fu_6449_p2.read();
        score1_load_43_reg_26105 = score1_q0.read();
        score1_load_44_reg_26111 = score1_q1.read();
        tmp_27_15_reg_26074 = tmp_27_15_fu_6384_p3.read();
        tmp_48_15_reg_26085 = tmp_48_15_fu_6395_p2.read();
        tmp_49_15_reg_26090 = tmp_49_15_fu_6400_p2.read();
        tmp_52_15_reg_26095 = tmp_52_15_fu_6405_p2.read();
        tmp_53_15_reg_26100 = tmp_53_15_fu_6410_p2.read();
        tmp_57_14_reg_26134 = tmp_57_14_fu_6421_p2.read();
        tmp_58_14_reg_26139 = tmp_58_14_fu_6426_p2.read();
        tmp_59_14_reg_26144 = tmp_59_14_fu_6431_p2.read();
        tmp_60_14_reg_26149 = tmp_60_14_fu_6436_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read()))) {
        orig1_load_49_reg_26240 = orig1_q0.read();
        orig1_load_50_reg_26246 = orig1_q1.read();
        prev_score_out_0_op_i1_16_reg_26202 = prev_score_out_0_op_i1_16_fu_6551_p2.read();
        prev_score_out_0_op_i_15_reg_26252 = prev_score_out_0_op_i_15_fu_6575_p2.read();
        prev_score_out_8_16_reg_26277 = prev_score_out_8_16_fu_6608_p2.read();
        score1_load_46_reg_26228 = score1_q0.read();
        score1_load_47_reg_26234 = score1_q1.read();
        tmp_48_16_reg_26208 = tmp_48_16_fu_6556_p2.read();
        tmp_49_16_reg_26213 = tmp_49_16_fu_6561_p2.read();
        tmp_52_16_reg_26218 = tmp_52_16_fu_6565_p2.read();
        tmp_53_16_reg_26223 = tmp_53_16_fu_6570_p2.read();
        tmp_57_15_reg_26257 = tmp_57_15_fu_6580_p2.read();
        tmp_58_15_reg_26262 = tmp_58_15_fu_6585_p2.read();
        tmp_59_15_reg_26267 = tmp_59_15_fu_6590_p2.read();
        tmp_60_15_reg_26272 = tmp_60_15_fu_6595_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read()))) {
        orig1_load_51_reg_26306 = orig1_q0.read();
        orig2_load_1_17_reg_26291 = orig2_load_1_17_fu_6641_p3.read();
        prev_orig_out_2_i_15_reg_26318 = prev_orig_out_2_i_15_fu_6696_p3.read();
        prev_score_out_2_i_15_reg_26312 = prev_score_out_2_i_15_fu_6689_p3.read();
        prev_score_out_6_18_reg_26298 = prev_score_out_6_18_fu_6663_p2.read();
        score2_load_1_17_reg_26285 = score2_load_1_17_fu_6634_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read()))) {
        orig1_load_52_reg_26361 = orig1_q0.read();
        orig1_load_53_reg_26367 = orig1_q1.read();
        prev_score_out_0_op_i1_17_reg_26329 = prev_score_out_0_op_i1_17_fu_6710_p2.read();
        prev_score_out_0_op_i_16_reg_26373 = prev_score_out_0_op_i_16_fu_6736_p2.read();
        prev_score_out_8_17_reg_26398 = prev_score_out_8_17_fu_6769_p2.read();
        score1_load_49_reg_26355 = score1_q0.read();
        tmp_27_17_reg_26324 = tmp_27_17_fu_6703_p3.read();
        tmp_48_17_reg_26335 = tmp_48_17_fu_6715_p2.read();
        tmp_49_17_reg_26340 = tmp_49_17_fu_6720_p2.read();
        tmp_52_17_reg_26345 = tmp_52_17_fu_6725_p2.read();
        tmp_53_17_reg_26350 = tmp_53_17_fu_6730_p2.read();
        tmp_57_16_reg_26378 = tmp_57_16_fu_6741_p2.read();
        tmp_58_16_reg_26383 = tmp_58_16_fu_6746_p2.read();
        tmp_59_16_reg_26388 = tmp_59_16_fu_6751_p2.read();
        tmp_60_16_reg_26393 = tmp_60_16_fu_6756_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read()))) {
        orig1_load_55_reg_26478 = orig1_q0.read();
        orig1_load_56_reg_26484 = orig1_q1.read();
        prev_score_out_0_op_i1_18_reg_26446 = prev_score_out_0_op_i1_18_fu_6871_p2.read();
        prev_score_out_0_op_i_17_reg_26490 = prev_score_out_0_op_i_17_fu_6895_p2.read();
        prev_score_out_8_18_reg_26515 = prev_score_out_8_18_fu_6928_p2.read();
        score1_load_51_reg_26472 = score1_q0.read();
        tmp_48_18_reg_26452 = tmp_48_18_fu_6876_p2.read();
        tmp_49_18_reg_26457 = tmp_49_18_fu_6881_p2.read();
        tmp_52_18_reg_26462 = tmp_52_18_fu_6885_p2.read();
        tmp_53_18_reg_26467 = tmp_53_18_fu_6890_p2.read();
        tmp_57_17_reg_26495 = tmp_57_17_fu_6900_p2.read();
        tmp_58_17_reg_26500 = tmp_58_17_fu_6905_p2.read();
        tmp_59_17_reg_26505 = tmp_59_17_fu_6910_p2.read();
        tmp_60_17_reg_26510 = tmp_60_17_fu_6915_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read()))) {
        orig1_load_57_reg_26544 = orig1_q0.read();
        orig2_load_1_19_reg_26529 = orig2_load_1_19_fu_6967_p3.read();
        prev_orig_out_2_i_17_reg_26556 = prev_orig_out_2_i_17_fu_7022_p3.read();
        prev_score_out_2_i_17_reg_26550 = prev_score_out_2_i_17_fu_7015_p3.read();
        prev_score_out_6_20_reg_26536 = prev_score_out_6_20_fu_6989_p2.read();
        score2_load_1_19_reg_26523 = score2_load_1_19_fu_6960_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read()))) {
        orig1_load_58_reg_26593 = orig1_q0.read();
        orig1_load_59_reg_26599 = orig1_q1.read();
        prev_score_out_0_op_i1_19_reg_26567 = prev_score_out_0_op_i1_19_fu_7036_p2.read();
        prev_score_out_0_op_i_18_reg_26605 = prev_score_out_0_op_i_18_fu_7062_p2.read();
        prev_score_out_8_19_reg_26630 = prev_score_out_8_19_fu_7095_p2.read();
        tmp_27_19_reg_26562 = tmp_27_19_fu_7029_p3.read();
        tmp_48_19_reg_26573 = tmp_48_19_fu_7041_p2.read();
        tmp_49_19_reg_26578 = tmp_49_19_fu_7046_p2.read();
        tmp_52_19_reg_26583 = tmp_52_19_fu_7051_p2.read();
        tmp_53_19_reg_26588 = tmp_53_19_fu_7056_p2.read();
        tmp_57_18_reg_26610 = tmp_57_18_fu_7067_p2.read();
        tmp_58_18_reg_26615 = tmp_58_18_fu_7072_p2.read();
        tmp_59_18_reg_26620 = tmp_59_18_fu_7077_p2.read();
        tmp_60_18_reg_26625 = tmp_60_18_fu_7082_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read()))) {
        orig1_load_60_reg_26665 = orig1_q0.read();
        orig2_load_1_20_reg_26644 = orig2_load_1_20_fu_7139_p3.read();
        prev_orig_out_2_i_18_reg_26677 = prev_orig_out_2_i_18_fu_7194_p3.read();
        prev_score_out_2_i_18_reg_26671 = prev_score_out_2_i_18_fu_7187_p3.read();
        prev_score_out_6_21_reg_26651 = prev_score_out_6_21_fu_7161_p2.read();
        score1_load_53_reg_26659 = score1_q0.read();
        score2_load_1_20_reg_26638 = score2_load_1_20_fu_7132_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read()))) {
        orig1_load_61_reg_26720 = orig1_q0.read();
        orig1_load_62_reg_26726 = orig1_q1.read();
        prev_score_out_0_op_i1_20_reg_26688 = prev_score_out_0_op_i1_20_fu_7208_p2.read();
        prev_score_out_0_op_i_19_reg_26732 = prev_score_out_0_op_i_19_fu_7234_p2.read();
        prev_score_out_8_20_reg_26757 = prev_score_out_8_20_fu_7267_p2.read();
        score1_load_54_reg_26714 = score1_q0.read();
        tmp_27_20_reg_26683 = tmp_27_20_fu_7201_p3.read();
        tmp_48_20_reg_26694 = tmp_48_20_fu_7213_p2.read();
        tmp_49_20_reg_26699 = tmp_49_20_fu_7218_p2.read();
        tmp_52_20_reg_26704 = tmp_52_20_fu_7223_p2.read();
        tmp_53_20_reg_26709 = tmp_53_20_fu_7228_p2.read();
        tmp_57_19_reg_26737 = tmp_57_19_fu_7239_p2.read();
        tmp_58_19_reg_26742 = tmp_58_19_fu_7244_p2.read();
        tmp_59_19_reg_26747 = tmp_59_19_fu_7249_p2.read();
        tmp_60_19_reg_26752 = tmp_60_19_fu_7254_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read()))) {
        orig1_load_63_reg_26791 = orig1_q0.read();
        orig2_load_1_21_reg_26771 = orig2_load_1_21_fu_7305_p3.read();
        prev_orig_out_2_i_19_reg_26803 = prev_orig_out_2_i_19_fu_7360_p3.read();
        prev_score_out_2_i_19_reg_26797 = prev_score_out_2_i_19_fu_7353_p3.read();
        prev_score_out_6_22_reg_26783 = prev_score_out_6_22_fu_7327_p2.read();
        score2_load_1_21_reg_26765 = score2_load_1_21_fu_7298_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read()))) {
        orig1_load_64_reg_26840 = orig1_q0.read();
        orig1_load_65_reg_26846 = orig1_q1.read();
        prev_score_out_0_op_i1_21_reg_26814 = prev_score_out_0_op_i1_21_fu_7373_p2.read();
        prev_score_out_0_op_i_20_reg_26852 = prev_score_out_0_op_i_20_fu_7399_p2.read();
        prev_score_out_8_21_reg_26877 = prev_score_out_8_21_fu_7432_p2.read();
        tmp_27_21_reg_26809 = tmp_27_21_fu_7367_p3.read();
        tmp_48_21_reg_26820 = tmp_48_21_fu_7378_p2.read();
        tmp_49_21_reg_26825 = tmp_49_21_fu_7383_p2.read();
        tmp_52_21_reg_26830 = tmp_52_21_fu_7388_p2.read();
        tmp_53_21_reg_26835 = tmp_53_21_fu_7393_p2.read();
        tmp_57_20_reg_26857 = tmp_57_20_fu_7404_p2.read();
        tmp_58_20_reg_26862 = tmp_58_20_fu_7409_p2.read();
        tmp_59_20_reg_26867 = tmp_59_20_fu_7414_p2.read();
        tmp_60_20_reg_26872 = tmp_60_20_fu_7419_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_48.read()))) {
        orig1_load_66_reg_26911 = orig1_q0.read();
        orig2_load_1_22_reg_26891 = orig2_load_1_22_fu_7471_p3.read();
        prev_orig_out_2_i_20_reg_26923 = prev_orig_out_2_i_20_fu_7531_p3.read();
        prev_score_out_2_i_20_reg_26917 = prev_score_out_2_i_20_fu_7524_p3.read();
        prev_score_out_6_23_reg_26903 = prev_score_out_6_23_fu_7498_p2.read();
        score2_load_1_22_reg_26885 = score2_load_1_22_fu_7464_p3.read();
        tmp_135_reg_26898 = tmp_135_fu_7479_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read()))) {
        orig1_load_67_reg_26966 = orig1_q0.read();
        orig1_load_68_reg_26972 = orig1_q1.read();
        prev_score_out_0_op_i1_22_reg_26934 = prev_score_out_0_op_i1_22_fu_7545_p2.read();
        prev_score_out_0_op_i_21_reg_26978 = prev_score_out_0_op_i_21_fu_7571_p2.read();
        prev_score_out_8_22_reg_27003 = prev_score_out_8_22_fu_7604_p2.read();
        score1_load_57_reg_26960 = score1_q0.read();
        tmp_27_22_reg_26929 = tmp_27_22_fu_7538_p3.read();
        tmp_48_22_reg_26940 = tmp_48_22_fu_7550_p2.read();
        tmp_49_22_reg_26945 = tmp_49_22_fu_7555_p2.read();
        tmp_52_22_reg_26950 = tmp_52_22_fu_7560_p2.read();
        tmp_53_22_reg_26955 = tmp_53_22_fu_7565_p2.read();
        tmp_57_21_reg_26983 = tmp_57_21_fu_7576_p2.read();
        tmp_58_21_reg_26988 = tmp_58_21_fu_7581_p2.read();
        tmp_59_21_reg_26993 = tmp_59_21_fu_7586_p2.read();
        tmp_60_21_reg_26998 = tmp_60_21_fu_7591_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_50.read()))) {
        orig1_load_69_reg_27032 = orig1_q0.read();
        orig2_load_1_23_reg_27017 = orig2_load_1_23_fu_7643_p3.read();
        prev_orig_out_2_i_21_reg_27044 = prev_orig_out_2_i_21_fu_7697_p3.read();
        prev_score_out_2_i_21_reg_27038 = prev_score_out_2_i_21_fu_7690_p3.read();
        prev_score_out_6_24_reg_27024 = prev_score_out_6_24_fu_7664_p2.read();
        score2_load_1_23_reg_27011 = score2_load_1_23_fu_7636_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read()))) {
        orig1_load_70_reg_27087 = orig1_q0.read();
        orig1_load_71_reg_27093 = orig1_q1.read();
        prev_score_out_0_op_i1_23_reg_27055 = prev_score_out_0_op_i1_23_fu_7711_p2.read();
        prev_score_out_0_op_i_22_reg_27099 = prev_score_out_0_op_i_22_fu_7737_p2.read();
        prev_score_out_8_23_reg_27124 = prev_score_out_8_23_fu_7770_p2.read();
        score1_load_58_reg_27081 = score1_q0.read();
        tmp_27_23_reg_27050 = tmp_27_23_fu_7704_p3.read();
        tmp_48_23_reg_27061 = tmp_48_23_fu_7716_p2.read();
        tmp_49_23_reg_27066 = tmp_49_23_fu_7721_p2.read();
        tmp_52_23_reg_27071 = tmp_52_23_fu_7726_p2.read();
        tmp_53_23_reg_27076 = tmp_53_23_fu_7731_p2.read();
        tmp_57_22_reg_27104 = tmp_57_22_fu_7742_p2.read();
        tmp_58_22_reg_27109 = tmp_58_22_fu_7747_p2.read();
        tmp_59_22_reg_27114 = tmp_59_22_fu_7752_p2.read();
        tmp_60_22_reg_27119 = tmp_60_22_fu_7757_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read()))) {
        orig1_load_72_reg_27207 = orig1_q0.read();
        prev_score_out_0_op_i1_24_reg_27175 = prev_score_out_0_op_i1_24_fu_7877_p2.read();
        prev_score_out_0_op_i_23_reg_27213 = prev_score_out_0_op_i_23_fu_7903_p2.read();
        prev_score_out_8_24_reg_27238 = prev_score_out_8_24_fu_7936_p2.read();
        score1_load_60_reg_27201 = score1_q0.read();
        tmp_27_24_reg_27170 = tmp_27_24_fu_7870_p3.read();
        tmp_48_24_reg_27181 = tmp_48_24_fu_7882_p2.read();
        tmp_49_24_reg_27186 = tmp_49_24_fu_7887_p2.read();
        tmp_52_24_reg_27191 = tmp_52_24_fu_7892_p2.read();
        tmp_53_24_reg_27196 = tmp_53_24_fu_7897_p2.read();
        tmp_57_23_reg_27218 = tmp_57_23_fu_7908_p2.read();
        tmp_58_23_reg_27223 = tmp_58_23_fu_7913_p2.read();
        tmp_59_23_reg_27228 = tmp_59_23_fu_7918_p2.read();
        tmp_60_23_reg_27233 = tmp_60_23_fu_7923_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read()))) {
        orig1_load_73_reg_27326 = orig1_q0.read();
        prev_score_out_0_op_i1_25_reg_27294 = prev_score_out_0_op_i1_25_fu_8051_p2.read();
        prev_score_out_0_op_i_24_reg_27332 = prev_score_out_0_op_i_24_fu_8077_p2.read();
        prev_score_out_8_25_reg_27357 = prev_score_out_8_25_fu_8110_p2.read();
        score1_load_61_reg_27320 = score1_q0.read();
        tmp_27_25_reg_27289 = tmp_27_25_fu_8045_p3.read();
        tmp_48_25_reg_27300 = tmp_48_25_fu_8056_p2.read();
        tmp_49_25_reg_27305 = tmp_49_25_fu_8061_p2.read();
        tmp_52_25_reg_27310 = tmp_52_25_fu_8066_p2.read();
        tmp_53_25_reg_27315 = tmp_53_25_fu_8071_p2.read();
        tmp_57_24_reg_27337 = tmp_57_24_fu_8082_p2.read();
        tmp_58_24_reg_27342 = tmp_58_24_fu_8087_p2.read();
        tmp_59_24_reg_27347 = tmp_59_24_fu_8092_p2.read();
        tmp_60_24_reg_27352 = tmp_60_24_fu_8097_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read()))) {
        orig1_load_74_reg_27446 = orig1_q0.read();
        prev_score_out_0_op_i1_26_reg_27414 = prev_score_out_0_op_i1_26_fu_8222_p2.read();
        prev_score_out_0_op_i_25_reg_27452 = prev_score_out_0_op_i_25_fu_8248_p2.read();
        prev_score_out_8_26_reg_27477 = prev_score_out_8_26_fu_8281_p2.read();
        score1_load_63_reg_27440 = score1_q0.read();
        tmp_27_26_reg_27409 = tmp_27_26_fu_8215_p3.read();
        tmp_48_26_reg_27420 = tmp_48_26_fu_8227_p2.read();
        tmp_49_26_reg_27425 = tmp_49_26_fu_8232_p2.read();
        tmp_52_26_reg_27430 = tmp_52_26_fu_8237_p2.read();
        tmp_53_26_reg_27435 = tmp_53_26_fu_8242_p2.read();
        tmp_57_25_reg_27457 = tmp_57_25_fu_8253_p2.read();
        tmp_58_25_reg_27462 = tmp_58_25_fu_8258_p2.read();
        tmp_59_25_reg_27467 = tmp_59_25_fu_8263_p2.read();
        tmp_60_25_reg_27472 = tmp_60_25_fu_8268_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read()))) {
        orig1_load_75_reg_27560 = orig1_q0.read();
        prev_score_out_0_op_i1_27_reg_27528 = prev_score_out_0_op_i1_27_fu_8385_p2.read();
        prev_score_out_0_op_i_26_reg_27566 = prev_score_out_0_op_i_26_fu_8411_p2.read();
        prev_score_out_8_27_reg_27591 = prev_score_out_8_27_fu_8444_p2.read();
        score1_load_64_reg_27554 = score1_q0.read();
        tmp_27_27_reg_27523 = tmp_27_27_fu_8379_p3.read();
        tmp_48_27_reg_27534 = tmp_48_27_fu_8390_p2.read();
        tmp_49_27_reg_27539 = tmp_49_27_fu_8395_p2.read();
        tmp_52_27_reg_27544 = tmp_52_27_fu_8400_p2.read();
        tmp_53_27_reg_27549 = tmp_53_27_fu_8405_p2.read();
        tmp_57_26_reg_27571 = tmp_57_26_fu_8416_p2.read();
        tmp_58_26_reg_27576 = tmp_58_26_fu_8421_p2.read();
        tmp_59_26_reg_27581 = tmp_59_26_fu_8426_p2.read();
        tmp_60_26_reg_27586 = tmp_60_26_fu_8431_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read()))) {
        orig1_load_76_reg_27685 = orig1_q0.read();
        prev_score_out_0_op_i1_28_reg_27653 = prev_score_out_0_op_i1_28_fu_8560_p2.read();
        prev_score_out_0_op_i_27_reg_27691 = prev_score_out_0_op_i_27_fu_8586_p2.read();
        prev_score_out_8_28_reg_27716 = prev_score_out_8_28_fu_8619_p2.read();
        score1_load_66_reg_27679 = score1_q0.read();
        tmp_27_28_reg_27648 = tmp_27_28_fu_8554_p3.read();
        tmp_48_28_reg_27659 = tmp_48_28_fu_8565_p2.read();
        tmp_49_28_reg_27664 = tmp_49_28_fu_8570_p2.read();
        tmp_52_28_reg_27669 = tmp_52_28_fu_8575_p2.read();
        tmp_53_28_reg_27674 = tmp_53_28_fu_8580_p2.read();
        tmp_57_27_reg_27696 = tmp_57_27_fu_8591_p2.read();
        tmp_58_27_reg_27701 = tmp_58_27_fu_8596_p2.read();
        tmp_59_27_reg_27706 = tmp_59_27_fu_8601_p2.read();
        tmp_60_27_reg_27711 = tmp_60_27_fu_8606_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read()))) {
        orig1_load_77_reg_27801 = orig1_q0.read();
        prev_score_out_0_op_i1_29_reg_27769 = prev_score_out_0_op_i1_29_fu_8731_p2.read();
        prev_score_out_0_op_i_28_reg_27807 = prev_score_out_0_op_i_28_fu_8755_p2.read();
        prev_score_out_8_29_reg_27832 = prev_score_out_8_29_fu_8788_p2.read();
        score1_load_67_reg_27795 = score1_q0.read();
        tmp_48_29_reg_27775 = tmp_48_29_fu_8736_p2.read();
        tmp_49_29_reg_27780 = tmp_49_29_fu_8741_p2.read();
        tmp_52_29_reg_27785 = tmp_52_29_fu_8745_p2.read();
        tmp_53_29_reg_27790 = tmp_53_29_fu_8750_p2.read();
        tmp_57_28_reg_27812 = tmp_57_28_fu_8760_p2.read();
        tmp_58_28_reg_27817 = tmp_58_28_fu_8765_p2.read();
        tmp_59_28_reg_27822 = tmp_59_28_fu_8770_p2.read();
        tmp_60_28_reg_27827 = tmp_60_28_fu_8775_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read()))) {
        orig1_load_78_reg_27918 = orig1_q0.read();
        prev_score_out_0_op_i1_30_reg_27886 = prev_score_out_0_op_i1_30_fu_8893_p2.read();
        prev_score_out_0_op_i_29_reg_27924 = prev_score_out_0_op_i_29_fu_8917_p2.read();
        prev_score_out_8_30_reg_27949 = prev_score_out_8_30_fu_8950_p2.read();
        score1_load_69_reg_27912 = score1_q0.read();
        tmp_48_30_reg_27892 = tmp_48_30_fu_8898_p2.read();
        tmp_49_30_reg_27897 = tmp_49_30_fu_8903_p2.read();
        tmp_52_30_reg_27902 = tmp_52_30_fu_8907_p2.read();
        tmp_53_30_reg_27907 = tmp_53_30_fu_8912_p2.read();
        tmp_57_29_reg_27929 = tmp_57_29_fu_8922_p2.read();
        tmp_58_29_reg_27934 = tmp_58_29_fu_8927_p2.read();
        tmp_59_29_reg_27939 = tmp_59_29_fu_8932_p2.read();
        tmp_60_29_reg_27944 = tmp_60_29_fu_8937_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read()))) {
        orig1_load_79_reg_28034 = orig1_q0.read();
        prev_score_out_0_op_i1_31_reg_28002 = prev_score_out_0_op_i1_31_fu_9067_p2.read();
        prev_score_out_0_op_i_30_reg_28040 = prev_score_out_0_op_i_30_fu_9091_p2.read();
        prev_score_out_8_31_reg_28065 = prev_score_out_8_31_fu_9124_p2.read();
        score1_load_70_reg_28028 = score1_q0.read();
        tmp_48_31_reg_28008 = tmp_48_31_fu_9072_p2.read();
        tmp_49_31_reg_28013 = tmp_49_31_fu_9077_p2.read();
        tmp_52_31_reg_28018 = tmp_52_31_fu_9081_p2.read();
        tmp_53_31_reg_28023 = tmp_53_31_fu_9086_p2.read();
        tmp_57_30_reg_28045 = tmp_57_30_fu_9096_p2.read();
        tmp_58_30_reg_28050 = tmp_58_30_fu_9101_p2.read();
        tmp_59_30_reg_28055 = tmp_59_30_fu_9106_p2.read();
        tmp_60_30_reg_28060 = tmp_60_30_fu_9111_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read()))) {
        orig1_load_80_reg_28151 = orig1_q0.read();
        prev_score_out_0_op_i1_32_reg_28119 = prev_score_out_0_op_i1_32_fu_9231_p2.read();
        prev_score_out_0_op_i_31_reg_28157 = prev_score_out_0_op_i_31_fu_9255_p2.read();
        prev_score_out_8_32_reg_28182 = prev_score_out_8_32_fu_9288_p2.read();
        score1_load_72_reg_28145 = score1_q0.read();
        tmp_48_32_reg_28125 = tmp_48_32_fu_9236_p2.read();
        tmp_49_32_reg_28130 = tmp_49_32_fu_9241_p2.read();
        tmp_52_32_reg_28135 = tmp_52_32_fu_9245_p2.read();
        tmp_53_32_reg_28140 = tmp_53_32_fu_9250_p2.read();
        tmp_57_31_reg_28162 = tmp_57_31_fu_9260_p2.read();
        tmp_58_31_reg_28167 = tmp_58_31_fu_9265_p2.read();
        tmp_59_31_reg_28172 = tmp_59_31_fu_9270_p2.read();
        tmp_60_31_reg_28177 = tmp_60_31_fu_9275_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read()))) {
        orig1_load_81_reg_28265 = orig1_q0.read();
        prev_score_out_0_op_i1_33_reg_28233 = prev_score_out_0_op_i1_33_fu_9398_p2.read();
        prev_score_out_0_op_i_32_reg_28271 = prev_score_out_0_op_i_32_fu_9424_p2.read();
        prev_score_out_8_33_reg_28296 = prev_score_out_8_33_fu_9457_p2.read();
        score1_load_73_reg_28259 = score1_q0.read();
        tmp_27_33_reg_28228 = tmp_27_33_fu_9392_p3.read();
        tmp_48_33_reg_28239 = tmp_48_33_fu_9403_p2.read();
        tmp_49_33_reg_28244 = tmp_49_33_fu_9408_p2.read();
        tmp_52_33_reg_28249 = tmp_52_33_fu_9413_p2.read();
        tmp_53_33_reg_28254 = tmp_53_33_fu_9418_p2.read();
        tmp_57_32_reg_28276 = tmp_57_32_fu_9429_p2.read();
        tmp_58_32_reg_28281 = tmp_58_32_fu_9434_p2.read();
        tmp_59_32_reg_28286 = tmp_59_32_fu_9439_p2.read();
        tmp_60_32_reg_28291 = tmp_60_32_fu_9444_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read()))) {
        orig1_load_82_reg_28387 = orig1_q0.read();
        prev_score_out_0_op_i1_34_reg_28355 = prev_score_out_0_op_i1_34_fu_9574_p2.read();
        prev_score_out_0_op_i_33_reg_28393 = prev_score_out_0_op_i_33_fu_9598_p2.read();
        prev_score_out_8_34_reg_28418 = prev_score_out_8_34_fu_9631_p2.read();
        score1_load_75_reg_28381 = score1_q0.read();
        tmp_48_34_reg_28361 = tmp_48_34_fu_9579_p2.read();
        tmp_49_34_reg_28366 = tmp_49_34_fu_9584_p2.read();
        tmp_52_34_reg_28371 = tmp_52_34_fu_9588_p2.read();
        tmp_53_34_reg_28376 = tmp_53_34_fu_9593_p2.read();
        tmp_57_33_reg_28398 = tmp_57_33_fu_9603_p2.read();
        tmp_58_33_reg_28403 = tmp_58_33_fu_9608_p2.read();
        tmp_59_33_reg_28408 = tmp_59_33_fu_9613_p2.read();
        tmp_60_33_reg_28413 = tmp_60_33_fu_9618_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read()))) {
        orig1_load_83_reg_28503 = orig1_q0.read();
        prev_score_out_0_op_i1_35_reg_28471 = prev_score_out_0_op_i1_35_fu_9743_p2.read();
        prev_score_out_0_op_i_34_reg_28509 = prev_score_out_0_op_i_34_fu_9767_p2.read();
        prev_score_out_8_35_reg_28534 = prev_score_out_8_35_fu_9800_p2.read();
        score1_load_76_reg_28497 = score1_q0.read();
        tmp_48_35_reg_28477 = tmp_48_35_fu_9748_p2.read();
        tmp_49_35_reg_28482 = tmp_49_35_fu_9753_p2.read();
        tmp_52_35_reg_28487 = tmp_52_35_fu_9757_p2.read();
        tmp_53_35_reg_28492 = tmp_53_35_fu_9762_p2.read();
        tmp_57_34_reg_28514 = tmp_57_34_fu_9772_p2.read();
        tmp_58_34_reg_28519 = tmp_58_34_fu_9777_p2.read();
        tmp_59_34_reg_28524 = tmp_59_34_fu_9782_p2.read();
        tmp_60_34_reg_28529 = tmp_60_34_fu_9787_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read()))) {
        orig1_load_84_reg_28628 = orig1_q0.read();
        prev_score_out_0_op_i1_36_reg_28596 = prev_score_out_0_op_i1_36_fu_9904_p2.read();
        prev_score_out_0_op_i_35_reg_28634 = prev_score_out_0_op_i_35_fu_9930_p2.read();
        prev_score_out_8_36_reg_28659 = prev_score_out_8_36_fu_9963_p2.read();
        score1_load_78_reg_28622 = score1_q0.read();
        tmp_27_36_reg_28591 = tmp_27_36_fu_9898_p3.read();
        tmp_48_36_reg_28602 = tmp_48_36_fu_9909_p2.read();
        tmp_49_36_reg_28607 = tmp_49_36_fu_9914_p2.read();
        tmp_52_36_reg_28612 = tmp_52_36_fu_9919_p2.read();
        tmp_53_36_reg_28617 = tmp_53_36_fu_9924_p2.read();
        tmp_57_35_reg_28639 = tmp_57_35_fu_9935_p2.read();
        tmp_58_35_reg_28644 = tmp_58_35_fu_9940_p2.read();
        tmp_59_35_reg_28649 = tmp_59_35_fu_9945_p2.read();
        tmp_60_35_reg_28654 = tmp_60_35_fu_9950_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read()))) {
        orig1_load_85_reg_28747 = orig1_q0.read();
        prev_score_out_0_op_i1_37_reg_28715 = prev_score_out_0_op_i1_37_fu_10078_p2.read();
        prev_score_out_0_op_i_36_reg_28753 = prev_score_out_0_op_i_36_fu_10104_p2.read();
        prev_score_out_8_37_reg_28778 = prev_score_out_8_37_fu_10137_p2.read();
        score1_load_79_reg_28741 = score1_q0.read();
        tmp_27_37_reg_28710 = tmp_27_37_fu_10072_p3.read();
        tmp_48_37_reg_28721 = tmp_48_37_fu_10083_p2.read();
        tmp_49_37_reg_28726 = tmp_49_37_fu_10088_p2.read();
        tmp_52_37_reg_28731 = tmp_52_37_fu_10093_p2.read();
        tmp_53_37_reg_28736 = tmp_53_37_fu_10098_p2.read();
        tmp_57_36_reg_28758 = tmp_57_36_fu_10109_p2.read();
        tmp_58_36_reg_28763 = tmp_58_36_fu_10114_p2.read();
        tmp_59_36_reg_28768 = tmp_59_36_fu_10119_p2.read();
        tmp_60_36_reg_28773 = tmp_60_36_fu_10124_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read()))) {
        orig1_load_86_reg_28862 = orig1_q0.read();
        prev_score_out_0_op_i1_38_reg_28830 = prev_score_out_0_op_i1_38_fu_10244_p2.read();
        prev_score_out_0_op_i_37_reg_28868 = prev_score_out_0_op_i_37_fu_10270_p2.read();
        prev_score_out_8_38_reg_28893 = prev_score_out_8_38_fu_10303_p2.read();
        score1_load_81_reg_28856 = score1_q0.read();
        tmp_27_38_reg_28825 = tmp_27_38_fu_10237_p3.read();
        tmp_48_38_reg_28836 = tmp_48_38_fu_10249_p2.read();
        tmp_49_38_reg_28841 = tmp_49_38_fu_10254_p2.read();
        tmp_52_38_reg_28846 = tmp_52_38_fu_10259_p2.read();
        tmp_53_38_reg_28851 = tmp_53_38_fu_10264_p2.read();
        tmp_57_37_reg_28873 = tmp_57_37_fu_10275_p2.read();
        tmp_58_37_reg_28878 = tmp_58_37_fu_10280_p2.read();
        tmp_59_37_reg_28883 = tmp_59_37_fu_10285_p2.read();
        tmp_60_37_reg_28888 = tmp_60_37_fu_10290_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read()))) {
        orig1_load_87_reg_28981 = orig1_q0.read();
        prev_score_out_0_op_i1_39_reg_28949 = prev_score_out_0_op_i1_39_fu_10413_p2.read();
        prev_score_out_0_op_i_38_reg_28987 = prev_score_out_0_op_i_38_fu_10439_p2.read();
        prev_score_out_8_39_reg_29012 = prev_score_out_8_39_fu_10472_p2.read();
        score1_load_82_reg_28975 = score1_q0.read();
        tmp_27_39_reg_28944 = tmp_27_39_fu_10407_p3.read();
        tmp_48_39_reg_28955 = tmp_48_39_fu_10418_p2.read();
        tmp_49_39_reg_28960 = tmp_49_39_fu_10423_p2.read();
        tmp_52_39_reg_28965 = tmp_52_39_fu_10428_p2.read();
        tmp_53_39_reg_28970 = tmp_53_39_fu_10433_p2.read();
        tmp_57_38_reg_28992 = tmp_57_38_fu_10444_p2.read();
        tmp_58_38_reg_28997 = tmp_58_38_fu_10449_p2.read();
        tmp_59_38_reg_29002 = tmp_59_38_fu_10454_p2.read();
        tmp_60_38_reg_29007 = tmp_60_38_fu_10459_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read()))) {
        orig1_load_88_reg_29098 = orig1_q0.read();
        prev_score_out_0_op_i1_40_reg_29066 = prev_score_out_0_op_i1_40_fu_10583_p2.read();
        prev_score_out_0_op_i_39_reg_29104 = prev_score_out_0_op_i_39_fu_10607_p2.read();
        prev_score_out_8_40_reg_29129 = prev_score_out_8_40_fu_10640_p2.read();
        score1_load_84_reg_29092 = score1_q0.read();
        tmp_48_40_reg_29072 = tmp_48_40_fu_10588_p2.read();
        tmp_49_40_reg_29077 = tmp_49_40_fu_10593_p2.read();
        tmp_52_40_reg_29082 = tmp_52_40_fu_10597_p2.read();
        tmp_53_40_reg_29087 = tmp_53_40_fu_10602_p2.read();
        tmp_57_39_reg_29109 = tmp_57_39_fu_10612_p2.read();
        tmp_58_39_reg_29114 = tmp_58_39_fu_10617_p2.read();
        tmp_59_39_reg_29119 = tmp_59_39_fu_10622_p2.read();
        tmp_60_39_reg_29124 = tmp_60_39_fu_10627_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read()))) {
        orig1_load_89_reg_29209 = orig1_q0.read();
        prev_score_out_0_op_i1_41_reg_29177 = prev_score_out_0_op_i1_41_fu_10753_p2.read();
        prev_score_out_0_op_i_40_reg_29215 = prev_score_out_0_op_i_40_fu_10777_p2.read();
        prev_score_out_8_41_reg_29240 = prev_score_out_8_41_fu_10810_p2.read();
        score1_load_85_reg_29203 = score1_q0.read();
        tmp_48_41_reg_29183 = tmp_48_41_fu_10758_p2.read();
        tmp_49_41_reg_29188 = tmp_49_41_fu_10763_p2.read();
        tmp_52_41_reg_29193 = tmp_52_41_fu_10767_p2.read();
        tmp_53_41_reg_29198 = tmp_53_41_fu_10772_p2.read();
        tmp_57_40_reg_29220 = tmp_57_40_fu_10782_p2.read();
        tmp_58_40_reg_29225 = tmp_58_40_fu_10787_p2.read();
        tmp_59_40_reg_29230 = tmp_59_40_fu_10792_p2.read();
        tmp_60_40_reg_29235 = tmp_60_40_fu_10797_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read()))) {
        orig1_load_90_reg_29334 = orig1_q0.read();
        prev_score_out_0_op_i1_42_reg_29302 = prev_score_out_0_op_i1_42_fu_10920_p2.read();
        prev_score_out_0_op_i_41_reg_29340 = prev_score_out_0_op_i_41_fu_10946_p2.read();
        prev_score_out_8_42_reg_29365 = prev_score_out_8_42_fu_10979_p2.read();
        score1_load_87_reg_29328 = score1_q0.read();
        tmp_27_42_reg_29297 = tmp_27_42_fu_10914_p3.read();
        tmp_48_42_reg_29308 = tmp_48_42_fu_10925_p2.read();
        tmp_49_42_reg_29313 = tmp_49_42_fu_10930_p2.read();
        tmp_52_42_reg_29318 = tmp_52_42_fu_10935_p2.read();
        tmp_53_42_reg_29323 = tmp_53_42_fu_10940_p2.read();
        tmp_57_41_reg_29345 = tmp_57_41_fu_10951_p2.read();
        tmp_58_41_reg_29350 = tmp_58_41_fu_10956_p2.read();
        tmp_59_41_reg_29355 = tmp_59_41_fu_10961_p2.read();
        tmp_60_41_reg_29360 = tmp_60_41_fu_10966_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read()))) {
        orig1_load_91_reg_29453 = orig1_q0.read();
        prev_score_out_0_op_i1_43_reg_29421 = prev_score_out_0_op_i1_43_fu_11094_p2.read();
        prev_score_out_0_op_i_42_reg_29459 = prev_score_out_0_op_i_42_fu_11120_p2.read();
        prev_score_out_8_43_reg_29484 = prev_score_out_8_43_fu_11153_p2.read();
        score1_load_88_reg_29447 = score1_q0.read();
        tmp_27_43_reg_29416 = tmp_27_43_fu_11088_p3.read();
        tmp_48_43_reg_29427 = tmp_48_43_fu_11099_p2.read();
        tmp_49_43_reg_29432 = tmp_49_43_fu_11104_p2.read();
        tmp_52_43_reg_29437 = tmp_52_43_fu_11109_p2.read();
        tmp_53_43_reg_29442 = tmp_53_43_fu_11114_p2.read();
        tmp_57_42_reg_29464 = tmp_57_42_fu_11125_p2.read();
        tmp_58_42_reg_29469 = tmp_58_42_fu_11130_p2.read();
        tmp_59_42_reg_29474 = tmp_59_42_fu_11135_p2.read();
        tmp_60_42_reg_29479 = tmp_60_42_fu_11140_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read()))) {
        orig1_load_92_reg_29573 = orig1_q0.read();
        prev_score_out_0_op_i1_44_reg_29541 = prev_score_out_0_op_i1_44_fu_11259_p2.read();
        prev_score_out_0_op_i_43_reg_29579 = prev_score_out_0_op_i_43_fu_11285_p2.read();
        prev_score_out_8_44_reg_29604 = prev_score_out_8_44_fu_11318_p2.read();
        score1_load_90_reg_29567 = score1_q0.read();
        tmp_27_44_reg_29536 = tmp_27_44_fu_11253_p3.read();
        tmp_48_44_reg_29547 = tmp_48_44_fu_11264_p2.read();
        tmp_49_44_reg_29552 = tmp_49_44_fu_11269_p2.read();
        tmp_52_44_reg_29557 = tmp_52_44_fu_11274_p2.read();
        tmp_53_44_reg_29562 = tmp_53_44_fu_11279_p2.read();
        tmp_57_43_reg_29584 = tmp_57_43_fu_11290_p2.read();
        tmp_58_43_reg_29589 = tmp_58_43_fu_11295_p2.read();
        tmp_59_43_reg_29594 = tmp_59_43_fu_11300_p2.read();
        tmp_60_43_reg_29599 = tmp_60_43_fu_11305_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read()))) {
        orig1_load_93_reg_29684 = orig1_q0.read();
        prev_score_out_0_op_i1_45_reg_29652 = prev_score_out_0_op_i1_45_fu_11429_p2.read();
        prev_score_out_0_op_i_44_reg_29690 = prev_score_out_0_op_i_44_fu_11453_p2.read();
        prev_score_out_8_45_reg_29715 = prev_score_out_8_45_fu_11486_p2.read();
        score1_load_91_reg_29678 = score1_q0.read();
        tmp_48_45_reg_29658 = tmp_48_45_fu_11434_p2.read();
        tmp_49_45_reg_29663 = tmp_49_45_fu_11439_p2.read();
        tmp_52_45_reg_29668 = tmp_52_45_fu_11443_p2.read();
        tmp_53_45_reg_29673 = tmp_53_45_fu_11448_p2.read();
        tmp_57_44_reg_29695 = tmp_57_44_fu_11458_p2.read();
        tmp_58_44_reg_29700 = tmp_58_44_fu_11463_p2.read();
        tmp_59_44_reg_29705 = tmp_59_44_fu_11468_p2.read();
        tmp_60_44_reg_29710 = tmp_60_44_fu_11473_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read()))) {
        orig1_load_94_reg_29804 = orig1_q0.read();
        prev_score_out_0_op_i1_46_reg_29772 = prev_score_out_0_op_i1_46_fu_11597_p2.read();
        prev_score_out_0_op_i_45_reg_29810 = prev_score_out_0_op_i_45_fu_11623_p2.read();
        prev_score_out_8_46_reg_29835 = prev_score_out_8_46_fu_11656_p2.read();
        score1_load_93_reg_29798 = score1_q0.read();
        tmp_27_46_reg_29767 = tmp_27_46_fu_11591_p3.read();
        tmp_48_46_reg_29778 = tmp_48_46_fu_11602_p2.read();
        tmp_49_46_reg_29783 = tmp_49_46_fu_11607_p2.read();
        tmp_52_46_reg_29788 = tmp_52_46_fu_11612_p2.read();
        tmp_53_46_reg_29793 = tmp_53_46_fu_11617_p2.read();
        tmp_57_45_reg_29815 = tmp_57_45_fu_11628_p2.read();
        tmp_58_45_reg_29820 = tmp_58_45_fu_11633_p2.read();
        tmp_59_45_reg_29825 = tmp_59_45_fu_11638_p2.read();
        tmp_60_45_reg_29830 = tmp_60_45_fu_11643_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read()))) {
        orig1_load_95_reg_29918 = orig1_q0.read();
        prev_score_out_0_op_i1_47_reg_29886 = prev_score_out_0_op_i1_47_fu_11774_p2.read();
        prev_score_out_0_op_i_46_reg_29924 = prev_score_out_0_op_i_46_fu_11800_p2.read();
        prev_score_out_8_47_reg_29949 = prev_score_out_8_47_fu_11833_p2.read();
        score1_load_94_reg_29912 = score1_q0.read();
        tmp_27_47_reg_29881 = tmp_27_47_fu_11767_p3.read();
        tmp_48_47_reg_29892 = tmp_48_47_fu_11779_p2.read();
        tmp_49_47_reg_29897 = tmp_49_47_fu_11784_p2.read();
        tmp_52_47_reg_29902 = tmp_52_47_fu_11789_p2.read();
        tmp_53_47_reg_29907 = tmp_53_47_fu_11794_p2.read();
        tmp_57_46_reg_29929 = tmp_57_46_fu_11805_p2.read();
        tmp_58_46_reg_29934 = tmp_58_46_fu_11810_p2.read();
        tmp_59_46_reg_29939 = tmp_59_46_fu_11815_p2.read();
        tmp_60_46_reg_29944 = tmp_60_46_fu_11820_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        orig1_load_96_reg_30038 = orig1_q0.read();
        prev_score_out_0_op_i1_48_reg_30006 = prev_score_out_0_op_i1_48_fu_11937_p2.read();
        prev_score_out_0_op_i_47_reg_30044 = prev_score_out_0_op_i_47_fu_11963_p2.read();
        prev_score_out_8_48_reg_30069 = prev_score_out_8_48_fu_11996_p2.read();
        score1_load_96_reg_30032 = score1_q0.read();
        tmp_27_48_reg_30001 = tmp_27_48_fu_11931_p3.read();
        tmp_48_48_reg_30012 = tmp_48_48_fu_11942_p2.read();
        tmp_49_48_reg_30017 = tmp_49_48_fu_11947_p2.read();
        tmp_52_48_reg_30022 = tmp_52_48_fu_11952_p2.read();
        tmp_53_48_reg_30027 = tmp_53_48_fu_11957_p2.read();
        tmp_57_47_reg_30049 = tmp_57_47_fu_11968_p2.read();
        tmp_58_47_reg_30054 = tmp_58_47_fu_11973_p2.read();
        tmp_59_47_reg_30059 = tmp_59_47_fu_11978_p2.read();
        tmp_60_47_reg_30064 = tmp_60_47_fu_11983_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read()))) {
        orig2_load_1_10_reg_25428 = orig2_load_1_10_fu_5522_p3.read();
        prev_orig_out_2_i_9_reg_25449 = prev_orig_out_2_i_9_fu_5577_p3.read();
        prev_score_out_2_i_9_reg_25443 = prev_score_out_2_i_9_fu_5570_p3.read();
        prev_score_out_6_11_reg_25435 = prev_score_out_6_11_fu_5544_p2.read();
        score2_load_1_10_reg_25422 = score2_load_1_10_fu_5515_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_26.read()))) {
        orig2_load_1_11_reg_25549 = orig2_load_1_11_fu_5683_p3.read();
        prev_orig_out_2_i_s_reg_25570 = prev_orig_out_2_i_s_fu_5738_p3.read();
        prev_score_out_2_i_s_reg_25564 = prev_score_out_2_i_s_fu_5731_p3.read();
        prev_score_out_6_12_reg_25556 = prev_score_out_6_12_fu_5705_p2.read();
        score2_load_1_11_reg_25543 = score2_load_1_11_fu_5676_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_28.read()))) {
        orig2_load_1_12_reg_25670 = orig2_load_1_12_fu_5844_p3.read();
        prev_orig_out_2_i_10_reg_25698 = prev_orig_out_2_i_10_fu_5906_p3.read();
        prev_score_out_2_i_10_reg_25692 = prev_score_out_2_i_10_fu_5899_p3.read();
        prev_score_out_6_13_reg_25684 = prev_score_out_6_13_fu_5873_p2.read();
        score2_load_1_12_reg_25664 = score2_load_1_12_fu_5837_p3.read();
        tmp_27_12_reg_25677 = tmp_27_12_fu_5852_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_30.read()))) {
        orig2_load_1_13_reg_25793 = orig2_load_1_13_fu_6003_p3.read();
        prev_orig_out_2_i_11_reg_25819 = prev_orig_out_2_i_11_fu_6058_p3.read();
        prev_score_out_2_i_11_reg_25813 = prev_score_out_2_i_11_fu_6051_p3.read();
        prev_score_out_6_14_reg_25805 = prev_score_out_6_14_fu_6025_p2.read();
        score2_load_1_13_reg_25787 = score2_load_1_13_fu_5996_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_32.read()))) {
        orig2_load_1_14_reg_25919 = orig2_load_1_14_fu_6163_p3.read();
        prev_orig_out_2_i_12_reg_25947 = prev_orig_out_2_i_12_fu_6225_p3.read();
        prev_score_out_2_i_12_reg_25941 = prev_score_out_2_i_12_fu_6218_p3.read();
        prev_score_out_6_15_reg_25933 = prev_score_out_6_15_fu_6192_p2.read();
        score2_load_1_14_reg_25913 = score2_load_1_14_fu_6156_p3.read();
        tmp_27_14_reg_25926 = tmp_27_14_fu_6171_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read()))) {
        orig2_load_1_15_reg_26042 = orig2_load_1_15_fu_6322_p3.read();
        prev_orig_out_2_i_13_reg_26068 = prev_orig_out_2_i_13_fu_6377_p3.read();
        prev_score_out_2_i_13_reg_26062 = prev_score_out_2_i_13_fu_6370_p3.read();
        prev_score_out_6_16_reg_26054 = prev_score_out_6_16_fu_6344_p2.read();
        score2_load_1_15_reg_26036 = score2_load_1_15_fu_6315_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read()))) {
        orig2_load_1_16_reg_26168 = orig2_load_1_16_fu_6482_p3.read();
        prev_orig_out_2_i_14_reg_26196 = prev_orig_out_2_i_14_fu_6544_p3.read();
        prev_score_out_2_i_14_reg_26190 = prev_score_out_2_i_14_fu_6537_p3.read();
        prev_score_out_6_17_reg_26182 = prev_score_out_6_17_fu_6511_p2.read();
        score2_load_1_16_reg_26162 = score2_load_1_16_fu_6475_p3.read();
        tmp_27_16_reg_26175 = tmp_27_16_fu_6490_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read()))) {
        orig2_load_1_18_reg_26412 = orig2_load_1_18_fu_6802_p3.read();
        prev_orig_out_2_i_16_reg_26440 = prev_orig_out_2_i_16_fu_6864_p3.read();
        prev_score_out_2_i_16_reg_26434 = prev_score_out_2_i_16_fu_6857_p3.read();
        prev_score_out_6_19_reg_26426 = prev_score_out_6_19_fu_6831_p2.read();
        score2_load_1_18_reg_26406 = score2_load_1_18_fu_6795_p3.read();
        tmp_27_18_reg_26419 = tmp_27_18_fu_6810_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read()))) {
        orig2_load_1_24_reg_27138 = orig2_load_1_24_fu_7808_p3.read();
        prev_orig_out_2_i_22_reg_27164 = prev_orig_out_2_i_22_fu_7863_p3.read();
        prev_score_out_2_i_22_reg_27158 = prev_score_out_2_i_22_fu_7856_p3.read();
        prev_score_out_6_25_reg_27150 = prev_score_out_6_25_fu_7830_p2.read();
        score2_load_1_24_reg_27132 = score2_load_1_24_fu_7801_p3.read();
        tmp_138_reg_27145 = grp_fu_2785_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read()))) {
        orig2_load_1_25_reg_27252 = orig2_load_1_25_fu_7975_p3.read();
        prev_orig_out_2_i_23_reg_27283 = prev_orig_out_2_i_23_fu_8038_p3.read();
        prev_score_out_2_i_23_reg_27277 = prev_score_out_2_i_23_fu_8031_p3.read();
        prev_score_out_6_26_reg_27269 = prev_score_out_6_26_fu_8005_p2.read();
        score2_load_1_25_reg_27246 = score2_load_1_25_fu_7968_p3.read();
        tmp_139_reg_27264 = tmp_139_fu_7987_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read()))) {
        orig2_load_1_26_reg_27371 = orig2_load_1_26_fu_8149_p3.read();
        prev_orig_out_2_i_24_reg_27403 = prev_orig_out_2_i_24_fu_8208_p3.read();
        prev_score_out_2_i_24_reg_27397 = prev_score_out_2_i_24_fu_8201_p3.read();
        prev_score_out_6_27_reg_27383 = prev_score_out_6_27_fu_8175_p2.read();
        score1_load_62_reg_27391 = score1_q0.read();
        score2_load_1_26_reg_27365 = score2_load_1_26_fu_8142_p3.read();
        tmp_140_reg_27378 = tmp_140_fu_8156_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read()))) {
        orig2_load_1_27_reg_27491 = orig2_load_1_27_fu_8314_p3.read();
        prev_orig_out_2_i_25_reg_27517 = prev_orig_out_2_i_25_fu_8372_p3.read();
        prev_score_out_2_i_25_reg_27511 = prev_score_out_2_i_25_fu_8365_p3.read();
        prev_score_out_6_28_reg_27503 = prev_score_out_6_28_fu_8339_p2.read();
        score2_load_1_27_reg_27485 = score2_load_1_27_fu_8307_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read()))) {
        orig2_load_1_28_reg_27605 = orig2_load_1_28_fu_8483_p3.read();
        prev_orig_out_2_i_26_reg_27642 = prev_orig_out_2_i_26_fu_8547_p3.read();
        prev_score_out_2_i_26_reg_27636 = prev_score_out_2_i_26_fu_8540_p3.read();
        prev_score_out_6_29_reg_27622 = prev_score_out_6_29_fu_8514_p2.read();
        score1_load_65_reg_27630 = score1_q0.read();
        score2_load_1_28_reg_27599 = score2_load_1_28_fu_8476_p3.read();
        tmp_142_reg_27617 = tmp_142_fu_8496_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read()))) {
        orig2_load_1_29_reg_27730 = orig2_load_1_29_fu_8658_p3.read();
        prev_orig_out_2_i_27_reg_27763 = prev_orig_out_2_i_27_fu_8724_p3.read();
        prev_score_out_2_i_27_reg_27757 = prev_score_out_2_i_27_fu_8717_p3.read();
        prev_score_out_6_30_reg_27749 = prev_score_out_6_30_fu_8691_p2.read();
        score2_load_1_29_reg_27724 = score2_load_1_29_fu_8651_p3.read();
        tmp_143_reg_27744 = tmp_143_fu_8672_p3.read();
        tmp_27_29_reg_27737 = tmp_27_29_fu_8665_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        orig2_load_1_2_reg_23602 = orig2_load_1_2_fu_3751_p3.read();
        prev_score_out_0_op_i1_4_reg_23609 = prev_score_out_0_op_i1_4_fu_3758_p2.read();
        prev_score_out_0_op_i_3_reg_23680 = prev_score_out_0_op_i_3_fu_3790_p2.read();
        prev_score_out_8_4_reg_23705 = prev_score_out_8_4_fu_3823_p2.read();
        tmp_224_reg_23640 = tmp_224_fu_3782_p1.read();
        tmp_225_reg_23662 = tmp_225_fu_3786_p1.read();
        tmp_47_6_reg_23635 = grp_fu_2681_p2.read();
        tmp_47_72_reg_23646 = grp_fu_2433_p2.read();
        tmp_47_73_reg_23651 = grp_fu_2438_p2.read();
        tmp_48_4_reg_23615 = tmp_48_4_fu_3763_p2.read();
        tmp_49_4_reg_23620 = tmp_49_4_fu_3768_p2.read();
        tmp_52_4_reg_23625 = tmp_52_4_fu_3772_p2.read();
        tmp_53_4_reg_23630 = tmp_53_4_fu_3777_p2.read();
        tmp_56_6_reg_23713 = grp_fu_2686_p2.read();
        tmp_56_72_reg_23718 = grp_fu_2443_p2.read();
        tmp_56_73_reg_23723 = grp_fu_2448_p2.read();
        tmp_57_3_reg_23685 = tmp_57_3_fu_3795_p2.read();
        tmp_58_3_reg_23690 = tmp_58_3_fu_3800_p2.read();
        tmp_59_3_reg_23695 = tmp_59_3_fu_3805_p2.read();
        tmp_60_3_reg_23700 = tmp_60_3_fu_3810_p2.read();
        tmp_87_reg_23656 = read_r_Dout_A.read().range(7, 6);
        tmp_89_reg_23668 = read_r_Dout_B.read().range(3, 2);
        tmp_91_reg_23674 = read_r_Dout_B.read().range(7, 6);
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read()))) {
        orig2_load_1_30_reg_27846 = orig2_load_1_30_fu_8821_p3.read();
        prev_orig_out_2_i_28_reg_27880 = prev_orig_out_2_i_28_fu_8886_p3.read();
        prev_score_out_2_i_28_reg_27874 = prev_score_out_2_i_28_fu_8879_p3.read();
        prev_score_out_6_31_reg_27860 = prev_score_out_6_31_fu_8853_p2.read();
        score1_load_68_reg_27868 = score1_q0.read();
        score2_load_1_30_reg_27840 = score2_load_1_30_fu_8814_p3.read();
        tmp_27_30_reg_27853 = tmp_27_30_fu_8833_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read()))) {
        orig2_load_1_31_reg_27963 = orig2_load_1_31_fu_8989_p3.read();
        prev_orig_out_2_i_29_reg_27996 = prev_orig_out_2_i_29_fu_9060_p3.read();
        prev_score_out_2_i_29_reg_27990 = prev_score_out_2_i_29_fu_9053_p3.read();
        prev_score_out_6_32_reg_27982 = prev_score_out_6_32_fu_9027_p2.read();
        score2_load_1_31_reg_27957 = score2_load_1_31_fu_8982_p3.read();
        tmp_145_reg_27977 = tmp_145_fu_9009_p3.read();
        tmp_27_31_reg_27970 = tmp_27_31_fu_9002_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read()))) {
        orig2_load_1_32_reg_28079 = orig2_load_1_32_fu_9163_p3.read();
        prev_orig_out_2_i_30_reg_28113 = prev_orig_out_2_i_30_fu_9224_p3.read();
        prev_score_out_2_i_30_reg_28107 = prev_score_out_2_i_30_fu_9217_p3.read();
        prev_score_out_6_33_reg_28093 = prev_score_out_6_33_fu_9191_p2.read();
        score1_load_71_reg_28101 = score1_q0.read();
        score2_load_1_32_reg_28073 = score2_load_1_32_fu_9156_p3.read();
        tmp_27_32_reg_28086 = tmp_27_32_fu_9170_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read()))) {
        orig2_load_1_33_reg_28196 = orig2_load_1_33_fu_9326_p3.read();
        prev_orig_out_2_i_31_reg_28222 = prev_orig_out_2_i_31_fu_9385_p3.read();
        prev_score_out_2_i_31_reg_28216 = prev_score_out_2_i_31_fu_9378_p3.read();
        prev_score_out_6_34_reg_28208 = prev_score_out_6_34_fu_9352_p2.read();
        score2_load_1_33_reg_28190 = score2_load_1_33_fu_9319_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read()))) {
        orig2_load_1_34_reg_28310 = orig2_load_1_34_fu_9496_p3.read();
        prev_orig_out_2_i_32_reg_28349 = prev_orig_out_2_i_32_fu_9567_p3.read();
        prev_score_out_2_i_32_reg_28343 = prev_score_out_2_i_32_fu_9560_p3.read();
        prev_score_out_6_35_reg_28329 = prev_score_out_6_35_fu_9534_p2.read();
        score1_load_74_reg_28337 = score1_q0.read();
        score2_load_1_34_reg_28304 = score2_load_1_34_fu_9489_p3.read();
        tmp_148_reg_28324 = tmp_148_fu_9516_p3.read();
        tmp_27_34_reg_28317 = tmp_27_34_fu_9509_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read()))) {
        orig2_load_1_35_reg_28432 = orig2_load_1_35_fu_9670_p3.read();
        prev_orig_out_2_i_33_reg_28465 = prev_orig_out_2_i_33_fu_9736_p3.read();
        prev_score_out_2_i_33_reg_28459 = prev_score_out_2_i_33_fu_9729_p3.read();
        prev_score_out_6_36_reg_28451 = prev_score_out_6_36_fu_9703_p2.read();
        score2_load_1_35_reg_28426 = score2_load_1_35_fu_9663_p3.read();
        tmp_149_reg_28446 = tmp_149_fu_9684_p3.read();
        tmp_27_35_reg_28439 = tmp_27_35_fu_9677_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read()))) {
        orig2_load_1_36_reg_28548 = orig2_load_1_36_fu_9833_p3.read();
        prev_orig_out_2_i_34_reg_28585 = prev_orig_out_2_i_34_fu_9891_p3.read();
        prev_score_out_2_i_34_reg_28579 = prev_score_out_2_i_34_fu_9884_p3.read();
        prev_score_out_6_37_reg_28565 = prev_score_out_6_37_fu_9858_p2.read();
        score1_load_77_reg_28573 = score1_q0.read();
        score2_load_1_36_reg_28542 = score2_load_1_36_fu_9826_p3.read();
        tmp_150_reg_28560 = grp_fu_2836_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read()))) {
        orig2_load_1_37_reg_28673 = orig2_load_1_37_fu_10002_p3.read();
        prev_orig_out_2_i_35_reg_28704 = prev_orig_out_2_i_35_fu_10065_p3.read();
        prev_score_out_2_i_35_reg_28698 = prev_score_out_2_i_35_fu_10058_p3.read();
        prev_score_out_6_38_reg_28690 = prev_score_out_6_38_fu_10032_p2.read();
        score2_load_1_37_reg_28667 = score2_load_1_37_fu_9995_p3.read();
        tmp_151_reg_28685 = tmp_151_fu_10014_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read()))) {
        orig2_load_1_38_reg_28792 = orig2_load_1_38_fu_10176_p3.read();
        prev_orig_out_2_i_36_reg_28819 = prev_orig_out_2_i_36_fu_10230_p3.read();
        prev_score_out_2_i_36_reg_28813 = prev_score_out_2_i_36_fu_10223_p3.read();
        prev_score_out_6_39_reg_28799 = prev_score_out_6_39_fu_10197_p2.read();
        score1_load_80_reg_28807 = score1_q0.read();
        score2_load_1_38_reg_28786 = score2_load_1_38_fu_10169_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read()))) {
        orig2_load_1_39_reg_28907 = orig2_load_1_39_fu_10341_p3.read();
        prev_orig_out_2_i_37_reg_28938 = prev_orig_out_2_i_37_fu_10400_p3.read();
        prev_score_out_2_i_37_reg_28932 = prev_score_out_2_i_37_fu_10393_p3.read();
        prev_score_out_6_40_reg_28924 = prev_score_out_6_40_fu_10367_p2.read();
        score2_load_1_39_reg_28901 = score2_load_1_39_fu_10334_p3.read();
        tmp_153_reg_28919 = grp_fu_2691_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read()))) {
        orig2_load_1_40_reg_29026 = orig2_load_1_40_fu_10511_p3.read();
        prev_orig_out_2_i_38_reg_29060 = prev_orig_out_2_i_38_fu_10576_p3.read();
        prev_score_out_2_i_38_reg_29054 = prev_score_out_2_i_38_fu_10569_p3.read();
        prev_score_out_6_41_reg_29040 = prev_score_out_6_41_fu_10543_p2.read();
        score1_load_83_reg_29048 = score1_q0.read();
        score2_load_1_40_reg_29020 = score2_load_1_40_fu_10504_p3.read();
        tmp_27_40_reg_29033 = tmp_27_40_fu_10523_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read()))) {
        orig2_load_1_41_reg_29143 = orig2_load_1_41_fu_10684_p3.read();
        prev_orig_out_2_i_39_reg_29171 = prev_orig_out_2_i_39_fu_10746_p3.read();
        prev_score_out_2_i_39_reg_29165 = prev_score_out_2_i_39_fu_10739_p3.read();
        prev_score_out_6_42_reg_29157 = prev_score_out_6_42_fu_10713_p2.read();
        score2_load_1_41_reg_29137 = score2_load_1_41_fu_10677_p3.read();
        tmp_27_41_reg_29150 = tmp_27_41_fu_10692_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read()))) {
        orig2_load_1_42_reg_29254 = orig2_load_1_42_fu_10848_p3.read();
        prev_orig_out_2_i_40_reg_29291 = prev_orig_out_2_i_40_fu_10907_p3.read();
        prev_score_out_2_i_40_reg_29285 = prev_score_out_2_i_40_fu_10900_p3.read();
        prev_score_out_6_43_reg_29271 = prev_score_out_6_43_fu_10874_p2.read();
        score1_load_86_reg_29279 = score1_q0.read();
        score2_load_1_42_reg_29248 = score2_load_1_42_fu_10841_p3.read();
        tmp_156_reg_29266 = grp_fu_2704_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read()))) {
        orig2_load_1_43_reg_29379 = orig2_load_1_43_fu_11018_p3.read();
        prev_orig_out_2_i_41_reg_29410 = prev_orig_out_2_i_41_fu_11081_p3.read();
        prev_score_out_2_i_41_reg_29404 = prev_score_out_2_i_41_fu_11074_p3.read();
        prev_score_out_6_44_reg_29396 = prev_score_out_6_44_fu_11048_p2.read();
        score2_load_1_43_reg_29373 = score2_load_1_43_fu_11011_p3.read();
        tmp_157_reg_29391 = tmp_157_fu_11030_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read()))) {
        orig2_load_1_44_reg_29498 = orig2_load_1_44_fu_11192_p3.read();
        prev_orig_out_2_i_42_reg_29530 = prev_orig_out_2_i_42_fu_11246_p3.read();
        prev_score_out_2_i_42_reg_29524 = prev_score_out_2_i_42_fu_11239_p3.read();
        prev_score_out_6_45_reg_29510 = prev_score_out_6_45_fu_11213_p2.read();
        score1_load_89_reg_29518 = score1_q0.read();
        score2_load_1_44_reg_29492 = score2_load_1_44_fu_11185_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read()))) {
        orig2_load_1_45_reg_29618 = orig2_load_1_45_fu_11356_p3.read();
        prev_orig_out_2_i_43_reg_29646 = prev_orig_out_2_i_43_fu_11422_p3.read();
        prev_score_out_2_i_43_reg_29640 = prev_score_out_2_i_43_fu_11415_p3.read();
        prev_score_out_6_46_reg_29632 = prev_score_out_6_46_fu_11389_p2.read();
        score2_load_1_45_reg_29612 = score2_load_1_45_fu_11349_p3.read();
        tmp_27_45_reg_29625 = tmp_27_45_fu_11369_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read()))) {
        orig2_load_1_46_reg_29729 = orig2_load_1_46_fu_11525_p3.read();
        prev_orig_out_2_i_44_reg_29761 = prev_orig_out_2_i_44_fu_11584_p3.read();
        prev_score_out_2_i_44_reg_29755 = prev_score_out_2_i_44_fu_11577_p3.read();
        prev_score_out_6_47_reg_29741 = prev_score_out_6_47_fu_11551_p2.read();
        score1_load_92_reg_29749 = score1_q0.read();
        score2_load_1_46_reg_29723 = score2_load_1_46_fu_11518_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        orig2_load_1_47_reg_29849 = orig2_load_1_47_fu_11700_p3.read();
        prev_orig_out_2_i_45_reg_29875 = prev_orig_out_2_i_45_fu_11760_p3.read();
        prev_score_out_2_i_45_reg_29869 = prev_score_out_2_i_45_fu_11753_p3.read();
        prev_score_out_6_48_reg_29861 = prev_score_out_6_48_fu_11727_p2.read();
        score2_load_1_47_reg_29843 = score2_load_1_47_fu_11693_p3.read();
        tmp_161_reg_29856 = tmp_161_fu_11708_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read()))) {
        orig2_load_1_48_reg_29963 = orig2_load_1_48_fu_11866_p3.read();
        prev_orig_out_2_i_46_reg_29995 = prev_orig_out_2_i_46_fu_11924_p3.read();
        prev_score_out_2_i_46_reg_29989 = prev_score_out_2_i_46_fu_11917_p3.read();
        prev_score_out_6_49_reg_29975 = prev_score_out_6_49_fu_11891_p2.read();
        score1_load_95_reg_29983 = score1_q0.read();
        score2_load_1_48_reg_29957 = score2_load_1_48_fu_11859_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_49_reg_30083 = orig2_load_1_49_fu_12035_p3.read();
        prev_orig_out_2_i_47_reg_30114 = prev_orig_out_2_i_47_fu_12095_p3.read();
        prev_score_out_2_i_47_reg_30108 = prev_score_out_2_i_47_fu_12088_p3.read();
        prev_score_out_6_50_reg_30100 = prev_score_out_6_50_fu_12062_p2.read();
        score2_load_1_49_reg_30077 = score2_load_1_49_fu_12028_p3.read();
        tmp_163_reg_30095 = tmp_163_fu_12043_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        orig2_load_1_4_reg_23829 = orig2_load_1_4_fu_3928_p3.read();
        prev_orig_out_2_i_2_reg_23914 = prev_orig_out_2_i_2_fu_3981_p3.read();
        prev_score_out_0_op_i1_5_reg_23841 = prev_score_out_0_op_i1_5_fu_3942_p2.read();
        prev_score_out_0_op_i_4_reg_23920 = prev_score_out_0_op_i_4_fu_3987_p2.read();
        prev_score_out_8_5_reg_23945 = prev_score_out_8_5_fu_4020_p2.read();
        tmp_101_reg_23878 = read_r_Dout_A.read().range(3, 2);
        tmp_102_reg_23884 = read_r_Dout_A.read().range(5, 4);
        tmp_103_reg_23890 = read_r_Dout_A.read().range(7, 6);
        tmp_105_reg_23902 = read_r_Dout_B.read().range(3, 2);
        tmp_106_reg_23908 = read_r_Dout_B.read().range(5, 4);
        tmp_228_reg_23872 = tmp_228_fu_3968_p1.read();
        tmp_229_reg_23896 = tmp_229_fu_3972_p1.read();
        tmp_27_5_reg_23836 = tmp_27_5_fu_3935_p3.read();
        tmp_47_7_reg_23867 = grp_fu_2717_p2.read();
        tmp_48_5_reg_23847 = tmp_48_5_fu_3947_p2.read();
        tmp_49_5_reg_23852 = tmp_49_5_fu_3952_p2.read();
        tmp_52_5_reg_23857 = tmp_52_5_fu_3957_p2.read();
        tmp_53_5_reg_23862 = tmp_53_5_fu_3962_p2.read();
        tmp_56_7_reg_23953 = grp_fu_2722_p2.read();
        tmp_57_4_reg_23925 = tmp_57_4_fu_3992_p2.read();
        tmp_58_4_reg_23930 = tmp_58_4_fu_3997_p2.read();
        tmp_59_4_reg_23935 = tmp_59_4_fu_4002_p2.read();
        tmp_60_4_reg_23940 = tmp_60_4_fu_4007_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_50_reg_30190 = orig2_load_1_50_fu_12206_p3.read();
        prev_orig_out_2_i_48_reg_30229 = prev_orig_out_2_i_48_fu_12276_p3.read();
        prev_score_out_2_i_48_reg_30223 = prev_score_out_2_i_48_fu_12269_p3.read();
        prev_score_out_6_51_reg_30209 = prev_score_out_6_51_fu_12243_p2.read();
        score1_load_97_reg_30217 = score1_q0.read();
        score2_load_1_50_reg_30184 = score2_load_1_50_fu_12199_p3.read();
        tmp_164_reg_30204 = tmp_164_fu_12225_p3.read();
        tmp_27_50_reg_30197 = tmp_27_50_fu_12218_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        orig2_load_1_51_reg_30306 = orig2_load_1_51_fu_12379_p3.read();
        prev_orig_out_2_i_49_reg_30327 = prev_orig_out_2_i_49_fu_12433_p3.read();
        prev_score_out_2_i_49_reg_30321 = prev_score_out_2_i_49_fu_12426_p3.read();
        prev_score_out_6_52_reg_30313 = prev_score_out_6_52_fu_12400_p2.read();
        score2_load_1_51_reg_30300 = score2_load_1_51_fu_12372_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_52_reg_30408 = orig2_load_1_52_fu_12550_p3.read();
        prev_orig_out_2_i_50_reg_30439 = prev_orig_out_2_i_50_fu_12614_p3.read();
        prev_score_out_2_i_50_reg_30433 = prev_score_out_2_i_50_fu_12607_p3.read();
        prev_score_out_6_53_reg_30425 = prev_score_out_6_53_fu_12581_p2.read();
        score2_load_1_52_reg_30402 = score2_load_1_52_fu_12543_p3.read();
        tmp_166_reg_30420 = tmp_166_fu_12563_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_53_reg_30515 = orig2_load_1_53_fu_12725_p3.read();
        prev_orig_out_2_i_51_reg_30541 = prev_orig_out_2_i_51_fu_12783_p3.read();
        prev_score_out_2_i_51_reg_30535 = prev_score_out_2_i_51_fu_12776_p3.read();
        prev_score_out_6_54_reg_30527 = prev_score_out_6_54_fu_12750_p2.read();
        score2_load_1_53_reg_30509 = score2_load_1_53_fu_12718_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_54_reg_30617 = orig2_load_1_54_fu_12893_p3.read();
        prev_orig_out_2_i_52_reg_30650 = prev_orig_out_2_i_52_fu_12955_p3.read();
        prev_score_out_2_i_52_reg_30644 = prev_score_out_2_i_52_fu_12948_p3.read();
        prev_score_out_6_55_reg_30636 = prev_score_out_6_55_fu_12922_p2.read();
        score2_load_1_54_reg_30611 = score2_load_1_54_fu_12886_p3.read();
        tmp_168_reg_30631 = grp_fu_2886_p3.read();
        tmp_27_54_reg_30624 = tmp_27_54_fu_12901_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_55_reg_30721 = orig2_load_1_55_fu_13058_p3.read();
        prev_orig_out_2_i_53_reg_30742 = prev_orig_out_2_i_53_fu_13112_p3.read();
        prev_score_out_2_i_53_reg_30736 = prev_score_out_2_i_53_fu_13105_p3.read();
        prev_score_out_6_56_reg_30728 = prev_score_out_6_56_fu_13079_p2.read();
        score2_load_1_55_reg_30715 = score2_load_1_55_fu_13051_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_56_reg_30818 = orig2_load_1_56_fu_13229_p3.read();
        prev_orig_out_2_i_54_reg_30844 = prev_orig_out_2_i_54_fu_13288_p3.read();
        prev_score_out_2_i_54_reg_30838 = prev_score_out_2_i_54_fu_13281_p3.read();
        prev_score_out_6_57_reg_30830 = prev_score_out_6_57_fu_13255_p2.read();
        score2_load_1_56_reg_30812 = score2_load_1_56_fu_13222_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read()))) {
        orig2_load_1_57_reg_30920 = orig2_load_1_57_fu_13404_p3.read();
        prev_orig_out_2_i_55_reg_30951 = prev_orig_out_2_i_55_fu_13468_p3.read();
        prev_score_out_2_i_55_reg_30945 = prev_score_out_2_i_55_fu_13461_p3.read();
        prev_score_out_6_58_reg_30937 = prev_score_out_6_58_fu_13435_p2.read();
        score2_load_1_57_reg_30914 = score2_load_1_57_fu_13397_p3.read();
        tmp_171_reg_30932 = tmp_171_fu_13417_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_20.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_58_reg_31027 = orig2_load_1_58_fu_13579_p3.read();
        prev_orig_out_2_i_56_reg_31053 = prev_orig_out_2_i_56_fu_13638_p3.read();
        prev_score_out_2_i_56_reg_31047 = prev_score_out_2_i_56_fu_13631_p3.read();
        prev_score_out_6_59_reg_31039 = prev_score_out_6_59_fu_13605_p2.read();
        score2_load_1_58_reg_31021 = score2_load_1_58_fu_13572_p3.read();
        tmp_172_reg_31034 = tmp_172_fu_13586_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read()))) {
        orig2_load_1_59_reg_31129 = orig2_load_1_59_fu_13750_p3.read();
        prev_orig_out_2_i_57_reg_31160 = prev_orig_out_2_i_57_fu_13813_p3.read();
        prev_score_out_2_i_57_reg_31154 = prev_score_out_2_i_57_fu_13806_p3.read();
        prev_score_out_6_60_reg_31146 = prev_score_out_6_60_fu_13780_p2.read();
        score2_load_1_59_reg_31123 = score2_load_1_59_fu_13743_p3.read();
        tmp_173_reg_31141 = tmp_173_fu_13762_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_60_reg_31236 = orig2_load_1_60_fu_13924_p3.read();
        prev_orig_out_2_i_58_reg_31267 = prev_orig_out_2_i_58_fu_13987_p3.read();
        prev_score_out_2_i_58_reg_31261 = prev_score_out_2_i_58_fu_13980_p3.read();
        prev_score_out_6_61_reg_31253 = prev_score_out_6_61_fu_13954_p2.read();
        score2_load_1_60_reg_31230 = score2_load_1_60_fu_13917_p3.read();
        tmp_174_reg_31248 = tmp_174_fu_13936_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_26.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_61_reg_31343 = orig2_load_1_61_fu_14098_p3.read();
        prev_orig_out_2_i_59_reg_31371 = prev_orig_out_2_i_59_fu_14163_p3.read();
        prev_score_out_2_i_59_reg_31365 = prev_score_out_2_i_59_fu_14156_p3.read();
        prev_score_out_6_62_reg_31357 = prev_score_out_6_62_fu_14130_p2.read();
        score2_load_1_61_reg_31337 = score2_load_1_61_fu_14091_p3.read();
        tmp_27_61_reg_31350 = tmp_27_61_fu_14110_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_28.read()))) {
        orig2_load_1_62_reg_31442 = orig2_load_1_62_fu_14271_p3.read();
        prev_orig_out_2_i_60_reg_31468 = prev_orig_out_2_i_60_fu_14330_p3.read();
        prev_score_out_2_i_60_reg_31462 = prev_score_out_2_i_60_fu_14323_p3.read();
        prev_score_out_6_63_reg_31454 = prev_score_out_6_63_fu_14297_p2.read();
        score2_load_1_62_reg_31436 = score2_load_1_62_fu_14264_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_30.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_63_reg_31544 = orig2_load_1_63_fu_14446_p3.read();
        prev_orig_out_2_i_61_reg_31572 = prev_orig_out_2_i_61_fu_14512_p3.read();
        prev_score_out_2_i_61_reg_31566 = prev_score_out_2_i_61_fu_14505_p3.read();
        prev_score_out_6_64_reg_31558 = prev_score_out_6_64_fu_14479_p2.read();
        score2_load_1_63_reg_31538 = score2_load_1_63_fu_14439_p3.read();
        tmp_27_63_reg_31551 = tmp_27_63_fu_14459_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_32.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_64_reg_31643 = orig2_load_1_64_fu_14620_p3.read();
        prev_orig_out_2_i_62_reg_31669 = prev_orig_out_2_i_62_fu_14679_p3.read();
        prev_score_out_2_i_62_reg_31663 = prev_score_out_2_i_62_fu_14672_p3.read();
        prev_score_out_6_65_reg_31655 = prev_score_out_6_65_fu_14646_p2.read();
        score2_load_1_64_reg_31637 = score2_load_1_64_fu_14613_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read()))) {
        orig2_load_1_65_reg_31745 = orig2_load_1_65_fu_14795_p3.read();
        prev_orig_out_2_i_63_reg_31771 = prev_orig_out_2_i_63_fu_14854_p3.read();
        prev_score_out_2_i_63_reg_31765 = prev_score_out_2_i_63_fu_14847_p3.read();
        prev_score_out_6_66_reg_31757 = prev_score_out_6_66_fu_14821_p2.read();
        score2_load_1_65_reg_31739 = score2_load_1_65_fu_14788_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_66_reg_31847 = orig2_load_1_66_fu_14970_p3.read();
        prev_orig_out_2_i_64_reg_31873 = prev_orig_out_2_i_64_fu_15029_p3.read();
        prev_score_out_2_i_64_reg_31867 = prev_score_out_2_i_64_fu_15022_p3.read();
        prev_score_out_6_67_reg_31859 = prev_score_out_6_67_fu_14996_p2.read();
        score2_load_1_66_reg_31841 = score2_load_1_66_fu_14963_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read()))) {
        orig2_load_1_67_reg_31949 = orig2_load_1_67_fu_15145_p3.read();
        prev_orig_out_2_i_65_reg_31975 = prev_orig_out_2_i_65_fu_15204_p3.read();
        prev_score_out_2_i_65_reg_31969 = prev_score_out_2_i_65_fu_15197_p3.read();
        prev_score_out_6_68_reg_31961 = prev_score_out_6_68_fu_15171_p2.read();
        score2_load_1_67_reg_31943 = score2_load_1_67_fu_15138_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read()))) {
        orig2_load_1_68_reg_32051 = orig2_load_1_68_fu_15320_p3.read();
        prev_orig_out_2_i_66_reg_32077 = prev_orig_out_2_i_66_fu_15379_p3.read();
        prev_score_out_2_i_66_reg_32071 = prev_score_out_2_i_66_fu_15372_p3.read();
        prev_score_out_6_69_reg_32063 = prev_score_out_6_69_fu_15346_p2.read();
        score2_load_1_68_reg_32045 = score2_load_1_68_fu_15313_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read()))) {
        orig2_load_1_69_reg_32153 = orig2_load_1_69_fu_15495_p3.read();
        prev_orig_out_2_i_67_reg_32179 = prev_orig_out_2_i_67_fu_15554_p3.read();
        prev_score_out_2_i_67_reg_32173 = prev_score_out_2_i_67_fu_15547_p3.read();
        prev_score_out_6_70_reg_32165 = prev_score_out_6_70_fu_15521_p2.read();
        score2_load_1_69_reg_32147 = score2_load_1_69_fu_15488_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        orig2_load_1_6_reg_24901 = orig2_load_1_6_fu_4763_p3.read();
        prev_orig_out_2_i_4_reg_24939 = prev_orig_out_2_i_4_fu_4808_p3.read();
        prev_score_out_0_op_i1_6_reg_24913 = prev_score_out_0_op_i1_6_fu_4777_p2.read();
        prev_score_out_0_op_i_5_reg_24945 = prev_score_out_0_op_i_5_fu_4814_p2.read();
        prev_score_out_8_6_reg_24970 = prev_score_out_8_6_fu_4847_p2.read();
        tmp_27_6_reg_24908 = tmp_27_6_fu_4770_p3.read();
        tmp_48_6_reg_24919 = tmp_48_6_fu_4782_p2.read();
        tmp_49_6_reg_24924 = tmp_49_6_fu_4787_p2.read();
        tmp_52_6_reg_24929 = tmp_52_6_fu_4792_p2.read();
        tmp_53_6_reg_24934 = tmp_53_6_fu_4797_p2.read();
        tmp_57_5_reg_24950 = tmp_57_5_fu_4819_p2.read();
        tmp_58_5_reg_24955 = tmp_58_5_fu_4824_p2.read();
        tmp_59_5_reg_24960 = tmp_59_5_fu_4829_p2.read();
        tmp_60_5_reg_24965 = tmp_60_5_fu_4834_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read()))) {
        orig2_load_1_70_reg_32255 = orig2_load_1_70_fu_15670_p3.read();
        prev_orig_out_2_i_68_reg_32281 = prev_orig_out_2_i_68_fu_15729_p3.read();
        prev_score_out_2_i_68_reg_32275 = prev_score_out_2_i_68_fu_15722_p3.read();
        prev_score_out_6_71_reg_32267 = prev_score_out_6_71_fu_15696_p2.read();
        score2_load_1_70_reg_32249 = score2_load_1_70_fu_15663_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read()))) {
        orig2_load_1_71_reg_32357 = orig2_load_1_71_fu_15845_p3.read();
        prev_orig_out_2_i_69_reg_32383 = prev_orig_out_2_i_69_fu_15904_p3.read();
        prev_score_out_2_i_69_reg_32377 = prev_score_out_2_i_69_fu_15897_p3.read();
        prev_score_out_6_72_reg_32369 = prev_score_out_6_72_fu_15871_p2.read();
        score2_load_1_71_reg_32351 = score2_load_1_71_fu_15838_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_48.read()))) {
        orig2_load_1_72_reg_32459 = orig2_load_1_72_fu_16020_p3.read();
        prev_orig_out_2_i_70_reg_32487 = prev_orig_out_2_i_70_fu_16086_p3.read();
        prev_score_out_2_i_70_reg_32481 = prev_score_out_2_i_70_fu_16079_p3.read();
        prev_score_out_6_73_reg_32473 = prev_score_out_6_73_fu_16053_p2.read();
        score2_load_1_72_reg_32453 = score2_load_1_72_fu_16013_p3.read();
        tmp_27_72_reg_32466 = tmp_27_72_fu_16033_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_50.read()))) {
        orig2_load_1_73_reg_32558 = orig2_load_1_73_fu_16194_p3.read();
        prev_orig_out_2_i_71_reg_32586 = prev_orig_out_2_i_71_fu_16260_p3.read();
        prev_score_out_2_i_71_reg_32580 = prev_score_out_2_i_71_fu_16253_p3.read();
        prev_score_out_6_74_reg_32572 = prev_score_out_6_74_fu_16227_p2.read();
        score2_load_1_73_reg_32552 = score2_load_1_73_fu_16187_p3.read();
        tmp_27_73_reg_32565 = tmp_27_73_fu_16207_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        orig2_load_1_74_reg_32657 = orig2_load_1_74_fu_16368_p3.read();
        prev_orig_out_2_i_72_reg_32683 = prev_orig_out_2_i_72_fu_16427_p3.read();
        prev_score_out_2_i_72_reg_32677 = prev_score_out_2_i_72_fu_16420_p3.read();
        prev_score_out_6_75_reg_32669 = prev_score_out_6_75_fu_16394_p2.read();
        score2_load_1_74_reg_32651 = score2_load_1_74_fu_16361_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read()))) {
        orig2_load_1_75_reg_32759 = orig2_load_1_75_fu_16543_p3.read();
        prev_orig_out_2_i_73_reg_32785 = prev_orig_out_2_i_73_fu_16602_p3.read();
        prev_score_out_2_i_73_reg_32779 = prev_score_out_2_i_73_fu_16595_p3.read();
        prev_score_out_6_76_reg_32771 = prev_score_out_6_76_fu_16569_p2.read();
        score2_load_1_75_reg_32753 = score2_load_1_75_fu_16536_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read()))) {
        orig2_load_1_76_reg_32861 = orig2_load_1_76_fu_16718_p3.read();
        prev_orig_out_2_i_74_reg_32894 = prev_orig_out_2_i_74_fu_16789_p3.read();
        prev_score_out_2_i_74_reg_32888 = prev_score_out_2_i_74_fu_16782_p3.read();
        prev_score_out_6_77_reg_32880 = prev_score_out_6_77_fu_16756_p2.read();
        score2_load_1_76_reg_32855 = score2_load_1_76_fu_16711_p3.read();
        tmp_190_reg_32875 = tmp_190_fu_16738_p3.read();
        tmp_27_76_reg_32868 = tmp_27_76_fu_16731_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read()))) {
        orig2_load_1_77_reg_32965 = orig2_load_1_77_fu_16892_p3.read();
        prev_orig_out_2_i_75_reg_32998 = prev_orig_out_2_i_75_fu_16962_p3.read();
        prev_score_out_2_i_75_reg_32992 = prev_score_out_2_i_75_fu_16955_p3.read();
        prev_score_out_6_78_reg_32984 = prev_score_out_6_78_fu_16929_p2.read();
        score2_load_1_77_reg_32959 = score2_load_1_77_fu_16885_p3.read();
        tmp_191_reg_32979 = tmp_191_fu_16911_p3.read();
        tmp_27_77_reg_32972 = tmp_27_77_fu_16904_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read()))) {
        orig2_load_1_78_reg_33069 = orig2_load_1_78_fu_17065_p3.read();
        prev_orig_out_2_i_76_reg_33095 = prev_orig_out_2_i_76_fu_17123_p3.read();
        prev_score_out_2_i_76_reg_33089 = prev_score_out_2_i_76_fu_17116_p3.read();
        prev_score_out_6_79_reg_33081 = prev_score_out_6_79_fu_17090_p2.read();
        score2_load_1_78_reg_33063 = score2_load_1_78_fu_17058_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read()))) {
        orig2_load_1_79_reg_33171 = orig2_load_1_79_fu_17239_p3.read();
        prev_orig_out_2_i_77_reg_33202 = prev_orig_out_2_i_77_fu_17303_p3.read();
        prev_score_out_2_i_77_reg_33196 = prev_score_out_2_i_77_fu_17296_p3.read();
        prev_score_out_6_80_reg_33188 = prev_score_out_6_80_fu_17270_p2.read();
        score2_load_1_79_reg_33165 = score2_load_1_79_fu_17232_p3.read();
        tmp_193_reg_33183 = tmp_193_fu_17252_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        orig2_load_1_7_reg_24984 = orig2_load_1_7_fu_4880_p3.read();
        prev_orig_out_2_i_5_reg_25005 = prev_orig_out_2_i_5_fu_4935_p3.read();
        prev_score_out_2_i_5_reg_24999 = prev_score_out_2_i_5_fu_4928_p3.read();
        prev_score_out_6_8_reg_24991 = prev_score_out_6_8_fu_4902_p2.read();
        score2_load_1_7_reg_24978 = score2_load_1_7_fu_4873_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read()))) {
        orig2_load_1_80_reg_33278 = orig2_load_1_80_fu_17414_p3.read();
        prev_orig_out_2_i_78_reg_33311 = prev_orig_out_2_i_78_fu_17484_p3.read();
        prev_score_out_2_i_78_reg_33305 = prev_score_out_2_i_78_fu_17477_p3.read();
        prev_score_out_6_81_reg_33297 = prev_score_out_6_81_fu_17451_p2.read();
        score2_load_1_80_reg_33272 = score2_load_1_80_fu_17407_p3.read();
        tmp_194_reg_33292 = tmp_194_fu_17433_p3.read();
        tmp_27_80_reg_33285 = tmp_27_80_fu_17426_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read()))) {
        orig2_load_1_81_reg_33382 = orig2_load_1_81_fu_17587_p3.read();
        prev_orig_out_2_i_79_reg_33413 = prev_orig_out_2_i_79_fu_17650_p3.read();
        prev_score_out_2_i_79_reg_33407 = prev_score_out_2_i_79_fu_17643_p3.read();
        prev_score_out_6_82_reg_33399 = prev_score_out_6_82_fu_17617_p2.read();
        score2_load_1_81_reg_33376 = score2_load_1_81_fu_17580_p3.read();
        tmp_195_reg_33394 = tmp_195_fu_17599_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg67_fsm_68.read()))) {
        orig2_load_1_82_reg_33489 = orig2_load_1_82_fu_17761_p3.read();
        prev_orig_out_2_i_80_reg_33522 = prev_orig_out_2_i_80_fu_17831_p3.read();
        prev_score_out_2_i_80_reg_33516 = prev_score_out_2_i_80_fu_17824_p3.read();
        prev_score_out_6_83_reg_33508 = prev_score_out_6_83_fu_17798_p2.read();
        score2_load_1_82_reg_33483 = score2_load_1_82_fu_17754_p3.read();
        tmp_196_reg_33503 = tmp_196_fu_17780_p3.read();
        tmp_27_82_reg_33496 = tmp_27_82_fu_17773_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read()))) {
        orig2_load_1_83_reg_33593 = orig2_load_1_83_fu_17934_p3.read();
        prev_orig_out_2_i_81_reg_33621 = prev_orig_out_2_i_81_fu_17999_p3.read();
        prev_score_out_2_i_81_reg_33615 = prev_score_out_2_i_81_fu_17992_p3.read();
        prev_score_out_6_84_reg_33607 = prev_score_out_6_84_fu_17966_p2.read();
        score2_load_1_83_reg_33587 = score2_load_1_83_fu_17927_p3.read();
        tmp_27_83_reg_33600 = tmp_27_83_fu_17946_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read()))) {
        orig2_load_1_84_reg_33692 = orig2_load_1_84_fu_18107_p3.read();
        prev_orig_out_2_i_82_reg_33718 = prev_orig_out_2_i_82_fu_18166_p3.read();
        prev_score_out_2_i_82_reg_33712 = prev_score_out_2_i_82_fu_18159_p3.read();
        prev_score_out_6_85_reg_33704 = prev_score_out_6_85_fu_18133_p2.read();
        score2_load_1_84_reg_33686 = score2_load_1_84_fu_18100_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read()))) {
        orig2_load_1_85_reg_33794 = orig2_load_1_85_fu_18282_p3.read();
        prev_orig_out_2_i_83_reg_33820 = prev_orig_out_2_i_83_fu_18341_p3.read();
        prev_score_out_2_i_83_reg_33814 = prev_score_out_2_i_83_fu_18334_p3.read();
        prev_score_out_6_86_reg_33806 = prev_score_out_6_86_fu_18308_p2.read();
        score2_load_1_85_reg_33788 = score2_load_1_85_fu_18275_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read()))) {
        orig2_load_1_86_reg_33896 = orig2_load_1_86_fu_18457_p3.read();
        prev_orig_out_2_i_84_reg_33922 = prev_orig_out_2_i_84_fu_18516_p3.read();
        prev_score_out_2_i_84_reg_33916 = prev_score_out_2_i_84_fu_18509_p3.read();
        prev_score_out_6_87_reg_33908 = prev_score_out_6_87_fu_18483_p2.read();
        score2_load_1_86_reg_33890 = score2_load_1_86_fu_18450_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read()))) {
        orig2_load_1_87_reg_33998 = orig2_load_1_87_fu_18632_p3.read();
        prev_orig_out_2_i_85_reg_34026 = prev_orig_out_2_i_85_fu_18698_p3.read();
        prev_score_out_2_i_85_reg_34020 = prev_score_out_2_i_85_fu_18691_p3.read();
        prev_score_out_6_88_reg_34012 = prev_score_out_6_88_fu_18665_p2.read();
        score2_load_1_87_reg_33992 = score2_load_1_87_fu_18625_p3.read();
        tmp_27_87_reg_34005 = tmp_27_87_fu_18645_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read()))) {
        orig2_load_1_88_reg_34097 = orig2_load_1_88_fu_18806_p3.read();
        prev_orig_out_2_i_86_reg_34130 = prev_orig_out_2_i_86_fu_18877_p3.read();
        prev_score_out_2_i_86_reg_34124 = prev_score_out_2_i_86_fu_18870_p3.read();
        prev_score_out_6_89_reg_34116 = prev_score_out_6_89_fu_18844_p2.read();
        score2_load_1_88_reg_34091 = score2_load_1_88_fu_18799_p3.read();
        tmp_202_reg_34111 = tmp_202_fu_18826_p3.read();
        tmp_27_88_reg_34104 = tmp_27_88_fu_18819_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read()))) {
        orig2_load_1_89_reg_34201 = orig2_load_1_89_fu_18980_p3.read();
        prev_orig_out_2_i_87_reg_34227 = prev_orig_out_2_i_87_fu_19038_p3.read();
        prev_score_out_2_i_87_reg_34221 = prev_score_out_2_i_87_fu_19031_p3.read();
        prev_score_out_6_90_reg_34213 = prev_score_out_6_90_fu_19005_p2.read();
        score2_load_1_89_reg_34195 = score2_load_1_89_fu_18973_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read()))) {
        orig2_load_1_8_reg_25093 = orig2_load_1_8_fu_5041_p3.read();
        prev_orig_out_2_i_6_reg_25114 = prev_orig_out_2_i_6_fu_5096_p3.read();
        prev_score_out_2_i_6_reg_25108 = prev_score_out_2_i_6_fu_5089_p3.read();
        prev_score_out_6_9_reg_25100 = prev_score_out_6_9_fu_5063_p2.read();
        score2_load_1_8_reg_25087 = score2_load_1_8_fu_5034_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read()))) {
        orig2_load_1_90_reg_34303 = orig2_load_1_90_fu_19154_p3.read();
        prev_orig_out_2_i_88_reg_34329 = prev_orig_out_2_i_88_fu_19213_p3.read();
        prev_score_out_2_i_88_reg_34323 = prev_score_out_2_i_88_fu_19206_p3.read();
        prev_score_out_6_91_reg_34315 = prev_score_out_6_91_fu_19180_p2.read();
        score2_load_1_90_reg_34297 = score2_load_1_90_fu_19147_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg85_fsm_86.read()))) {
        orig2_load_1_91_reg_34405 = orig2_load_1_91_fu_19329_p3.read();
        prev_orig_out_2_i_89_reg_34438 = prev_orig_out_2_i_89_fu_19400_p3.read();
        prev_score_out_2_i_89_reg_34432 = prev_score_out_2_i_89_fu_19393_p3.read();
        prev_score_out_6_92_reg_34424 = prev_score_out_6_92_fu_19367_p2.read();
        score2_load_1_91_reg_34399 = score2_load_1_91_fu_19322_p3.read();
        tmp_205_reg_34419 = tmp_205_fu_19349_p3.read();
        tmp_27_91_reg_34412 = tmp_27_91_fu_19342_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read()))) {
        orig2_load_1_92_reg_34509 = orig2_load_1_92_fu_19503_p3.read();
        prev_orig_out_2_i_90_reg_34535 = prev_orig_out_2_i_90_fu_19561_p3.read();
        prev_score_out_2_i_90_reg_34529 = prev_score_out_2_i_90_fu_19554_p3.read();
        prev_score_out_6_93_reg_34521 = prev_score_out_6_93_fu_19528_p2.read();
        score2_load_1_92_reg_34503 = score2_load_1_92_fu_19496_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read()))) {
        orig2_load_1_93_reg_34611 = orig2_load_1_93_fu_19677_p3.read();
        prev_orig_out_2_i_91_reg_34637 = prev_orig_out_2_i_91_fu_19736_p3.read();
        prev_score_out_2_i_91_reg_34631 = prev_score_out_2_i_91_fu_19729_p3.read();
        prev_score_out_6_94_reg_34623 = prev_score_out_6_94_fu_19703_p2.read();
        score2_load_1_93_reg_34605 = score2_load_1_93_fu_19670_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read()))) {
        orig2_load_1_94_reg_34713 = orig2_load_1_94_fu_19852_p3.read();
        prev_orig_out_2_i_92_reg_34739 = prev_orig_out_2_i_92_fu_19911_p3.read();
        prev_score_out_2_i_92_reg_34733 = prev_score_out_2_i_92_fu_19904_p3.read();
        prev_score_out_6_95_reg_34725 = prev_score_out_6_95_fu_19878_p2.read();
        score2_load_1_94_reg_34707 = score2_load_1_94_fu_19845_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read()))) {
        orig2_load_1_95_reg_34815 = orig2_load_1_95_fu_20027_p3.read();
        prev_orig_out_2_i_93_reg_34846 = prev_orig_out_2_i_93_fu_20091_p3.read();
        prev_score_out_2_i_93_reg_34840 = prev_score_out_2_i_93_fu_20084_p3.read();
        prev_score_out_6_96_reg_34832 = prev_score_out_6_96_fu_20058_p2.read();
        score2_load_1_95_reg_34809 = score2_load_1_95_fu_20020_p3.read();
        tmp_209_reg_34827 = tmp_209_fu_20040_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read()))) {
        orig2_load_1_96_reg_34922 = orig2_load_1_96_fu_20202_p3.read();
        prev_orig_out_2_i_94_reg_34948 = prev_orig_out_2_i_94_fu_20260_p3.read();
        prev_score_out_2_i_94_reg_34942 = prev_score_out_2_i_94_fu_20253_p3.read();
        prev_score_out_6_97_reg_34934 = prev_score_out_6_97_fu_20227_p2.read();
        score2_load_1_96_reg_34916 = score2_load_1_96_fu_20195_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read()))) {
        orig2_load_1_97_reg_35024 = orig2_load_1_97_fu_20370_p3.read();
        prev_orig_out_2_i_95_reg_35079 = prev_orig_out_2_i_95_fu_20448_p3.read();
        prev_score_out_2_i_95_reg_35073 = prev_score_out_2_i_95_fu_20441_p3.read();
        prev_score_out_6_98_reg_35065 = prev_score_out_6_98_fu_20415_p2.read();
        score2_load_1_97_reg_35018 = score2_load_1_97_fu_20363_p3.read();
        tmp_211_reg_35038 = grp_fu_2740_p3.read();
        tmp_212_reg_35055 = grp_fu_2753_p3.read();
        tmp_27_97_reg_35031 = tmp_27_97_fu_20383_p3.read();
        tmp_27_98_reg_35048 = tmp_27_98_fu_20401_p3.read();
        up_orig_97_reg_35043 = grp_fu_2746_p3.read();
        up_orig_98_reg_35060 = grp_fu_2759_p3.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read()))) {
        orig2_load_1_98_reg_35150 = orig2_load_1_98_fu_20544_p3.read();
        prev_orig_out_2_i_96_reg_35163 = prev_orig_out_2_i_96_fu_20578_p3.read();
        prev_score_out_2_i_96_reg_35157 = prev_score_out_2_i_96_fu_20571_p3.read();
        score2_load_1_98_reg_35144 = score2_load_1_98_fu_20537_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_20.read()))) {
        orig2_load_1_9_reg_25202 = orig2_load_1_9_fu_5202_p3.read();
        prev_orig_out_2_i_7_reg_25230 = prev_orig_out_2_i_7_fu_5264_p3.read();
        prev_score_out_2_i_7_reg_25224 = prev_score_out_2_i_7_fu_5257_p3.read();
        prev_score_out_6_s_reg_25216 = prev_score_out_6_s_fu_5231_p2.read();
        score2_load_1_9_reg_25196 = score2_load_1_9_fu_5195_p3.read();
        tmp_27_9_reg_25209 = tmp_27_9_fu_5210_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read()))) {
        orig2_load_1_s_reg_25313 = orig2_load_1_s_fu_5361_p3.read();
        prev_orig_out_2_i_8_reg_25334 = prev_orig_out_2_i_8_fu_5416_p3.read();
        prev_score_out_2_i_8_reg_25328 = prev_score_out_2_i_8_fu_5409_p3.read();
        prev_score_out_6_10_reg_25320 = prev_score_out_6_10_fu_5383_p2.read();
        score2_load_1_s_reg_25307 = score2_load_1_s_fu_5354_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it2.read()))) {
        orig2_load_2_s_reg_35234 = orig2_load_2_s_fu_20674_p3.read();
        prev_orig_out_2_i_97_reg_35246 = prev_orig_out_2_i_97_fu_20708_p3.read();
        prev_score_out_2_i_97_reg_35240 = prev_score_out_2_i_97_fu_20701_p3.read();
        score2_load_2_s_reg_35228 = score2_load_2_s_fu_20667_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg29_fsm_30.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()))) {
        phitmp14_reg_25800 = grp_fu_2848_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()))) {
        phitmp16_reg_26049 = grp_fu_2867_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read()))) {
        phitmp22_reg_26778 = grp_fu_2904_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()))) {
        phitmp26_reg_27259 = phitmp26_fu_7982_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg57_fsm_58.read()))) {
        phitmp28_reg_27498 = phitmp28_fu_8321_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read()))) {
        phitmp29_reg_27612 = phitmp29_fu_8491_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg69_fsm_70.read()))) {
        phitmp34_reg_28203 = phitmp34_fu_9334_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read()))) {
        phitmp37_reg_28555 = phitmp37_fu_9840_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg77_fsm_78.read()))) {
        phitmp38_reg_28680 = phitmp38_fu_10009_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()))) {
        phitmp3_reg_23283 = phitmp3_fu_3508_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read()))) {
        phitmp40_reg_28914 = phitmp40_fu_10349_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read()))) {
        phitmp43_reg_29261 = phitmp43_fu_10856_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read()))) {
        phitmp44_reg_29386 = phitmp44_fu_11025_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read()))) {
        phitmp45_reg_29505 = grp_fu_2873_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read()))) {
        phitmp47_reg_29736 = phitmp47_fu_11533_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg99_fsm_100.read()))) {
        phitmp49_reg_29970 = phitmp49_fu_11873_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()))) {
        phitmp50_reg_30090 = grp_fu_2892_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()))) {
        phitmp53_reg_30415 = phitmp53_fu_12558_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()))) {
        phitmp54_reg_30522 = phitmp54_fu_12732_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()))) {
        phitmp57_reg_30825 = phitmp57_fu_13237_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()))) {
        phitmp58_reg_30927 = phitmp58_fu_13412_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read()))) {
        phitmp60_reg_31136 = phitmp60_fu_13757_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()))) {
        phitmp61_reg_31243 = phitmp61_fu_13931_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_28.read()))) {
        phitmp63_reg_31449 = phitmp63_fu_14279_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_32.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()))) {
        phitmp65_reg_31650 = phitmp65_fu_14628_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read()))) {
        phitmp66_reg_31752 = phitmp66_fu_14803_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg35_fsm_36.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()))) {
        phitmp67_reg_31854 = phitmp67_fu_14978_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read()))) {
        phitmp68_reg_31956 = phitmp68_fu_15153_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read()))) {
        phitmp69_reg_32058 = phitmp69_fu_15328_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read()))) {
        phitmp70_reg_32160 = phitmp70_fu_15503_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read()))) {
        phitmp71_reg_32262 = phitmp71_fu_15678_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg45_fsm_46.read()))) {
        phitmp72_reg_32364 = phitmp72_fu_15853_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()))) {
        phitmp75_reg_32664 = phitmp75_fu_16376_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()))) {
        phitmp76_reg_32766 = phitmp76_fu_16551_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg59_fsm_60.read()))) {
        phitmp79_reg_33076 = phitmp79_fu_17072_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg61_fsm_62.read()))) {
        phitmp80_reg_33178 = phitmp80_fu_17247_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg65_fsm_66.read()))) {
        phitmp82_reg_33389 = phitmp82_fu_17594_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg71_fsm_72.read()))) {
        phitmp85_reg_33699 = phitmp85_fu_18115_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg73_fsm_74.read()))) {
        phitmp86_reg_33801 = phitmp86_fu_18290_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg75_fsm_76.read()))) {
        phitmp87_reg_33903 = phitmp87_fu_18465_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg81_fsm_82.read()))) {
        phitmp90_reg_34208 = phitmp90_fu_18987_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg83_fsm_84.read()))) {
        phitmp91_reg_34310 = phitmp91_fu_19162_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg87_fsm_88.read()))) {
        phitmp93_reg_34516 = phitmp93_fu_19510_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg89_fsm_90.read()))) {
        phitmp94_reg_34618 = phitmp94_fu_19685_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg91_fsm_92.read()))) {
        phitmp95_reg_34720 = phitmp95_fu_19860_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg93_fsm_94.read()))) {
        phitmp96_reg_34822 = phitmp96_fu_20035_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg95_fsm_96.read()))) {
        phitmp97_reg_34929 = phitmp97_fu_20209_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it2.read()))) {
        prev_orig_out_2_i_98_reg_35299 = prev_orig_out_2_i_98_fu_20797_p3.read();
        prev_score_out_2_i_98_reg_35293 = prev_score_out_2_i_98_fu_20790_p3.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        prev_score_out_0_op_i1_2_reg_23160 = prev_score_out_0_op_i1_2_fu_3415_p2.read();
        prev_score_out_0_op_i_1_reg_23234 = prev_score_out_0_op_i_1_fu_3449_p2.read();
        prev_score_out_8_2_reg_23259 = prev_score_out_8_2_fu_3482_p2.read();
        tmp_216_reg_23186 = tmp_216_fu_3441_p1.read();
        tmp_217_reg_23210 = tmp_217_fu_3445_p1.read();
        tmp_27_2_reg_23155 = tmp_27_2_fu_3408_p3.read();
        tmp_48_2_reg_23166 = tmp_48_2_fu_3420_p2.read();
        tmp_49_2_reg_23171 = tmp_49_2_fu_3425_p2.read();
        tmp_52_2_reg_23176 = tmp_52_2_fu_3430_p2.read();
        tmp_53_2_reg_23181 = tmp_53_2_fu_3435_p2.read();
        tmp_53_reg_23192 = read_r_Dout_A.read().range(3, 2);
        tmp_54_reg_23198 = read_r_Dout_A.read().range(5, 4);
        tmp_55_reg_23204 = read_r_Dout_A.read().range(7, 6);
        tmp_57_1_reg_23239 = tmp_57_1_fu_3454_p2.read();
        tmp_57_reg_23216 = read_r_Dout_B.read().range(3, 2);
        tmp_58_1_reg_23244 = tmp_58_1_fu_3459_p2.read();
        tmp_58_reg_23222 = read_r_Dout_B.read().range(5, 4);
        tmp_59_1_reg_23249 = tmp_59_1_fu_3464_p2.read();
        tmp_59_reg_23228 = read_r_Dout_B.read().range(7, 6);
        tmp_60_1_reg_23254 = tmp_60_1_fu_3469_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        prev_score_out_0_op_i1_3_reg_23367 = prev_score_out_0_op_i1_3_fu_3557_p2.read();
        prev_score_out_0_op_i_2_reg_23447 = prev_score_out_0_op_i_2_fu_3611_p2.read();
        prev_score_out_6_4_reg_23393 = prev_score_out_6_4_fu_3597_p2.read();
        prev_score_out_8_3_reg_23472 = prev_score_out_8_3_fu_3644_p2.read();
        tmp_220_reg_23406 = tmp_220_fu_3603_p1.read();
        tmp_221_reg_23429 = tmp_221_fu_3607_p1.read();
        tmp_27_3_reg_23362 = tmp_27_3_fu_3551_p3.read();
        tmp_47_58_reg_23424 = grp_fu_2423_p2.read();
        tmp_47_5_reg_23401 = grp_fu_2651_p2.read();
        tmp_48_3_reg_23373 = tmp_48_3_fu_3562_p2.read();
        tmp_49_3_reg_23378 = tmp_49_3_fu_3567_p2.read();
        tmp_52_3_reg_23383 = tmp_52_3_fu_3572_p2.read();
        tmp_53_3_reg_23388 = tmp_53_3_fu_3577_p2.read();
        tmp_56_58_reg_23485 = grp_fu_2428_p2.read();
        tmp_56_5_reg_23480 = grp_fu_2656_p2.read();
        tmp_57_2_reg_23452 = tmp_57_2_fu_3616_p2.read();
        tmp_58_2_reg_23457 = tmp_58_2_fu_3621_p2.read();
        tmp_59_2_reg_23462 = tmp_59_2_fu_3626_p2.read();
        tmp_60_2_reg_23467 = tmp_60_2_fu_3631_p2.read();
        tmp_69_reg_23412 = read_r_Dout_A.read().range(3, 2);
        tmp_70_reg_23418 = read_r_Dout_A.read().range(5, 4);
        tmp_74_reg_23435 = read_r_Dout_B.read().range(5, 4);
        tmp_75_reg_23441 = read_r_Dout_B.read().range(7, 6);
    }
    if ((!(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        prev_score_out_0_op_i1_49_reg_30125 = prev_score_out_0_op_i1_49_fu_12108_p2.read();
        prev_score_out_0_op_i_48_reg_30151 = prev_score_out_0_op_i_48_fu_12134_p2.read();
        prev_score_out_8_49_reg_30176 = prev_score_out_8_49_fu_12167_p2.read();
        tmp_27_49_reg_30120 = tmp_27_49_fu_12102_p3.read();
        tmp_48_49_reg_30131 = tmp_48_49_fu_12113_p2.read();
        tmp_49_49_reg_30136 = tmp_49_49_fu_12118_p2.read();
        tmp_52_49_reg_30141 = tmp_52_49_fu_12123_p2.read();
        tmp_53_49_reg_30146 = tmp_53_49_fu_12128_p2.read();
        tmp_57_48_reg_30156 = tmp_57_48_fu_12139_p2.read();
        tmp_58_48_reg_30161 = tmp_58_48_fu_12144_p2.read();
        tmp_59_48_reg_30166 = tmp_59_48_fu_12149_p2.read();
        tmp_60_48_reg_30171 = tmp_60_48_fu_12154_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        prev_score_out_0_op_i1_50_reg_30235 = prev_score_out_0_op_i1_50_fu_12283_p2.read();
        prev_score_out_0_op_i_49_reg_30267 = prev_score_out_0_op_i_49_fu_12307_p2.read();
        prev_score_out_8_50_reg_30292 = prev_score_out_8_50_fu_12340_p2.read();
        score1_load_98_reg_30261 = score1_q0.read();
        tmp_48_50_reg_30241 = tmp_48_50_fu_12288_p2.read();
        tmp_49_50_reg_30246 = tmp_49_50_fu_12293_p2.read();
        tmp_52_50_reg_30251 = tmp_52_50_fu_12297_p2.read();
        tmp_53_50_reg_30256 = tmp_53_50_fu_12302_p2.read();
        tmp_57_49_reg_30272 = tmp_57_49_fu_12312_p2.read();
        tmp_58_49_reg_30277 = tmp_58_49_fu_12317_p2.read();
        tmp_59_49_reg_30282 = tmp_59_49_fu_12322_p2.read();
        tmp_60_49_reg_30287 = tmp_60_49_fu_12327_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        prev_score_out_0_op_i1_51_reg_30338 = prev_score_out_0_op_i1_51_fu_12447_p2.read();
        prev_score_out_0_op_i_50_reg_30369 = prev_score_out_0_op_i_50_fu_12473_p2.read();
        prev_score_out_8_51_reg_30394 = prev_score_out_8_51_fu_12506_p2.read();
        tmp_27_51_reg_30333 = tmp_27_51_fu_12440_p3.read();
        tmp_48_51_reg_30344 = tmp_48_51_fu_12452_p2.read();
        tmp_49_51_reg_30349 = tmp_49_51_fu_12457_p2.read();
        tmp_52_51_reg_30354 = tmp_52_51_fu_12462_p2.read();
        tmp_53_51_reg_30359 = tmp_53_51_fu_12467_p2.read();
        tmp_57_50_reg_30374 = tmp_57_50_fu_12478_p2.read();
        tmp_58_50_reg_30379 = tmp_58_50_fu_12483_p2.read();
        tmp_59_50_reg_30384 = tmp_59_50_fu_12488_p2.read();
        tmp_60_50_reg_30389 = tmp_60_50_fu_12493_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        prev_score_out_0_op_i1_52_reg_30450 = prev_score_out_0_op_i1_52_fu_12627_p2.read();
        prev_score_out_0_op_i_51_reg_30476 = prev_score_out_0_op_i_51_fu_12653_p2.read();
        prev_score_out_8_52_reg_30501 = prev_score_out_8_52_fu_12686_p2.read();
        tmp_27_52_reg_30445 = tmp_27_52_fu_12621_p3.read();
        tmp_48_52_reg_30456 = tmp_48_52_fu_12632_p2.read();
        tmp_49_52_reg_30461 = tmp_49_52_fu_12637_p2.read();
        tmp_52_52_reg_30466 = tmp_52_52_fu_12642_p2.read();
        tmp_53_52_reg_30471 = tmp_53_52_fu_12647_p2.read();
        tmp_57_51_reg_30481 = tmp_57_51_fu_12658_p2.read();
        tmp_58_51_reg_30486 = tmp_58_51_fu_12663_p2.read();
        tmp_59_51_reg_30491 = tmp_59_51_fu_12668_p2.read();
        tmp_60_51_reg_30496 = tmp_60_51_fu_12673_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        prev_score_out_0_op_i1_53_reg_30552 = prev_score_out_0_op_i1_53_fu_12796_p2.read();
        prev_score_out_0_op_i_52_reg_30578 = prev_score_out_0_op_i_52_fu_12822_p2.read();
        prev_score_out_8_53_reg_30603 = prev_score_out_8_53_fu_12855_p2.read();
        tmp_27_53_reg_30547 = tmp_27_53_fu_12790_p3.read();
        tmp_48_53_reg_30558 = tmp_48_53_fu_12801_p2.read();
        tmp_49_53_reg_30563 = tmp_49_53_fu_12806_p2.read();
        tmp_52_53_reg_30568 = tmp_52_53_fu_12811_p2.read();
        tmp_53_53_reg_30573 = tmp_53_53_fu_12816_p2.read();
        tmp_57_52_reg_30583 = tmp_57_52_fu_12827_p2.read();
        tmp_58_52_reg_30588 = tmp_58_52_fu_12832_p2.read();
        tmp_59_52_reg_30593 = tmp_59_52_fu_12837_p2.read();
        tmp_60_52_reg_30598 = tmp_60_52_fu_12842_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        prev_score_out_0_op_i1_54_reg_30656 = prev_score_out_0_op_i1_54_fu_12962_p2.read();
        prev_score_out_0_op_i_53_reg_30682 = prev_score_out_0_op_i_53_fu_12986_p2.read();
        prev_score_out_8_54_reg_30707 = prev_score_out_8_54_fu_13019_p2.read();
        tmp_48_54_reg_30662 = tmp_48_54_fu_12967_p2.read();
        tmp_49_54_reg_30667 = tmp_49_54_fu_12972_p2.read();
        tmp_52_54_reg_30672 = tmp_52_54_fu_12976_p2.read();
        tmp_53_54_reg_30677 = tmp_53_54_fu_12981_p2.read();
        tmp_57_53_reg_30687 = tmp_57_53_fu_12991_p2.read();
        tmp_58_53_reg_30692 = tmp_58_53_fu_12996_p2.read();
        tmp_59_53_reg_30697 = tmp_59_53_fu_13001_p2.read();
        tmp_60_53_reg_30702 = tmp_60_53_fu_13006_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()))) {
        prev_score_out_0_op_i1_55_reg_30753 = prev_score_out_0_op_i1_55_fu_13126_p2.read();
        prev_score_out_0_op_i_54_reg_30779 = prev_score_out_0_op_i_54_fu_13152_p2.read();
        prev_score_out_8_55_reg_30804 = prev_score_out_8_55_fu_13185_p2.read();
        tmp_27_55_reg_30748 = tmp_27_55_fu_13119_p3.read();
        tmp_48_55_reg_30759 = tmp_48_55_fu_13131_p2.read();
        tmp_49_55_reg_30764 = tmp_49_55_fu_13136_p2.read();
        tmp_52_55_reg_30769 = tmp_52_55_fu_13141_p2.read();
        tmp_53_55_reg_30774 = tmp_53_55_fu_13146_p2.read();
        tmp_57_54_reg_30784 = tmp_57_54_fu_13157_p2.read();
        tmp_58_54_reg_30789 = tmp_58_54_fu_13162_p2.read();
        tmp_59_54_reg_30794 = tmp_59_54_fu_13167_p2.read();
        tmp_60_54_reg_30799 = tmp_60_54_fu_13172_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read()))) {
        prev_score_out_0_op_i1_56_reg_30855 = prev_score_out_0_op_i1_56_fu_13301_p2.read();
        prev_score_out_0_op_i_55_reg_30881 = prev_score_out_0_op_i_55_fu_13327_p2.read();
        prev_score_out_8_56_reg_30906 = prev_score_out_8_56_fu_13360_p2.read();
        tmp_27_56_reg_30850 = tmp_27_56_fu_13295_p3.read();
        tmp_48_56_reg_30861 = tmp_48_56_fu_13306_p2.read();
        tmp_49_56_reg_30866 = tmp_49_56_fu_13311_p2.read();
        tmp_52_56_reg_30871 = tmp_52_56_fu_13316_p2.read();
        tmp_53_56_reg_30876 = tmp_53_56_fu_13321_p2.read();
        tmp_57_55_reg_30886 = tmp_57_55_fu_13332_p2.read();
        tmp_58_55_reg_30891 = tmp_58_55_fu_13337_p2.read();
        tmp_59_55_reg_30896 = tmp_59_55_fu_13342_p2.read();
        tmp_60_55_reg_30901 = tmp_60_55_fu_13347_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read()))) {
        prev_score_out_0_op_i1_57_reg_30962 = prev_score_out_0_op_i1_57_fu_13481_p2.read();
        prev_score_out_0_op_i_56_reg_30988 = prev_score_out_0_op_i_56_fu_13507_p2.read();
        prev_score_out_8_57_reg_31013 = prev_score_out_8_57_fu_13540_p2.read();
        tmp_27_57_reg_30957 = tmp_27_57_fu_13475_p3.read();
        tmp_48_57_reg_30968 = tmp_48_57_fu_13486_p2.read();
        tmp_49_57_reg_30973 = tmp_49_57_fu_13491_p2.read();
        tmp_52_57_reg_30978 = tmp_52_57_fu_13496_p2.read();
        tmp_53_57_reg_30983 = tmp_53_57_fu_13501_p2.read();
        tmp_57_56_reg_30993 = tmp_57_56_fu_13512_p2.read();
        tmp_58_56_reg_30998 = tmp_58_56_fu_13517_p2.read();
        tmp_59_56_reg_31003 = tmp_59_56_fu_13522_p2.read();
        tmp_60_56_reg_31008 = tmp_60_56_fu_13527_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read()))) {
        prev_score_out_0_op_i1_58_reg_31064 = prev_score_out_0_op_i1_58_fu_13652_p2.read();
        prev_score_out_0_op_i_57_reg_31090 = prev_score_out_0_op_i_57_fu_13678_p2.read();
        prev_score_out_8_58_reg_31115 = prev_score_out_8_58_fu_13711_p2.read();
        tmp_27_58_reg_31059 = tmp_27_58_fu_13645_p3.read();
        tmp_48_58_reg_31070 = tmp_48_58_fu_13657_p2.read();
        tmp_49_58_reg_31075 = tmp_49_58_fu_13662_p2.read();
        tmp_52_58_reg_31080 = tmp_52_58_fu_13667_p2.read();
        tmp_53_58_reg_31085 = tmp_53_58_fu_13672_p2.read();
        tmp_57_57_reg_31095 = tmp_57_57_fu_13683_p2.read();
        tmp_58_57_reg_31100 = tmp_58_57_fu_13688_p2.read();
        tmp_59_57_reg_31105 = tmp_59_57_fu_13693_p2.read();
        tmp_60_57_reg_31110 = tmp_60_57_fu_13698_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read()))) {
        prev_score_out_0_op_i1_59_reg_31171 = prev_score_out_0_op_i1_59_fu_13826_p2.read();
        prev_score_out_0_op_i_58_reg_31197 = prev_score_out_0_op_i_58_fu_13852_p2.read();
        prev_score_out_8_59_reg_31222 = prev_score_out_8_59_fu_13885_p2.read();
        tmp_27_59_reg_31166 = tmp_27_59_fu_13820_p3.read();
        tmp_48_59_reg_31177 = tmp_48_59_fu_13831_p2.read();
        tmp_49_59_reg_31182 = tmp_49_59_fu_13836_p2.read();
        tmp_52_59_reg_31187 = tmp_52_59_fu_13841_p2.read();
        tmp_53_59_reg_31192 = tmp_53_59_fu_13846_p2.read();
        tmp_57_58_reg_31202 = tmp_57_58_fu_13857_p2.read();
        tmp_58_58_reg_31207 = tmp_58_58_fu_13862_p2.read();
        tmp_59_58_reg_31212 = tmp_59_58_fu_13867_p2.read();
        tmp_60_58_reg_31217 = tmp_60_58_fu_13872_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg24_fsm_25.read()))) {
        prev_score_out_0_op_i1_60_reg_31278 = prev_score_out_0_op_i1_60_fu_14000_p2.read();
        prev_score_out_0_op_i_59_reg_31304 = prev_score_out_0_op_i_59_fu_14026_p2.read();
        prev_score_out_8_60_reg_31329 = prev_score_out_8_60_fu_14059_p2.read();
        tmp_27_60_reg_31273 = tmp_27_60_fu_13994_p3.read();
        tmp_48_60_reg_31284 = tmp_48_60_fu_14005_p2.read();
        tmp_49_60_reg_31289 = tmp_49_60_fu_14010_p2.read();
        tmp_52_60_reg_31294 = tmp_52_60_fu_14015_p2.read();
        tmp_53_60_reg_31299 = tmp_53_60_fu_14020_p2.read();
        tmp_57_59_reg_31309 = tmp_57_59_fu_14031_p2.read();
        tmp_58_59_reg_31314 = tmp_58_59_fu_14036_p2.read();
        tmp_59_59_reg_31319 = tmp_59_59_fu_14041_p2.read();
        tmp_60_59_reg_31324 = tmp_60_59_fu_14046_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg26_fsm_27.read()))) {
        prev_score_out_0_op_i1_61_reg_31377 = prev_score_out_0_op_i1_61_fu_14170_p2.read();
        prev_score_out_0_op_i_60_reg_31403 = prev_score_out_0_op_i_60_fu_14194_p2.read();
        prev_score_out_8_61_reg_31428 = prev_score_out_8_61_fu_14227_p2.read();
        tmp_48_61_reg_31383 = tmp_48_61_fu_14175_p2.read();
        tmp_49_61_reg_31388 = tmp_49_61_fu_14180_p2.read();
        tmp_52_61_reg_31393 = tmp_52_61_fu_14184_p2.read();
        tmp_53_61_reg_31398 = tmp_53_61_fu_14189_p2.read();
        tmp_57_60_reg_31408 = tmp_57_60_fu_14199_p2.read();
        tmp_58_60_reg_31413 = tmp_58_60_fu_14204_p2.read();
        tmp_59_60_reg_31418 = tmp_59_60_fu_14209_p2.read();
        tmp_60_60_reg_31423 = tmp_60_60_fu_14214_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg28_fsm_29.read()))) {
        prev_score_out_0_op_i1_62_reg_31479 = prev_score_out_0_op_i1_62_fu_14343_p2.read();
        prev_score_out_0_op_i_61_reg_31505 = prev_score_out_0_op_i_61_fu_14369_p2.read();
        prev_score_out_8_62_reg_31530 = prev_score_out_8_62_fu_14402_p2.read();
        tmp_27_62_reg_31474 = tmp_27_62_fu_14337_p3.read();
        tmp_48_62_reg_31485 = tmp_48_62_fu_14348_p2.read();
        tmp_49_62_reg_31490 = tmp_49_62_fu_14353_p2.read();
        tmp_52_62_reg_31495 = tmp_52_62_fu_14358_p2.read();
        tmp_53_62_reg_31500 = tmp_53_62_fu_14363_p2.read();
        tmp_57_61_reg_31510 = tmp_57_61_fu_14374_p2.read();
        tmp_58_61_reg_31515 = tmp_58_61_fu_14379_p2.read();
        tmp_59_61_reg_31520 = tmp_59_61_fu_14384_p2.read();
        tmp_60_61_reg_31525 = tmp_60_61_fu_14389_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg30_fsm_31.read()))) {
        prev_score_out_0_op_i1_63_reg_31578 = prev_score_out_0_op_i1_63_fu_14519_p2.read();
        prev_score_out_0_op_i_62_reg_31604 = prev_score_out_0_op_i_62_fu_14543_p2.read();
        prev_score_out_8_63_reg_31629 = prev_score_out_8_63_fu_14576_p2.read();
        tmp_48_63_reg_31584 = tmp_48_63_fu_14524_p2.read();
        tmp_49_63_reg_31589 = tmp_49_63_fu_14529_p2.read();
        tmp_52_63_reg_31594 = tmp_52_63_fu_14533_p2.read();
        tmp_53_63_reg_31599 = tmp_53_63_fu_14538_p2.read();
        tmp_57_62_reg_31609 = tmp_57_62_fu_14548_p2.read();
        tmp_58_62_reg_31614 = tmp_58_62_fu_14553_p2.read();
        tmp_59_62_reg_31619 = tmp_59_62_fu_14558_p2.read();
        tmp_60_62_reg_31624 = tmp_60_62_fu_14563_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg32_fsm_33.read()))) {
        prev_score_out_0_op_i1_64_reg_31680 = prev_score_out_0_op_i1_64_fu_14692_p2.read();
        prev_score_out_0_op_i_63_reg_31706 = prev_score_out_0_op_i_63_fu_14718_p2.read();
        prev_score_out_8_64_reg_31731 = prev_score_out_8_64_fu_14751_p2.read();
        tmp_27_64_reg_31675 = tmp_27_64_fu_14686_p3.read();
        tmp_48_64_reg_31686 = tmp_48_64_fu_14697_p2.read();
        tmp_49_64_reg_31691 = tmp_49_64_fu_14702_p2.read();
        tmp_52_64_reg_31696 = tmp_52_64_fu_14707_p2.read();
        tmp_53_64_reg_31701 = tmp_53_64_fu_14712_p2.read();
        tmp_57_63_reg_31711 = tmp_57_63_fu_14723_p2.read();
        tmp_58_63_reg_31716 = tmp_58_63_fu_14728_p2.read();
        tmp_59_63_reg_31721 = tmp_59_63_fu_14733_p2.read();
        tmp_60_63_reg_31726 = tmp_60_63_fu_14738_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg34_fsm_35.read()))) {
        prev_score_out_0_op_i1_65_reg_31782 = prev_score_out_0_op_i1_65_fu_14867_p2.read();
        prev_score_out_0_op_i_64_reg_31808 = prev_score_out_0_op_i_64_fu_14893_p2.read();
        prev_score_out_8_65_reg_31833 = prev_score_out_8_65_fu_14926_p2.read();
        tmp_27_65_reg_31777 = tmp_27_65_fu_14861_p3.read();
        tmp_48_65_reg_31788 = tmp_48_65_fu_14872_p2.read();
        tmp_49_65_reg_31793 = tmp_49_65_fu_14877_p2.read();
        tmp_52_65_reg_31798 = tmp_52_65_fu_14882_p2.read();
        tmp_53_65_reg_31803 = tmp_53_65_fu_14887_p2.read();
        tmp_57_64_reg_31813 = tmp_57_64_fu_14898_p2.read();
        tmp_58_64_reg_31818 = tmp_58_64_fu_14903_p2.read();
        tmp_59_64_reg_31823 = tmp_59_64_fu_14908_p2.read();
        tmp_60_64_reg_31828 = tmp_60_64_fu_14913_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg36_fsm_37.read()))) {
        prev_score_out_0_op_i1_66_reg_31884 = prev_score_out_0_op_i1_66_fu_15042_p2.read();
        prev_score_out_0_op_i_65_reg_31910 = prev_score_out_0_op_i_65_fu_15068_p2.read();
        prev_score_out_8_66_reg_31935 = prev_score_out_8_66_fu_15101_p2.read();
        tmp_27_66_reg_31879 = tmp_27_66_fu_15036_p3.read();
        tmp_48_66_reg_31890 = tmp_48_66_fu_15047_p2.read();
        tmp_49_66_reg_31895 = tmp_49_66_fu_15052_p2.read();
        tmp_52_66_reg_31900 = tmp_52_66_fu_15057_p2.read();
        tmp_53_66_reg_31905 = tmp_53_66_fu_15062_p2.read();
        tmp_57_65_reg_31915 = tmp_57_65_fu_15073_p2.read();
        tmp_58_65_reg_31920 = tmp_58_65_fu_15078_p2.read();
        tmp_59_65_reg_31925 = tmp_59_65_fu_15083_p2.read();
        tmp_60_65_reg_31930 = tmp_60_65_fu_15088_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg38_fsm_39.read()))) {
        prev_score_out_0_op_i1_67_reg_31986 = prev_score_out_0_op_i1_67_fu_15217_p2.read();
        prev_score_out_0_op_i_66_reg_32012 = prev_score_out_0_op_i_66_fu_15243_p2.read();
        prev_score_out_8_67_reg_32037 = prev_score_out_8_67_fu_15276_p2.read();
        tmp_27_67_reg_31981 = tmp_27_67_fu_15211_p3.read();
        tmp_48_67_reg_31992 = tmp_48_67_fu_15222_p2.read();
        tmp_49_67_reg_31997 = tmp_49_67_fu_15227_p2.read();
        tmp_52_67_reg_32002 = tmp_52_67_fu_15232_p2.read();
        tmp_53_67_reg_32007 = tmp_53_67_fu_15237_p2.read();
        tmp_57_66_reg_32017 = tmp_57_66_fu_15248_p2.read();
        tmp_58_66_reg_32022 = tmp_58_66_fu_15253_p2.read();
        tmp_59_66_reg_32027 = tmp_59_66_fu_15258_p2.read();
        tmp_60_66_reg_32032 = tmp_60_66_fu_15263_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg40_fsm_41.read()))) {
        prev_score_out_0_op_i1_68_reg_32088 = prev_score_out_0_op_i1_68_fu_15392_p2.read();
        prev_score_out_0_op_i_67_reg_32114 = prev_score_out_0_op_i_67_fu_15418_p2.read();
        prev_score_out_8_68_reg_32139 = prev_score_out_8_68_fu_15451_p2.read();
        tmp_27_68_reg_32083 = tmp_27_68_fu_15386_p3.read();
        tmp_48_68_reg_32094 = tmp_48_68_fu_15397_p2.read();
        tmp_49_68_reg_32099 = tmp_49_68_fu_15402_p2.read();
        tmp_52_68_reg_32104 = tmp_52_68_fu_15407_p2.read();
        tmp_53_68_reg_32109 = tmp_53_68_fu_15412_p2.read();
        tmp_57_67_reg_32119 = tmp_57_67_fu_15423_p2.read();
        tmp_58_67_reg_32124 = tmp_58_67_fu_15428_p2.read();
        tmp_59_67_reg_32129 = tmp_59_67_fu_15433_p2.read();
        tmp_60_67_reg_32134 = tmp_60_67_fu_15438_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg42_fsm_43.read()))) {
        prev_score_out_0_op_i1_69_reg_32190 = prev_score_out_0_op_i1_69_fu_15567_p2.read();
        prev_score_out_0_op_i_68_reg_32216 = prev_score_out_0_op_i_68_fu_15593_p2.read();
        prev_score_out_8_69_reg_32241 = prev_score_out_8_69_fu_15626_p2.read();
        tmp_27_69_reg_32185 = tmp_27_69_fu_15561_p3.read();
        tmp_48_69_reg_32196 = tmp_48_69_fu_15572_p2.read();
        tmp_49_69_reg_32201 = tmp_49_69_fu_15577_p2.read();
        tmp_52_69_reg_32206 = tmp_52_69_fu_15582_p2.read();
        tmp_53_69_reg_32211 = tmp_53_69_fu_15587_p2.read();
        tmp_57_68_reg_32221 = tmp_57_68_fu_15598_p2.read();
        tmp_58_68_reg_32226 = tmp_58_68_fu_15603_p2.read();
        tmp_59_68_reg_32231 = tmp_59_68_fu_15608_p2.read();
        tmp_60_68_reg_32236 = tmp_60_68_fu_15613_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg44_fsm_45.read()))) {
        prev_score_out_0_op_i1_70_reg_32292 = prev_score_out_0_op_i1_70_fu_15742_p2.read();
        prev_score_out_0_op_i_69_reg_32318 = prev_score_out_0_op_i_69_fu_15768_p2.read();
        prev_score_out_8_70_reg_32343 = prev_score_out_8_70_fu_15801_p2.read();
        tmp_27_70_reg_32287 = tmp_27_70_fu_15736_p3.read();
        tmp_48_70_reg_32298 = tmp_48_70_fu_15747_p2.read();
        tmp_49_70_reg_32303 = tmp_49_70_fu_15752_p2.read();
        tmp_52_70_reg_32308 = tmp_52_70_fu_15757_p2.read();
        tmp_53_70_reg_32313 = tmp_53_70_fu_15762_p2.read();
        tmp_57_69_reg_32323 = tmp_57_69_fu_15773_p2.read();
        tmp_58_69_reg_32328 = tmp_58_69_fu_15778_p2.read();
        tmp_59_69_reg_32333 = tmp_59_69_fu_15783_p2.read();
        tmp_60_69_reg_32338 = tmp_60_69_fu_15788_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read()))) {
        prev_score_out_0_op_i1_71_reg_32394 = prev_score_out_0_op_i1_71_fu_15917_p2.read();
        prev_score_out_0_op_i_70_reg_32420 = prev_score_out_0_op_i_70_fu_15943_p2.read();
        prev_score_out_8_71_reg_32445 = prev_score_out_8_71_fu_15976_p2.read();
        tmp_27_71_reg_32389 = tmp_27_71_fu_15911_p3.read();
        tmp_48_71_reg_32400 = tmp_48_71_fu_15922_p2.read();
        tmp_49_71_reg_32405 = tmp_49_71_fu_15927_p2.read();
        tmp_52_71_reg_32410 = tmp_52_71_fu_15932_p2.read();
        tmp_53_71_reg_32415 = tmp_53_71_fu_15937_p2.read();
        tmp_57_70_reg_32425 = tmp_57_70_fu_15948_p2.read();
        tmp_58_70_reg_32430 = tmp_58_70_fu_15953_p2.read();
        tmp_59_70_reg_32435 = tmp_59_70_fu_15958_p2.read();
        tmp_60_70_reg_32440 = tmp_60_70_fu_15963_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg48_fsm_49.read()))) {
        prev_score_out_0_op_i1_72_reg_32493 = prev_score_out_0_op_i1_72_fu_16093_p2.read();
        prev_score_out_0_op_i_71_reg_32519 = prev_score_out_0_op_i_71_fu_16117_p2.read();
        prev_score_out_8_72_reg_32544 = prev_score_out_8_72_fu_16150_p2.read();
        tmp_48_72_reg_32499 = tmp_48_72_fu_16098_p2.read();
        tmp_49_72_reg_32504 = tmp_49_72_fu_16103_p2.read();
        tmp_52_72_reg_32509 = tmp_52_72_fu_16107_p2.read();
        tmp_53_72_reg_32514 = tmp_53_72_fu_16112_p2.read();
        tmp_57_71_reg_32524 = tmp_57_71_fu_16122_p2.read();
        tmp_58_71_reg_32529 = tmp_58_71_fu_16127_p2.read();
        tmp_59_71_reg_32534 = tmp_59_71_fu_16132_p2.read();
        tmp_60_71_reg_32539 = tmp_60_71_fu_16137_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg50_fsm_51.read()))) {
        prev_score_out_0_op_i1_73_reg_32592 = prev_score_out_0_op_i1_73_fu_16267_p2.read();
        prev_score_out_0_op_i_72_reg_32618 = prev_score_out_0_op_i_72_fu_16291_p2.read();
        prev_score_out_8_73_reg_32643 = prev_score_out_8_73_fu_16324_p2.read();
        tmp_48_73_reg_32598 = tmp_48_73_fu_16272_p2.read();
        tmp_49_73_reg_32603 = tmp_49_73_fu_16277_p2.read();
        tmp_52_73_reg_32608 = tmp_52_73_fu_16281_p2.read();
        tmp_53_73_reg_32613 = tmp_53_73_fu_16286_p2.read();
        tmp_57_72_reg_32623 = tmp_57_72_fu_16296_p2.read();
        tmp_58_72_reg_32628 = tmp_58_72_fu_16301_p2.read();
        tmp_59_72_reg_32633 = tmp_59_72_fu_16306_p2.read();
        tmp_60_72_reg_32638 = tmp_60_72_fu_16311_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg52_fsm_53.read()))) {
        prev_score_out_0_op_i1_74_reg_32694 = prev_score_out_0_op_i1_74_fu_16440_p2.read();
        prev_score_out_0_op_i_73_reg_32720 = prev_score_out_0_op_i_73_fu_16466_p2.read();
        prev_score_out_8_74_reg_32745 = prev_score_out_8_74_fu_16499_p2.read();
        tmp_27_74_reg_32689 = tmp_27_74_fu_16434_p3.read();
        tmp_48_74_reg_32700 = tmp_48_74_fu_16445_p2.read();
        tmp_49_74_reg_32705 = tmp_49_74_fu_16450_p2.read();
        tmp_52_74_reg_32710 = tmp_52_74_fu_16455_p2.read();
        tmp_53_74_reg_32715 = tmp_53_74_fu_16460_p2.read();
        tmp_57_73_reg_32725 = tmp_57_73_fu_16471_p2.read();
        tmp_58_73_reg_32730 = tmp_58_73_fu_16476_p2.read();
        tmp_59_73_reg_32735 = tmp_59_73_fu_16481_p2.read();
        tmp_60_73_reg_32740 = tmp_60_73_fu_16486_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg54_fsm_55.read()))) {
        prev_score_out_0_op_i1_75_reg_32796 = prev_score_out_0_op_i1_75_fu_16615_p2.read();
        prev_score_out_0_op_i_74_reg_32822 = prev_score_out_0_op_i_74_fu_16641_p2.read();
        prev_score_out_8_75_reg_32847 = prev_score_out_8_75_fu_16674_p2.read();
        tmp_27_75_reg_32791 = tmp_27_75_fu_16609_p3.read();
        tmp_48_75_reg_32802 = tmp_48_75_fu_16620_p2.read();
        tmp_49_75_reg_32807 = tmp_49_75_fu_16625_p2.read();
        tmp_52_75_reg_32812 = tmp_52_75_fu_16630_p2.read();
        tmp_53_75_reg_32817 = tmp_53_75_fu_16635_p2.read();
        tmp_57_74_reg_32827 = tmp_57_74_fu_16646_p2.read();
        tmp_58_74_reg_32832 = tmp_58_74_fu_16651_p2.read();
        tmp_59_74_reg_32837 = tmp_59_74_fu_16656_p2.read();
        tmp_60_74_reg_32842 = tmp_60_74_fu_16661_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg56_fsm_57.read()))) {
        prev_score_out_0_op_i1_76_reg_32900 = prev_score_out_0_op_i1_76_fu_16796_p2.read();
        prev_score_out_0_op_i_75_reg_32926 = prev_score_out_0_op_i_75_fu_16820_p2.read();
        prev_score_out_8_76_reg_32951 = prev_score_out_8_76_fu_16853_p2.read();
        tmp_48_76_reg_32906 = tmp_48_76_fu_16801_p2.read();
        tmp_49_76_reg_32911 = tmp_49_76_fu_16806_p2.read();
        tmp_52_76_reg_32916 = tmp_52_76_fu_16810_p2.read();
        tmp_53_76_reg_32921 = tmp_53_76_fu_16815_p2.read();
        tmp_57_75_reg_32931 = tmp_57_75_fu_16825_p2.read();
        tmp_58_75_reg_32936 = tmp_58_75_fu_16830_p2.read();
        tmp_59_75_reg_32941 = tmp_59_75_fu_16835_p2.read();
        tmp_60_75_reg_32946 = tmp_60_75_fu_16840_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg58_fsm_59.read()))) {
        prev_score_out_0_op_i1_77_reg_33004 = prev_score_out_0_op_i1_77_fu_16969_p2.read();
        prev_score_out_0_op_i_76_reg_33030 = prev_score_out_0_op_i_76_fu_16993_p2.read();
        prev_score_out_8_77_reg_33055 = prev_score_out_8_77_fu_17026_p2.read();
        tmp_48_77_reg_33010 = tmp_48_77_fu_16974_p2.read();
        tmp_49_77_reg_33015 = tmp_49_77_fu_16979_p2.read();
        tmp_52_77_reg_33020 = tmp_52_77_fu_16983_p2.read();
        tmp_53_77_reg_33025 = tmp_53_77_fu_16988_p2.read();
        tmp_57_76_reg_33035 = tmp_57_76_fu_16998_p2.read();
        tmp_58_76_reg_33040 = tmp_58_76_fu_17003_p2.read();
        tmp_59_76_reg_33045 = tmp_59_76_fu_17008_p2.read();
        tmp_60_76_reg_33050 = tmp_60_76_fu_17013_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg60_fsm_61.read()))) {
        prev_score_out_0_op_i1_78_reg_33106 = prev_score_out_0_op_i1_78_fu_17136_p2.read();
        prev_score_out_0_op_i_77_reg_33132 = prev_score_out_0_op_i_77_fu_17162_p2.read();
        prev_score_out_8_78_reg_33157 = prev_score_out_8_78_fu_17195_p2.read();
        tmp_27_78_reg_33101 = tmp_27_78_fu_17130_p3.read();
        tmp_48_78_reg_33112 = tmp_48_78_fu_17141_p2.read();
        tmp_49_78_reg_33117 = tmp_49_78_fu_17146_p2.read();
        tmp_52_78_reg_33122 = tmp_52_78_fu_17151_p2.read();
        tmp_53_78_reg_33127 = tmp_53_78_fu_17156_p2.read();
        tmp_57_77_reg_33137 = tmp_57_77_fu_17167_p2.read();
        tmp_58_77_reg_33142 = tmp_58_77_fu_17172_p2.read();
        tmp_59_77_reg_33147 = tmp_59_77_fu_17177_p2.read();
        tmp_60_77_reg_33152 = tmp_60_77_fu_17182_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg62_fsm_63.read()))) {
        prev_score_out_0_op_i1_79_reg_33213 = prev_score_out_0_op_i1_79_fu_17316_p2.read();
        prev_score_out_0_op_i_78_reg_33239 = prev_score_out_0_op_i_78_fu_17342_p2.read();
        prev_score_out_8_79_reg_33264 = prev_score_out_8_79_fu_17375_p2.read();
        tmp_27_79_reg_33208 = tmp_27_79_fu_17310_p3.read();
        tmp_48_79_reg_33219 = tmp_48_79_fu_17321_p2.read();
        tmp_49_79_reg_33224 = tmp_49_79_fu_17326_p2.read();
        tmp_52_79_reg_33229 = tmp_52_79_fu_17331_p2.read();
        tmp_53_79_reg_33234 = tmp_53_79_fu_17336_p2.read();
        tmp_57_78_reg_33244 = tmp_57_78_fu_17347_p2.read();
        tmp_58_78_reg_33249 = tmp_58_78_fu_17352_p2.read();
        tmp_59_78_reg_33254 = tmp_59_78_fu_17357_p2.read();
        tmp_60_78_reg_33259 = tmp_60_78_fu_17362_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg64_fsm_65.read()))) {
        prev_score_out_0_op_i1_80_reg_33317 = prev_score_out_0_op_i1_80_fu_17491_p2.read();
        prev_score_out_0_op_i_79_reg_33343 = prev_score_out_0_op_i_79_fu_17515_p2.read();
        prev_score_out_8_80_reg_33368 = prev_score_out_8_80_fu_17548_p2.read();
        tmp_48_80_reg_33323 = tmp_48_80_fu_17496_p2.read();
        tmp_49_80_reg_33328 = tmp_49_80_fu_17501_p2.read();
        tmp_52_80_reg_33333 = tmp_52_80_fu_17505_p2.read();
        tmp_53_80_reg_33338 = tmp_53_80_fu_17510_p2.read();
        tmp_57_79_reg_33348 = tmp_57_79_fu_17520_p2.read();
        tmp_58_79_reg_33353 = tmp_58_79_fu_17525_p2.read();
        tmp_59_79_reg_33358 = tmp_59_79_fu_17530_p2.read();
        tmp_60_79_reg_33363 = tmp_60_79_fu_17535_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg66_fsm_67.read()))) {
        prev_score_out_0_op_i1_81_reg_33424 = prev_score_out_0_op_i1_81_fu_17663_p2.read();
        prev_score_out_0_op_i_80_reg_33450 = prev_score_out_0_op_i_80_fu_17689_p2.read();
        prev_score_out_8_81_reg_33475 = prev_score_out_8_81_fu_17722_p2.read();
        tmp_27_81_reg_33419 = tmp_27_81_fu_17657_p3.read();
        tmp_48_81_reg_33430 = tmp_48_81_fu_17668_p2.read();
        tmp_49_81_reg_33435 = tmp_49_81_fu_17673_p2.read();
        tmp_52_81_reg_33440 = tmp_52_81_fu_17678_p2.read();
        tmp_53_81_reg_33445 = tmp_53_81_fu_17683_p2.read();
        tmp_57_80_reg_33455 = tmp_57_80_fu_17694_p2.read();
        tmp_58_80_reg_33460 = tmp_58_80_fu_17699_p2.read();
        tmp_59_80_reg_33465 = tmp_59_80_fu_17704_p2.read();
        tmp_60_80_reg_33470 = tmp_60_80_fu_17709_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg68_fsm_69.read()))) {
        prev_score_out_0_op_i1_82_reg_33528 = prev_score_out_0_op_i1_82_fu_17838_p2.read();
        prev_score_out_0_op_i_81_reg_33554 = prev_score_out_0_op_i_81_fu_17862_p2.read();
        prev_score_out_8_82_reg_33579 = prev_score_out_8_82_fu_17895_p2.read();
        tmp_48_82_reg_33534 = tmp_48_82_fu_17843_p2.read();
        tmp_49_82_reg_33539 = tmp_49_82_fu_17848_p2.read();
        tmp_52_82_reg_33544 = tmp_52_82_fu_17852_p2.read();
        tmp_53_82_reg_33549 = tmp_53_82_fu_17857_p2.read();
        tmp_57_81_reg_33559 = tmp_57_81_fu_17867_p2.read();
        tmp_58_81_reg_33564 = tmp_58_81_fu_17872_p2.read();
        tmp_59_81_reg_33569 = tmp_59_81_fu_17877_p2.read();
        tmp_60_81_reg_33574 = tmp_60_81_fu_17882_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg70_fsm_71.read()))) {
        prev_score_out_0_op_i1_83_reg_33627 = prev_score_out_0_op_i1_83_fu_18006_p2.read();
        prev_score_out_0_op_i_82_reg_33653 = prev_score_out_0_op_i_82_fu_18030_p2.read();
        prev_score_out_8_83_reg_33678 = prev_score_out_8_83_fu_18063_p2.read();
        tmp_48_83_reg_33633 = tmp_48_83_fu_18011_p2.read();
        tmp_49_83_reg_33638 = tmp_49_83_fu_18016_p2.read();
        tmp_52_83_reg_33643 = tmp_52_83_fu_18020_p2.read();
        tmp_53_83_reg_33648 = tmp_53_83_fu_18025_p2.read();
        tmp_57_82_reg_33658 = tmp_57_82_fu_18035_p2.read();
        tmp_58_82_reg_33663 = tmp_58_82_fu_18040_p2.read();
        tmp_59_82_reg_33668 = tmp_59_82_fu_18045_p2.read();
        tmp_60_82_reg_33673 = tmp_60_82_fu_18050_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg72_fsm_73.read()))) {
        prev_score_out_0_op_i1_84_reg_33729 = prev_score_out_0_op_i1_84_fu_18179_p2.read();
        prev_score_out_0_op_i_83_reg_33755 = prev_score_out_0_op_i_83_fu_18205_p2.read();
        prev_score_out_8_84_reg_33780 = prev_score_out_8_84_fu_18238_p2.read();
        tmp_27_84_reg_33724 = tmp_27_84_fu_18173_p3.read();
        tmp_48_84_reg_33735 = tmp_48_84_fu_18184_p2.read();
        tmp_49_84_reg_33740 = tmp_49_84_fu_18189_p2.read();
        tmp_52_84_reg_33745 = tmp_52_84_fu_18194_p2.read();
        tmp_53_84_reg_33750 = tmp_53_84_fu_18199_p2.read();
        tmp_57_83_reg_33760 = tmp_57_83_fu_18210_p2.read();
        tmp_58_83_reg_33765 = tmp_58_83_fu_18215_p2.read();
        tmp_59_83_reg_33770 = tmp_59_83_fu_18220_p2.read();
        tmp_60_83_reg_33775 = tmp_60_83_fu_18225_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg74_fsm_75.read()))) {
        prev_score_out_0_op_i1_85_reg_33831 = prev_score_out_0_op_i1_85_fu_18354_p2.read();
        prev_score_out_0_op_i_84_reg_33857 = prev_score_out_0_op_i_84_fu_18380_p2.read();
        prev_score_out_8_85_reg_33882 = prev_score_out_8_85_fu_18413_p2.read();
        tmp_27_85_reg_33826 = tmp_27_85_fu_18348_p3.read();
        tmp_48_85_reg_33837 = tmp_48_85_fu_18359_p2.read();
        tmp_49_85_reg_33842 = tmp_49_85_fu_18364_p2.read();
        tmp_52_85_reg_33847 = tmp_52_85_fu_18369_p2.read();
        tmp_53_85_reg_33852 = tmp_53_85_fu_18374_p2.read();
        tmp_57_84_reg_33862 = tmp_57_84_fu_18385_p2.read();
        tmp_58_84_reg_33867 = tmp_58_84_fu_18390_p2.read();
        tmp_59_84_reg_33872 = tmp_59_84_fu_18395_p2.read();
        tmp_60_84_reg_33877 = tmp_60_84_fu_18400_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg76_fsm_77.read()))) {
        prev_score_out_0_op_i1_86_reg_33933 = prev_score_out_0_op_i1_86_fu_18529_p2.read();
        prev_score_out_0_op_i_85_reg_33959 = prev_score_out_0_op_i_85_fu_18555_p2.read();
        prev_score_out_8_86_reg_33984 = prev_score_out_8_86_fu_18588_p2.read();
        tmp_27_86_reg_33928 = tmp_27_86_fu_18523_p3.read();
        tmp_48_86_reg_33939 = tmp_48_86_fu_18534_p2.read();
        tmp_49_86_reg_33944 = tmp_49_86_fu_18539_p2.read();
        tmp_52_86_reg_33949 = tmp_52_86_fu_18544_p2.read();
        tmp_53_86_reg_33954 = tmp_53_86_fu_18549_p2.read();
        tmp_57_85_reg_33964 = tmp_57_85_fu_18560_p2.read();
        tmp_58_85_reg_33969 = tmp_58_85_fu_18565_p2.read();
        tmp_59_85_reg_33974 = tmp_59_85_fu_18570_p2.read();
        tmp_60_85_reg_33979 = tmp_60_85_fu_18575_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg78_fsm_79.read()))) {
        prev_score_out_0_op_i1_87_reg_34032 = prev_score_out_0_op_i1_87_fu_18705_p2.read();
        prev_score_out_0_op_i_86_reg_34058 = prev_score_out_0_op_i_86_fu_18729_p2.read();
        prev_score_out_8_87_reg_34083 = prev_score_out_8_87_fu_18762_p2.read();
        tmp_48_87_reg_34038 = tmp_48_87_fu_18710_p2.read();
        tmp_49_87_reg_34043 = tmp_49_87_fu_18715_p2.read();
        tmp_52_87_reg_34048 = tmp_52_87_fu_18719_p2.read();
        tmp_53_87_reg_34053 = tmp_53_87_fu_18724_p2.read();
        tmp_57_86_reg_34063 = tmp_57_86_fu_18734_p2.read();
        tmp_58_86_reg_34068 = tmp_58_86_fu_18739_p2.read();
        tmp_59_86_reg_34073 = tmp_59_86_fu_18744_p2.read();
        tmp_60_86_reg_34078 = tmp_60_86_fu_18749_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg80_fsm_81.read()))) {
        prev_score_out_0_op_i1_88_reg_34136 = prev_score_out_0_op_i1_88_fu_18884_p2.read();
        prev_score_out_0_op_i_87_reg_34162 = prev_score_out_0_op_i_87_fu_18908_p2.read();
        prev_score_out_8_88_reg_34187 = prev_score_out_8_88_fu_18941_p2.read();
        tmp_48_88_reg_34142 = tmp_48_88_fu_18889_p2.read();
        tmp_49_88_reg_34147 = tmp_49_88_fu_18894_p2.read();
        tmp_52_88_reg_34152 = tmp_52_88_fu_18898_p2.read();
        tmp_53_88_reg_34157 = tmp_53_88_fu_18903_p2.read();
        tmp_57_87_reg_34167 = tmp_57_87_fu_18913_p2.read();
        tmp_58_87_reg_34172 = tmp_58_87_fu_18918_p2.read();
        tmp_59_87_reg_34177 = tmp_59_87_fu_18923_p2.read();
        tmp_60_87_reg_34182 = tmp_60_87_fu_18928_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg82_fsm_83.read()))) {
        prev_score_out_0_op_i1_89_reg_34238 = prev_score_out_0_op_i1_89_fu_19051_p2.read();
        prev_score_out_0_op_i_88_reg_34264 = prev_score_out_0_op_i_88_fu_19077_p2.read();
        prev_score_out_8_89_reg_34289 = prev_score_out_8_89_fu_19110_p2.read();
        tmp_27_89_reg_34233 = tmp_27_89_fu_19045_p3.read();
        tmp_48_89_reg_34244 = tmp_48_89_fu_19056_p2.read();
        tmp_49_89_reg_34249 = tmp_49_89_fu_19061_p2.read();
        tmp_52_89_reg_34254 = tmp_52_89_fu_19066_p2.read();
        tmp_53_89_reg_34259 = tmp_53_89_fu_19071_p2.read();
        tmp_57_88_reg_34269 = tmp_57_88_fu_19082_p2.read();
        tmp_58_88_reg_34274 = tmp_58_88_fu_19087_p2.read();
        tmp_59_88_reg_34279 = tmp_59_88_fu_19092_p2.read();
        tmp_60_88_reg_34284 = tmp_60_88_fu_19097_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg84_fsm_85.read()))) {
        prev_score_out_0_op_i1_90_reg_34340 = prev_score_out_0_op_i1_90_fu_19226_p2.read();
        prev_score_out_0_op_i_89_reg_34366 = prev_score_out_0_op_i_89_fu_19252_p2.read();
        prev_score_out_8_90_reg_34391 = prev_score_out_8_90_fu_19285_p2.read();
        tmp_27_90_reg_34335 = tmp_27_90_fu_19220_p3.read();
        tmp_48_90_reg_34346 = tmp_48_90_fu_19231_p2.read();
        tmp_49_90_reg_34351 = tmp_49_90_fu_19236_p2.read();
        tmp_52_90_reg_34356 = tmp_52_90_fu_19241_p2.read();
        tmp_53_90_reg_34361 = tmp_53_90_fu_19246_p2.read();
        tmp_57_89_reg_34371 = tmp_57_89_fu_19257_p2.read();
        tmp_58_89_reg_34376 = tmp_58_89_fu_19262_p2.read();
        tmp_59_89_reg_34381 = tmp_59_89_fu_19267_p2.read();
        tmp_60_89_reg_34386 = tmp_60_89_fu_19272_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg86_fsm_87.read()))) {
        prev_score_out_0_op_i1_91_reg_34444 = prev_score_out_0_op_i1_91_fu_19407_p2.read();
        prev_score_out_0_op_i_90_reg_34470 = prev_score_out_0_op_i_90_fu_19431_p2.read();
        prev_score_out_8_91_reg_34495 = prev_score_out_8_91_fu_19464_p2.read();
        tmp_48_91_reg_34450 = tmp_48_91_fu_19412_p2.read();
        tmp_49_91_reg_34455 = tmp_49_91_fu_19417_p2.read();
        tmp_52_91_reg_34460 = tmp_52_91_fu_19421_p2.read();
        tmp_53_91_reg_34465 = tmp_53_91_fu_19426_p2.read();
        tmp_57_90_reg_34475 = tmp_57_90_fu_19436_p2.read();
        tmp_58_90_reg_34480 = tmp_58_90_fu_19441_p2.read();
        tmp_59_90_reg_34485 = tmp_59_90_fu_19446_p2.read();
        tmp_60_90_reg_34490 = tmp_60_90_fu_19451_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg88_fsm_89.read()))) {
        prev_score_out_0_op_i1_92_reg_34546 = prev_score_out_0_op_i1_92_fu_19574_p2.read();
        prev_score_out_0_op_i_91_reg_34572 = prev_score_out_0_op_i_91_fu_19600_p2.read();
        prev_score_out_8_92_reg_34597 = prev_score_out_8_92_fu_19633_p2.read();
        tmp_27_92_reg_34541 = tmp_27_92_fu_19568_p3.read();
        tmp_48_92_reg_34552 = tmp_48_92_fu_19579_p2.read();
        tmp_49_92_reg_34557 = tmp_49_92_fu_19584_p2.read();
        tmp_52_92_reg_34562 = tmp_52_92_fu_19589_p2.read();
        tmp_53_92_reg_34567 = tmp_53_92_fu_19594_p2.read();
        tmp_57_91_reg_34577 = tmp_57_91_fu_19605_p2.read();
        tmp_58_91_reg_34582 = tmp_58_91_fu_19610_p2.read();
        tmp_59_91_reg_34587 = tmp_59_91_fu_19615_p2.read();
        tmp_60_91_reg_34592 = tmp_60_91_fu_19620_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg90_fsm_91.read()))) {
        prev_score_out_0_op_i1_93_reg_34648 = prev_score_out_0_op_i1_93_fu_19749_p2.read();
        prev_score_out_0_op_i_92_reg_34674 = prev_score_out_0_op_i_92_fu_19775_p2.read();
        prev_score_out_8_93_reg_34699 = prev_score_out_8_93_fu_19808_p2.read();
        tmp_27_93_reg_34643 = tmp_27_93_fu_19743_p3.read();
        tmp_48_93_reg_34654 = tmp_48_93_fu_19754_p2.read();
        tmp_49_93_reg_34659 = tmp_49_93_fu_19759_p2.read();
        tmp_52_93_reg_34664 = tmp_52_93_fu_19764_p2.read();
        tmp_53_93_reg_34669 = tmp_53_93_fu_19769_p2.read();
        tmp_57_92_reg_34679 = tmp_57_92_fu_19780_p2.read();
        tmp_58_92_reg_34684 = tmp_58_92_fu_19785_p2.read();
        tmp_59_92_reg_34689 = tmp_59_92_fu_19790_p2.read();
        tmp_60_92_reg_34694 = tmp_60_92_fu_19795_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg92_fsm_93.read()))) {
        prev_score_out_0_op_i1_94_reg_34750 = prev_score_out_0_op_i1_94_fu_19924_p2.read();
        prev_score_out_0_op_i_93_reg_34776 = prev_score_out_0_op_i_93_fu_19950_p2.read();
        prev_score_out_8_94_reg_34801 = prev_score_out_8_94_fu_19983_p2.read();
        tmp_27_94_reg_34745 = tmp_27_94_fu_19918_p3.read();
        tmp_48_94_reg_34756 = tmp_48_94_fu_19929_p2.read();
        tmp_49_94_reg_34761 = tmp_49_94_fu_19934_p2.read();
        tmp_52_94_reg_34766 = tmp_52_94_fu_19939_p2.read();
        tmp_53_94_reg_34771 = tmp_53_94_fu_19944_p2.read();
        tmp_57_93_reg_34781 = tmp_57_93_fu_19955_p2.read();
        tmp_58_93_reg_34786 = tmp_58_93_fu_19960_p2.read();
        tmp_59_93_reg_34791 = tmp_59_93_fu_19965_p2.read();
        tmp_60_93_reg_34796 = tmp_60_93_fu_19970_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg94_fsm_95.read()))) {
        prev_score_out_0_op_i1_95_reg_34857 = prev_score_out_0_op_i1_95_fu_20104_p2.read();
        prev_score_out_0_op_i_94_reg_34883 = prev_score_out_0_op_i_94_fu_20130_p2.read();
        prev_score_out_8_95_reg_34908 = prev_score_out_8_95_fu_20163_p2.read();
        tmp_27_95_reg_34852 = tmp_27_95_fu_20098_p3.read();
        tmp_48_95_reg_34863 = tmp_48_95_fu_20109_p2.read();
        tmp_49_95_reg_34868 = tmp_49_95_fu_20114_p2.read();
        tmp_52_95_reg_34873 = tmp_52_95_fu_20119_p2.read();
        tmp_53_95_reg_34878 = tmp_53_95_fu_20124_p2.read();
        tmp_57_94_reg_34888 = tmp_57_94_fu_20135_p2.read();
        tmp_58_94_reg_34893 = tmp_58_94_fu_20140_p2.read();
        tmp_59_94_reg_34898 = tmp_59_94_fu_20145_p2.read();
        tmp_60_94_reg_34903 = tmp_60_94_fu_20150_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg96_fsm_97.read()))) {
        prev_score_out_0_op_i1_96_reg_34959 = prev_score_out_0_op_i1_96_fu_20273_p2.read();
        prev_score_out_0_op_i_95_reg_34985 = prev_score_out_0_op_i_95_fu_20299_p2.read();
        prev_score_out_8_96_reg_35010 = prev_score_out_8_96_fu_20332_p2.read();
        tmp_27_96_reg_34954 = tmp_27_96_fu_20267_p3.read();
        tmp_48_96_reg_34965 = tmp_48_96_fu_20278_p2.read();
        tmp_49_96_reg_34970 = tmp_49_96_fu_20283_p2.read();
        tmp_52_96_reg_34975 = tmp_52_96_fu_20288_p2.read();
        tmp_53_96_reg_34980 = tmp_53_96_fu_20293_p2.read();
        tmp_57_95_reg_34990 = tmp_57_95_fu_20304_p2.read();
        tmp_58_95_reg_34995 = tmp_58_95_fu_20309_p2.read();
        tmp_59_95_reg_35000 = tmp_59_95_fu_20314_p2.read();
        tmp_60_95_reg_35005 = tmp_60_95_fu_20319_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg98_fsm_99.read()))) {
        prev_score_out_0_op_i1_97_reg_35085 = prev_score_out_0_op_i1_97_fu_20455_p2.read();
        prev_score_out_0_op_i_96_reg_35111 = prev_score_out_0_op_i_96_fu_20479_p2.read();
        prev_score_out_8_97_reg_35136 = prev_score_out_8_97_fu_20512_p2.read();
        tmp_48_97_reg_35091 = tmp_48_97_fu_20460_p2.read();
        tmp_49_97_reg_35096 = tmp_49_97_fu_20465_p2.read();
        tmp_52_97_reg_35101 = tmp_52_97_fu_20469_p2.read();
        tmp_53_97_reg_35106 = tmp_53_97_fu_20474_p2.read();
        tmp_57_96_reg_35116 = tmp_57_96_fu_20484_p2.read();
        tmp_58_96_reg_35121 = tmp_58_96_fu_20489_p2.read();
        tmp_59_96_reg_35126 = tmp_59_96_fu_20494_p2.read();
        tmp_60_96_reg_35131 = tmp_60_96_fu_20499_p2.read();
    }
    if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        prev_score_out_0_op_i1_98_reg_35169 = prev_score_out_0_op_i1_98_fu_20585_p2.read();
        prev_score_out_0_op_i_97_reg_35195 = prev_score_out_0_op_i_97_fu_20609_p2.read();
        prev_score_out_8_98_reg_35220 = prev_score_out_8_98_fu_20642_p2.read();
        tmp_48_98_reg_35175 = tmp_48_98_fu_20590_p2.read();
        tmp_49_98_reg_35180 = tmp_49_98_fu_20595_p2.read();
        tmp_52_98_reg_35185 = tmp_52_98_fu_20599_p2.read();
        tmp_53_98_reg_35190 = tmp_53_98_fu_20604_p2.read();
        tmp_57_97_reg_35200 = tmp_57_97_fu_20614_p2.read();
        tmp_58_97_reg_35205 = tmp_58_97_fu_20619_p2.read();
        tmp_59_97_reg_35210 = tmp_59_97_fu_20624_p2.read();
        tmp_60_97_reg_35215 = tmp_60_97_fu_20629_p2.read();
    }
    if ((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        prev_score_out_6_1_reg_22813 = prev_score_out_6_1_fu_3240_p2.read();
        prev_score_out_6_2_reg_22821 = prev_score_out_6_2_fu_3260_p2.read();
        score2_load_1_1_reg_22807 = score2_load_1_1_fu_3220_p3.read();
        tmp_10_reg_22802 = tmp_10_fu_3216_p2.read();
        tmp_116_reg_22959 = tmp_116_fu_3284_p2.read();
        tmp_127_reg_22829 = tmp_127_fu_3266_p1.read();
        tmp_132_reg_22841 = tmp_132_fu_3270_p1.read();
        tmp_248_reg_22865 = tmp_248_fu_3278_p1.read();
        tmp_31_reg_22835 = read_r_Dout_A.read().range(7, 6);
        tmp_33_reg_22847 = read_r_Dout_B.read().range(3, 2);
        tmp_34_reg_22853 = read_r_Dout_B.read().range(5, 4);
        tmp_35_reg_22859 = read_r_Dout_B.read().range(7, 6);
        tmp_56_1_reg_22964 = grp_fu_2625_p2.read();
        tmp_56_2_reg_22969 = grp_fu_2630_p2.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
  !esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_26.read())))) {
        reg_2453 = score1_q0.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
  !esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())))) {
        reg_2457 = read_r_Dout_A.read().range(3, 2);
        reg_2466 = read_r_Dout_A.read().range(5, 4);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
  !esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())))) {
        reg_2470 = read_r_Dout_A.read().range(7, 6);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
  !esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())))) {
        reg_2474 = read_r_Dout_B.read().range(3, 2);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
  !esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())))) {
        reg_2478 = read_r_Dout_B.read().range(5, 4);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
  !esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())))) {
        reg_2482 = read_r_Dout_B.read().range(7, 6);
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read())))) {
        reg_2486 = orig1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_32.read())))) {
        reg_2490 = score1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg31_fsm_32.read())))) {
        reg_2499 = orig1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read())))) {
        reg_2508 = orig1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read())) || (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg53_fsm_54.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read())))) {
        reg_2517 = orig1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_20.read())))) {
        reg_2521 = orig1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_26.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())))) {
        reg_2535 = orig1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read())))) {
        reg_2544 = score1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg27_fsm_28.read())))) {
        reg_2558 = score1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg33_fsm_34.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg16_fsm_17.read())))) {
        reg_2572 = score1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg39_fsm_40.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg18_fsm_19.read())))) {
        reg_2581 = score1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg20_fsm_21.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg46_fsm_47.read())))) {
        reg_2590 = score1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg22_fsm_23.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read())))) {
        reg_2599 = score1_q0.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg79_fsm_80.read())))) {
        reg_2922 = grp_fu_2619_p2.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg43_fsm_44.read())))) {
        reg_2926 = grp_fu_2645_p2.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, or_cond_i1_1_reg_23072.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg63_fsm_64.read())))) {
        reg_2930 = grp_fu_2668_p3.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg25_fsm_26.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read())))) {
        reg_2934 = grp_fu_2603_p2.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg17_fsm_18.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg37_fsm_38.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg97_fsm_98.read())))) {
        reg_2938 = grp_fu_2779_p2.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg21_fsm_22.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg49_fsm_50.read())))) {
        reg_2942 = grp_fu_2804_p2.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg23_fsm_24.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read())) || (!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg55_fsm_56.read())))) {
        reg_2946 = grp_fu_2817_p2.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg41_fsm_42.read())) || (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())))) {
        reg_2950 = grp_fu_2898_p2.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg47_fsm_48.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read())))) {
        reg_2954 = grp_fu_2910_p2.read();
    }
    if (((!esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg51_fsm_52.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_reg_22360.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg19_fsm_20.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read())))) {
        reg_2958 = grp_fu_2916_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_reg_22116_pp0_it1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_5_reg_22360_pp0_it1.read()))) {
        score1_load_99_reg_30364 = score1_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_fu_2962_p2.read()))) {
        tmp_16_reg_22210 = tmp_16_fu_2992_p2.read();
        tmp_1_reg_22120 = tmp_1_fu_2968_p2.read();
        tmp_20_reg_22217 = tmp_20_fu_2998_p1.read();
        tmp_36_reg_22224 = tmp_36_fu_3002_p2.read();
        tmp_4_reg_22205 = tmp_4_fu_2986_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && !esl_seteq<1,1,1>(tmp_reg_22116.read(), ap_const_lv1_0) && !(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())))) {
        tmp_232_reg_22251 = tmp_232_fu_3092_p2.read();
        tmp_239_reg_22256 = tmp_239_fu_3124_p3.read();
        tmp_241_reg_22261 = tmp_241_fu_3132_p3.read();
        tmp_68_reg_22229 = tmp_68_fu_3054_p2.read();
        tmp_72_reg_22234 = tmp_72_fu_3060_p2.read();
        tmp_84_reg_22239 = tmp_84_fu_3066_p1.read();
        tmp_96_reg_22245 = tmp_96_fu_3070_p1.read();
    }
}

void needlemanWunsch::thread_ap_NS_fsm() {
    if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_st1_fsm_0))
    {
        if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
            ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
        } else {
            ap_NS_fsm = ap_ST_st1_fsm_0;
        }
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg0_fsm_1))
    {
        if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_fu_2962_p2.read()) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_NS_fsm = ap_ST_pp0_stg1_fsm_2;
        } else {
            ap_NS_fsm = ap_ST_st207_fsm_101;
        }
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg1_fsm_2))
    {
        if (!(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
            ap_NS_fsm = ap_ST_pp0_stg2_fsm_3;
        } else {
            ap_NS_fsm = ap_ST_pp0_stg1_fsm_2;
        }
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg2_fsm_3))
    {
        if (!(ap_sig_bdd_205.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
            ap_NS_fsm = ap_ST_pp0_stg3_fsm_4;
        } else {
            ap_NS_fsm = ap_ST_pp0_stg2_fsm_3;
        }
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg3_fsm_4))
    {
        ap_NS_fsm = ap_ST_pp0_stg4_fsm_5;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg4_fsm_5))
    {
        if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_NS_fsm = ap_ST_pp0_stg5_fsm_6;
        } else {
            ap_NS_fsm = ap_ST_st207_fsm_101;
        }
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg5_fsm_6))
    {
        ap_NS_fsm = ap_ST_pp0_stg6_fsm_7;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg6_fsm_7))
    {
        ap_NS_fsm = ap_ST_pp0_stg7_fsm_8;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg7_fsm_8))
    {
        ap_NS_fsm = ap_ST_pp0_stg8_fsm_9;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg8_fsm_9))
    {
        ap_NS_fsm = ap_ST_pp0_stg9_fsm_10;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg9_fsm_10))
    {
        ap_NS_fsm = ap_ST_pp0_stg10_fsm_11;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg10_fsm_11))
    {
        ap_NS_fsm = ap_ST_pp0_stg11_fsm_12;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg11_fsm_12))
    {
        ap_NS_fsm = ap_ST_pp0_stg12_fsm_13;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg12_fsm_13))
    {
        ap_NS_fsm = ap_ST_pp0_stg13_fsm_14;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg13_fsm_14))
    {
        ap_NS_fsm = ap_ST_pp0_stg14_fsm_15;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg14_fsm_15))
    {
        ap_NS_fsm = ap_ST_pp0_stg15_fsm_16;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg15_fsm_16))
    {
        ap_NS_fsm = ap_ST_pp0_stg16_fsm_17;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg16_fsm_17))
    {
        ap_NS_fsm = ap_ST_pp0_stg17_fsm_18;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg17_fsm_18))
    {
        ap_NS_fsm = ap_ST_pp0_stg18_fsm_19;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg18_fsm_19))
    {
        ap_NS_fsm = ap_ST_pp0_stg19_fsm_20;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg19_fsm_20))
    {
        ap_NS_fsm = ap_ST_pp0_stg20_fsm_21;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg20_fsm_21))
    {
        ap_NS_fsm = ap_ST_pp0_stg21_fsm_22;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg21_fsm_22))
    {
        ap_NS_fsm = ap_ST_pp0_stg22_fsm_23;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg22_fsm_23))
    {
        ap_NS_fsm = ap_ST_pp0_stg23_fsm_24;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg23_fsm_24))
    {
        ap_NS_fsm = ap_ST_pp0_stg24_fsm_25;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg24_fsm_25))
    {
        ap_NS_fsm = ap_ST_pp0_stg25_fsm_26;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg25_fsm_26))
    {
        ap_NS_fsm = ap_ST_pp0_stg26_fsm_27;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg26_fsm_27))
    {
        ap_NS_fsm = ap_ST_pp0_stg27_fsm_28;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg27_fsm_28))
    {
        ap_NS_fsm = ap_ST_pp0_stg28_fsm_29;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg28_fsm_29))
    {
        ap_NS_fsm = ap_ST_pp0_stg29_fsm_30;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg29_fsm_30))
    {
        ap_NS_fsm = ap_ST_pp0_stg30_fsm_31;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg30_fsm_31))
    {
        ap_NS_fsm = ap_ST_pp0_stg31_fsm_32;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg31_fsm_32))
    {
        ap_NS_fsm = ap_ST_pp0_stg32_fsm_33;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg32_fsm_33))
    {
        ap_NS_fsm = ap_ST_pp0_stg33_fsm_34;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg33_fsm_34))
    {
        ap_NS_fsm = ap_ST_pp0_stg34_fsm_35;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg34_fsm_35))
    {
        ap_NS_fsm = ap_ST_pp0_stg35_fsm_36;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg35_fsm_36))
    {
        ap_NS_fsm = ap_ST_pp0_stg36_fsm_37;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg36_fsm_37))
    {
        ap_NS_fsm = ap_ST_pp0_stg37_fsm_38;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg37_fsm_38))
    {
        ap_NS_fsm = ap_ST_pp0_stg38_fsm_39;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg38_fsm_39))
    {
        ap_NS_fsm = ap_ST_pp0_stg39_fsm_40;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg39_fsm_40))
    {
        ap_NS_fsm = ap_ST_pp0_stg40_fsm_41;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg40_fsm_41))
    {
        ap_NS_fsm = ap_ST_pp0_stg41_fsm_42;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg41_fsm_42))
    {
        ap_NS_fsm = ap_ST_pp0_stg42_fsm_43;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg42_fsm_43))
    {
        ap_NS_fsm = ap_ST_pp0_stg43_fsm_44;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg43_fsm_44))
    {
        ap_NS_fsm = ap_ST_pp0_stg44_fsm_45;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg44_fsm_45))
    {
        ap_NS_fsm = ap_ST_pp0_stg45_fsm_46;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg45_fsm_46))
    {
        ap_NS_fsm = ap_ST_pp0_stg46_fsm_47;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg46_fsm_47))
    {
        ap_NS_fsm = ap_ST_pp0_stg47_fsm_48;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg47_fsm_48))
    {
        ap_NS_fsm = ap_ST_pp0_stg48_fsm_49;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg48_fsm_49))
    {
        ap_NS_fsm = ap_ST_pp0_stg49_fsm_50;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg49_fsm_50))
    {
        ap_NS_fsm = ap_ST_pp0_stg50_fsm_51;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg50_fsm_51))
    {
        ap_NS_fsm = ap_ST_pp0_stg51_fsm_52;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg51_fsm_52))
    {
        ap_NS_fsm = ap_ST_pp0_stg52_fsm_53;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg52_fsm_53))
    {
        ap_NS_fsm = ap_ST_pp0_stg53_fsm_54;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg53_fsm_54))
    {
        ap_NS_fsm = ap_ST_pp0_stg54_fsm_55;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg54_fsm_55))
    {
        ap_NS_fsm = ap_ST_pp0_stg55_fsm_56;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg55_fsm_56))
    {
        ap_NS_fsm = ap_ST_pp0_stg56_fsm_57;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg56_fsm_57))
    {
        ap_NS_fsm = ap_ST_pp0_stg57_fsm_58;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg57_fsm_58))
    {
        ap_NS_fsm = ap_ST_pp0_stg58_fsm_59;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg58_fsm_59))
    {
        ap_NS_fsm = ap_ST_pp0_stg59_fsm_60;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg59_fsm_60))
    {
        ap_NS_fsm = ap_ST_pp0_stg60_fsm_61;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg60_fsm_61))
    {
        ap_NS_fsm = ap_ST_pp0_stg61_fsm_62;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg61_fsm_62))
    {
        ap_NS_fsm = ap_ST_pp0_stg62_fsm_63;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg62_fsm_63))
    {
        ap_NS_fsm = ap_ST_pp0_stg63_fsm_64;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg63_fsm_64))
    {
        ap_NS_fsm = ap_ST_pp0_stg64_fsm_65;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg64_fsm_65))
    {
        ap_NS_fsm = ap_ST_pp0_stg65_fsm_66;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg65_fsm_66))
    {
        ap_NS_fsm = ap_ST_pp0_stg66_fsm_67;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg66_fsm_67))
    {
        ap_NS_fsm = ap_ST_pp0_stg67_fsm_68;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg67_fsm_68))
    {
        ap_NS_fsm = ap_ST_pp0_stg68_fsm_69;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg68_fsm_69))
    {
        ap_NS_fsm = ap_ST_pp0_stg69_fsm_70;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg69_fsm_70))
    {
        ap_NS_fsm = ap_ST_pp0_stg70_fsm_71;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg70_fsm_71))
    {
        ap_NS_fsm = ap_ST_pp0_stg71_fsm_72;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg71_fsm_72))
    {
        ap_NS_fsm = ap_ST_pp0_stg72_fsm_73;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg72_fsm_73))
    {
        ap_NS_fsm = ap_ST_pp0_stg73_fsm_74;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg73_fsm_74))
    {
        ap_NS_fsm = ap_ST_pp0_stg74_fsm_75;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg74_fsm_75))
    {
        ap_NS_fsm = ap_ST_pp0_stg75_fsm_76;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg75_fsm_76))
    {
        ap_NS_fsm = ap_ST_pp0_stg76_fsm_77;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg76_fsm_77))
    {
        ap_NS_fsm = ap_ST_pp0_stg77_fsm_78;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg77_fsm_78))
    {
        ap_NS_fsm = ap_ST_pp0_stg78_fsm_79;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg78_fsm_79))
    {
        ap_NS_fsm = ap_ST_pp0_stg79_fsm_80;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg79_fsm_80))
    {
        ap_NS_fsm = ap_ST_pp0_stg80_fsm_81;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg80_fsm_81))
    {
        ap_NS_fsm = ap_ST_pp0_stg81_fsm_82;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg81_fsm_82))
    {
        ap_NS_fsm = ap_ST_pp0_stg82_fsm_83;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg82_fsm_83))
    {
        ap_NS_fsm = ap_ST_pp0_stg83_fsm_84;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg83_fsm_84))
    {
        ap_NS_fsm = ap_ST_pp0_stg84_fsm_85;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg84_fsm_85))
    {
        ap_NS_fsm = ap_ST_pp0_stg85_fsm_86;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg85_fsm_86))
    {
        ap_NS_fsm = ap_ST_pp0_stg86_fsm_87;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg86_fsm_87))
    {
        ap_NS_fsm = ap_ST_pp0_stg87_fsm_88;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg87_fsm_88))
    {
        ap_NS_fsm = ap_ST_pp0_stg88_fsm_89;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg88_fsm_89))
    {
        ap_NS_fsm = ap_ST_pp0_stg89_fsm_90;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg89_fsm_90))
    {
        ap_NS_fsm = ap_ST_pp0_stg90_fsm_91;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg90_fsm_91))
    {
        ap_NS_fsm = ap_ST_pp0_stg91_fsm_92;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg91_fsm_92))
    {
        ap_NS_fsm = ap_ST_pp0_stg92_fsm_93;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg92_fsm_93))
    {
        ap_NS_fsm = ap_ST_pp0_stg93_fsm_94;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg93_fsm_94))
    {
        ap_NS_fsm = ap_ST_pp0_stg94_fsm_95;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg94_fsm_95))
    {
        ap_NS_fsm = ap_ST_pp0_stg95_fsm_96;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg95_fsm_96))
    {
        ap_NS_fsm = ap_ST_pp0_stg96_fsm_97;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg96_fsm_97))
    {
        ap_NS_fsm = ap_ST_pp0_stg97_fsm_98;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg97_fsm_98))
    {
        ap_NS_fsm = ap_ST_pp0_stg98_fsm_99;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg98_fsm_99))
    {
        ap_NS_fsm = ap_ST_pp0_stg99_fsm_100;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_pp0_stg99_fsm_100))
    {
        ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
    }
    else if (esl_seteq<1,102,102>(ap_CS_fsm.read(), ap_ST_st207_fsm_101))
    {
        ap_NS_fsm = ap_ST_st1_fsm_0;
    }
    else
    {
        ap_NS_fsm =  (sc_lv<102>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}
}

