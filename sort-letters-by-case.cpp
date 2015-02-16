// http://lintcode.com/zh-cn/problem/sort-letters-by-case/


class Solution {
public:
    /** 
     * @param chars: The letters array you should sort.
     */
    void sortLetters(string &letters) {
        // write your code here
        string str1="", str2="";
        int len=letters.length();
        for(int i=0;i<len;i++)
        {
            if(letters[i]>='a' && letters[i]<='z') str1+=letters[i];
            if(letters[i]>='A' && letters[i]<='Z') str2+=letters[i];
        }
        int n=0;
        for(int i=0;i<str1.length();i++)
            letters[n++]=str1[i];
        for(int i=0;i<str2.length();i++)
            letters[n++]=str2[i];
    }
};

