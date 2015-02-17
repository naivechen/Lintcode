// http://lintcode.com/en/problem/search-a-2d-matrix/


class Solution {
public:
    /**
     * @param matrix, a list of lists of integers
     * @param target, an integer
     * @return a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        // write your code here
        int n=matrix.size();
        if(n==0) return false;
        int m=matrix[0].size();
        int left=0, right=n-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(matrix[mid][0]==target) return true;
            else if(matrix[mid][0]>target) right=mid-1;
            else left=mid+1;
        }
        if(right<0) return false;
        int low=0, high=m-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(matrix[right][mid]==target) return true;
            else if(matrix[right][mid]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};

