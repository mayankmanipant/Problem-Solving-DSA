class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i=0,j=0;
        int n=nums.size();
        int sum=0,count=0;
        while(j<n){
            sum+=nums[j];
            while(i<j &&sum>goal){
                sum-=nums[i];
                i++;
            }
            if(sum==goal){
                int temp=i;
                while(temp<j && nums[temp]==0){
                    temp++;
                    count++;
                }
                count++;
            }
            j++;
        }
        return count;
    }
};
