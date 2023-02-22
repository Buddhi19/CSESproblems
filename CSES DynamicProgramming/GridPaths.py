## Grid Paths

def numberofPaths(n,matrix):
    M=10**9+7
    if matrix[0][0]=="*":
        return 0
    if n==1:
        return 1
    dp=[[0 for i in range(n)]for j in range(n)]
    dp[0][0]=1

    for i in range(1,n):
        if matrix[0][i]!="*":
            dp[0][i]=dp[0][i-1]

    for j in range(1,n):
        if matrix[j][0]!="*":
            dp[j][0]=dp[j-1][0]

    for i in range(1,n):
        for j in range(1,n):
            if matrix[i][j]!="*":
                dp[i][j]=dp[i-1][j]+dp[i][j-1]

    return dp[n-1][n-1]%M
            
n=int(input())
matrix=[]
for _ in range(n):
    list1=list(str(input()))
    matrix.append(list1)
print(numberofPaths(n,matrix))
