#include<stdio.h>
int insert(int *arr,int size ,int length,int number){
    int i,j;
    if(length<size){
        for(i=0;i<length;i++){
            if(arr[i]<number){
                 continue;
            }
            else{
                for(j=size;j>i;j--){
                   arr[j]=arr[j-1];
                  
                }
                arr[i]=number;
                 return 1;
            }
        }
        if(i==length){
            arr[size-1]=number;
        }
       return 1;
       
    }
    return 0;
}
int main()
{
    int a[7]={1,2,3,4,5,6};
    int i;
    int num;
    printf("enter the number you want to insert\n");
    scanf("%d",&num);
    int k=insert(a,7,6,num);
    if(k==1){
printf("insert correctly\n");
for(i=0;i<7;i++){
    printf("%d\n",a[i]);
}

    }
    else{
        printf("sorry not inserted\n");
    }
}