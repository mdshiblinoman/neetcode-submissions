class Solution:
    def dailyTemperatures(self, arr: List[int]) -> List[int]:
        n = len(arr)
        result = [0] * n

        for i in range(n):
            for j in range(i + 1, n):
                if arr[j] > arr[i]:
                    result[i] = j - i
                    break

        return result
