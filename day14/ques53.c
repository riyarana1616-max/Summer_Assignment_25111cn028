#include<stdio.h>
int main()
{
int arr[100],n,i,key,found=0;
 printf("enter number of elements:");
  scanf("%d",&n);
  printf("enter array elements:\n");
  for(i=0;i<n;i++)
   {
     scanf("%d",arr[i]);
   }
  printf("enter elements to search:");
  scanf("%d",&key);
    for(i=0;i<n;i++)
  {
    if(arr[i]==key)
    {
        found=1;
        printf("elements foud at position %d",i+1);
        break;
    }
  }
if(found==0)
printf("elements not found");

   return 0;
}