// http://lintcode.com/zh-cn/problem/reverse-words-in-a-string/


class Solution {
public:
    /**
     * @param s : A string
     * @return : A string
     */
    string reverseWords(string s) {
        // write your code here
        string ans;
        for(int i=s.length()-1;i>=0; )
        {
            while(i>=0 && s[i] == ' ') i--;
            if(i<0) break;
            if(!ans.empty()) ans.push_back(' ');
            string t;
            while(i>=0 && s[i]!=' ') t.push_back(s[i--]);
            reverse(t.begin(), t.end());
            ans.append(t);
        }
        return ans;
    }
};

