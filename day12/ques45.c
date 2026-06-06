#include<stdio.h>
int palindrome(int n)
{
    int rev=0,temp=n,digit;
    while(temp!=0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if(rev==n)
    return 1;
    else
    return 0;
}
int main()
{
  int num;
  printf("enter a number:");
  scanf("%d",&num);
  if(palindome(num))
  printf("%d is a palindrone",num);
  else
  printf("%d is not a palindrone",num);
  return 0;
}
