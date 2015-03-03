// http://lintcode.com/en/problem/sort-colors/


class Solution{
public:
    /**
     * @param nums: A list of integer which is 0, 1 or 2 
     * @return: nothing
     */    
    void sortColors(vector<int> &nums) {
        // write your code here
        int len=nums.size();
        if(len==0) return;
        int i=-1, j=-1, k=-1;
        for(int l=0;l<len;l++)
        {
            if(nums[l]==0)
            {
                nums[++k]=2;
                nums[++j]=1;
                nums[++i]=0;
            }
            else if(nums[l]==1)
            {
                nums[++k]=2;
                nums[++j]=1;
            }
            else 
            {
                nums[++k]=2;
            }
        }
        return ;
    }
};
