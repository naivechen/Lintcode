// http://lintcode.com/zh-cn/problem/median/


class Solution {
public:
    /**
     * @param nums: A list of integers.
     * @return: An integer denotes the middle number of the array.
     */
    int median(vector<int> &nums) {
        // write your code here
        sort(nums.begin(), nums.end());
        int len=nums.size();
        return nums[(len-1)/2];
    }
};

