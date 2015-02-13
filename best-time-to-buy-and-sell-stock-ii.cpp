// http://lintcode.com/zh-cn/problem/best-time-to-buy-and-sell-stock-ii/


class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
        int ans=0, len=prices.size();
        if(len==0) return 0;
        for(int i=1;i<len;i++)
        {
            if(prices[i]-prices[i-1]>0) 
                ans+=prices[i]-prices[i-1];
        }
        return ans;
    }
};

