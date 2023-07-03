class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s;
        int j=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                s.insert(nums[i]);
        }
        for (auto it = s.begin(); it != s.end(); it++){
            if(*it==j){
                j++;
            }
            else return j;
        }
        return j;
    }
};
