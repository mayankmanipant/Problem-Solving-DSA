class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=INT_MIN,res=0;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto it:mp){
            ans=max(ans,it.second);
        }
        for(auto it:mp){
            if(it.second==ans){
                res+=ans;
            }
        }
        return res;
    }
};
