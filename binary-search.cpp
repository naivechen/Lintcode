// http://lintcode.com/zh-cn/problem/binary-search/


class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
        int left=0, right=array.size(), mid;
        if(target==array[0]) return 0;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(array[mid]==target && array[mid-1]!=target) return mid;
            else if(array[mid]<target) left=mid+1;
            else right=mid-1;
        }
        return -1;
    }
};
