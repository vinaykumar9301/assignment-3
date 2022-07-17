//ASSIGNMENT QUESTION NO:15
#include<stdio.h>
int main ()
{
    int x,y,z;
    printf("enter the length of the  sides of a triangle");
    scanf("%d%d%d",&x,&y,&z);
    if(x+y>z)
    {
        printf("valid triangle");    
    }
    
    else 
    {
        printf("not a valid triangle");
    }
}