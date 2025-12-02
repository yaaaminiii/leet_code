class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>result;
        for( int i=0;i< operations.size();i++){
            if(operations[i]=="+"){
                result.push_back(result[result.size()-1]+result[result.size()-2]);
            }
            else if(operations[i] =="D"){
                result.push_back(2*result.back());
            }
            else if(operations[i]=="C"){
                result.pop_back();
            }
            else{
                result.push_back(stoi(operations[i]));
            }
        }
        int sum=0;
        for(int i=0;i<result.size();i++){
            sum+=result[i];
        }
        return sum;

        
    }
};