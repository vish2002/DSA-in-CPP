#include <iostream>
#include <stdio.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    p->length = 15;
    p->breadth = 7;
    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;

}
