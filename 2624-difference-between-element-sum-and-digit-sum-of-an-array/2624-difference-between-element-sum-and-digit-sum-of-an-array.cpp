class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int num=0;
        for(int i=0;i<nums.size();i++){
            num=num+nums[i];
        }
        int sum=0;
        for(int i=0;i<nums.size();i++ )
        {
            if(nums[i]<10){
              sum=sum+nums[i];
            }
            else {
                while(nums[i]>0){
                 sum+=nums[i]%10;
                nums[i]/=10;
            }}
        }
        return abs(num-sum);
    }
};