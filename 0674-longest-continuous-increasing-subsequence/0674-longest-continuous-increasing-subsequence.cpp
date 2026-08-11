class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxcount=1;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                count++;
                maxcount=max(maxcount,count);
            }
            else{
               
                count=1;
            }
        }
        return maxcount;
    }
};