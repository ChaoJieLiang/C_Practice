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
    //printf("%.2lf\n",C9_1_Min(0.04, 0.03));
    //C9_2_Chline('x', 5, 3);
    C9_3('x', 4, 4);
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
