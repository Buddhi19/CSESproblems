n=int(input())

start=[]
end=[]

for _ in range(n):
    a,b=map(int,input().split())
    start.append(a)
    end.append(b)

start.sort()
end.sort()

i=0
j=0
ans=0
current=0

while i<n:
    if start[i]<end[j]:
        i+=1
        current+=1
    else:
        current-=1
        j+=1
    ans=max(current,ans)

print(ans)



