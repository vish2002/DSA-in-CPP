#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;

    cout<<a<<endl;
    printf("%d",*p);
    return 0;

}
