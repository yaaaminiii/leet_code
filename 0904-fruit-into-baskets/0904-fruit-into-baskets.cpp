class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxele=0;
        unordered_set<int>st;
        unordered_map<int,int>freq;
        int left=0;
        for(int right=0;right<fruits.size();right++){
            st.insert(fruits[right]);
            freq[fruits[right]]++;
              while(st.size()>2){
                freq[fruits[left]]--;
                if(freq[fruits[left]]==0){
                 st.erase(fruits[left]);}
                  left++;
                }
              
              maxele=max(maxele,right-left+1);
        }
        return maxele;
    }
};