class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int mn=nums[0];
        int mx=nums[nums.size()-1];
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>mn && nums[i]<mx){
                count++;
            }
        }
        return count;
    }
};
