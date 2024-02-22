class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.size()==1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size(),i=0,j=0,ans=INT_MAX;
        
        while(j<n){
            if(j-i+1==k){
                ans=min(ans,nums[j]-nums[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};
