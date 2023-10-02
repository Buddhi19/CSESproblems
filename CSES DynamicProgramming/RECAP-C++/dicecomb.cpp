#include <bits/stdc++.h>

using namespace std;
long long MOD=1e9+7;

long int ways(int N){
    if (N==0){
        return 1;
    }
    vector<long int> dp(N+1,0);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<N+1;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i]=(dp[i]+dp[i-j])%MOD;
            }
        }
    }
    return dp[N];
}

int main()
{
    int N;
    cin>>N;
    cout<<ways(N)<<endl;
    return 0;
}