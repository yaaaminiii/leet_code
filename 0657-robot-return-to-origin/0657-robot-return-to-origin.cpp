class Solution {
public:
    bool judgeCircle(string moves) {
        map<char,int>mpp;
        for(auto i: moves){
            mpp[i]++;
        }
        if(mpp['U']==mpp['D']  && mpp['L']==mpp['R']){
            return true;
        }
        else{
            return false;
        }
    }
};