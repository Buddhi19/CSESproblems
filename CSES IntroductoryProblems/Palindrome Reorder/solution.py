from collections import defaultdict
 
 
def getPalindrome(st):
 
    # Store counts of characters
    hmap = defaultdict(int)
    for i in range(len(st)):
        hmap[st[i]] += 1
 
    # Find the number of odd elements.
    oddCount = 0
    oddChar=""
 
    for x in hmap:
        if (hmap[x] % 2 != 0):
            oddCount += 1
            oddChar = x
 
    # odd_cnt = 1 only if the length of
    # str is odd
    if (oddCount > 1 or oddCount == 1 and
            len(st) % 2 == 0):
        return "NO SOLUTION"
 
    # Generate first half of palindrome
    firstHalf = ""
    secondHalf = ""
 
    for x in sorted(hmap.keys()):
 
        # Build a string of floor(count/2)
        # occurrences of current character
        s = (hmap[x] // 2) * x
 
        # Attach the built string to end of
        # and begin of second half
        firstHalf = firstHalf + s
        secondHalf = s + secondHalf
 
    # Insert odd character if there
    # is any
    if (oddCount == 1):
        return (firstHalf + oddChar + secondHalf)
    else:
        return (firstHalf + secondHalf)
    

if __name__=="__main__":
    s=input()
    print(getPalindrome(s))
