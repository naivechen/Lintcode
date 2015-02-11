// http://lintcode.com/zh-cn/problem/digit-counts/


class Solution {
public:
    /*
     * param k : As description.
     * param n : As description.
     * return: How many k's between 0 and n.
     */
    int ans;
    void cal(int x, int k)
    {
        while(x)
        {
            int p = x % 10;
            if(p == k) ans ++ ;
            x /= 10;
        }
    }
    int digitCounts(int k, int n) {
        // write your code here
        ans = 0;
        if(k == 0) ans = 1;
        for(int i = 1 ; i <= n ; i++)
            cal(i,k);
        return ans;
    }
};
