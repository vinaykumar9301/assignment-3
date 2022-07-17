//ASSIGNMENT QUESTION NO:16
#include<stdio.h>
int main()
{
    int c;
    printf("enter the character \n");
    scanf("%d",&c);
    if(c<64 && c>91){
    printf("upper case \n");
    }
    else
    {
        printf("lower case");
    }
}