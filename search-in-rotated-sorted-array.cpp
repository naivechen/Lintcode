// http://lintcode.com/en/problem/search-in-rotated-sorted-array/


class Solution {
    /** 
     * param A : an integer ratated sorted array
     * param target :  an integer to be searched
     * return : an integer
     */
public:
    int search(vector<int> &A, int target) {
        // write your code here
        int left=0, right=A.size()-1, mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(A[mid]>target)
            {
                if(A[right]<A[left] && target<=A[right] && A[mid]>A[right]) 
                    left=mid+1;
                else right=mid-1;
            }
            else if(A[mid]<target)
            {
                if(A[right]<A[left] && target>A[right] && A[mid]<A[right])
                    right=mid-1;
                else left=mid+1;
            }
            else return mid;
        }
        return -1;
    }
};
