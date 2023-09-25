#include <bits/stdc++.h>

using namespace std;


int R,C;

char start='A';
char end='B';

queue<int> rq;
queue<int> cq;

vector<vector<bool>> visited;

int move_count=0;
int nodes_left_in_layer=1;
int nodes_in_next_layer=0;

string answer="";

bool reached_end=false;

vector<pair<int,int>> moves={{-1,0},{1,0},{0,1},{0,-1}};

int sc,sr;
int dc,dr;

int prev_sc;
int prev_sr;


void explore_neighbours(int r,int c)
{
    for(auto p:moves)
    {
        int rr=r+p.first;
        int cc=c+p.second;
    
        if(rr<0 or cc<0)continue;
        if(rr>=R or cc>=C)continue;

        if (visited[rr][cc])continue;

        rq.push(rr);
        cq.push(cc);
        visited[rr][cc]=true;
        nodes_in_next_layer++;
    }
}
void step_update(int pre_r,int pre_c,int r,int c)
{
    if(pre_r+1==r and pre_c==c){
        answer+="D";
    }if(pre_r-1==r and pre_c==c){
        answer+="U";
    }if(pre_r==r and pre_c+1==c){
        answer+="R";
    }if(pre_r==r and pre_c-1==c){
        answer+="L";
    }
}
int solve()
{
    rq.push(sr);
    cq.push(sc);
    visited[sr][sc]=true;
    prev_sc=sc;
    prev_sr=sr;
    while(rq.size()>0)
    {
        int r=rq.front();
        int c=cq.front();
        rq.pop();cq.pop();

        if(r==dr and c==dc)
        {
            step_update(prev_sr,prev_sc,r,c);
            reached_end=true;
            break;
        }
        explore_neighbours(r,c);
        nodes_left_in_layer--;

        if(nodes_left_in_layer==0)
        {
            nodes_left_in_layer=nodes_in_next_layer;
            nodes_in_next_layer=0;
            move_count++;
            step_update(prev_sr,prev_sc,r,c);
            prev_sc=c;
            prev_sr=r;
        }

    }
    if(reached_end)
    {
        return move_count;
    }
    return -1;

}



int main()
{
    cin>>R>>C;

    visited.resize(R);
    for(int i=0;i<R;i++)
    {
        visited[i].resize(C);
    }
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            char c;
            cin>>c;
            if(c=='#')
            {
                visited[i][j]=true;
            }
            if(c=='A')
            {
                sr=i;
                sc=j;
            }
            if(c=='B')
            {
                dr=i;
                dc=j;
            }
        }
    }
    int ans=solve();
    if(ans==-1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES\n";
        cout<<ans<<endl;
        cout<<answer<<endl;

    }
    return 0;
}