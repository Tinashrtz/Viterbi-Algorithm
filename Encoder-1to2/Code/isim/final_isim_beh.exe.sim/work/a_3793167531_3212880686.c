/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/purfard/LOGIC CIRCUITS FINAL PROJECT/final/final/final.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


static void work_a_3793167531_3212880686_p_0(char *t0)
{
    char t30[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(39, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t5 = t1;
    memset(t5, (unsigned char)2, 2U);
    t6 = (t0 + 3392);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t2 = (t0 + 1672U);
    t7 = *((char **)t2);
    t14 = (1 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t7 + t17);
    t18 = *((unsigned char *)t2);
    t19 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t13, t18);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t20 = (0 - 1);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t8 = (t9 + t23);
    t24 = *((unsigned char *)t8);
    t25 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t19, t24);
    t10 = (t0 + 3456);
    t26 = (t10 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t25;
    xsi_driver_first_trans_delta(t10, 1U, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t14 = (0 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t5 + t17);
    t4 = *((unsigned char *)t1);
    t11 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t4);
    t6 = (t0 + 3456);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t11;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t14 = (0 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 3520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_delta(t5, 1U, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t14 = (1 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 3520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t14 = (1 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t5 + t17);
    t4 = *((unsigned char *)t1);
    t7 = ((IEEE_P_2592010699) + 4024);
    t6 = xsi_base_array_concat(t6, t30, t7, (char)99, t3, (char)99, t4, (char)101);
    t21 = (1U + 1U);
    t11 = (2U != t21);
    if (t11 == 1)
        goto LAB10;

LAB11:    t8 = (t0 + 3392);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t26 = (t10 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t6, 2U);
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB7:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_size_not_matching(2U, t21, 0);
    goto LAB11;

}


extern void work_a_3793167531_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3793167531_3212880686_p_0};
	xsi_register_didat("work_a_3793167531_3212880686", "isim/final_isim_beh.exe.sim/work/a_3793167531_3212880686.didat");
	xsi_register_executes(pe);
}
