class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()/2;
        for(int i=0;i<nums.size();){
            if(nums[i]!=nums[i+1]){
                return false;
            }
            i=i+2;
        }
        return true;
    }
};
