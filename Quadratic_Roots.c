#include <stdio.h>
#include <math.h>

void quadratic_roots(int a,int b,int c)
{
    float disc,r1,r2,realpart,imaginarypart;
    disc=pow(b,2)-(4*a*c);
    printf("disc = %f\n",disc);
    //condition for real and different roots:
    if (disc>0)
    {
        r1=(-b + sqrt(disc))/(2*a);
        r2=(-b - sqrt(disc))/(2*a);
        printf("r1=%f and r2=%f",r1,r2);
    }
    //condition for real and equal roots:
    else if(disc==0)
    {
        r1=r2=-b/(2*a);
        printf("r1=r2=%f",r1);
    }
    //condition for non real roots:
    else
    {
        realpart= -b/(2*a);
        imaginarypart=sqrt(-disc)/(2*a);
        printf("r1=(%f + %f i) and r2=(%f - %f i)",realpart,imaginarypart,realpart,imaginarypart);
    }
}
int main()
{
    float a,b,c;

    printf("Enter coefficients a,b,c in quadratic equation ax^2+bx+c=0 \n");
    scanf("%f %f %f",&a,&b,&c);
    quadratic_roots(a,b,c);
    return 0;
}
