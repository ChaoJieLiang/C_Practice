//
//  C6.c
//  C Study
//
//  Created by 梁超捷 on 2017/10/24.
//  Copyright © 2017年 梁超捷. All rights reserved.
//

#include "C6.h"
#include <ctype.h>


void Run_C6(void)
{
    //C6_1();
    //C6_2();
    //C6_3();
    //C6_4();
    //C6_5();
    //C6_6();
    //C6_7();
    //C6_8();
    C6_9();
    //C6_10();
}

void C6_9(void)
{
    int input_number = 0;
    int i = 1, j = 2;
    int temp = 0;
    int count = 0;
    
    printf("Please input an integer number.\n");
    scanf("%d", &input_number);
    
    while (input_number <= 0)
    {
        scanf("%d",&input_number);
    }
    
    for (i = 2; i <= input_number; i++)
    {
        for (j = 1; j <= i; j++)
        {
            temp = i%j;
            if (temp == 0 )
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ",i);
        }
        count = 0;
    }
}

void C6_8(void)
{
    float i_Working_Hour = 0;
    float i_Salary = 0;
    float i_Tax = 0;
    int input_Number = 0;
    float base_Salary = 0;
    
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1. $8.75/hr             2. $9.33/hr\n");
    printf("3. $10.00/hr            4. $11.20/hr\n");
    printf("5. Quit\n");
    
    scanf("%d",&input_Number);
    while (input_Number !=5)
    {
        if (input_Number>=1 && input_Number <=4)
        {
            printf("请输入一周工作小时数。\n");
            scanf("%f",&i_Working_Hour);
            switch (input_Number)
            {
                case 1:
                    base_Salary = SALARY1;
                    break;
                case 2:
                    base_Salary = SALARY2;
                    break;
                case 3:
                    base_Salary = SALARY3;
                    break;
                case 4:
                    base_Salary = SALARY4;
                    break;
                    
                default:
                    break;
            }
            break;
        }
        else if (input_Number > 5)
        {
            printf("Please input correct number.\n");
            scanf("%d",&input_Number);
        }
    }
    
    if (i_Working_Hour <= 40)
    {
        i_Salary = i_Working_Hour * base_Salary;
    }
    else
    {
        i_Salary = 40 * base_Salary + (i_Working_Hour - 40)*base_Salary*OT_SALARY;
    }
    
    if (i_Salary <= 300)
    {
        i_Tax = i_Salary * TAX_300;
    }
    else if (i_Salary > 300 && i_Salary <= 450)
    {
        i_Tax = 300 * TAX_300 + 150*TAX_150;
    }
    else
    {
        i_Tax = 300 * TAX_300 + 150*TAX_150 + (i_Salary - 450)*TAX;
    }
    
    printf("Total incoming is %.1f, tax is %.1f, actual incoming is %.1f. \n", i_Salary,i_Tax,i_Salary-i_Tax);
    
}


void C6_7(void)
{
    float i_Working_Hour = 0;
    float i_Salary = 0;
    float i_Tax = 0;
    
    printf("请输入一周工作小时数。\n");
    scanf("%f",&i_Working_Hour);
    
    if (i_Working_Hour <= 40)
    {
        i_Salary = i_Working_Hour * BASE_SALARY;
    }
    else
    {
        i_Salary = 40 * BASE_SALARY + (i_Working_Hour - 40)*BASE_SALARY*OT_SALARY;
    }
    
    if (i_Salary <= 300)
    {
        i_Tax = i_Salary * TAX_300;
    }
    else if (i_Salary > 300 && i_Salary <= 450)
    {
        i_Tax = 300 * TAX_300 + 150*TAX_150;
    }
    else
    {
        i_Tax = 300 * TAX_300 + 150*TAX_150 + (i_Salary - 450)*TAX;
    }
    
    printf("Total incoming is %.1f, tax is %.1f, actual incoming is %.1f. \n", i_Salary,i_Tax,i_Salary-i_Tax);
    
}

void C6_6(void)
{
    char c_Input;
    BOOL b_Input_E = false;
    int count = 0;
    
    while ((c_Input = getchar()) != '#')
    {
        if (c_Input == 'e')
        {
            b_Input_E = true;
        }
        else if(c_Input == 'i')
        {
            if (b_Input_E == true)
            {
                count++;
            }
            else
            {
                b_Input_E = false;
            }
        }
        else
        {
            b_Input_E = false;
        }
    }
    printf("%d\n",count);
}

void C6_5(void)
{
    char c_Input;
    int num = 0;
    
    printf("Enter letter to be analyzed (# to terminate):\n");
    
    while ((c_Input = getchar()) != '#')
    {
        switch (c_Input)
        {
            case '.':
                printf("!");
                num++;
                break;
             
            case '!':
                printf("!!");
                num++;
                break;
                
            default:
             printf("%c",c_Input);
                break;
        }
    }
    printf("\nTotal replacement number is %d.\n",num);
}

void C6_4(void)
{
    char c_Input;
    int num = 0;
    
    printf("Enter letter to be analyzed (# to terminate):\n");
    
    while ((c_Input = getchar()) != '#')
    {
        if (c_Input == '.')
        {
            printf("!");
            num++;
        }
        else if(c_Input == '!')
        {
            printf("!!");
            num++;
        }
        else
        {
            printf("%c",c_Input);
        }
    }
    printf("\nTotal replacement number is %d.\n",num);
}


void C6_3(void)
{

    int number = 0;
    int even = 0;
    int even_sum = 0;
    int odd = 0;
    int odd_sum = 0;
    
    printf("Enter integer number to be analyzed (0 to terminate):\n");
    scanf("%d",&number);
    while(number !=0)
    {
        if (number%2 == 0)
        {
            odd++;
            odd_sum = odd_sum + number;
        }
        else
        {
            even++;
            even_sum = even_sum + number;
        }
        scanf("%d",&number);
    }
    printf("Odd number is %d, average of odd is %d\n",odd,odd_sum/odd);
    printf("Even number is %d, average of even is %d\n",even,even_sum/even);
}

void C6_2(void)
{
    char c_Input;
    int i = 0;
    int num_Input = 0;
    
    printf("Enter letter to be analyzed (# to terminate):\n");
    
    while ((c_Input = getchar()) != '#')
    {
        num_Input++;

        printf("%c,%d ",c_Input,c_Input);
        i++;
        if (i>=8)
        {
            printf("\n");
            i=0;
        }
    }
}

void C6_1(void)
{
    char c_Input;
    int num_Space = 0;
    int num_Tab = 0;
    int numb_Letter = 0;
    
    printf("Enter letter to be analyzed (# to terminate):\n");

    while ((c_Input = getchar()) != '#')
    {
        if (c_Input == ' ')
        {
            num_Space++;
        }
        else if (c_Input == '\n')
        {
            num_Tab++;
        }
        else
        {
            numb_Letter++;
        }
    }
    printf("%d, %d, %d",num_Space,num_Tab,numb_Letter);
}
