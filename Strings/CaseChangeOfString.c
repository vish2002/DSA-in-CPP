#include <stdio.h>
int main()
{
    char A[] = "WELCOME";
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        A[i] += 32;
    }
    printf("%s", A);
    return 0;
}