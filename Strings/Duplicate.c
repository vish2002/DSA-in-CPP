// using Hashtable method

#include <stdio.h>
#include <string.h>
void duplicate(char A[])
{
    int H[26]={0};
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        H[A[i]-97]+=1;
    }
    for(i=0;i<26;i++)
    {
        if(H[i]>1)
        {
            printf("%c\n",i+97);
            printf("%d\n",H[i]);
        }
    }
}
int main()
{
    char A[] = "finding";
    duplicate(A);
    return 0;
}