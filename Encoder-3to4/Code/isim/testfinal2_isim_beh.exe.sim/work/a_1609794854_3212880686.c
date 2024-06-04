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
static const char *ng0 = "F:/purfard/LOGIC CIRCUITS FINAL PROJECT/final2/final2/final2.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


static void work_a_1609794854_3212880686_p_0(char *t0)
{
    char t45[16];
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
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(21, ng0);
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
LAB3:    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t5 = t1;
    memset(t5, (unsigned char)2, 2U);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(23, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(24, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t5 = (t0 + 3840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t13 = (0 - 2);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t6 + t16);
    t17 = *((unsigned char *)t2);
    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t18 = (0 - 1);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t7 = (t8 + t21);
    t22 = *((unsigned char *)t7);
    t23 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t17, t22);
    t9 = (t0 + 1672U);
    t10 = *((char **)t9);
    t24 = (1 - 1);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t9 = (t10 + t27);
    t28 = *((unsigned char *)t9);
    t29 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t23, t28);
    t30 = (t0 + 3904);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    *((unsigned char *)t34) = t29;
    xsi_driver_first_trans_delta(t30, 3U, 1, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (0 - 2);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t18 = (0 - 1);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t6 + t21);
    t4 = *((unsigned char *)t5);
    t11 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t4);
    t7 = (t0 + 1032U);
    t8 = *((char **)t7);
    t24 = (1 - 2);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t7 = (t8 + t27);
    t12 = *((unsigned char *)t7);
    t17 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t11, t12);
    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    t35 = (0 - 1);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t9 = (t10 + t38);
    t22 = *((unsigned char *)t9);
    t23 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t17, t22);
    t30 = (t0 + 1832U);
    t31 = *((char **)t30);
    t39 = (1 - 1);
    t40 = (t39 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t30 = (t31 + t42);
    t28 = *((unsigned char *)t30);
    t29 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t23, t28);
    t32 = (t0 + 3904);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t43 = (t34 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = t29;
    xsi_driver_first_trans_delta(t32, 2U, 1, 0LL);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (1 - 2);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t18 = (0 - 1);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t6 + t21);
    t4 = *((unsigned char *)t5);
    t11 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t4);
    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t24 = (1 - 1);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t7 = (t8 + t27);
    t12 = *((unsigned char *)t7);
    t17 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t11, t12);
    t9 = (t0 + 1032U);
    t10 = *((char **)t9);
    t35 = (2 - 2);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t9 = (t10 + t38);
    t22 = *((unsigned char *)t9);
    t23 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t17, t22);
    t30 = (t0 + 1992U);
    t31 = *((char **)t30);
    t39 = (0 - 1);
    t40 = (t39 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t30 = (t31 + t42);
    t28 = *((unsigned char *)t30);
    t29 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t23, t28);
    t32 = (t0 + 3904);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t43 = (t34 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = t29;
    xsi_driver_first_trans_delta(t32, 1U, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (2 - 2);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t18 = (0 - 1);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t6 + t21);
    t4 = *((unsigned char *)t5);
    t11 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t4);
    t7 = (t0 + 3904);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t30 = *((char **)t10);
    *((unsigned char *)t30) = t11;
    xsi_driver_first_trans_delta(t7, 0U, 1, 0LL);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 3968);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (0 - 2);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t18 = (1 - 1);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t6 + t21);
    t4 = *((unsigned char *)t5);
    t8 = ((IEEE_P_2592010699) + 4024);
    t7 = xsi_base_array_concat(t7, t45, t8, (char)99, t3, (char)99, t4, (char)101);
    t25 = (1U + 1U);
    t11 = (2U != t25);
    if (t11 == 1)
        goto LAB10;

LAB11:    t9 = (t0 + 3712);
    t10 = (t9 + 56U);
    t30 = *((char **)t10);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t7, 2U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (1 - 2);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t18 = (1 - 1);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t6 + t21);
    t4 = *((unsigned char *)t5);
    t8 = ((IEEE_P_2592010699) + 4024);
    t7 = xsi_base_array_concat(t7, t45, t8, (char)99, t3, (char)99, t4, (char)101);
    t25 = (1U + 1U);
    t11 = (2U != t25);
    if (t11 == 1)
        goto LAB12;

LAB13:    t9 = (t0 + 3776);
    t10 = (t9 + 56U);
    t30 = *((char **)t10);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t7, 2U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (2 - 2);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t18 = (1 - 1);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t6 + t21);
    t4 = *((unsigned char *)t5);
    t8 = ((IEEE_P_2592010699) + 4024);
    t7 = xsi_base_array_concat(t7, t45, t8, (char)99, t3, (char)99, t4, (char)101);
    t25 = (1U + 1U);
    t11 = (2U != t25);
    if (t11 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 3840);
    t10 = (t9 + 56U);
    t30 = *((char **)t10);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t7, 2U);
    xsi_driver_first_trans_fast(t9);
    goto LAB3;

LAB7:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_size_not_matching(2U, t25, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(2U, t25, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(2U, t25, 0);
    goto LAB15;

}


extern void work_a_1609794854_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1609794854_3212880686_p_0};
	xsi_register_didat("work_a_1609794854_3212880686", "isim/testfinal2_isim_beh.exe.sim/work/a_1609794854_3212880686.didat");
	xsi_register_executes(pe);
}
