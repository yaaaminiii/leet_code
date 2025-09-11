class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
       for(int i=0;i<n;i++) {
         int cnt=0;
         int x=i;
         while(x>0){
            cnt +=(x &1);
            x>>=1;
         }
       
       if(cnt==k){
        sum=sum+nums[i];
       }
       }
       return sum;
    }
}; 