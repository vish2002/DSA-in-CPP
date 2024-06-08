#include <stdio.h>
struct Array
{
    int A[10];
    int length;
    int size;
};
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int linearsearch(struct Array *arr, int key)
{

    for (int i = 0; i < arr->length; i++)
    {
        if (key==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}
int main()
{
    int i, key;
    struct Array arr = {{2, 3, 4, 5}, 10, 5};
    printf("%d",linearsearch(&arr, 5));
    return 0;
}