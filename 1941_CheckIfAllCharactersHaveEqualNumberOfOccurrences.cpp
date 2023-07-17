class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        vector<int>v;
        for(auto x:mp){
            v.push_back(x.second);
        }
        
        for(int i=0;i<v.size()-1;i++){
            if(v[i]!=v[i+1]){
                return false;
            }
        }
        return true;
    }
};
