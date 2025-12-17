class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int oddsum=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                int len=j-i+1;
                if(len%2!=0){
               for(int k=i;k<=j;k++) {
                oddsum+=arr[k];
               }
               }
            }
        }
        return  oddsum;
    }
};