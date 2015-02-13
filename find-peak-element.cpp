// http://lintcode.com/zh-cn/problem/find-peak-element/


class Solution {
public:
    /**
     * @param A: An integers array.
     * @return: return any of peek positions.
     */
    int findPeak(vector<int> A) {
        // write your code here
        int len=A.size();
        for(int i=1;i<len-1;i++)
        {
            if(A[i]>A[i-1] && A[i]>A[i+1]) 
                return i;
        }
    }
};

