n,q=map(int,input().split())

arr=list(map(int,input().split()))
arr.insert(0,0)
for i in range(1,n+1):
    arr[i]+=arr[i-1]

for _ in range(q):
    a,b=map(int,input().split())
    print(arr[b]-arr[a-1])