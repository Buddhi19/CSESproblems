#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    vector<pair<int,int>> arr(N);
    for(int i=0;i<N;i++)
    {
        int num;
        cin>>num;
        arr[i]={num,i};
    }
    sort(arr.begin(),arr.end());

    int p1=0;
    int p2=N-1;

    bool answer=false;

    while(p1<p2)
    {
        if(arr[p1].first+arr[p2].first==M){
            answer=true;
            cout<<arr[p1].second+1<<" "<<arr[p2].second+1<<endl;
            break;
        }
        else if(arr[p1].first+arr[p2].first<M){
            p1++;
        }
        else{
            p2--;
        }
    }
    if(!answer){
        cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;
}