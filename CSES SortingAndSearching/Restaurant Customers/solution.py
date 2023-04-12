n=int(input())

arr=dict()

for _ in range(n):
    a,b=map(int,input().split())

    for i in range(a,b+1):
        if i in arr:
            arr[i]+=1
        else:
            arr[i]=1

print(max(arr.items(),key=lambda x:x[1])[1])

