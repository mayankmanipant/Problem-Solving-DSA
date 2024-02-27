class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int ans=0;
        int n=nums.size();
        int i=0,j=0;
        
        while(j<n){
            if(j>0 && (nums[j]%2==nums[j-1]%2 || nums[j]>threshold)){
                i=j;
            }
            if(nums[i]%2!=0 || nums[i]>threshold)i++;

            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
