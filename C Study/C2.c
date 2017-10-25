//
//  C2.c
//  C Study
//
//  Created by 梁超捷 on 2017/9/29.
//  Copyright © 2017年 梁超捷. All rights reserved.
//

#include "C2.h"

void Run_C2(void)
{
    //C2_2();
    //C2_3();
    //C2_4();
    //C2_5();
    //C2_6();
    //C2_7();
    //C2_8();
}

void C2_2 (void)
{
    int input;
    scanf("%d", &input );
    printf("%c\n",input);
}

void C2_3(void)
{
    printf("Startled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"\n");
}

void C2_4(void)
{
    float input_value = 0;
    printf("Enter a floating-point value:\n");
    scanf("%f", &input_value);
    printf("fixed-point notation: %.6f\n",input_value);
    printf("exponential notation: %e\n",input_value);
    printf("p notation: %a\n",input_value);
}

void C2_5(void)
{
    const long second = 3.156e+7;
    int age = 0;
    printf("Please input your age!\n");
    scanf("%d", &age);
    printf("Total seconds is %ld.\n",age*second);
}

void C2_6(void)
{
    int weight = 0;
    const float water = 3e-23;
    
    printf("请输入水的夸脱数:\n");
    scanf("%d",&weight);
    printf("水分子数量%.1f\n",weight*950/water);
}

void C2_7(void)
{
    int height = 0;
    printf("请输入身高(英寸)\n");
    scanf("%d",&height);
    printf("您的身高为%.2f厘米\n",height * 2.54);
}

void C2_8(void)
{
    float cup_number = 0;
    
    printf("请输入杯数\n");
    scanf("%f",&cup_number);
    printf("品脱数%.1f\n",cup_number / 2);
    printf("盎司数%.0f\n",cup_number * 8);
    printf("汤勺数%.0f\n",cup_number * 8 * 2);
    printf("茶勺数%.0f\n",cup_number * 8 * 2 * 3);
    
}
