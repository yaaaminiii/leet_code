class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // vector<int>arr;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>=target){
        //         arr.push_back(i);
        //         break;
        //     }
        // }
        
        // for(int i=0;i<nums.size();i++){
        //     if(arr.size()==-1){
        //         arr.push_back(-1);
        //     }
        //     else if(nums[i]>target){
        //         arr.push_back(i-1);
        //         break;
        //     }
        // }
        // if(arr.size()==0)
        // {arr.push_back(-1);
        // arr.push_back(-1);}
        // return arr;
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        int first=low;
        low=0,high=nums.size()-1;
         while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        int second=high;
       if (first == nums.size() || nums[first] != target) {
            return {-1, -1};
        }
        return {first,second};      
    }
};