class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
    int n = grid[0].size();

    int dp[201][201];

    for(int i = m-1; i >= 0; i--) {
        for(int j = n-1; j >= 0; j--) {

            if(i == m-1 && j == n-1)
                dp[i][j] = grid[i][j];

            else {
                int right = (j+1 < n) ? dp[i][j+1] : INT_MAX;
                int down  = (i+1 < m) ? dp[i+1][j] : INT_MAX;

                dp[i][j] = grid[i][j] + min(right, down);
            }
        }
    
    }
  return dp[0][0];
    }

};