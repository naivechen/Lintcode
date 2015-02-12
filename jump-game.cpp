// http://lintcode.com/zh-cn/problem/jump-game/


class Solution {
public:
    /**
     * @param A: A list of integers
     * @return: The boolean answer
     */
    bool canJump(vector<int> A) {
        // write you code here
        int len=A.size();
        int ans=A[0];
        for(int i=1;i<(len-1);i++)
        {
            if(ans<1) return false;
            ans=max(ans-1,A[i]);
        }
        if(ans<1) return false;
        return true;
    }
};

