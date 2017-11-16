//
//  C11.c
//  C Study
//
//  Created by 梁超捷 on 2017/11/14.
//  Copyright © 2017年 梁超捷. All rights reserved.
//

#include "C11.h"
char * str_ch(char * str, char c);
int is_within(char * str, char c);
char * mystrncpy(char * p1, char * p2, int n);

void Run_C11(void)
{
    char str[40];
    
    //C11_1(str, 10);
    //C11_2(str, 10);
    //C11_3(str);
    //C11_4(str, 40);
    //puts(str);
    //C11_5();
    //C11_6();
}

void C11_6(void)
{
    char str[40];
    char ch;
    
    printf("Input a string (type quit to quit):\n");
    while (strcmp(gets(str), "quit"))
    {
        printf("Input a character: ");
        scanf("%c", &ch);
        while (getchar() != '\n')
            continue;
        if (is_within(str, ch))
            printf("Find!\n");
        else
            printf("Can't find!\n");
        printf("Input a string (type quit to quit):\n");
    }
    printf("Bye.\n");
}

int is_within(char * str, char c)
{
    int flag = 0;
    size_t count = 0;
    
    while (count++ < strlen(str))
        if (*str++ == c)
        {
            flag = 1;
            break;
        }
    return flag;
}

void C11_5(void)
{
    char str[80];
    char ch;
    char * ret_val;
    
    printf("Input a string (type quit to quit):\n");
    gets(str);
    while (strcmp(str, "quit"))
    {
        printf("Input a character:");
        scanf("%c",&ch);
        while (getchar()!='\n')
            continue;
        ret_val = str_ch(str,ch);
        if(ret_val)
            printf("Find! The string start with the %c:\n" "%s\n", ch, ret_val);
        else
            printf("Can't find!\n");
        printf("Input a string (type quit to quit):\n");
        gets(str);
    }
    printf("Bye.\n");
}

char * str_ch(char * str, char c)
{
    int flag = 0;
    int count = 0;
    char * a;
    
    a = str;
    
    while (count++ < strlen(a))
        if (*str++ == c)
        {
            flag = 1;
            break;
        }
    if (flag)
        return str - 1;
    else
        return NULL;
}

void C11_4(char * ar, int n)
{
    char ch;
    int i = 0;
    
    while (isspace(ch = getchar()))
        continue;
    do
    {
        *(ar + i) = ch;
        i++;
    }
    while (!isspace(ch = getchar()) && i < (n - 1));
    *(ar + i) = '\0';
}

void C11_3(char *ar)
{
    char ch;
    
    while (isspace(ch = getchar()))
        continue;
    do
        *ar++ = ch;
    while (!isspace(ch = getchar()));
    *ar = '\0';
}

char * C11_2(char *ar, int n)
{
    int i;
    
    for(i = 0; i < n; i++)
    {
        *(ar+i) = getchar();
        if (isspace(*(ar+i)))
            break;
    }
    *(ar+i) = '\0';
    puts(ar);
    return ar;
}


char * C11_1(char ar[], int n)
{
    int count = 0;
    
    while (count < n)
    {
        ar[count++] = getchar();
    }
    ar[count] = '\0';
    puts(ar);
    return ar;
}
