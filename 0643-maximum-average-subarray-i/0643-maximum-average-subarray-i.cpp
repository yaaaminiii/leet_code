class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    int left=0;
    double maxavg=-100000000;
    double currentsum=0;
    for(int right=0;right<nums.size();right++){
        currentsum+=nums[right];
        if(right>=k-1){
            maxavg=max(currentsum/k,maxavg);
            currentsum-=nums[left];
            left++;
        }
    }
    return maxavg;

        
    }
};