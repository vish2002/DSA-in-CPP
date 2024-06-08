// converting upper to lower case and lower to upper
#include <stdio.h>
int main()
{
    char A[] = "wElCome";
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        if(A[i]>=65 && A[i]<=90)
        A[i]+=32;
        else if (A[i]>='a'&& A[i]<=122)
        A[i]-=32;
    }
    printf("%s",A);
    return 0;
}