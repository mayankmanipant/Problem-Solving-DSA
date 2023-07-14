class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        vector<int>ans;
        for(auto x:arr1){
            mp[x]++;
        }
        for(auto it:arr2){
            if(mp.find(it)!=mp.end()){
                while(mp[it]--){
                    ans.push_back(it);
                }
                mp.erase(it);
            }
        }
        for(auto x:mp){
            while(x.second--){
                ans.push_back(x.first);
            }
            mp.erase(x.first);
        }
        return ans;
    }
};
