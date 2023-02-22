# Removing digits

def minimumsteps(n):
    if n==0:
        return 0
    if n<10:
        return 1
    dp=[n+1 for i in range(n+1)]
    dp[0]=0
    for i in range(1,10):
        dp[i]=1
    
    for i in range(10,n+1):
        s=list(str(i))
        list2=[]
        for val in s:
            list2.append(int(val))
        for value in list2:
            if i-value>=0:
                dp[i]=min(1+dp[i-value],dp[i])
    if dp[n]!=n+1:
        return dp[n]
    return -1

n=int(input())
print(minimumsteps(n))
            

