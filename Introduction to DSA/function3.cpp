#include<iostream>
using namespace std;
void fun(int A[])
{
    for(int i=0;i<5;i++)
    cout<<A[i]<<endl;
}

int main(){
    int A[ ]={2,4,6,8,10};
    int n=5;
    fun(A);
     for(int x:A)
     cout<<x<<"";

     return 0;
}
