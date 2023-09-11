class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>>mp;
        vector<vector<int>>ans;
        int n=groupSizes.size();
        for(int i=0;i<n;i++){
            mp[groupSizes[i]].push_back(i);
        }
        for(auto it:mp){
            vector<int>v;
            int count=0;
            for(int i=0;i<it.second.size();i++){
                if(count==it.first){
                    ans.push_back(v);
                    count=0;
                    v.clear();
                }
                v.push_back(it.second[i]);
                count++;
            }
            ans.push_back(v);
        }
        return ans;
    }
};
