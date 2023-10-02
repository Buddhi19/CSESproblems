#include <bits/stdc++.h>

using namespace std;
long int MOD=1e9+7;
long int MAX=1e7;

int coins(vector<int> arr,int M){
    if(M==0){
        return 0;
    }
    vector<long int> dp(M+1,MAX);
    dp[0]=0;
    for(int i=1;i<M+1;i++){
        for(auto p:arr){
            if(i-p>=0){
                dp[i]=min(dp[i-p]+1,dp[i]);
            }
        }
    }
    if(dp[M]==MAX){
        return -1;
    }
    return dp[M];
}




int main()
{
    int N,M;
    cin>>N>>M;
    vector <int> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<coins(arr,M)<<endl;
    return 0;
}