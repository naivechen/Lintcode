// http://lintcode.com/zh-cn/problem/unique-characters/


class Solution {
public:
    /**
     * @param str: a string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        // write your code here
        int a[1001];
        int num=1;
        map<char, int> ma;
        for(int i=0;i<str.length();i++)
        {
            if(ma[str[i]]==0) ma[str[i]]=num++;
            a[ma[str[i]]]++;
            if(a[ma[str[i]]]>1) return false;
        }
        return true;
    }
};
