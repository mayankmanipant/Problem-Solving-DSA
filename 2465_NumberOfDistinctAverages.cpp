class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<float>s;
        int j=nums.size()-1;
        for(int i=0;i<nums.size()/2;i++){
            s.insert((float)(nums[i]+nums[j])/2);
            j--;
        }
        return s.size();
    }
};
