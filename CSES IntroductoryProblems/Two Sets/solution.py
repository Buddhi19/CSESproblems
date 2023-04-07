n=int(input())

def sets(n):
    val=n*(n+1)//4
    val2=n*(n+1)/4
    if val!=val2:
        print("NO")
        return
    print("YES")
    set1=[]
    set2=[]

    if n%2==1:

        for i in range(1,n+1,4):
            set1.append(i)
            if i+1<=n:
                set1.append(i+1)

        for i in range(3,n+1,4):
            set2.append(i)
            if i+1<=n:
                set2.append(i+1)

    if n%2==0:

        for i in range(1,n+1,4):
            set1.append(i)
            if i+1<=n:
                set2.append(i+1)
            if i+2<=n:
                set2.append(i+2)
            if i+3<=n:
                set1.append(i+3)

    # print("sum",sum(set1))
    # print("sum",sum(set2))

    print(len(set1))
    for num in set1:
        print(num,end=" ")
    print()
    print(len(set2))
    for num in set2:
        print(num,end=" ")
    return        

sets(n)