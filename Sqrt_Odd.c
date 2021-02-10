#include<stdio.h>

int sum_odd(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum+=i*i;
        }
    }
    return sum;
}
int main()
{
    int n,sum;
    printf("Enter n: ");
    scanf("%d",&n);
    sum = sum_odd(n);
    printf("Sum = %d",sum);
}
