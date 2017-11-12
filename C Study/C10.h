//
//  C10.h
//  C Study
//
//  Created by 梁超捷 on 2017/11/6.
//  Copyright © 2017年 梁超捷. All rights reserved.
//

#ifndef C10_h
#define C10_h

#include <stdio.h>

#endif /* C10_h */

#define MONTHS  12      // 一年的月份数
#define YEARS   5       // 年数

void Run_C10(void);
void C10_1(void);
void C10_2(void);
int C10_3(void);
int C10_4(void);
double C10_5(void);
void C10_6(void);
void C10_7(void);
void C10_8(void);
void C10_9(void);
void C10_10(int *A, int *B, int *C, int number);
void C10_11(void);
void C10_11_Print(double array[3][5], int row);
void C10_11_Double(double array[3][5], int row);

void Copy_VLA(int row, int col, double array[row][col]);
void Copy_Arr(double target1[], double source[], int number);
void Copy_Ptr(double target2[], double source[], int number);
void Copy_Ptrs(double target3[], double source[], int number);
