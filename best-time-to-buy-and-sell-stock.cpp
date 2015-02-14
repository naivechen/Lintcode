// http://lintcode.com/zh-cn/problem/best-time-to-buy-and-sell-stock/


class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
        int len=prices.size();
        if(len<2) return 0;
        int ans=max(0,prices[1]-prices[0]);
        int left=prices[0], right=prices[1];
        if(left>right) left=right;
        for(int i=2;i<len;i++)
        {
            right=prices[i];
            if(right>=left) 
            {
                ans=max(ans,right-left);
            }
            else left=right;
        }
        return ans;
    }
};

