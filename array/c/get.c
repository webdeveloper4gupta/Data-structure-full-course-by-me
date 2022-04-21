#include<stdio.h>
int get(int *arr,int index,int n){
    if(index>=0 && index<n){
        return arr[index];
    }
    else{
        return -1;
    }
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int index;
    printf("enter the index\n");
    scanf("%d",&index);
        int k=get(a,index,9);
    if(k==-1){
       printf("not found\n");
    }
    else{
        printf("%d\n",k);
    }
    
}