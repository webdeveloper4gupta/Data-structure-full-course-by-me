#include<stdio.h>
#include<stdlib.h>
int replace(int *a,int index,int size){
    int ele;
if(index>=0 && index <size){
    printf("eneter the element \n");
    scanf("%d",&ele);
    a[index]=ele;
    return 1;
}
return 0;
}
int main()
{
int n,i,element;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    printf("eneter the %d element of array\n",i+1);
    scanf("%d",&a[i]);
}
printf("enter the index whose element you want to change\n ");
scanf("%d",&element);
int k=replace(a,element,n);
if(k==1){
    printf("successfully updated\n");
}
else{
    printf("sorry we cannot able tochange it\n");
}
}