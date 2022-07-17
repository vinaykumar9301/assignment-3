//ASSIGNMENT QUESTION NO:13
#include<stdio.h>
int main ()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x%2==0 && x%3==0)
    {
        printf("number devided by 2,3");    
    }
    else
    {
        printf("not devided");
    }
}