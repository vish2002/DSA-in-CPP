#include<iostream>
#include<queue>
using namespace std;
int visited[7]={0,0,0,0,0,0,0};
void BFS(int G[][7],int start,int n)
{
    queue<int> q;
    cout<<start<<" ";
    q.push(start);
    visited[start]=1;
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        for(int i=1;i<=n;i++)
        {
            if(G[temp][i]==1 && visited[i]==0)
            {
                cout<<i<<" ";
                q.push(i);
                visited[i]=1;
            }
        }

    }

}

void DFS(int G[][7],int start,int n)
{
    if(visited[start]==0)
    {
        cout<<start<<" ";
        visited[start]=1;
        for(int i=1;i<=n;i++)
        {
            if(G[start][i]==1 && visited[i]==0)
            {
                DFS(G,i,n);
            }
        }

    }
}

int main()
{
 int G[7][7]={
 {0,0,0,0,0,0,0},
 {0,0,1,1,0,0,0},
 {0,1,0,0,1,0,0},
 {0,1,0,0,1,0,0},
 {0,0,1,1,0,1,1},
 {0,0,0,0,1,0,0},
 {0,0,0,0,1,0,0}};
 DFS(G,1,7);

 return 0;
}