## Coin Combinations 2

def distinctnumberofways(arr,k):
    arr.sort()
    if k==0:
        return 0
    dp=[0 for i in range(k+1)]
    dp[0]=1

    for coin in arr:
        for i in range(coin,k+1):
            if i-coin>=0:
                dp[i]=(dp[i]+dp[i-coin])%(10**9 +7)
            else:
                break
    return dp[k]
    

x,k=map(int,input().split())
arr=list(map(int,input().split()))
print(distinctnumberofways(arr,k))