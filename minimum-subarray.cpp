// http://lintcode.com/zh-cn/problem/minimum-subarray/


class Solution {
public:
    /**
     * @param nums: a list of integers
     * @return: A integer denote the sum of minimum subarray
     */
    int minSubArray(vector<int> nums) {
        // write your code here
        int ans=nums[0],tmp=nums[0];
        int len=nums.size();
        for(int i=1;i<len;i++)
        {
            tmp=min(nums[i],tmp+nums[i]);
            if(tmp<ans) ans=tmp;
        }
        return ans;
    }
};

