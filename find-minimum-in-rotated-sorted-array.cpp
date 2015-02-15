// http://lintcode.com/zh-cn/problem/find-minimum-in-rotated-sorted-array/


class Solution {
public:
    /**
     * @param num: a rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &num) {
        // write your code here 
        sort(num.begin(), num.end());
        return num[0];
    }
};
