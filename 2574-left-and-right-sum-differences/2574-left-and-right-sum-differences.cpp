class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        int leftsum[n];
        int rightsum[n];
        leftsum[0]=0;
        rightsum[n-1]=0;
        for(int i=1;i<n;i++){
            leftsum[i]=leftsum[i-1]+nums[i-1];     
        }
        for(int j=n-2;j>=0;j--){
            rightsum[j]=nums[j+1]+rightsum[j+1];
        }
        for(int k=0;k<n;k++){
            res.push_back(abs(leftsum[k]-rightsum[k]));
        }
        return res;
    }
};