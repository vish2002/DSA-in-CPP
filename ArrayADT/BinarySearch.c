// using iterative approach.
#include <stdio.h>
struct Array
{
    int A[10];
    int length;
    int size;
};

int BinarySearch(struct Array arr, int key)
{
    int low = 0;
    int high = arr.length - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int key;
    struct Array arr = {{2, 3, 5, 7, 8}, 10, 5};
    printf("%d\n", BinarySearch(arr, 8));
    return 0;
}