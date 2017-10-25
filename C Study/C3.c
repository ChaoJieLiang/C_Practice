//
//  C3.c
//  C Study
//
//  Created by 梁超捷 on 2017/10/2.
//  Copyright © 2017年 梁超捷. All rights reserved.
//

#include "C3.h"
#include <stdio.h>
#include <string.h>
void Run_C3(void)
{
    //C3_1();
    //C3_2();
    //C3_3();
    //C3_4();
    //C3_5();
    //C3_6();
    //C3_7();
    C3_8();
}

void C3_8(void)
{
    float distance = 0;
    float gas = 0;
    const float gongsheng = 3.785;
    const float gongli = 1.609;
    printf("请输入里程和汽油消耗量\n");
    scanf("%f%f",&distance,&gas);
    printf("每加仑汽油行驶里程数为%.1f英里每加仑\n",distance/gas);
    printf("每公升汽油行驶里程数为%.1f公里每公升\n",distance*gongli / gas * gongsheng);
}

void C3_7(void)
{
    double DLB_DIG = 1.0/3.0;
    float FLT_DIG = 1.0/3.0;
    
    printf("%.6f,%.12f,%.16f\n",DLB_DIG,DLB_DIG,DLB_DIG);
    printf("%.6f,%.12f,%.16f\n",FLT_DIG,FLT_DIG,FLT_DIG);
}

void C3_6(void)
{
    char first_name[10];
    char last_name[10];
    unsigned long length_First_Name = 0, length_Last_Name = 0;
    length_First_Name = strlen(first_name);
    length_Last_Name = strlen(last_name);
    
    
    printf("请输入姓\n");
    scanf("%s",first_name);
    printf("请输入名\n");
    scanf("%s",last_name);
    printf("%s %s\n",first_name,last_name);
    printf("%*d %*d\n",length_First_Name,length_First_Name,length_Last_Name,length_Last_Name);
    printf("%s %s\n",first_name,last_name);
    printf("%-*d %-*d\n",length_First_Name,length_First_Name,length_Last_Name,length_Last_Name);
}

void C3_5(void)
{
    float speed = 0 , size = 0;
    
    printf("请输入下载速度和文件大小\n");
    scanf("%f%f", &speed, &size);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n",speed,size);
    printf("downloads in %.2f seconds.\n", size/speed);
}

void C3_4(void)
{
    float height = 0;
    char name[10];
    printf("请输入身高和姓名\n");
    scanf("%f%s", &height,name);
    printf("%s,you are %.3f feet tall.\n",name,height);
    
}

void C3_3(void)
{
    float input = 0;
    scanf("%f", &input);
    printf("%.1f\n", input);
    printf("%.1e\n", input);
}

void C3_2(void)
{
    char first_name[10];
    char last_name[10];
    long string_Length = 0;
    
    printf("请输入姓和名。\n");
    scanf("%s%s", first_name,last_name);
    printf("\"%s %s\"\n",first_name,last_name);
    printf("\"%20s %s\"\n",first_name,last_name);
    printf("\"%s %-20s\"\n",first_name,last_name);
    string_Length = strlen(first_name);
    string_Length = string_Length + strlen(last_name);
    
    printf("\"%s %-s\"\n",first_name,last_name);
}

void C3_1(void)
{
    char first_name[10], last_name[10];
    
    printf("请输入姓\n");
    scanf("%s",first_name);
    printf("请输入名字\n");
    scanf("%s",last_name);
    printf("您的全名为 %s %s\n",first_name, last_name);
}

