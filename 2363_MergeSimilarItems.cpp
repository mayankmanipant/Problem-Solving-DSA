class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>>ans;
        map<int,int>mp;
        for(auto i=0;i<items1.size();i++){
            mp[items1[i][0]]=items1[i][1];
        }
        for(auto i=0;i<items2.size();i++){
            mp[items2[i][0]]+=items2[i][1];
        }
        for(auto x:mp){
            ans.push_back({x.first,x.second});
        }
        return ans;
    }
};
