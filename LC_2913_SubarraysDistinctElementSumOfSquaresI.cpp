class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            set<int>st;
            for(int j=i;j<nums.size();j++){
                st.insert(nums[j]);
                int n=st.size();
                sum+=pow(n,2);
            }
        }
        return sum;
    }
};
