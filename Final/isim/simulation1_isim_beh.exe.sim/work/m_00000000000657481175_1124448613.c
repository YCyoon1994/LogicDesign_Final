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
static const char *ng0 = "C:/dev/Final/Data_Memory.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {16U, 0U};



static void Initial_35_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t36[8];
    char t37[8];
    char t38[8];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t1 + 4);
    t3 = *((unsigned int *)t2);
    t4 = (~(t3));
    t5 = *((unsigned int *)t1);
    t6 = (t5 & t4);
    t7 = (t0 + 5592);
    *((int *)t7) = t6;

LAB3:    t8 = (t0 + 5592);
    if (*((int *)t8) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB6:    xsi_set_current_line(39, ng0);
    t9 = (t0 + 2568);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2408);
    t15 = (t0 + 2408);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2408);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 2568);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t23, 8, 2);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t14 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    memset(t13, 0, 8);
    t8 = (t13 + 4);
    t9 = (t7 + 4);
    t3 = *((unsigned int *)t7);
    t4 = (~(t3));
    *((unsigned int *)t13) = t4;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB10;

LAB9:    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 255U);
    t35 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t35 & 255U);
    t10 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 8, t13, 8, t10, 8);
    t11 = (t0 + 2408);
    t12 = (t0 + 2408);
    t15 = (t12 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 2408);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 2568);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng4)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 8, t22, 8, t23, 8);
    xsi_vlog_generic_convert_array_indices(t36, t37, t16, t19, 2, 1, t38, 8, 2);
    t24 = (t36 + 4);
    t39 = *((unsigned int *)t24);
    t6 = (!(t39));
    t27 = (t37 + 4);
    t40 = *((unsigned int *)t27);
    t26 = (!(t40));
    t29 = (t6 && t26);
    if (t29 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 8, t7, 8, t8, 8);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t13, 0, 0, 8);
    t1 = (t0 + 5592);
    t6 = *((int *)t1);
    *((int *)t1) = (t6 - 1);
    goto LAB3;

LAB7:    t31 = *((unsigned int *)t13);
    t32 = *((unsigned int *)t14);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t12, t11, 0, *((unsigned int *)t14), t34);
    goto LAB8;

LAB10:    t5 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t13) = (t5 | t25);
    t28 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t28 | t31);
    goto LAB9;

LAB11:    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t30 = (t41 - t42);
    t33 = (t30 + 1);
    xsi_vlogvar_assign_value(t11, t14, 0, *((unsigned int *)t37), t33);
    goto LAB12;

}

static void Always_46_1(char *t0)
{
    char t16[8];
    char t17[8];
    char t37[8];
    char t38[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(57, ng0);

LAB20:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t32 = (t9 ^ t10);
    t33 = (t8 | t32);
    t36 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t5);
    t41 = (t36 | t40);
    t42 = (~(t41));
    t43 = (t33 & t42);
    if (t43 != 0)
        goto LAB24;

LAB21:    if (t41 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t16) = 1;

LAB24:    t12 = (t16 + 4);
    t44 = *((unsigned int *)t12);
    t45 = (~(t44));
    t46 = *((unsigned int *)t16);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t32 = (t9 ^ t10);
    t33 = (t8 | t32);
    t36 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t5);
    t41 = (t36 | t40);
    t42 = (~(t41));
    t43 = (t33 & t42);
    if (t43 != 0)
        goto LAB32;

LAB29:    if (t41 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t16) = 1;

LAB32:    t12 = (t16 + 4);
    t44 = *((unsigned int *)t12);
    t45 = (~(t44));
    t46 = *((unsigned int *)t16);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB33;

LAB34:
LAB35:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(49, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t13 = (t8 & t7);
    t4 = (t0 + 5596);
    *((int *)t4) = t13;

LAB10:    t5 = (t0 + 5596);
    if (*((int *)t5) > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t11 = (t0 + 2568);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 2408);
    t18 = (t0 + 2408);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2408);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2568);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 8, 2);
    t27 = (t16 + 4);
    t9 = *((unsigned int *)t27);
    t28 = (!(t9));
    t29 = (t17 + 4);
    t10 = *((unsigned int *)t29);
    t30 = (!(t10));
    t31 = (t28 && t30);
    if (t31 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    *((unsigned int *)t16) = t7;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB17;

LAB16:    t33 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t33 & 255U);
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & 255U);
    t12 = ((char*)((ng3)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 8, t16, 8, t12, 8);
    t14 = (t0 + 2408);
    t15 = (t0 + 2408);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2408);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2568);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 8, t25, 8, t26, 8);
    xsi_vlog_generic_convert_array_indices(t37, t38, t19, t22, 2, 1, t39, 8, 2);
    t27 = (t37 + 4);
    t40 = *((unsigned int *)t27);
    t13 = (!(t40));
    t29 = (t38 + 4);
    t41 = *((unsigned int *)t29);
    t28 = (!(t41));
    t30 = (t13 && t28);
    if (t30 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 8, t4, 8, t5, 8);
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t16, 0, 0, 8);
    t2 = (t0 + 5596);
    t13 = *((int *)t2);
    *((int *)t2) = (t13 - 1);
    goto LAB10;

LAB14:    t32 = *((unsigned int *)t16);
    t33 = *((unsigned int *)t17);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t35);
    goto LAB15;

LAB17:    t8 = *((unsigned int *)t16);
    t9 = *((unsigned int *)t11);
    *((unsigned int *)t16) = (t8 | t9);
    t10 = *((unsigned int *)t5);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t10 | t32);
    goto LAB16;

LAB18:    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t31 = (t42 - t43);
    t34 = (t31 + 1);
    xsi_vlogvar_assign_value(t14, t17, 0, *((unsigned int *)t38), t34);
    goto LAB19;

LAB23:    t11 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(58, ng0);

LAB28:    xsi_set_current_line(59, ng0);
    t14 = (t0 + 2408);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    t19 = (t0 + 2408);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2408);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 1688U);
    t26 = *((char **)t25);
    xsi_vlog_generic_get_array_select_value(t17, 8, t18, t21, t24, 2, 1, t26, 8, 2);
    t25 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t25, t17, 0, 0, 8, 0LL);
    goto LAB27;

LAB31:    t11 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(62, ng0);

LAB36:    xsi_set_current_line(63, ng0);
    t14 = (t0 + 1848U);
    t15 = *((char **)t14);
    t14 = (t0 + 2408);
    t18 = (t0 + 2408);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2408);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t17, t37, t20, t23, 2, 1, t25, 8, 2);
    t24 = (t17 + 4);
    t49 = *((unsigned int *)t24);
    t13 = (!(t49));
    t26 = (t37 + 4);
    t50 = *((unsigned int *)t26);
    t28 = (!(t50));
    t30 = (t13 && t28);
    if (t30 == 1)
        goto LAB37;

LAB38:    goto LAB35;

LAB37:    t51 = *((unsigned int *)t17);
    t52 = *((unsigned int *)t37);
    t31 = (t51 - t52);
    t34 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, *((unsigned int *)t37), t34, 0LL);
    goto LAB38;

}


extern void work_m_00000000000657481175_1124448613_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_46_1};
	xsi_register_didat("work_m_00000000000657481175_1124448613", "isim/simulation1_isim_beh.exe.sim/work/m_00000000000657481175_1124448613.didat");
	xsi_register_executes(pe);
}
