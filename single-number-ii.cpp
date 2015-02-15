// http://lintcode.com/zh-cn/problem/single-number-ii/


class Solution {
public:
	/**
	 * @param A : An integer array
	 * @return : An integer 
	 */
    int singleNumberII(vector<int> &A) {
        // write your code here
        int len=A.size();
        int a=0, b=0;
        for(int i=0;i<len;i++)
        {
            int x=A[i];
            b=b^(x&~a);
            a=a^(x&~b);
        }
        return b&~a;
    }
};

