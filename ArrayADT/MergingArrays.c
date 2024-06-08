#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

int get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1;
}
void set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = x;
    }
}
void Display(struct Array arr)
{
    int i;
    printf("\n Elements are\n");
    for (i = 0; i < arr.length; i++)
    { 
        printf("%d", arr.A[i]);
    }
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
int sum(struct Array arr)
{
    int s = 0;
    int i;
    for (i = 0; i < arr.length; i++)
        s += arr.A[i];
    return s;
}
float avg(struct Array arr)
{
return (float)sum(arr)/arr.length;
}

void Display(struct Array arr)
{
    int i;
    printf("\n Elements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}
struct Array *MergeArray(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->length; i++)
    
        arr3->A[k++] = arr1->A[i];
    
    for (; j < arr2->length; j++)
    
        arr3->A[k++] = arr2->A[j];
    
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}

int main()
{

    struct Array arr1 = {{3, 8, 16, 20, 25}, 10, 5};
    struct Array arr2 = {{4, 10, 12, 22, 23}, 10, 5};
    struct Array *arr3;
    arr3 = MergeArray(&arr1, &arr2);
    Display(*arr3);
    return 0;
}