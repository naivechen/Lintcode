// http://lintcode.com/zh-cn/problem/first-bad-version/


/**
 * class VersionControl {
 *     public:
 *     static bool isBadVersion(int k);
 * }
 * you can use VersionControl::isBadVersion(k) to judge wether 
 * the kth code version is bad or not.
*/
class Solution {
public:
    /**
     * @param n: An integers.
     * @return: An integer which is the first bad version.
     */
    int findFirstBadVersion(int n) {
        // write your code here
        if(n==1) return n;
        int left=0, right=n;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(VersionControl::isBadVersion(mid)==false) left=mid+1;
            else right=mid-1;
        }
        return left;
    }
};

