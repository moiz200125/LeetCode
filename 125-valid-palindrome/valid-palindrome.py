class Solution:
    def isPalindrome(self, s: str) -> bool:
        #x = ''.join(char for char in s if char.isalnum()).lower()
        #return x == x[::-1]
        
        x = []
        for char in s:
            if char.isalnum():
                x.append(char)
        x = "".join(x)
        x = x.lower()
        

        l,r = 0,len(x)-1
        while(l < r):
            if x[l] != x[r]:
                return False
            else:
                l += 1
                r -= 1

        return True        





        