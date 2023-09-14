class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int count=0;
        map<int,int>mp;
        for(auto x:tasks){
            mp[x]++;
        }
        for(auto it:mp){
            if(it.second==1) return -1;
            else if(it.second==2 || it.second==3) count++;
            else if(it.second>3){
                int rem=it.second%3;
                count+=it.second/3;
                if(rem%2==0) count+=rem/2;
                else count++;
            }
        }
        return count;
    }
};
