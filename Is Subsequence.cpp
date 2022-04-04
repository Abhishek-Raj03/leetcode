class Solution {
public:
    bool isSubsequence(string s, string t) {
  /*       while (t[0]  && s[0])
    {
        if(s[0] == t[0])
        {
            s++;
        }
        t++;
    }
    return !s;
    */
        int i=0,j=0;
        for( ;i<t.size()&&j<s.size(); ){
            if(s[j]==t[i])
               j++;
            i++;
        }
        return !s[j];
    }
};
