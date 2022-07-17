//ASSIGNMENT QUESTION NO:10
#include<stdio.h>
int main()
{
    int cp,sp,amt;
    printf("enter the cost price \n");
    scanf("%d",&cp);
   printf("enter the selling price \n");
    scanf("%d",&sp); 
    if(sp>cp){
        amt=(sp-cp)/100;
    printf(" profit in percentage=%d",amt);
    }
    else if(cp>sp)
    {
        amt=(cp-sp)/100;
        printf("loss in percentage=%d",amt);
    }
    else
    {
printf("no profit no loss");
    }
}