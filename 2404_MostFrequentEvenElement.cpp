class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans=-1,res;
        map<int,int>mp;
        for(auto x:nums){
            if(x%2==0) mp[x]++;
        }
        if(mp.size()<1) return -1;
        for(auto it:mp){
            if(it.second>ans){
                ans=it.second;
                res=it.first;
            }
        }
        return res;
    }
};
