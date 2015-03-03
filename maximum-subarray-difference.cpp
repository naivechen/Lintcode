// http://lintcode.com/en/problem/maximum-subarray-difference/


class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: An integer indicate the value of maximum difference between two
     *          Subarrays
     */
    int maxDiffSubArrays(vector<int> nums) {
        // write your code here
        int len=nums.size();
        if(len==0) return 0;
        int *leftmin=new int[len+1];
        int *leftmax=new int[len+1];
        int endmin=nums[0], endmax=nums[0];
        leftmin[0]=endmin;
        leftmax[0]=endmax;
        for(int i=1;i<len;i++)
        {
            // get the max subarray
            endmax=max(nums[i], nums[i]+endmax);
            leftmax[i]=max(leftmax[i-1], endmax);
            
            // get the min subarray
            endmin=min(nums[i], nums[i]+endmin);
            leftmin[i]=min(leftmin[i-1], endmin);
        }
        int *rightmin=new int[len+2];
        int *rightmax=new int[len+2];
        endmin=nums[len-1];
        endmax=nums[len-1];
        rightmin[len-1]=endmin;
        rightmax[len-1]=endmax;
        for(int i=len-2;i>=0;i--)
        {
            endmax=max(nums[i], nums[i]+endmax);
            rightmax[i]=max(rightmax[i+1], endmax);
            endmin=min(nums[i], nums[i]+endmin);
            rightmin[i]=min(rightmin[i+1], endmin);
        }
        int ans=0;
        for(int i=0;i<len-1;i++)
        {
            ans=max(ans, abs(leftmin[i]-rightmax[i+1]));
            ans=max(ans, abs(leftmax[i]-rightmin[i+1]));
        }
        return ans;
    }
};
