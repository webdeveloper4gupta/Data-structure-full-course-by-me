#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,*b,*c;
    int n1,n2;
    printf("enter the size of first array\n");
    scanf("%d",&n1);
      printf("enter the size of second array\n");
    scanf("%d",&n2);
    a=(int *)malloc(n1*sizeof(int));
    b=(int *)malloc(n2*sizeof(int));
    printf("enter the value in the first array \n");
    int i;
// array data must be sorted if not you need to sort first then merge it

    for(i=0;i<n1;i++){
      printf("enter the %d element of the array\n",i+1);
      scanf("%d",&a[i]);
    }
     printf("enter the value in the second array \n");
       for(i=0;i<n2;i++){
      printf("enter the %d element of the array\n",i+1);
      scanf("%d",&b[i]);
    }
  // here i will find the max element in both array
  int max=0;
  int max2=0;
  for(i=0;i<n1;i++){
    if(a[i]>max){
      max=a[i];
    }
  }
    for(i=0;i<n2;i++){
    if(b[i]>max2){
      max2=b[i];
    }
  }
  int k=0;
c=(int *)malloc(sizeof(int)*(n1+n2));
int j=0;
i=0;
while(i<n1 && j<n2){
if(a[i]<b[j]){
  c[k++]=a[i++];
}
else{
  c[k++]=b[j++];
}
}
for(;i<n1;i++){
  c[k++]=a[i];
}
for(;j<n2;j++){
  c[k++]=b[j];
}

    for(i=0;i<(n1+n2);i++){
      printf("%d\n",c[i]);
    }
}