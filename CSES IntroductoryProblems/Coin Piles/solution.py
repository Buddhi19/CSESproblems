t=int(input())

def isRemovable(x,y):
    if y>x:
        return isRemovable(y,x)
    if (x+y)%3!=0 or x>2*y:
        return False
    return True
    
for _ in range(t):
    x,y=map(int,input().split())
    if isRemovable(x,y):
        print("YES")
    else:
        print("NO")