// http://lintcode.com/zh-cn/problem/2-sum/
 

class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        vector<int> ans;
        int len=nums.size();
        for(int i=0;i<len;i++)
            for(int j=i+1;j<len;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;
                }
            }
    }
};

