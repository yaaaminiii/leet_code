class Solution {
public:
    int calPoints(vector<string>& operations) {
        // vector<int>result;
        // for( int i=0;i< operations.size();i++){
        //     if(operations[i]=="+"){
        //         result.push_back(result[result.size()-1]+result[result.size()-2]);
        //     }
        //     else if(operations[i] =="D"){
        //         result.push_back(2*result.back());
        //     }
        //     else if(operations[i]=="C"){
        //         result.pop_back();
        //     }
        //     else{
        //         result.push_back(stoi(operations[i]));
        //     }
        // }
        // int sum=0;
        // for(int i=0;i<result.size();i++){
        //     sum+=result[i];
        // }
        // return sum;
     stack<int>st;
     for(int i=0;i<operations.size();i++){
        if(operations[i]=="C"){
            st.pop();
        }
        else if (operations[i] == "D") {
                st.push(2 * st.top());
            }
        else if(operations[i]=="+"){
            int first=st.top();
            st.pop();
            int second=st.top();
            st.push(first);
            st.push(first+second);
            //st.push(first);
        }
        else{
            st.push(stoi(operations[i]));
        }
     }
     int sum=0;
      while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
return sum;
        
    }
};