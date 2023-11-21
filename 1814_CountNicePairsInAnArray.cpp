class Solution {
public:
    int rev(int x){
        int num=0,rev=0;;
        while(x>0){
            num=x%10;
            rev=rev*10+num;
            x/=10;
        }
        return rev;
    }

    int countNicePairs(vector<int>& nums) {

        vector<int>r;
        int count=0;
        for(int i=0;i<nums.size();i++){
           r.push_back(nums[i]-rev(nums[i]));
        }
        
        int MOD=1e9+7;
        unordered_map<int,int> mp;
        for(auto x:r){
            count= (count+mp[x]) % MOD;
            mp[x]++;
        }
        return count;
    }
};
