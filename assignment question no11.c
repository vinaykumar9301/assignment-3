//ASSIGNMENT QUESTION NO:11
#include<stdio.h>
int main()
{
    int math,english,physics,chemistry,hindi;
    printf("enter the marks of five subject");
    scanf("%d%d%d%d%d",&math,&english,&physics,&chemistry,&hindi);
    if(math>=33 && english>=33 && physics>=33 && chemistry>=33 && hindi>=33 )
    {
        printf("pass  \n");
    }
    else
    {
    printf("fail");
    }
}