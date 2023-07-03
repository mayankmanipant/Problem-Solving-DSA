class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      vector<int>ans;
      int n=nums.size()/3;
      unordered_map<int,int>mp;
      for(auto x:nums){
          mp[x]++;
      } 
      for(auto it:mp){
          if(it.second>n) ans.push_back(it.first);
      }
      return ans;
    }
};
