class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>mp;
        int ans=0;
        for(auto it:words){
            string s=it;
            reverse(it.begin(),it.end());
            if(mp.find(it)==mp.end()){
                mp.insert(s);
            }
            else ans++;
        }
        return ans;
    }
};
