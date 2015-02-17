// http://lintcode.com/zh-cn/problem/longest-increasing-subsequence/


class Solution {
public:
    /**
     * @param nums: The integer array
     * @return: The length of LIS (longest increasing subsequence)
     */
    int a[100001];
    int n=0;
    void binary_search(int target)
    {
        int left=1, right=n;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(a[mid]<=target) left=mid+1;
            else right=mid-1;
        }
        a[left]=target;
    }
    int longestIncreasingSubsequence(vector<int> nums) {
        // write your code here
        int len=nums.size();
        if(len==0) return 0;
        a[++n]=nums[0];
        for(int i=1;i<len;i++)
        {
            if(nums[i]<a[0]) a[0]=nums[i];
            else if(nums[i]>=a[n]) a[++n]=nums[i];
            else binary_search(nums[i]);
        }
        return n;
    }
};

