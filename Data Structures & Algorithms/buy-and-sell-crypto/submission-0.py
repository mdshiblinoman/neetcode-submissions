class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans = 0
        n = len(prices)

        for i in range(0, n-1):
            buy = prices[i]
            for j in range(i, n):
                if(prices[j] > buy):
                    ans = max(ans, (prices[j]-buy))
        
        return ans