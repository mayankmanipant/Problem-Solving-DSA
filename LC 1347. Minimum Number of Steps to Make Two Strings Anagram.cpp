class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mps;
        int count=0;

        for(auto x:s){
            mps[x]++;
        }
        for(auto it:t){
            
            if(mps.find(it)==mps.end()){
                count++;;
            }
            else {
                mps[it]--;
                if(mps[it]==0){
                    mps.erase(it);
                }
            }
        }
        return count;
    }
};
