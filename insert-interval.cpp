// http://lintcode.com/zh-cn/problem/insert-interval/


class Solution {
public:
    /**
     * @param triangle: a list of lists of integers.
     * @return: An integer, minimum path sum.
     */
    int dp[1001][1001];
    int n, m;
    int minimumTotal(vector<vector<int> > &triangle) {
        // write your code here
        n = triangle.size();
        for(int i=0;i<n;i++)
            dp[n-1][i]=triangle[n-1][i];
        for(int i=n-2;i>=0;i--)
            for(int j=0;j<=i;j++)
                dp[i][j]=min(dp[i+1][j],dp[i+1][j+1])+triangle[i][j];
        return dp[0][0];
    }
};

