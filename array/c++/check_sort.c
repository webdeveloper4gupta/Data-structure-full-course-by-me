#include<stdio.h>
int main()
{
    int a[]={1,22,3,4,5,7};
    int i;
    int j;
    for(i=0;i<5;i++){
        if(a[i]>a[i+1]){
            printf("not sorted\n");
            break;
        }
    }
    if(i==5){
        printf("sorted\n");
    }
}