#include <bits/stdc++.h>

using namespace std;


int n,m,rooms;

vector<vector<int>> visited; //track visited and track impossibles
vector<pair<int,int>> moves={{-1,0},{1,0},{0,-1},{0,1}}; //moves

bool isValid(int x,int y)
{
    //Room boundary check,wall detection and visit checks
    if(x<0 or x>=n or y<0 or y>=m){
        return false;
    }
    if(visited[x][y]){
        return false;
    }
    return true;
}

void dfs(int i,int j)
{
    //Given a valid location scan whole room out with dfs
    visited[i][j]=true;
    for(auto p: moves)
    {
        if(isValid(i+p.first,j+p.second))
        {
            dfs(i+p.first,j+p.second);
        }
    }
}


void connected_components()
{
    //Scan valid locations one at a time to identify all rooms
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j])
            {
                dfs(i,j);
                ++rooms;
            }
        }
    }
}

int main()
{
    cin.tie(NULL);
    cin>>n>>m;
    visited.resize(n);

    for(int i=0;i<n;i++)
    {
        visited[i].resize(m);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char c;
            cin>>c;
            if(c=='#')
            {
                visited[i][j]=true;
            }
        }
    }
    connected_components();
    cout<<rooms<<endl;

    return 0;
}