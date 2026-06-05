#include<stdio.h>
int main(){
    int x,n,result=1;
    printf("enter a number:");
    scanf("%d",&x);

    printf("enter power(n):");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        result=result*x;
    }
    printf("result=%d",result);
    return 0;
}