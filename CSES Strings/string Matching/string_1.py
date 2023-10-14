"""
Knuth-Morris-Pratt Algorithm
"""
class KMP:
    def __init__(self) -> None:
        pass
    def lps(self, pattern):
        """
        lps match table: String -> [Int]
        """
        ret = [0]
        for i in range(1, len(pattern)):
            j = ret[i - 1]
            while j > 0 and pattern[j] != pattern[i]:
                j = ret[j - 1]
            ret.append(j + 1 if pattern[j] == pattern[i] else j)
        return ret
        
    def kmp_search(self, S1, S2):
        """ 
        Return all the matching position of pattern string P in T
        """
        lps, ret, j = self.lps(S2), 0, 0
        
        for i in range(len(S1)):
            while j > 0 and S1[i] != S2[j]:
                j = lps[j - 1]
            if S1[i] == S2[j]: j += 1
            if j == len(S2): 
                ret+=1
                j = lps[j - 1]
        """
        returning all starting positions
        """
        return ret
    
s1=input()
s2=input()
Sol=KMP()
print(Sol.kmp_search(s1,s2))