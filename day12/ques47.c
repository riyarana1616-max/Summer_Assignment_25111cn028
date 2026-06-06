#include<stdio.h>
void fibbonacci(int n)
{
    int a=0,b=1,c,i;
    printf("fibonacci series:%d %d",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("enter number of terms:");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}