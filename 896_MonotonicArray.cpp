class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool ans1=true,ans2=true;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]) ans1=false;
            else if(nums[i]>nums[i-1]) ans2=false;
            if(!ans1 && !ans2) break;
        }

        return (ans1 || ans2);
    }
};
