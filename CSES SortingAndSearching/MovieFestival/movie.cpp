#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    vector <tuple<int,int,int>> arr(N);
    //first-> time
    //second->starting time
    //finishing

    int finishing_time=-1;

    for(int i=0;i<N;i++)
    {
        int S,E;
        cin>>S>>E;
        arr[i]={E-S,S,E};
    }

    sort(arr.begin(),arr.end());

    int movies=0;

    for(auto p:arr)
    {
        if(get<1>(p)>=finishing_time){
            movies++;
            finishing_time=get<2>(p);
        }
    }
    cout<<movies<<endl;
    
    return 0;
}