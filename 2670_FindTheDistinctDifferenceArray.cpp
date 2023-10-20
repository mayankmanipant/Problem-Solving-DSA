class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            set<int> pre;
            for(int j=0;j<=i;j++){
                pre.insert(nums[j]);
            }
            set<int> suf;
            for(int j=i+1;j<nums.size();j++){
                suf.insert(nums[j]);
            }
            ans.push_back(pre.size()-suf.size());
        }
        return ans;
    }
};
