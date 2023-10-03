class TrieNode:
    def __init__(self) -> None:
        self.children={}
        self.isend=False

class Trie:
    def __init__(self) -> None:
        self.root=self.getNode()
        self.autocomp_ans=[]

    def getNode(self):
        return TrieNode()
    
    def insert(self,key):
        parent=self.root
        for level in key:
            if not parent.children.get(level):
                parent.children[level]=self.getNode()
            parent=parent.children[level]

        parent.isend=True

    def search(self,key):
        parent=self.root
        for level in key:
            if not parent.children.get(level):
                return False
            parent=parent.children[level]

        return parent.isend
    
def solve(t:Trie,s:str):
    M=10**9+7
    n=len(s)
    if n==0:
        return 0
    dp=[0 for i in range(n+1)]
    dp[n]=1

    for i in range(n-1,-1,-1):
        parent=t.root
        for j in range(i,n):
            if not parent.children.get(s[j]):
                break
            parent=parent.children[s[j]]
            if parent.isend:
                dp[i]=dp[i]%M+dp[j+1]%M
                dp[i]=dp[i]%M
    # print(dp)
    return dp[0]
    

def main():
    s=input()
    n=int(input())
    t=Trie()
    for _ in range(n):
        t.insert(input())
    print(solve(t,s))

    

if __name__=="__main__":
    main()