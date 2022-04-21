#include<stdio.h>
#include<stdlib.h>
// linear search
int main(){
    int *a;
    int size;
    int i;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    a=(int *)malloc(size*sizeof(int));
    for(i=0;i<size;i++){
        printf("enter the %d element in the array\n",i+1);
        scanf("%d",&a[i]);
    }
    int element;
    printf("enter the element you want to search in the array\n");
    scanf("%d",&element);
    for(i=0;i<size;i++){
        if(a[i]==element){
            printf("found\n");
            break;
        }
        
    }
    if(i==size){
        printf("not found\n");
    }


    
}