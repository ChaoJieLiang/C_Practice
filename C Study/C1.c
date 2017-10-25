//
//  C1_1.c
//  C Study
//
//  Created by 梁超捷 on 2017/9/29.
//  Copyright © 2017年 梁超捷. All rights reserved.
//

#include "C1.h"

void Run_C1(void)
{
    //C1_1();
    //C1_2();
    //C1_3();
    //C1_4();
    //C1_5();
    //C1_6();
    //C1_7();
    //C1_8();
}

void two(void)
{
    printf("two\n");
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void C1_8(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");
}

void smile(void)
{
    printf("Smile!");
}

void C1_7(void)
{
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");
}

void C1_6(void)
{
    int toes = 10;
    
    printf("%d - toes, %d - toes*2, %d - toes^2\n",toes,toes*10,toes*toes);
}


void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}

void C1_5(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}

void C1_4(void)
{
    jolly();
    jolly();
    jolly();
    deny();
}

void C1_3(void)
{
    int i_Show_Date = 0;
    i_Show_Date = 365 * 35;
    printf("%d\n",i_Show_Date);
}

void C1_2(void)
{
    printf("Peter Liang, 上海市柳营路515弄2号1001室\n");
}

void C1_1(void)
{
    printf("Gustav Mahler\n");
    printf("Gustave\nMahler\n");
    printf("Gustav Mahler\n");
}
