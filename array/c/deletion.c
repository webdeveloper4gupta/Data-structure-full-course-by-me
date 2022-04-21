#include <stdio.h>
#include <stdlib.h>
int delete(int* a ,int index,int length,int size){
    int i;
    int element;
    int length2=length;
    if(index>=0 && index<length){
        element=a[index];
        for(i=index;i<length-1;i++){
            a[i]=a[i+1];
        }
       length2--;
    }
    return length2;
}
int main()
{
    int *arr;
    int length, element, size, index;
    printf("enter the size of array\n");
    scanf("%d", &size);
    printf("enter the length of array\n");
    scanf("%d",&length);

    printf("enter the index where you want to delete\n");
    scanf("%d", &index);
    arr=(int *)malloc(sizeof(int)*size);
    int i;
    for(i=0;i<length;i++)
    {
        printf("enter the %d element in the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    // here i call delete function
   int k= delete(arr,index,length,size);
   printf("after deleting the element\n");
     for(i=0;i<k;i++){
      printf("%d\n",arr[i]);
  }

}