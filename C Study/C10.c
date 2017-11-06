//
//  C10.c
//  C Study
//
//  Created by 梁超捷 on 2017/11/6.
//  Copyright © 2017年 梁超捷. All rights reserved.
//

#include "C10.h"

void Run_C10(void)
{
    //C10_1();
    //C10_2();
    //C10_3();
    //C10_4();
    //C10_5();
    C10_6();
}

void C10_6(void)
{
    double input[5] = {2.1,3.2,1.1,6.3,4.6};
    double output[5] = {0,0,0,0,0};
    int i = 0;
    int j = 0;
    
    j = sizeof(input)/sizeof(double) - 1;
    
    for (i = 0; i < sizeof(input)/sizeof(double); i++)
    {
        output[j] = input[i];
        j--;
    }
}

double C10_5(void)
{
    double input[5] = {2.1,3.2,1.1,6.3,4.6};
    int i = 0;
    double Max_Number = 0;
    double Min_Number = input[0];
    
    for (i = 0; i < sizeof(input)/sizeof(double); i++)
    {
        if (input[i] > Max_Number)
        {
            Max_Number = input[i];

        }
    }
    
    for (i = 0; i < sizeof(input)/sizeof(double); i++)
    {
        if (input[i] < Min_Number)
        {
            Min_Number = input[i];
        }
    }
    return Max_Number - Min_Number;
}

int C10_4(void)
{
    double input[5] = {2.1,3.2,1.1,6.3,4.6};
    int i = 0;
    double Max_Number = 0;
    int index_Number = 0;
    
    for (i = 0; i < sizeof(input)/sizeof(double); i++)
    {
        if (input[i] > Max_Number)
        {
            Max_Number = input[i];
            index_Number = i;
        }
    }
    return index_Number;
}

int C10_3(void)
{
    int input[5] = {2,3,1,4,6};
    int i = 0;
    int Max_Number = 0;
    
    for (i = 0; i < sizeof(input)/sizeof(int); i++)
    {
        Max_Number = input[i] < Max_Number ? Max_Number : input[i];
    }
    return Max_Number;
}

void Copy_Arr(double target1[], double source[], int number)
{
    int i = 0;
    
    for (i = 0; i < number - 1; i++)
    {
        target1[i] = source[i];
    }
}

void Copy_Ptr(double target2[], double source[], int number)
{
    int i = 0;
    
    for (i = 0; i < number; i++)
    {
        *(target2 + i) = *(source + i);
    }
}

void Copy_Ptrs(double target3[], double source[], int number)
{
    int i = 0;
    
    for (i = 0; i < number; i++)
    {
        *(target3 + i) = *(source + i);
    }
}

void C10_2(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    
    Copy_Arr(target1, source, 5);
    Copy_Ptr(target2, source, 5);
    Copy_Ptrs(target3, source, *source + 5);
    
}

void C10_1(void)
{
    const float rain [YEARS][MONTHS] =
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    int year, month;
    float subtot, total;
    
    printf(" Year            RAINFALL (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += *(*(rain + year)+month);
        }
        printf("%5d %15.1f\n",2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);
    printf("MONTHLY AVERAGE:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < YEARS; year++)
        {
            subtot += *(*(rain + year)+month);
        }
        printf("%4.1f ", subtot/YEARS);
    }
    printf("\n");
}
