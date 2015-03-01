// http://lintcode.com/en/problem/search-insert-position/


class Solution {
    /** 
     * param A : an integer sorted array
     * param target :  an integer to be inserted
     * return : an integer
     */
public:
    int searchInsert(vector<int> &A, int target) {
        // write your code here
        if(A.size()==0) return 0;
        int left=0, right=A.size()-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(A[mid]==target) return mid;
            else if(A[mid]<target) left=mid+1;
            else right=mid-1;
        }
        return left;
    }
};
