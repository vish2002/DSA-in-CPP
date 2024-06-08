#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    rectangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    rectangle *p=&r;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    return 0;
}