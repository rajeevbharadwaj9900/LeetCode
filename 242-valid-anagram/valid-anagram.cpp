class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int j=0,k=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[j]==t[k])
            {
                j++;
                k++;
            }
            else return false;
        }
        return true;
    }
};