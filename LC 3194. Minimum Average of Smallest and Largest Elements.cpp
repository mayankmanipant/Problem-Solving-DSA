class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double ans=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            ans=min(ans,((nums[i]+nums[n-1-i])/2.0));
        }
        return ans;
    }
};
