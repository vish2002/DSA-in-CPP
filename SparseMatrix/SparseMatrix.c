#include <stdio.h>
#include <stdlib.h>
struct Element
{
    int i; // row
    int j; // column
    int x; // element
};
struct sparse
{
    int m;   // row
    int n;   // column
    int num; // element
    struct Element *ele;
};
void create(struct sparse *s)
{
    printf("Enter Dimensions\n");
    scanf("%d%d", &s->m, &s->n);
    printf("Number of non-zero");
    scanf("%d", &s->num);
    s->ele = (struct Element *)malloc(s->num * sizeof(struct Element));
    printf("Enter non-zero Elements");
    for (int i = 0; i < s->num; i++)
    {
        scanf("%d%d%d", &s->ele[i].i, &s->ele[i].j, &s->ele[i].x);
    }
}

void display(struct sparse s)
{
    int i, j, k = 0;
    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; j++)
        {
            if (i == s.ele[k].i && j == s.ele[k].j)
                printf("%d ", s.ele[k++].x); // Added a space after %d
            else
                printf("0 ");
        }
        printf("\n");
    }
}


int main()
{
    struct sparse s;
    create(&s);
    display(s);
    return 0;
}