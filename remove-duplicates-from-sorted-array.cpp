// http://lintcode.com/zh-cn/problem/remove-duplicates-from-sorted-array/


class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        int ans=1;
        int len=nums.size();
        if(len==0) return 0;
        int pre=nums[0];
        sort(nums.begin(), nums.end());
        vector<int> ret;
        ret.push_back(nums[0]);
        for(int i=1;i<len;i++)
        {
            if(nums[i]!=pre)
            {
                ans++;
                pre=nums[i];
                ret.push_back(pre);
            }
        }
        nums.clear();
        for(int i=0;i<ret.size();i++)
            nums.push_back(ret[i]);
        return ans;
    }
};
