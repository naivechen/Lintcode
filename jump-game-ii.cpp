// http://lintcode.com/en/problem/jump-game-ii/


class Solution {
public:
    /**
     * @param A: A list of lists of integers
     * @return: An integer
     */
    int jump(vector<int> A) {
        // wirte your code here
        int ans=0, n=A.size();
        int pre=0, cnt=A[0];
        for(int i=1;i<n;i++)
        {
            if(i>pre)
            {
                pre=cnt;
                ans++;
            }
            cnt=max(cnt, A[i]+i);
        }
        return ans;
    }
};
