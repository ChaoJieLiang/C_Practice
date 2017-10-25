//
//  C5.c
//  C Study
//
//  Created by 梁超捷 on 2017/10/8.
//  Copyright © 2017年 梁超捷. All rights reserved.
//

#include "C5.h"
#include "string.h"
void Run_C5(void)
{
    //C5_1();
    //C5_2();
    //C5_3();
    //C5_4();
    //C5_5();
    //C5_6();
    //C5_7();
    //C5_10();
    //C5_11();
    //C5_12();
    //C5_13();
    //C5_14();
    //C5_15();
    //C5_16();
    //C5_17();
    C5_18();
}

void C5_18(void)
{
    int friend = 5;
    const int Dunbar_Number = 150;
    int year = 1;
    
    do {
        friend = (friend - year)*2;
        year++;
        printf("%d\n", friend);
    } while (friend < Dunbar_Number);
    
}

void C5_17(void)
{
    const float rate = 1.08;
    const float out_money = 10;
    float total = 100;
    int year = 0;
    
    do {
        total = total * rate - out_money;
        year++;
    } while (total > 0);
    printf("%d\n",year);
}

void C5_16(void)
{
    const int money = 100;
    const float danli = 1.1;
    const float fuli = 1.05;
    float Daphne_Money = 0;
    float Deirdre_Money = 0;
    int year = 0;
    
    do {
        Daphne_Money = Daphne_Money + money * danli;
        Deirdre_Money = (Deirdre_Money + money) * fuli;
        year++;
    } while (Daphne_Money > Deirdre_Money);
    
    printf("%d, %.2f, %.2f\n",year, Deirdre_Money,Daphne_Money);
}

void C5_15(void)
{
    char chr_Input[255] = {'\0'};
    int i = 254;
    
    printf("Please input a string.\n");
    scanf("%s", chr_Input);
    for (i = 254; i >= 0; i--)
    {
        if (chr_Input[i] != '\0')
        {
            printf("%c",chr_Input[i]);
        }
    }
    printf("\n");
}

void C5_14(void)
{
    double dbl_Array_Input[8] = {0};
    double dbl_Array[8] = {0};
    double sum = 0;
    int i = 0, j = 0;
    
    printf("Please input 8 double number.\n");
    
    for (i = 0; i < 8; i++)
    {
        scanf("%lf",&dbl_Array_Input[i]);
    }
    
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j <= i; j++)
        {
            sum = sum + dbl_Array_Input[j];
        }
        dbl_Array[i] = sum;
        sum = 0;
    }
    for (i = 0; i < 8; i++)
    {
        printf("%.1f ",dbl_Array_Input[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        printf("%.1f ",dbl_Array[i]);
    }
}

void C5_13(void)
{
    int array[8] = {0};
    int i = 0, j = 0;
    int temp = 1;
    
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < i; j++)
        {
            temp = temp * 2;
        }
        array[i] = temp;
        temp = 1;
    }
    i = 0;
    do {
        
        printf("%d\n",array[i]);
        i++;
    } while (i < 8);
}

void C5_12(void)
{
    double iteration = 0;
    double i = 0;
    double sum = 0;
    printf("Please input iteration number.\n");
    scanf("%lf",&iteration);
    while (iteration > 0)
    {
        for (i = 1; i <= iteration; i++)
        {
            sum = sum + 1.0 / i;
        }
        printf("%lf\n",sum);
        sum = 0;
        for (i = 1; i <= iteration; i++)
        {
            if ((int)i%2 == 0)
            {
                sum = sum - 1.0 / i;
            }
            else
            {
                sum = sum + 1.0 / i;
            }
        }
        printf("%lf\n",sum);
        sum = 0;
        printf("Please input iteration number.\n");
        scanf("%lf",&iteration);
    }
    printf("Done.\n");
}

void C5_11(void)
{
    int i = 0;
    int temp_data[8] = {0};
    
    printf("Please input 8 integer.\n");
    for (i = 0; i<8; i++)
    {
        scanf("%d",&temp_data[i]);
    }
    printf("Input finish.\n");
    for (i = 8; i > 0; i--)
    {
        printf("%d\n",temp_data[i-1]);
    }
}

void C5_10(void)
{
    int upper = 0, lower = 0;
    int i = 0;
    int sum = 0;
    printf("Enter lower and upper integer limits:");
    scanf("%d%d",&lower, &upper);
    
    while (upper>lower)
    {
        for (i = lower; i <= upper; i++)
        {
            sum = sum + i * i;
        }
        printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum);
        printf("Enter next set of limits:");
        scanf("%d%d",&lower, &upper);
    }
    printf("Done\n");
}

void C5_7(void)
{
    char word[100];
    int i = 0;
    
    printf("Please input a word.\n");
    scanf("%s",word);
    
    for (i = 0; i<strlen(word); i++)
    {
        printf("%c",word[i]);
    }
}

void C5_6(void)
{
    int max = 0, min = 0;
    int i = 0;

    printf("Please input min and max value of this table\n");
    scanf("%d%d",&max,&min);
    
    for (i = min; i <= max; i++)
    {
        printf("%d, %d, %d\n", i, i*i, i*i*i);
    }
}

void C5_5(void)
{
    char input = '\0';
    int i = 0;
    int j = 0;
    int count = 0;
    char printletter = 'A';
    printf("Please input a letter.\n");
    scanf("%c",&input);
    
    for (i = 0; i < (input - 'A' + 1); i++)
    {
        for (j = 0; j < (input - 'A' - i); j++)
        {
            count++;
            printf(" ");
        }
        for (j = 0; j < (input - 'A' + 1 - count); j++)
        {
            printf("%c", printletter + j);
        }
        for (j = 0; j < (input - 'A' - count); j++)
        {
            printf("%c", input - count - j - 1);
        }
        
        count = 0;
        printf("\n");
    }
}

void C5_4(void)
{
    int i = 0, j = 0;
    int count = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%c",'A' + count);
            count++;
        }
        
        printf("\n");
    }
}

void C5_3(void)
{
    int i = 0, j = 0;
    
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%c",'F' - j);
        }
        printf("\n");
    }
}

void C5_2(void)
{
    int i = 0, j = 0;
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i+1; j++)
        {
            printf("$");
        }
        printf("\n");
    }
}

void C5_1(void)
{
    char array[26];
    int i = 0;
    
    for (i=0; i<26; i++)
    {
        array[i] = 'a'+ i;
        printf("%c",array[i]);
    }
}
