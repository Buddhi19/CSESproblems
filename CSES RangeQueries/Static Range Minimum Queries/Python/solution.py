n,q=map(int,input().split())

arr=list(map(int,input().split()))
############# SPARSE TABLE #########################





for _ in range(q):
    a,b=map(int,input().split())
    print(min(arr[a-1:b]))