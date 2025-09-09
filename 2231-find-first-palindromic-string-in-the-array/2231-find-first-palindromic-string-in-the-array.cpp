class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string res="";
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            string rev=temp;
            reverse(rev.begin(),rev.end());
            if(temp==rev){
                return temp;
            }
        }
        return "";
    }
};