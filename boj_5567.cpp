#include<iostream>
using namespace std;
int adj[500][100000];
int check[501]; 
int main()
{
    int n;//동기의 수
    int m;//리스트의 길이
    int cnt=0; 

    cin>>n>>m;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
        if(a==1) check[b]=1;
        else if(b==1) check[a]=1;    
    }
    for(int i=2;i<=n;i++){
        if(adj[1][i]==1){
            for(int j=2;j<=n;j++){
                if(adj[i][j]==1)check[j]=1;
            }
        }
        if(check[i]==1) cnt++;
    }
    cout<< cnt <<endl;
}