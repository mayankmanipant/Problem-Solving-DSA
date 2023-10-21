class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int r=rowSum.size();
        int c=colSum.size();
        vector<vector<int>> ans(r,vector<int>(c));
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                int val=min(rowSum[j],colSum[i]);
                rowSum[j]-=val;
                colSum[i]-=val;
                ans[j][i]=val;
            }
        }
        return ans;
    }
};
