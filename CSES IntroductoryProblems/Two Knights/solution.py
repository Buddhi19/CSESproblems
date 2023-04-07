n=int(input())

def dontattck(n):
    solution=[0,6]
    if n==1:
        return [0]
    if n==2:
        return solution

    size=3
    while size<=n:
        ways=size**2*(size**2-1)//2 -4*(size-2)*(size-1)
        solution.append(ways)
        size+=1

    return solution


sol=dontattck(n)

for num in sol:
    print(num)
        