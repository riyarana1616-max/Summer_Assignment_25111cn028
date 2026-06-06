#include<stdio.h>
int armstrong(int n)
{
    int sum=0,temp=n,digit;
    while(temp!=0)
    {
        digit=temp%10;
        sum=sum+(digit*digit*digit);
        temp=temp/10;
    }
    if(sum==n)
    return 1;
    else
    return 0;
}
int main()
{
  int num;
  printf("enter a number:");
  scanf("%d",&num);
  if(armstrong(num))
  printf("%d is armstrong",num);
  else
  printf("%d is not a armstrong",num);
  return 0;
}
