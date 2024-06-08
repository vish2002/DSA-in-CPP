#include<bits/stdc++.h>
using namespace std;

float calcAvg(float sum,int n)
{
    return sum/n;
}
int main()
{
    int n=10;
    float average =0,sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        average = calcAvg(sum,i);
    }
    cout<<"average:"<<average;
    return 0;
}