#include <stdio.h>
struct Array
{
    int A[10];
    int length;
    int size;
};

int RBinSearch(int a[], int low, int high, int key)
{
    int mid;
    if (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return RBinSearch(a, low, mid - 1, key);
        else
            return RBinSearch(a, mid + 1, high, key);
    }
    return -1;
}

int main()
{
    int key;
    struct Array arr = {{2, 3, 5, 7, 8}, 10, 5  };
    printf("%d\n", RBinSearch(arr.A, 0, arr.length-1, 8));
    return 0;
}