class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       
        int maxi=nums[0];
        vector<int>mini(nums.size());
        mini[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
          mini[i] = min(nums[i], mini[i+1]);
        }
       
        
        for(int i=0;i<nums.size();i++){     
            maxi=max(nums[i],maxi)   ;
            int s=maxi-mini[i];
            
            if(s<=k){
                return i;
                
            }
        }
        return -1;
    }
};