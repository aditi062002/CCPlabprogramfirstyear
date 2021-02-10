#include <stdio.h>
#include <math.h>

float areaTriangle(float a, float b,float c)
{
    float s,area;
    s=a+b+c/2.0;
    area=sqrt(s*(s-a)(s-b)(s-c));
    return area;
}
int main()
{
    float a,b,c,s,area;
    printf("Enter sides of triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    area = areaTriangle(a,b,c);
    printf("area = %f",area);
    return 0;
}
