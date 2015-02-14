// http://lintcode.com/zh-cn/problem/rotate-string/


class Solution {
public:
  /**
     * param A: A string
     * param offset: Rotate string with offset.
     * return: Rotated string.
     */
    string rotateString(string A, int offset) {
        // wirte your code here
        string ans="";
        int len=A.length();
        if(len==0) return A;
        offset%=len;
        ans=A.substr(len-offset)+A.substr(0,len-offset);
        return ans;
    }
};
