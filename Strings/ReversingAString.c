#include <stdio.h>
#include <string.h>

// without using another array
int reverse1(char *A)
{
    int i,j;
    char temp;
    for(j=0;A[j]!='\0';j++)
    {

    }
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    printf("%s",A);

}
// with using another array
int reverse(char A[])
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
    printf("%s", A);
}

int main()
{
    char A[] = {'p', 'y', 't', 'h', 'o', 'n', '\0'};
    printf("%s", reverse1(A));
    return 0;
}

// chatgpt code
// #include <stdio.h>
// #include <string.h>

// char* reverse(char A[])
// {
//     static char B[7];
//     int i, j;

//     for (i = 0; A[i] != '\0'; i++) {}

//     i = i - 1;

//     for (j = 0; i >= 0; i--, j++) {
//         B[j] = A[i];
//     }

//     B[j] = '\0';
//     return B;
// }

// int main()
// {
//     char A[] = {'p', 'y', 't', 'h', 'o', 'n', '\0'};
//     printf("%s", reverse(A));
//     return 0;
// }
