#include <stdio.h>
void printeven(int m,int n)
{
    int i;
    i=m;
    do
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    }while(i<=n);

}
int main()

{
    int m,n;
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);
    printeven(m,n);

    return 0;
}
