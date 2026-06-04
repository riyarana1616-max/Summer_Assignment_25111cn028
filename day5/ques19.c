#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    
    printf("Prime Factors of %d are:",n);

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
    }
    return 0;
}