//
//  C9.c
//  C Study
//
//  Created by 梁超捷 on 2017/10/31.
//  Copyright © 2017年 梁超捷. All rights reserved.
//

#include "C9.h"

void Run_C9(void)
{
    //double x = 2.22, y = 2.12, z = 3.33;

    //printf("%.2lf\n",C9_1_Min(0.04, 0.03));
    //C9_2_Chline('x', 5, 3);
    //9_3('x', 4, 4);
    //printf("%.2lf\n",C9_4(1.2, 3.2));
    //C9_5_large_of(1.21, 3.21);
    //C9_6(&x, &y, &z);
    //printf("%lf\n" ,C9_8_power(12.3, -3));
    //printf("%lf\n",C9_9_power(12.3, -3));
    //To_base_n(64,2);
    //printf("%d\n",C9_11(6));
}
double C9_9_power(double n, int p)
{
    double pow = 1;

    if (p>0)
    {
        p--;
        if (p>=0)
        {
            pow = n*C9_9_power(n, p);
        }
        return pow;
    }
    if (p<0)
    {
        p++;
        if (p<=0)
        {
            pow = (1/n)*(C9_9_power(n, p));
        }
        return pow;
    }
    return pow;
}

double C9_8_power(double n, int p)
{
    double pow = 1;
    int i;
    
    if (n == 0)
    {
        return 0;
    }
    if (p == 0)
    {
        return 1;
    }
    if (p >= 1)
    {
        for (i = 1; i <= p; i++)
            pow *= n;
        return pow;
    }
    if (p < 1)
    {
        for (i = 1; i <= -p; i++)
            pow *= 1/n;
        return pow;
    }
    return 0;
}

void To_base_n(int x, int y)
{
    int r = 0;
    
    r = x%y;
    if (x>=y)
    {
        To_base_n(x/y,y);
    }
    printf("%d",r);
}

int C9_11(int number)
{
    int result = 0, f1 = 0, f2 = 0;
    int i = 0;
    
    if (number == 0 | number == 1)
    {
        result = number;
    }
    else
    {
        for (i = 2; i <= number; i++)
        {
            result = f1 + f2;
            f1 = f2;
            f2 = result;
        }
    }
    return result;
}

void C9_6(double *x, double *y, double *z)
{
    double max = 0, min = 0, mid = 0;
    
    min = *(*x < *y ? x:y);
    max = *(*x < *y ? y:x);
    
    mid = max < *z ? max:*z;
    
    min = min < *z ? min:*z;
    max = max < *z ? *z:max;
    
    *x = min;
    *y = mid;
    *z = max;
}

void C9_5_large_of(double x, double y)
{
    double temp;
    
    temp = x<=y?y:x;
    x = temp;
    y = temp;
    printf("%.2lf, %.2lf\n",x,y);
}

double C9_4(double input1, double input2)
{
    double result = 0;
    
    result = 1/((1/input1 + 1/input2)/2);
    return result;
}

double C9_1_Min(double x, double y)
{
    return x<y?x:y;
}

void C9_2_Chline(char ch, int column, int raw)
{
    int i = 0;
    int j = 0;
    
    for (i = 0; i < raw; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}

void C9_3 (char ch, int number, int raw)
{
    int i = 0;
    int j = 0;
    
    while (i < raw - 1)
    {
        i++;
        printf("\n");
    }
    for (j = 0; j < number; j++)
    {
        printf("%c",ch);
    }
    printf("\n");
}
