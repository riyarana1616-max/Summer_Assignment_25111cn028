#include<stdio.h>
long int factrial(int n)
{
    long int fact =1;
    int i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("factorial =%ld",factorial(num));
    return 0;
}