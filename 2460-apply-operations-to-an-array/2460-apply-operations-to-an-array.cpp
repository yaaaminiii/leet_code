class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                nums[i-1]=nums[i-1]*2;
                nums[i]=0;
            }
        }
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                result.push_back(nums[i]);
            }
        }
    int n=nums.size()-result.size();
    for(int i=1;i<=n;i++){
        result.push_back(0);
    }

        return result;
    }
};