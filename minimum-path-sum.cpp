// http://lintcode.com/zh-cn/problem/minimum-path-sum/


class Solution {
public:
    /**
     * @param grid: a list of lists of integers.
     * @return: An integer, minimizes the sum of all numbers along its path
     */
    int n,m;
    int dp[1001][1001];
    int minPathSum(vector<vector<int> > &grid) {
        // write your code here
        n = grid.size();
        m = grid[0].size();
        dp[0][0] = grid[0][0];
        for(int i=1;i<n;i++)
            dp[i][0]=dp[i-1][0]+grid[i][0];
        for(int j=1;j<m;j++)
            dp[0][j]=dp[0][j-1]+grid[0][j];
        for(int i=1;i<n;i++)
            for(int j=1;j<m;j++)
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
        return dp[n-1][m-1];
    }
};

