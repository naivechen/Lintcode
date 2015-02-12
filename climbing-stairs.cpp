// http://lintcode.com/zh-cn/problem/climbing-stairs/


class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        int a=1,b=2;
        if(n==1) return 1;
        else if(n==2) return 2;
        else
        {
            int c;
            for(int i=3;i<=n;i++)
            {
                c=a+b;
                a=b;
                b=c;
            }
            return c;
        }
    }
};

