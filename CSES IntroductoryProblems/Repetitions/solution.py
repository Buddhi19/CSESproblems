text=input()
text=list(text)

max=0

count=1

for i in range(len(text)-1):
    if text[i]==text[i+1]:
        count+=1

    else:
        if max<count:
            max=count
        count=1
if max<count:
    max=count
   # print(f"count-{count}")

print(max)