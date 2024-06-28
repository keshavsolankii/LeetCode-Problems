class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int i=0;
        string s1 = strs[0], s2 = strs[strs.size()-1];
        while(i<s1.size() && i<s2.size())
        {
            char ch = s1[i];
            if(ch == s2[i])
                i++;
            else
                break;
        }
        return s1.substr(0, i);
    }
};
