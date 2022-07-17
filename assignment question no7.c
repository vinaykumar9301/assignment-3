//assignment question no:7
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,decrement,root1,root2,real, img;
    printf("enter the  coefficient a,b and c");
    scanf("%lf %lf %lf",&a,&b,&c);
    decrement=b*b-4*a*c;
    if(decrement>0)
    {
    root1=(-b+ sqrt(decrement))/(2*a);
    root2=(-b- sqrt(decrement))/(2*a);
    
        printf("root1=%.2lf and root2=%.2lf",root1,root2);
    }
    else if(decrement==0)
    {
        root1=root2=-b/(2 * a);
                printf("root1= root2=%.2lf",root1);
    }
    else
    {
    real=-b/(2*a);
    img=sqrt(-decrement)/(2*a); 
            printf("root1=%.2lf+%.2lfi and root2=%.2lf+%.2lfi",real,img,real,img);

    }
    return 0;
}