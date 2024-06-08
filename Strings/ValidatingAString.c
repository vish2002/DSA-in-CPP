#include <stdio.h>

int validate(char name[])
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57))
            return 0;
    }
    return 1;
}

int main()
{
    char name[] = {'A', 'n', 'i','@', '3', '2', '1', '\0'};
 
    int result = validate(name);
    printf("%d", result);

    return 0;
}
