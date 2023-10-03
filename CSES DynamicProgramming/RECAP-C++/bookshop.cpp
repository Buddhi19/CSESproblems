#include <bits/stdc++.h>

using namespace std;


int pages__(vector<int> costs,vector<int> pages,int M){
    if(M==0){
        return 0;
    }
    int c=costs.size();
    vector<vector<int>> dp(c+1, vector<int>(M+1, 0));
    
    for(int i=0;i<M+1;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<c+1;i++){
        dp[i][0]=0;
    }
    for(int i=1;i<c+1;i++){
        for(int j=1;j<M+1;j++){
            if(costs[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=max(
                        pages[i-1]+dp[i-1][j-costs[i-1]],
                        dp[i-1][j]
                );
            }
        }
    }
    return dp[c][M];

}
int main()
{
    int N,M;
    cin>>N>>M;
    vector<int> costs(N);
    for(int i=0;i<N;i++){
        cin>>costs[i];
    }
    vector<int> pages(N);
    for(int i=0;i<N;i++){
        cin>>pages[i];
    }
    cout<<pages__(costs,pages,M)<<endl;
    return 0;
}