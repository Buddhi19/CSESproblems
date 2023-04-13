n=int(input())
p = 10**9 +7
for i in range(n):
    a,b=map(int,input().split())
    print(pow(a,b,p))