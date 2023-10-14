s=input()

i=0
j=len(s)-1
ans=[]
while i<len(s) and j>0:
    if s[:i+1]==s[j:]:
        ans.append(i+1)

    i+=1
    j-=1

print(*ans)

