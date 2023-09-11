class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[j]>k){
                count++;
                j=i;
            }
        }
        count++;
        return count;
    }
};
