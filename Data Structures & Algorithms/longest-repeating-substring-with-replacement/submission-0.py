class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        fre = defaultdict(int)
        ans = 0
        i = 0
        max_fre = 0

        for j in range(len(s)):
            fre[s[j]] += 1
            max_fre = max(max_fre, fre[s[j]])

            while((j - i + 1) - max_fre > k):
                fre[s[i]] -= 1
                i += 1
            
            ans = max(ans, (j - i + 1) )

        return ans
