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
// MY CODE
// int MissingElement(struct Array arr)
// {
//     int i, j, k;
//     int l, h;
//     h = Max(arr);
//     l = Min(arr);
//     i = j = k = 0;
//     struct Array *arr2 = (struct Array *)malloc(Max(arr));
//     // This for loop is for scanning through the first array
//     for (i = 0; i < arr.length; i++)
//     {
//         arr2->A[i]++;
//     }
//     // This for loop is for scanning through the Hashing table array
//     for (i = l; i <= h; i++)
//     {
//         if (arr2->A[i] == 0)
//             printf("%d\n", i);
//     }
// }

// VS CHATGPT
// int MissingElement(struct Array arr)
// {
//     int i, l, h;
//     h = Max(arr);
//     l = Min(arr);
//     struct Array *arr2 = (struct Array *)malloc(sizeof(struct Array));
//     arr2->length = h - l + 1;
//     for (i = 0; i < arr2->length; i++)
//     {
//         arr2->A[i] = 0;
//     }
//     for (i = 0; i < arr.length; i++)
//     {
//         arr2->A[arr.A[i] - l]++;
//     }

//     for (i = l; i <= h; i++)
//     {
//         if (arr2->A[i - l] == 0)
//             printf("%d\n", i);
//     }
//     free(arr2);
//     return 0;
// }


// NOTE


// Unlike malloc, calloc also initializes the allocated memory to zero, which is useful in this context since we're using the hash table to count the occurrences of integers.

int MissingElement(struct Array arr)
{
    int l = Min(arr);
    int h = Max(arr);
    int size = h - l + 1;
    int *hashTable = (int *)calloc(size, sizeof(int));

    for (int i = 0; i < arr.length; i++)
    {
        hashTable[arr.A[i] - l]++;
    }

    for (int i = 0; i < size; i++)
    {
        if (hashTable[i] == 0)
            printf("%d\n", i + l);
    }

    free(hashTable);
    return 0;
}

int main()
{

    struct Array arr = {{3, 7, 4, 9, 12, 6, 1, 11, 2, 10}, 10, 10};
    struct Array *arr2;
    MissingElement(arr);

    return 0;
}