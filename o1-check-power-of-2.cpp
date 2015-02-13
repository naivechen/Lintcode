// http://lintcode.com/zh-cn/problem/o1-check-power-of-2/


class Solution {
public:
    /*
     * @param n: An integer
     * @return: True or false
     */
    bool checkPowerOf2(int n) {
        // write your code here
        if(n==0 || n<0) return false;
        else if((n & -n) == n ) return true;
        else return false;
    }
};

