class Solution {
  public:
    string FirstNonRepeating(string &s) {
        // Code here
        string ans="";
        unordered_map<char,int>mp;
        queue<char> q;
        
        for(char c:s){
            mp[c]++;
            q.push(c);
            
            while(!q.empty() && mp[q.front()]>1){
                q.pop();
            }
            if(!q.empty())
                ans+=q.front();
            else
                ans+='#';
        }
        return ans;
    }
};
