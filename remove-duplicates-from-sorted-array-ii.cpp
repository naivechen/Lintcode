// http://lintcode.com/en/problem/remove-duplicates-from-sorted-array-ii/


class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        int len=nums.size();
        if(len==0) return 0;
        if(len==1) return 1;
        int p=1,tmp=nums[1];
        for(int i=2;i<len;i++)
        {
            if(nums[i]!=nums[i-2])
            {
                nums[p++]=tmp;
                tmp=nums[i];
            }
        }
        nums[p++]=tmp;
        return p;
    }
};
