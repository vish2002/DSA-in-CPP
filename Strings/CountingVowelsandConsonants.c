#include <stdio.h>

int words(char A[])
{
    int i, word = 0;
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i - 1] != ' ')
            word++;
    }
    printf("%d", word);
    return word;
}

int main()
{
    char A[] = "How are you";
    int i, vcount = 0, ccount = 0;

    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')
        {
            vcount++;
        }
        else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
        {
            ccount++;
        }
    }
    printf("%d %d %d", vcount, ccount, words(A));
    return 0;
}
// finding words in string
