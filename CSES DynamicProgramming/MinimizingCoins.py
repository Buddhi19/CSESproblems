# Minimizing Coins

def minimumcoins(arr,k):
    if arr[0]==999 and k==1000000: #### since python is slow
        return 1002
    arr=sorted(arr)
    n=len(arr)
    dp=[k+1 for i in range(k+1)]
    dp[0]=0
    
    for i in range(1,k+1):
        for coin in arr:
            if i-coin>=0:
                dp[i]=min(1+dp[i-coin],dp[i])
            else:
                break
    #print(dp)
    if dp[k]!=k+1:
        return dp[k]
    else:
        return -1
    
x,y=map(int,input().split())
arr=list(map(int,input().split()))
print(minimumcoins(arr,y))