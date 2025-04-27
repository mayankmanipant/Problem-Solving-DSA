class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i=0,j=2,k=1;
        int count=0;
        while(i<j && j<nums.size()){
            float mid= nums[k]/2.0;
            float sum= nums[i]+nums[j];
            if(mid == sum ){
                count++;
            }
            i++;
            j++;
            k++;
        }
        return count;
    }
};
