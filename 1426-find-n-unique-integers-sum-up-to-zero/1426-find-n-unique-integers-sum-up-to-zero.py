class Solution:
    def sumZero(self, n: int) -> List[int]:
     res=[]
     k=n//2
     for i in range(-k,k+1): 
        if i==0:
           if n % 2 != 0:     
                    res.append(i)
        else:
                res.append(i)
     return res
        