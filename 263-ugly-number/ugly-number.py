class Solution(object):
    def isUgly(self, n):
        """
        :type n: int
        :rtype: bool
        """

        if n <= 0:
            return False
        
        temp = n
        for i in [2, 3, 5]:
            while temp % i == 0:
                temp //= i
        
        return temp == 1