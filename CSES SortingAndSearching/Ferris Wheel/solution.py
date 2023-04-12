n,M=map(int,input().split())

arr=list(map(int,input().split()))

count=n

#### two pointer ####

arr.sort()

pointer1=0
pointer2=n-1

while pointer1<pointer2:
    if arr[pointer1]+arr[pointer2]<=M:
        count-=1
        pointer1+=1
        pointer2-=1
    else:
        pointer2-=1

print(count)