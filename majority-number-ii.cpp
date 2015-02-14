// http://lintcode.com/en/problem/majority-number-ii/


class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: The majority number occurs more than 1/3.
     */
    int majorityNumber(vector<int> nums) {
        // write your code here
        int len=nums.size();
        if(len==0) return -1;
        int ans1=0, ans2=0, ans3=0, cnt1=0, cnt2=0, cnt3=0;
        for(int i=0;i<len;i++)
        {
            if(cnt1==0) ans1=nums[i], cnt1=1;
            else if(cnt2==0 && nums[i]!=ans1) ans2=nums[i], cnt2=1;
            else if(cnt3==0 && nums[i]!=ans1 && nums[i]!=ans2) ans3=nums[i], cnt3=1;
            else if(nums[i]!=ans1 && nums[i]!=ans2 && nums[i]!=ans3 && cnt1 && cnt2 && cnt3)
                cnt1--, cnt2--, cnt3--;
            else if(nums[i]==ans1) cnt1++;
            else if(nums[i]==ans2) cnt2++;
            else if(nums[i]==ans3) cnt3++;
        }
        if(cnt1>cnt2 && cnt1>cnt3) return ans1;
        else if(cnt2>cnt1 && cnt2>cnt3) return ans2;
        else return ans3;
    }
};

