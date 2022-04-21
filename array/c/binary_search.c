#include <stdio.h>
#include <stdlib.h>
int binary(int *a, int element, int size)
{
    int mid, l, h;
    int i;
    l = a[0];
    h = a[size - 1];
    for (i = 0; i < size; i++)
    {
        mid = (l + h) / 2;
        if (a[mid] == element)
        {

            return 1;
        }
        else if (a[mid] > element)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int *a;
    int size;
    int i;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    a = (int *)malloc(size * sizeof(int));
    for (i = 0; i < size; i++)
    {
        printf("enter the %d element in the array\n", i + 1);
        scanf("%d", &a[i]);
    }
    int element;
    printf("enter the element you want to search in the array\n");
    scanf("%d", &element);
    //    binary search
    int k = binary(a, element, size);
    if (k == 1)
    {
        printf("found\n");
    }
    else
    {
        printf("not found\n");
    }
}