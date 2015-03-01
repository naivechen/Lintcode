// http://lintcode.com/en/problem/sqrtx/


class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        // write your code here
        long long int left=0, right=x;
        while(left<=right)
        {
            long long int mid=(left+right)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x) right=mid-1;
            else left=mid+1;
        }
        return right;
    }
};
