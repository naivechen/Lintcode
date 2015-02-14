// http://lintcode.com/zh-cn/problem/maximum-subarray/


class Solution {
public:    
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> nums) {
        // write your code here
        int len=nums.size();
        if(len==0) return 0;
        int ans=nums[0],tmp=max(0,nums[0]);
        for(int i=1;i<len;i++)
        {
            tmp=max(nums[i]+tmp,nums[i]);
            ans=max(ans,tmp);
        }
        return ans;
    }
};

