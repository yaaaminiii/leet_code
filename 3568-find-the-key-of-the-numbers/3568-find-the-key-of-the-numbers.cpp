class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string s1=to_string(10000+num1).substr(1);
        string s2=to_string(10000+num2).substr(1);
        string s3=to_string(10000+num3).substr(1);

        string result="";
        for(int i=0;i<4;i++){
            char mindigit=min({s1[i],s2[i],s3[i]});
            result+=mindigit;
        }
        return stoi(result);
    }
};