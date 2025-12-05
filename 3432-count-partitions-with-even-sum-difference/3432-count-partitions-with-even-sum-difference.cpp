class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int lsum=0;
           lsum+=nums[i]  ;
            if((lsum-(sum-lsum))  %2==0){
            count++;
           }    

        }
        if(count==0){
            return 0;
        }
        else{
            return count-1;
        }
    }
};