class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int left=0;
        int maxlength=0;
        // for(char c:s){
        //     freq[c]++;
        //     while(freq[c]>1){
        //         freq[left]--;
        //         if(freq[left]==0){
        //             freq.erase(s[left]);
        //         }
        //         left++;
        //     }           
        // }
        for(int right=0;right<s.length();right++){
           while (st.find(s[right]) != st.end()) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);

            maxlength = max(maxlength, right - left + 1);
        }

        return maxlength;

    }
};