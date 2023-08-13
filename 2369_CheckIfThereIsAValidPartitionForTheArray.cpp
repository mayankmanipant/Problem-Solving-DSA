class Solution {
public:
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        vector<bool> dp={true,false,n>1 && nums[0]==nums[1]};
        if(n==1){
            return false;
        }

        for(int i=2;i<n;i++){
            bool curr_dp=false;

            if(dp[1] && nums[i]==nums[i-1]){
                curr_dp=true;
            }
            if(dp[0] && nums[i]==nums[i-1] && nums[i]==nums[i-2]){
                curr_dp=true;
            }
            if(dp[0] && nums[i]==(nums[i-1]+1) && nums[i]==(nums[i-2]+2)){
                curr_dp=true;
            }
            dp[0]=dp[1];
            dp[1]=dp[2];
            dp[2]=curr_dp;
        }
        return dp[2];
    }
};
