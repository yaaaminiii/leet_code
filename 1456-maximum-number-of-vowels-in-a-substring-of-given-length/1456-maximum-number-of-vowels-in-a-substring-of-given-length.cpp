class Solution {
public:
bool isvowel(char ch){
            return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
        }
    int maxVowels(string s, int k) {
       
        int max_vowels=0;
        int count=0;
        int left=0;
        for(int right=0;right<s.size();right++){
            if(isvowel(s[right])){
                count++;
            }
            if(right>=k-1){
                max_vowels=max(max_vowels,count);
                if(isvowel(s[left])){
                    count--;}
                left++;
                
            }
        }
        return max_vowels;

    }
};