class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>ans(n/3,vector<int>(3));
        sort(nums.begin(),nums.end());

        int idx=0;

        for(int i=0;i<n;i+=3){
            if(i+2<n && nums[i+2]-nums[i] <= k){
                ans[idx]={nums[i],nums[i+1],nums[i+2]};
                idx++;
            }
            else{
                return vector<vector<int>>();
            }
        }
        return ans;
    }
};
