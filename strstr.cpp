// http://lintcode.com/en/problem/strstr/

// we can also use KMP and Boyer-Moore to solve it :) 

class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        if(!source || !target) return -1;
        int ls=strlen(source);
        int lt=strlen(target);
        if(ls==0 && lt==0) return 0;
        if(ls!=0 && lt==0) return 0;
        if(ls==0 && lt!=0) return -1;
        for(int i=0;i<ls;i++)
        {
            int flag=0;
            if(source[i]==target[0])
            {
                int ii=i;
                for(int j=0;j<lt;j++, ii++)
                {
                    if(source[ii]!=target[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0) 
                {
                    return i;
                }
            }
            
        }
        return -1;
    }
};

