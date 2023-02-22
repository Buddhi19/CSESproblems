#Dice combinations

def numberofways(n):
    if n==0:
        return 0
    if n==1:
        return 1
    dp=[0 for i in range (n+1)]
    dp[0]=1
    dp[1]=1
    dp[2]=2

    for i in range(3,n+1):
        for j in range(1,7):
            if i-j>=0:
                dp[i]=(dp[i-j]+dp[i])%(10**9 +7)
    #print(dp)
    return dp[n]

n=int(input())
print(numberofways(n))