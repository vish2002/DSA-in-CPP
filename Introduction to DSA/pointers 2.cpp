#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int A[5]={2,4,6,8,10};
    int *p;
    p=A;
    for(int i =0;i<6;i++){
        cout<<p[i]<<endl;
    }
    return 0;
}