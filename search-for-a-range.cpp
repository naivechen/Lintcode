// http://lintcode.com/en/problem/search-for-a-range/


class Solution {
    /** 
     *@param A : an integer sorted array
     *@param target :  an integer to be inserted
     *return : a list of length 2, [index1, index2]
     */
public:
    vector<int> searchRange(vector<int> &A, int target) {
        // write your code here
        vector<int> ans;
        if(A.size()==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int left=0, right=A.size()-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(A[mid]>=target) right=mid-1;
            else if(A[mid]<target) left=mid+1;
        }
        ans.push_back(left);
        left=0,right=A.size()-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(A[mid]>target)right=mid-1;
            else left=mid+1;
        }
        ans.push_back(right);
        if(ans[0]>ans[1]) ans[0]=ans[1]=-1;
        return ans;
    }
};
