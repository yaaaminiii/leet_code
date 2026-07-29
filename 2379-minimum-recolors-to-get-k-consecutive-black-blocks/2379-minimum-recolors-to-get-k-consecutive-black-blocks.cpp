class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int min_changes=INT_MAX;
        int changes=0;
        int left=0;
        for(int right=0;right<blocks.size();right++){
            if(blocks[right]!='B')changes++;
            if(right>=k-1){
                min_changes=min(min_changes,changes);
                if(blocks[left]=='W'){
                    changes--;
                }
                left++;
            }
        }
        return min_changes;
    }
};