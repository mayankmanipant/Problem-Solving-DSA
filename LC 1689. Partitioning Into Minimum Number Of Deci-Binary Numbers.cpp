class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(char dig:n){
            ans=max(ans,dig-'0');
        }
        return ans;
    }
};
