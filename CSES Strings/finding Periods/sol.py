s=input()
n=len(s)
result=[]
ans=""
for i in range(len(s)):
    ans+=s[i]
    p=len(ans)
    k=(n//p)+1
    check=ans*k
    if s in check:
        result.append(i+1)

print(*result)