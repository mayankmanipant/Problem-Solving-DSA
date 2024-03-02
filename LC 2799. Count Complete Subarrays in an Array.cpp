class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp1;
        for(auto x:nums){
            mp[x]++;
        }
        int ans=0;
        int i=0,j=0;
        int n=nums.size();

        while(j<n){
            mp1[nums[j]]++;
            if(mp1.size()<mp.size()){
                j++;
            }
            else if(mp.size()==mp1.size()){
                while(mp.size()==mp1.size()){
                    ans+=n-j;
                    mp1[nums[i]]--;
                    if(mp1[nums[i]]==0){
                        mp1.erase(nums[i]);
                    }
                    i++;
                }
                j++;
            }        
        }
        return ans;
    }
};
