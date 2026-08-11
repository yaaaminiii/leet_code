class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        int left=0;
        unordered_map<char,int>freq;
        unordered_map<char,int>fres;
        for(char c:s1){
            freq[c]++;
        }
        for(int right=0;right<s2.size();right++){
            fres[s2[right]]++;
            if(right>k-1){
              fres[s2[left]]--;
              if(fres[s2[left]]==0){
                fres.erase(s2[left]);
              }
              left++;
            }
            if(freq==fres){return true;}
           
        }
        return false;
        
    }
};