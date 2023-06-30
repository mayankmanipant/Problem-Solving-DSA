class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            vector<int>v;
            int n=nums[i];
            while(n>=1){
                int m=n%10;
                v.push_back(m);
                n=n/10;
            }
            reverse(v.begin(),v.end());
            ans.insert(ans.end(), v.begin(), v.end());
        }
        return ans;
    }
};
