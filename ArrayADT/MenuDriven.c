#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int sum(struct Array arr)
{
    int sum=0;
    int i;
    for(i=0;i<arr.length-1;i++){
        sum+=arr.A[i];
    }
    return sum;
}
int linearsearch(struct Array *arr, int key)
{

    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}
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

void Insertsort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)

        return;

    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}
int isSorted(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}
void Rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[i] >= 0)
            j--;
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}
void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
void Reverse2(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(&arr->A[i], &arr->A[j]);
    }
}
void Reverse(struct Array *arr)
{
    int *B;
    int i, j;
    B = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)

        B[j] = arr->A[i];

    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i];
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

struct Array *Intersection(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        // if arr1 element is smaller
        if (arr1->A[i] < arr2->A[j])
            i++;
        // if arr2 element is smaller
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        // if both are equal then copy any one element and increment i and j
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}
int Delete(struct Array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        // if arr1 element is smaller
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        // if arr2 element is smaller
        else if (arr2->A[j] < arr1->A[i])
        {
            arr3->A[k++] = arr2->A[j++];
        }
        // if both are equal then copy any one element and increment i and j
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for (; i < arr1->length; i++)

        arr3->A[k++] = arr1->A[i];

    for (; j < arr2->length; j++)

        arr3->A[k++] = arr2->A[j];

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array *Difference(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        // if arr1 element is smaller
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        // if arr2 element is smaller
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        // if both are equal then copy any one element and increment i and j
        else
        {
            i++;
            j++;
        }
    }
    for (; i < arr1->length; i++)

        arr3->A[k++] = arr1->A[i];

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

int main()
{
    struct Array arr1 ;
    int ch;
    int x, index;
    printf("Enter size of Array\n");
    scanf("%d", &arr1.size);
    arr1.A = (int *)malloc(arr1.size * sizeof(int));
     
    printf("Menu\n");
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Search\n");
    printf("4.sum\n");
    printf("5.Display\n");
    printf("6.Exit\n");

    printf("Enter Your Choice ");
    scanf("%d", &ch);
   
    switch (ch)
    {
    case 1:
        printf("Enter an element and index ");
        scanf("%d%d", &x, &index);
        Insert(&arr1, index, x);

    case 2:
        printf("Enter index ");
        scanf("%d", &index);
        x = Delete(&arr1, index);
        printf("Deleted element is %d\n", x);
        break;

    case 3:
        printf("Enter element to search ");
        scanf("%d", &x);
        index = linearsearch(&arr1, x);
        printf("Element index is %d", index);
        break;

    case 4:
        printf("Sum is %d\n", sum(arr1));
        break;

    case 5:
        Display(arr1);
    }
    
   
    
    return 0;
}