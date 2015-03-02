// http://lintcode.com/en/problem/single-number-iii/


class Solution {
public:
    /**
     * @param A : An integer array
     * @return : Two integers
     */
    vector<int> singleNumberIII(vector<int> &A) {
        // write your code here
        vector<int> ans;
        int tmp=0, len=A.size();
        for(int i=0;i<len;i++)
            tmp^=A[i];
        int mark=0;
        for(int i=0;i<32;i++)
            if((tmp & (1<<i))!=0)
            {
                mark=1<<i;
                break;
            }
        int first=0;
        for(int i=0;i<len;i++)
            if((mark & A[i])!=0)
                first^=A[i];
        ans.push_back(first);
        ans.push_back(tmp^first);
        return ans;
    }
};
