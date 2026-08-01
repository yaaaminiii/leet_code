class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        string v="aeiou";
        int max_vowel=0;
        int max_consonant=0;

        for(int i=0;i<s.size();i++){
            if(v.find(s[i])==string::npos){
                max_consonant=max(max_consonant,freq[s[i]]);
            }
            else{
                max_vowel=max(max_vowel,freq[s[i]]);
            }
        }
        return max_vowel+max_consonant;


                
     
    }
};