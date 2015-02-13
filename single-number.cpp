// http://lintcode.com/zh-cn/problem/single-number/


class Solution {
public:
	/**
	 * @param A: Array of integers.
	 * return: The single number.
	 */
    int singleNumber(vector<int> &A) {
        // write your code here
        int ans = 0;
        int len = A.size();
        for(int i=0;i<len;i++)
            ans=(ans ^ A[i]);
        return ans;
    }
};

