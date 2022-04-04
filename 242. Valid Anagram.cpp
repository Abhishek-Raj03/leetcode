class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char ,int> mp1;
        unordered_map<char ,int> mp2;
        int m=s.size();
         int n=t.size();
        if(m!=n)
            return false;
        for(int i=0;i<m;i++)
            mp1[s[i]]++;
         for(int i=0;i<n;i++)
            mp2[t[i]]++;
        if(mp1==mp2)
            return true;
        else return false;
    }
};
