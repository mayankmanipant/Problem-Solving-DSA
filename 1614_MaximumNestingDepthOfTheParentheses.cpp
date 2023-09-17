class Solution {
public:
    int maxDepth(string s) {
        int count=0,ans=0;
        stack<int>st;
        for(auto c:s){
            if(c=='('){
                count++;
            }
            else if(c==')'){
                ans=max(count,ans);
                count--;
                st.pop();
            }
        }
        return ans;
    }
};
