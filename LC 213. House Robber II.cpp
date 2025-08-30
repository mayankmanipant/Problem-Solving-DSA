class Solution {
public:
    int robLinear(const vector<int>& nums, int n) {
        int dp[105];
        dp[0] = nums[0];

        if (n == 1) return dp[0];

        dp[1] = max(dp[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[n - 1];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if( n==1 ) return nums[0];

        // Case 1: Exclude the last house
        int case1 = robLinear(vector<int>(nums.begin(), nums.end() - 1), n - 1);
        
        // Case 2: Exclude the first house
        int case2 = robLinear(vector<int>(nums.begin() + 1, nums.end()), n - 1);

        return max(case1, case2);
    }
};
