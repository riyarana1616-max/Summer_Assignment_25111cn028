#include<stdio.h>
int main()
{
    int n, original,digit,sum=0;
    printf("enter a number :");
    scanf("%d",&n);

    original=n;
    while(n!=0)
    {
        digit =n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;

    }
    if(sum==original)
        printf("the number is an armstrong number");
    else
        printf("the number is not an armstrong number");

return 0;
}