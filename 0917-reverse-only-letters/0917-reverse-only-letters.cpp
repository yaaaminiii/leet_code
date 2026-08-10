class Solution {
public:
    string reverseOnlyLetters(string s) {
       int l=0,r=s.size()-1;
        string vowels="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
      while(l<r){
        while(l<r && vowels.find(s[l])==string::npos)l++; 
        while(l<r && vowels.find(s[r])==string::npos)r--;
        if(l<r){ 
            swap(s[l],s[r]);
            l++;   
            r--;
        }
      }
    return s;
    }
    
};