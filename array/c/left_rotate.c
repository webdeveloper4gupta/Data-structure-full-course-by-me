#include<stdio.h>
#include<stdlib.h>
int leftrotate(int *arr ,int size,int val){
    int i;
    int j=0;
    int k;
    while(j<val){
 for(i=0;i<size;i++){
  arr[i]=arr[i+1];
 }
 arr[size-1]=0;
j++;
}


}
int main()
{
int *arr;
int n,i,num;
printf("enter the size of array you want\n");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++){
    printf("enter the %d element in the array\n",i+1);
    scanf("%d",&arr[i]);
}
printf("enter the value till you want to rotate but it always we greater then equal to zero and less then %d\n",n);
scanf("%d",&num);
int k=leftrotate(arr,n,num);
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
}