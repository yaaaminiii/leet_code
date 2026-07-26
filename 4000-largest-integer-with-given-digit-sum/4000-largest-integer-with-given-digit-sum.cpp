class Solution {
public:
    int largestInteger(int n, int s) {
        int mx = 9*n;
        if(s > mx) return -1;
        int ans = 0;
        int nfd = 0;
        while(nfd < n)
            {
                if(s >= 9)
                {
                    s-=9;
                    ans = ans*10 + 9;
                }
                else
                {
                    ans = ans*10 + s;
                    s = 0;
                }
                nfd+=1;
            }
        return ans;
    
    }
};