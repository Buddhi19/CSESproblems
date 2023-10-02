#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    vector<pair<int,int>> arr(N);

    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        arr[i]={n,i};
    }
    sort(arr.begin(),arr.end());

    int k=N-1;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(arr[i].first+arr[j].first+arr[k].first==M){
                cout<<arr[i].second+1
                                <<" "<<
                                arr[j].second+1
                                    <<" "<<
                                    arr[k].second+1<<endl;
            exit(0);
            }
            if(arr[i].first+arr[j].first+arr[k].first>M){
                k--;
                break;
            }
        }
    }
    cout<<-1<<endl;

    return 0;
}