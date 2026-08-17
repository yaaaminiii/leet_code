class Solution {
public:
    int longestPalindrome(string s) {
        sort(s.begin(),s.end());
        int ans=0;
        int odd=0;
        int left=0;
        int right=1;
        while(right<s.length()){
            if(s[left]==s[right]){
                ans+=2;
                left+=2;
                right+=2;
            }
            else{
                odd++;
                left++;
                right++;
            }
        }
        if(left < s.length()) {
            odd++;
        }
        if(odd>=1){
            ans++;
        }
        return ans;

    }
};