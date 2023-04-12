from bisect import bisect_right

n,m=map(int,input().split())

prizes=list(map(int,input().split()))

wanted=list(map(int,input().split()))

prizes.sort()

sold=[False for i in range(n)]

for ticket in wanted:
    ind=bisect_right(prizes,ticket)

    if ind:

        if ind==n and not sold[n-1]:
            print(prizes[n-1])
            sold[n-1]=True
            continue
        ind-=1
        while ind>=0 and sold[ind]:
            ind-=1
        if ind>=0:
            print(prizes[ind])
            sold[ind]=True
        else:
            print(-1)

    else:
        print(-1)

    
    
    

# print(prizes)
