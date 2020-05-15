class Solution:
    def convertToBase7(self, num: int) -> str:
        if num == 0: return "0"
        
        result = ""
        n = abs(num)
        
        while n > 0:
            result = str(n % 7) + result
            n //= 7
        
        if num < 0 : result = "-" + result
            
        return result
