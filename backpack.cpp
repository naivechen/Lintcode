// http://lintcode.com/zh-cn/problem/backpack/


class Solution {
public:
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A: Given n items with size A[i]
     * @return: The maximum size
     */
    int dp[100001];
    int backPack(int m, vector<int> A) {
        // write your code here
        memset(dp,0,sizeof(dp));
        int n=A.size();
        for(int i=0;i<n;i++)
            for(int j=m;j>=A[i];j--)
                dp[j]=max(dp[j],dp[j-A[i]]+A[i]);
        return dp[m];
    }
};
