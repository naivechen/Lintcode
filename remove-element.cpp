// http://lintcode.com/en/problem/remove-element/


class Solution {
public:
    /** 
     *@param A: A list of integers
     *@param elem: An integer
     *@return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        // write your code here
        int len=A.size();
        vector<int> ans;
        for(int i=0;i<len;i++)
        {
            if(elem!=A[i])
                ans.push_back(A[i]);
        }
        A.clear();
        for(int i=0;i<ans.size();i++)
            A.push_back(ans[i]);
        return ans.size();
    }
};
