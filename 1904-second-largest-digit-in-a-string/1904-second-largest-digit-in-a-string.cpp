class Solution {
public:
    int secondHighest(string s) {
        vector<int>res;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                res.push_back(s[i]-'0');
            }
        }
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
       if (res.size() < 2) return -1; 
        
        return res[res.size() - 2]; 
    }
};