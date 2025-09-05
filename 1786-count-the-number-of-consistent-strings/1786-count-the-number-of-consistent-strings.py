class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        count=0
        allowed_set=set(allowed)
        for word in words:
            if set(word).issubset(allowed_set):
                count+=1
        return count