class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>leftsum;
        vector<int>rightsum;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            leftsum.push_back(sum);
        }
        int s=0;
        for(int i=nums.size()-1;i>=0;i--){
            s+=nums[i];
            rightsum.push_back(s);
        }
        reverse(rightsum.begin(),rightsum.end());
        for(int i=0;i<nums.size();i++){
            if(leftsum[i]==rightsum[i])return i;
        }
     return -1;
    }
};