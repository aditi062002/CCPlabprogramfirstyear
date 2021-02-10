#include <stdio.h>

int main()
{
    float celsius=0, fahrenheit;
    printf("Enter temperature in degree fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*(5.0/9.0);
    printf("\n Celsius=%fahrenheit",celsius);
    return 0;
}
