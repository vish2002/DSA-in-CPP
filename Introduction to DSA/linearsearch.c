// c program to find elements of an array using linear search
#include <stdio.h>
int main()
{
    int i;
    int n;
    printf("enter the number of elements in the array\n");
    scanf("%d", &n);
    int a[n];
    int search;
    int flag = 0;
    printf("enter the terms of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element to search for\n");
    scanf("%d",&search);
    for (i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            flag = 1;
            break;
        }
    }
    if (flag = 1)
    {
        printf("the element is found in %d", i);
    }
    else if (flag = 0)
    {
        printf("the number is not found");
    }

    return 0;
}
