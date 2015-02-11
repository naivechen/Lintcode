// http://lintcode.com/zh-cn/problem/compare-strings/


class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */
    bool compareStrings(string A, string B) {
        // write your code here
        int a[30];
        memset(a,0,sizeof(a));
        int lena = A.length() , lenb = B.length();
        for(int i = 0 ; i < lena ; i++)
        {
            a[A[i]-'A']++;
        }
        for(int i = 0 ; i < lenb ; i++)
        {
            int p = B[i] - 'A';
            a[p]--;
            if(a[p] < 0) return false;
        }
        return true;
    }
};

