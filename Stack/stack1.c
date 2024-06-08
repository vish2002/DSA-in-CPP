#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *S;
};

void create(struct stack *st)
{
    printf("Enter size of the stack");
    scanf("%d", &st->size);
    st->top = -1;
    st->S = (int *)malloc(st->size * sizeof(int));
}

void Display(struct stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
    {
        printf("%d", st.S[i]);
    }
    printf("\n");
}

void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
        printf("stack overflow\n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop(struct stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("\n stack underflow");
    }
    else
    {
        x = st->S[st->top--];
    }
    return x;
}
int peek(struct stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
        printf("\n Invalid Index");
    x = st.S[st.top - index + 1];

    return x;
}
int isEmpty(struct stack st)
{
    if (st.top == -1)
        return 1;
        else
        return 0;
}
int isFull(struct stack st)
{
   return st.top==st.size-1;
}

int stackTop(struct stack st)
{
    if(!isEmpty(st))
    {
        return st.top;
    }
}
int main()
{
    struct stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    Display(st);
    return 0;
}