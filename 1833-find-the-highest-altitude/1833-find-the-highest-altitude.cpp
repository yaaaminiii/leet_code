class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>res;
        res.push_back(0);
     int sum=0;
        for(int i=0;i<gain.size();i++){
           sum=sum+gain[i];
           res.push_back(sum);
        }
        int max=res[0];
        for(int i=0;i<res.size();i++){
            if(res[i]>max){
                max=res[i];
            }
        }
    return max;
    }
};