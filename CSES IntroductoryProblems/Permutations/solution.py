n=int(input())

def beautiful(n):
    arr=[]
    if n==1:
        return [1]
    if n<=3:
        return None
    if n%2==0:
        i=2
        while i<=n:
            arr.append(i)
            i+=2

        i=1
        while i<n:
            arr.append(i)
            i+=2

    else:
        i=2
        while i<n:
            arr.append(i)
            i+=2

        i=1
        while i<=n:
            arr.append(i)
            i+=2
    return arr


sol=beautiful(n)

if sol:
    for num in sol:
        print(num,end=" ")
else:
    print("NO SOLUTION")