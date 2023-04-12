#### Two pointer Technique ####

n,m,k=map(int,input().split())

desired=list(map(int,input().split()))

size=list(map(int,input().split()))

desired.sort()
size.sort()

i,j,count=0,0,0

while i<n and j<m:
    if desired[i]-k>size[j]:
        j+=1
    elif desired[i]+k<size[j]:
        i+=1
    else:
        i+=1
        j+=1
        count+=1

print(count)
