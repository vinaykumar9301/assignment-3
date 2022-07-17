//ASSIGNMENT QUESTION NO:17
#include<stdio.h>
int main ()
{
    int x,y,z;
    printf("enter the length of the  sides of a triangle\n");
    scanf("%d%d%d",&x,&y,&z);
    if((x+y>z) && (x+z)>y && (y+z>x))
    {
        printf("valid triangle");    
    }
    
    else 
    {
        printf("not a valid triangle");
    }
}