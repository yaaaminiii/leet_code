class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int left=0;
        vector<int>res(nums.size(),-1);
        if(k==0) return nums;
        int windowsize=2*k+1;
        long long sum=0;
        for(int right=0;right<nums.size();right++){
             sum+=nums[right];
            if(right>=windowsize-1){
              res[right - k] = sum / windowsize;
              sum-=nums[left];
              left++;
            }
           
        }
        return res;
    }
};