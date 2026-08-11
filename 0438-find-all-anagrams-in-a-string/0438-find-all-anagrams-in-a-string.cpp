class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>freq;
        unordered_map<char,int>frqs;
        for(char c:p){
            freq[c]++;
        }
        int left=0;
        vector<int>res;
        for(int right=0;right<s.size();right++){
           frqs[s[right]]++;
           if(right>p.size()-1){
                 frqs[s[left]]--;   
                if (frqs[s[left]] == 0) {
                     frqs.erase(s[left]);
                } 
                left++;              
             }                                 
        if(freq==frqs)  {
             res.push_back(left);
          }       
    }
     return res;
    }
};