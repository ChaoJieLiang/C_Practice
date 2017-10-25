//
//  C4.c
//  C Study
//
//  Created by 梁超捷 on 2017/10/7.
//  Copyright © 2017年 梁超捷. All rights reserved.
//

#define Minute 60
#define K_Temp 273.16

#include "C4.h"

void Run_C4(void)
{
    //C4_1();
    //C4_2();
    //C4_3();
    //C4_4();
    //C4_5();
    //C4_6();
    //C4_7();
    //C4_8();
    //C4_9();
}

double temp_Cal(double temperature)
{
    return 5.0/9.0*(temperature - 32.0);
}

void C4_9(void)
{
    
    double input_temperature = 0;
    double temp = 0;
    
    printf("Please input temp: ");
    scanf("%lf",&input_temperature);
    
    while (input_temperature > 0)
    {
        temp = temp_Cal(input_temperature);
        printf("%.3lf %.3lf %.3lf\n", input_temperature, temp, temp + K_Temp);
        printf("Please input temp: ");
        scanf("%lf",&input_temperature);
    }
}


void C4_8(void)
{
    int Sec_Operand = 0, Input_Number = 0;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as second operand:");
    scanf("%d",&Sec_Operand);
    printf("Now enter the first operand:");
    scanf("%d",&Input_Number);

    while (Input_Number>0)
    {
        printf("%d %% %d is %d\n",Input_Number,Sec_Operand,Input_Number%Sec_Operand);
        printf("Enter next number for first operand (<=0 to quit):");
        scanf("%d",&Input_Number);

    }
}

void C4_7(void)
{
    double number = 0;
    printf("Please input a double number.\n");
    scanf("%lf",&number);
    
    printf("%lf\n",number * number * number);
}

void C4_6(void)
{
    
    int count = 0 , sum = 0;
    int day = 0;
    
    printf("Input day number.\n");
    scanf("%d",&day);
    while (count++ < day)
        sum = sum + count * count;
    printf("sum = %d\n",sum);
}

void C4_5(void)
{
 
    int count = 0 , sum = 0;
    int day = 0;
    
    printf("Input day number.\n");
    scanf("%d",&day);
    while (count++ < day)
        sum = sum + count;
    printf("sum = %d\n",sum);
}

void C4_4(void)
{
    float height = 0,temp_height = 0;
    const float inch = 0.3937;
    
    printf("Enter a height in centimeters:\n");
    scanf("%f",&height);
    

    while(height > 0)
    {
        temp_height = height * inch;

        printf("%.1f cm = %d feet, %.1f inches\n", height, (int)temp_height/12, (temp_height - ((int)temp_height/12)*12));
        printf("Enter a height in centimeters:\n");
        scanf("%f",&height);
    }
    printf("Bye\n");
}

void C4_3(void)
{
    int day = 0;
    
    printf("Please input day number.\n");
    scanf("%d",&day);
    
    while (day > 0)
    {
        printf("%d days are %d weeks, %d days.\n",day, day/7, day%7);
        printf("Please input day number.\n");
        scanf("%d",&day);
    }
    
}

void C4_2(void)
{
    int input = 0;
    int i = 0;
    
    printf("Please input an integer.\n");
    scanf("%d",&input);
    
    for (i=input; i<=input+10; i++)
    {
        printf("%d\t",i);
    }
    
}

void C4_1(void)
{
    int min = 0;
    do {
        scanf("%d",&min);
        printf("%d hours %d minutes\n",min / Minute, min % Minute);
    } while (min >0 );
    
}
