#include<stdio.h>
int main()
{
int arr[100],n,i,j;
int maxfreq =0,element,count=0;
 printf("enter number of elements:");
  scanf("%d",&n);
  printf("enter array elements:\n");
  for(i=0;i<n;i++)
   {
     scanf("%d",arr[i]);
   }
   for(i=0;i<n;i++)
  {
    count =1;
  for(j=i+1;j<n;j++)
  {
    if(arr[i]==arr[j])
     count++;
  }
  if(count>maxfreq)
  {
    maxfreq=count;
    element =arr[i];
  }
}
printf("elements with maximum frequency =%d\n",element);
printf("frequency=%d",maxfreq);
   return 0;
    }
