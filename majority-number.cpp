// http://lintcode.com/zh-cn/problem/majority-number/


class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: The majority number
     */
    int majorityNumber(vector<int> nums) {
        // write your code here
        int len = nums.size();
        map<int, int> ma;
        for(int i=0;i<len;i++)
        {
            ma[nums[i]]++;
            if(ma[nums[i]]>len/2) return nums[i];
        }
    }
};

