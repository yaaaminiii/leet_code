class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxw=0
        for i in accounts:
            maxw=max(maxw,sum(i))
        return maxw
          