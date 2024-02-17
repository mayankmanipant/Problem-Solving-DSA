class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int j=0;
        int n=s.size();
        string st;
        int cnt=0;

        while(j<n){
            st+=s[j];
            if(st.size()<k){
                j++;
            }
            if(st.size()==k){
                if(stoi(st)!=0 && num % (stoi(st))==0){
                    cnt++;
                }
                st.erase(0, 1);
                j++;
            }
        }
        return cnt;
    }
};
