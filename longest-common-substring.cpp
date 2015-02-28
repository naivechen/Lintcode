// http://lintcode.com/en/problem/longest-common-substring/ 


class Solution {
public:    
    /**
     * @param A, B: Two string.
     * @return: the length of the longest common substring.
     */
    int longestCommonSubstring(string &A, string &B) {
        // write your code here
        int lena=A.length(), lenb=B.length();
        if(lena==0 || lenb==0) return 0;
        int dp[1001][1001], ans=0;
        for(int i=1;i<=lena;i++)
            for(int j=1;j<=lenb;j++)
            {
                if(A[i-1]==B[j-1]) dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
                else dp[i][j]=0;
                ans=max(ans, dp[i][j]);
            }
        return ans;
    }
};
