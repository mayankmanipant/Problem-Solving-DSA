class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>g(n+1,0);
        for(int i=0;i<trust.size();i++){
            g[trust[i][0]]--;
            g[trust[i][1]]++;
        }
        for(int i=1;i<=n;i++){
            if(g[i]==n-1) return i;
        }
        return -1;
    }
};
