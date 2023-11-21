class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
        long long totalPair = static_cast<long long>(n) * (n - 1) / 2;
        int goodPair=0;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]-i);
        }
         
        unordered_map<long long,long long>mp;
        for(auto x:ans){
            goodPair+=mp[x];
            mp[x]++;
        }
        if (mp.size()<=1) return 0;
        return totalPair - goodPair;
    }
};
