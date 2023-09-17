class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count=1;
        stack<int>st;
        for(auto c:s){
            if(st.empty() && c=='('){
                st.push(c);
            }
            else if(c=='('){
                st.push(c);
                ans.push_back(c);
            }
            else if(c==')' && st.size()!=count){
                ans.push_back(c);
                count++;
            }
            else if(st.size()==count && c==')'){
                while (st.size()!=0) {
                    st.pop();
                }
                count=1;
            }
        }
        return ans;
    }
};
