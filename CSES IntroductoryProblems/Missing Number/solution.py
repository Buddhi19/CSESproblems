n=int(input())

arr=set(map(int,input().split()))

original=set( i for i in range(1,n+1))

print(list(original-arr)[0])