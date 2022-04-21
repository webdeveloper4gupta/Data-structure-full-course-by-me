#include<stdio.h>
#include<stdlib.h>
#define n 10
int insert(int *a,int size,int element ,int index){
    int i,length;
    length=n;
    if(size>index && index>=0){
        for(i=n;i>index;i--){
            a[i]=a[i-1];
        }
        length++;
        a [index ] =element;
    }
    return length;
}
int main()
{
    int *arr,index,element;
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    arr=(int*)malloc(size*sizeof(int));
    int i;
     for(i=0;i<n;i++){
         printf("enter the %d element of array\n",i+1);
         scanf("%d",&arr[i]);
     }
    //  before insertion
      printf("here i display the array before inseration");
     for(i=0;i<n;i++){
         printf("%d\n",arr[i]);
     }
    //  now i insert the element
    printf("enter the element that you want to insert\n");
    scanf("%d",&element);
    printf("enter the index where you want to insert\n");
    scanf("%d",&index);
    int k=insert(arr,size,element,index);
    // here i print the array
    printf("here i display the array");
    for(i=0;i<k;i++){
        printf("%d\n",arr[i]);
    }
}