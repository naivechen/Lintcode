// http://lintcode.com/en/problem/recover-rotated-sorted-array/


class Solution {
public:
    void recoverRotatedSortedArray(vector<int> &nums) {
        // write your code here
        int p=-1, len=nums.size();
        if(len==0 || len==1) return ;
        for(int i=1;i<len;i++)
        {
            if(nums[i]<nums[i-1])
            {
                p=i;
                break;
            }
        }
        if(p==-1) return ;
        for(int i=0,j=p-1;i<j;i++, j--)
            swap(nums[i], nums[j]);
        for(int i=p,j=len-1;i<j;i++, j--)
            swap(nums[i], nums[j]);
        for(int i=0,j=len-1;i<j;i++, j--)
            swap(nums[i], nums[j]);
        return ;
    }
};
