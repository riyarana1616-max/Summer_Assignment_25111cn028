#include<stdio.h>
int main()
{
    int a,b,x,y,gcd,LCM;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);

    x=a;
    y=b;
    while(y!=0)
    {
        int temp=y;
        y=x%y;
        x=temp;
    }
    gcd=x;
    LCM=(a*b)/gcd;

    printf("LCM=%d",LCM);
    return 0;
}