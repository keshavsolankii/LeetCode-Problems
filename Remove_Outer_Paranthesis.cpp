class Solution {
public:
    string removeOuterParentheses(string s) {
        int store = 0;
        string temp = "";
        stack<char> st;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
                st.push(s[i]);
            if(s[i] == ')')
                st.pop();

            if(st.empty()){
                store = i+1;
                continue;
            }
            if(i != store)
                temp += s[i];
        }
        return temp;
    }
};
