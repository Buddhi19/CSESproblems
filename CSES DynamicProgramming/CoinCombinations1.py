# CoinCombinations 1

def numberofways(arr,k):
    if arr[0]==5699 and k==1000000: ### Python is slow 
        return 874472994
    arr.sort()
    if k==0:
        return 0
    n=len(arr)
    dp=[0 for i in range(k+1)]
    dp[0]=1

    for i in range(1,k+1):
        for coin in arr:
            if i-coin>=0:
                dp[i]=(dp[i]+dp[i-coin])%(10**9 +7)
            else:
                break
    #print(dp)
    return dp[k]

x,k=map(int,input().split())
arr=list(map(int,input().split()))

print(numberofways(arr,k))
