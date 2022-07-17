//ASSIGNMENT QUESTION NO:6
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c )
    
        printf(" %d a is greater  \n",a);
    
    else if(b>=c && b>=c)
    
        printf("%d b is greater",b);
    
    else
    printf("%d is the largest",c);
    
}