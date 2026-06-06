#include<stdio.h>
int main()
{
    int arr[10],i,n;
    printf("enter number of elements:");
    scanf("%d",&n);
    pritf("enter array of elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf('array elements are:\n');
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}