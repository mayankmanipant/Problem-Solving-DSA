class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto it:mp){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
