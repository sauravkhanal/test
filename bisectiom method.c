#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-4*x-9
void main()
{
    printf("\n This program calculates the root of equation x*x*x-4*x-9=0 ");
    float x1,x2,x0,a,b,c,E;
    int n=0;
    do{
        printf("Enter values for x1 and x2 :    ");
        scanf("%f %f",&x1,&x2);
        a=f(x1);
        b=f(x2);
    }while(a*b>0);

    do{
        x0=(x1+x2)/2;
        n++;
        c=f(x0);
        if(a*c<0)
        {
            x2=x0;
        }
        else
            x1=x0;

        E=fabs(x2-x1);
    }while(E>e);

    printf("\n The root is %f",x0);
    printf("\n The number of iteration is %d",n);
}
