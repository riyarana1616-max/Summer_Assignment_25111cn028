#include<stdio.h>
int main()
{
int arr[100],n,i,j,key;
int low,high,mid,found;
printf("enter number of elements:");
  scanf("%d",&n);
  printf("enter sorted array elements :\n");
  for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   } 
   printf("enter element to search:");
   scanf("%d",key);
   low=0;
   high =n-1;
   while(low<=high)
   {
    mid=(low+high)/2;
    if(arr[mid]==key)
    {
        found=1;
        printf("elements found at position%d",mid+1);
        break;
    }
    else if(arr[mid]<key)
    {
        low=mid+1;
    }
    else{
        high=mid-1;
    }
   }
   if(found==0)
   {
    printf("elements not found");
   }
   return 0;
}
