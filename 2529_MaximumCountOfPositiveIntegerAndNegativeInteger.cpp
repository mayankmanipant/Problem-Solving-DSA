class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cnt=0,zero=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0) zero++;
            if(nums[i]<0) cnt++;
        }
        int ans=max(cnt,n-(cnt+zero));
        return ans;
    }
};
