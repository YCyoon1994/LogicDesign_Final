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
static const char *ng0 = "D:/Dev/LogicDesign_Final/Final/simulation1.v";
static int ng1[] = {0, 0};
static int ng2[] = {100, 0};
static int ng3[] = {1, 0};
static int ng4[] = {10000, 0};



static void Initial_64_0(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);

LAB4:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6116);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 6116);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6120);
    *((int *)t8) = t7;

LAB16:    t9 = (t0 + 6120);
    if (*((int *)t9) > 0)
        goto LAB17;

LAB18:
LAB1:    return;
LAB6:    xsi_set_current_line(69, ng0);

LAB8:    xsi_set_current_line(70, ng0);
    t10 = (t0 + 3776);
    xsi_process_wait(t10, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    t9 = (t8 + 4);
    t4 = *((unsigned int *)t9);
    t5 = (~(t4));
    t6 = *((unsigned int *)t8);
    t12 = (t6 & t5);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t9) == 0)
        goto LAB10;

LAB12:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;

LAB13:    t14 = (t11 + 4);
    t15 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (~(t16));
    *((unsigned int *)t11) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB15;

LAB14:    t22 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2888);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 1);
    t2 = (t0 + 6116);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB15:    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t11) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB14;

LAB17:    xsi_set_current_line(76, ng0);

LAB19:    xsi_set_current_line(77, ng0);
    t10 = (t0 + 3776);
    xsi_process_wait(t10, 10000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    t9 = (t8 + 4);
    t4 = *((unsigned int *)t9);
    t5 = (~(t4));
    t6 = *((unsigned int *)t8);
    t12 = (t6 & t5);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t9) == 0)
        goto LAB21;

LAB23:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;

LAB24:    t14 = (t11 + 4);
    t15 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (~(t16));
    *((unsigned int *)t11) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB26;

LAB25:    t22 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2888);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 1);
    t2 = (t0 + 6120);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB16;

LAB21:    *((unsigned int *)t11) = 1;
    goto LAB24;

LAB26:    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t11) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB25;

}


extern void work_m_00000000002294320835_0208055277_init()
{
	static char *pe[] = {(void *)Initial_64_0};
	xsi_register_didat("work_m_00000000002294320835_0208055277", "isim/simulation1_isim_beh.exe.sim/work/m_00000000002294320835_0208055277.didat");
	xsi_register_executes(pe);
}
