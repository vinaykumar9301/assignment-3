//ASSIGNMENT QUESTION NO:12
#include<stdio.h>
int main ()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    {
        printf("'%c' is upper case");    
    }
    else if(ch>='a'&& ch<='z')
    {
        printf("lower case");
    }
    else
    {
        printf("'%c' nt a alphabet");
    }
}