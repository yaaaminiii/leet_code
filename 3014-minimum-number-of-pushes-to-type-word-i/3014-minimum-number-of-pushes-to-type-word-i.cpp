class Solution {
public:
    int minimumPushes(string word) {
        int minsum=0;
        for(int i=0;i<word.size();i++){
            minsum+=i/8+1;
        }
        return minsum;
    }
};