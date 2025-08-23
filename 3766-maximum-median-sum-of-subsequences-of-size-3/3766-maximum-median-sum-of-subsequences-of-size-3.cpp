class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     long long sum=0;
     int n=nums.size();
     for(int i=0;i<n/3;++i){
        int m=n-2-(2*i);
        sum=sum+nums[m];
     }
     return sum;

        
    }
};