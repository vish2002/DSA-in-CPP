#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};

void fun(struct rectangle *p){
    p->length=20;
    cout<<"length"<<p->length<<endl<<"breadth"<<p->breadth<<endl;
}

int main(){
    struct rectangle r={10,5};
    fun(&r);
    printf("length %d\n breadth %d\n",r.length,r.breadth);
    return 0;
}
