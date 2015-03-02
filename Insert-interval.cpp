// http://lintcode.com/en/problem/insert-interval/


/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 */
class Solution {
public:
    /**
     * Insert newInterval into intervals.
     * @param intervals: Sorted interval list.
     * @param newInterval: new interval.
     * @return: A new interval list.
     */
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        // write your code here
        int len=intervals.size();
        vector<Interval> ans;
        if(len==0)
        {
            ans.push_back(newInterval);
            return ans;
        }
        int flag=0;
        for(int i=0;i<len;i++)
        {
            if(flag)
            {
                ans.push_back(intervals[i]);
                continue;
            }
            if(newInterval.start>intervals[i].end)
                ans.push_back(intervals[i]);
            else if(newInterval.end<intervals[i].start)
                ans.push_back(newInterval),
                ans.push_back(intervals[i]),
                flag=1;
            else 
            {
                newInterval.start=min(newInterval.start, intervals[i].start);
                newInterval.end=max(newInterval.end, intervals[i].end);
            }
        }
        if(!flag) ans.push_back(newInterval);
        return ans;
    }
};
