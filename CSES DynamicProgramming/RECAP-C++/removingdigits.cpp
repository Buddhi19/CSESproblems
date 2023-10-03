#include <bits/stdc++.h>

using namespace std;
long int MAX=1e7;

int steps(int N){
    if (N==0){
        return 0;
    }
    if(N<10){
        return 1;
    }
    vector<long int> dp(N+1,MAX);
    dp[1]=0;
    for(int i=1;i<10;i++){
        dp[i]=1;
    }
    for(int i=10;i<N+1;i++){
        vector<int> digits;
        int num=i;
        while(num){
            digits.push_back(num%10);
            num/=10;
        }
        for(auto p:digits){
            dp[i]=min(dp[i],dp[i-p]+1);
        }
        // cout<<dp[i]<<endl;
    }
    return dp[N];
}



int main()
{
    int N;
    cin>>N;
    cout<<steps(N)<<endl;
    return 0;
}