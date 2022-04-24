#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int i;
    int max=0;
    for(i=0;i<7;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("maximum element in the array is : %d\n",max);
}