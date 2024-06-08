#include <stdio.h>
#include <string.h>

void reverse(char A[])
{
    char B[7];
    int i, j;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    B[j] = '\0';
    printf("%s", B);
}

char *compare(char A[], char B[])
{
    int i, j;
    static char equal[] = "equal";
    static char smaller[] = "smaller";
    static char greater[] = "greater";

    for (i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
        {
            if (A[i] < B[j])
                return smaller;
            else
                return greater;
        }
    }
        if (A[i] == '\0' && B[j] == '\0')
            return equal;
        else if (A[i] == '\0')
            return smaller;
        else
            return greater;
    
}

int main()
{
    char A[] = {'m', 'a', ' d', 'a', 'm', '\0'};
    char B[7];
    reverse(A);
    strcpy(B, A);
    printf("\n%s", compare(A, B));
    return 0;
}
