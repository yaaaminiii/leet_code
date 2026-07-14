class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones_count=0,m=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
            ones_count++;}
         else{
            m=max(ones_count,m);
            ones_count=0;
           }
        }
        return max(ones_count,m);
    }
};