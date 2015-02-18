// http://lintcode.com/zh-cn/problem/convert-integer-a-to-integer-b/


class Solution {
public:
    /**
     *@param a, b: Two integer
     *return: An integer
     */
    int get(int n)
    {
        if(n==0) return 0;
        int cnt=0;
        while(n)
        {
            n=n&(n-1);
            cnt++;
        }
        return cnt;
    }
    int bitSwapRequired(int a, int b) {
        // write your code here
        int c=a&b;
        int d=a|b;
        int e=c^d;
        return get(e);
    }
};

