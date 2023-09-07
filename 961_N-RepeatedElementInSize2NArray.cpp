class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int n=nums.size()/2;
        for(auto x:mp){
            if(x.second==n){
                return x.first;
            }
        }
    return 0;
    }
};
