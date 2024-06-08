#include <iostream>
#include <stdio.h>
using namespace std;
void fun1(int n)
{
    if (n > 0)
    {
        fun1(n - 1);
        printf("%d\n", n);
    }
}

int main()
{
    int x = 3;
    fun1(x);
}
