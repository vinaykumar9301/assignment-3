//ASSIGNMENT QUESTION NO:14
#include<stdio.h>
int main ()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
    {
        printf("number devided by 7,3");    
    }
    else
    {
        printf("not devided");
    }
}