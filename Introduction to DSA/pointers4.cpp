#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int *p;
    p = new int[5];
    p[0] = 10;
    p[1] = 15;
    p[2] = 20;
    p[3] = 25;
    p[4] = 30;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    delete []p;
    free(p);
    return 0;
}