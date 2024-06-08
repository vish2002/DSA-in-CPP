#include <stdio.h>
#include <string.h>

char* compare(char A[], char B[]) {
    int i, j;
    for (i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++) {
        if (A[i]!= B[j]) {
            if(A[i]<B[j])
                return "smaller";
            else
                return "greater";
        }
    }
    if (A[i] == '\0' && B[j] == '\0')
        return "equal";
    else if (A[i] == '\0')
        return "smaller";
    else
        return "greater";
}

int main() {
    char A[] = {'p', 'y', 't', 'h', 'o', 'n', '\0'};
    char B[] = {'p', 'y', 'c', 'h', 'a', 'r', 'm', '\0'};
    printf("%s", compare(A, B));
    return 0;
}
