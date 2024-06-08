// c program to find elements of an array using binary search
#include <stdio.h>
int binary(int a[], int low, int high, int mid, int search)
{

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == search)
        {
            return mid;
        }
        if (a[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int i;
    int n;
    printf("enter the number of terms in an array\n");
    scanf("%d", &n);
    printf("enter the terms of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element to search for");
    scanf("%d", &search);
    int found = binary(a[], 0, n - 1, search);
    if (found == -1)
    {
        printf("element is not found in the array\n");
    }
    else
    {
        printf("the element is found at %d", found);
    }
    return 0;
}
