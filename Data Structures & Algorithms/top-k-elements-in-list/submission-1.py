class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}
        for u in nums:
            if u in mp:
                mp[u] += 1
            else:
                mp[u] = 1

        ans = []
        for _ in range(k):

            mx = 0
            ind = -1

            for key, value in mp.items():

                if mx <= value:
                    mx = value
                    ind = key

            ans.append(ind)

            del mp[ind]

        return ans

        