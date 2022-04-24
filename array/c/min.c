#include<stdio.h>
int min(int *a,int n){
    int i,j,min=32678;
    for(i=0;i<n;i++){
        if(a[i]<min){
           min=a[i];
        }
    }
    return min;
}
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int k=min(a,7);
    printf("%d",k);
}