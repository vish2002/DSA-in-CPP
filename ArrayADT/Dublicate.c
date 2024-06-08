#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}
int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

// int Duplicate(struct Array arr)
// {
//     int l = Min(arr);
//     int h = Max(arr);
//     int size = h - l + 1;
//     int *hashTable = (int *)calloc(size, sizeof(int));

//     for (int i = 0; i < arr.length; i++)
//     {
//         hashTable[arr.A[i] - l]++;
//     }

//     for (int i = 0; i < size; i++)
//     {
//         if (hashTable[i] > 1)
//             printf("%d %d\n", i, hashTable[i]);
//     }

//     free(hashTable);
//     return 0;
// }

int Duplicate(struct Array arr)
{
    int *hashTable = (int *)calloc(arr.size, sizeof(int));

    for (int i = 0; i < arr.length; i++)
    {
        hashTable[arr.A[i]]++;
    }

    for (int i = 0; i < arr.size; i++)
    {
        if (hashTable[i] > 1)
            printf("%d %d\n", i, hashTable[i]);
    }

    free(hashTable);
}


int main()
{

    struct Array arr = {{3, 7, 4, 9, 12, 12, 12, 11, 2, 10}, 10, 10};
    struct Array *arr2;
    Duplicate(arr);
    return 0;
}