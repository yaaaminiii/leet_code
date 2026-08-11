class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int i=left;i<=right;i++){
            int x=i;
            bool valid=true;
           while(x>0){
            int digit=x%10;
            if(digit==0 || i%digit!=0){
                valid=false;
                break;
            }
            x/=10;
           }
           if(valid){
            res.push_back(i);
           }
        }
        return res;
    }
};