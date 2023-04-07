n=int(input())

def series(n):
    print(n,end=" ") 
    if n==1:
        return   

    if n%2==0:
        series(n//2)

    else:
        series(n*3 +1)

series(n)