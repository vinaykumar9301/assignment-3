//ASSIGNMENT QUESTION NO:9
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the number");
    scanf("%d%d%d",&x,&y,&z);
    if((x>=y)&&(x>=z))
    {
        printf("x is largest %d \n",x);
    }
    else if((y>=x)&&(y>=z))
    {
        printf("x is largest %d \n",y);
    }
    else 
    {
    printf("z is largest %d",z);
    }
}