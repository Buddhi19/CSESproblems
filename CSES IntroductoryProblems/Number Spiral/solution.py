t=int(input())

def point(x,y):

    if x==y:
        return x*(x-1)+1
    if x>y:
        if x%2==0:
            mid=x*(x-1)+1
            value=mid+(x-y)
            return value
        if x%2==1:
            mid=x*(x-1)+1
            value=mid-(x-y)
            return value    
    if y>x:
        diff=y-x
        row=x+diff
        # print(MID)
        if row%2==1:
            value=row*(row-1)+1+diff
            return value
        if row%2==0:
            value=row*(row-1)+1-diff
            return value

        
for _ in range(t):
    x,y=map(int,input().split())
    print(point(x,y))
