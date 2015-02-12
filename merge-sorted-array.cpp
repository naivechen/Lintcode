// http://lintcode.com/zh-cn/problem/merge-sorted-array/


class Solution {
public:
    /**
     * @param A and B: sorted integer array A and B.
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        int lenA = A.size(), lenB = B.size();
        int i=0, j=0;
        vector<int> ans;
        while(i<lenA && j<lenB)
        {
            if(A[i]<B[j]) ans.push_back(A[i]), i++;
            else if(A[i]>B[j]) ans.push_back(B[j]), j++;
            else ans.push_back(A[i]), i++;
        }
        while(i<lenA)
        {
            ans.push_back(A[i]);
            i++;
        }
        while(j<lenB)
        {
            ans.push_back(B[j]);
            j++;
        }
        return ans;
    }
};
