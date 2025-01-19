class Solution:
    def subarraySum(self, nums: List[int]) -> int:
        n = len(nums)
        
        # Step 1: Compute prefix sums P
        # P[k] = sum of nums[0..k-1]
        P = [0] * (n + 1)
        for i in range(n):
            P[i + 1] = P[i] + nums[i]
        
        # Step 2: Compute S1 = sum of P[1..n]
        S1 = sum(P[1:])
        
        # Step 3: Compute S2 = sum of P[start(i)] for each i
        # where start(i) = max(0, i - nums[i])
        S2 = 0
        for i in range(n):
            start = max(0, i - nums[i])
            S2 += P[start]
        
        # Step 4: Total = S1 - S2
        return S1 - S2
