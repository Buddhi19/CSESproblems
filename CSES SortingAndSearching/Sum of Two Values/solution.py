n,sum=map(int,input().split())
arr=list(map(int,input().split()))

def ans(arr,n):
    for i in range(int(n/2)+1):
        if(sum-arr[i])in arr and sum-arr[i]!=arr[i]:
            return(f"{i+1} {arr.index(sum-arr[i])+1}")
    return("IMPOSSIBLE")

print(ans(arr,n))