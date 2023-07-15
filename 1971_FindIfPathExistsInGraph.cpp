class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>g;
        for(auto edge:edges){
            int a=edge[0],b=edge[1];
            g[a].push_back(b);
            g[b].push_back(a);
        }
        vector<bool>seen(n);
        seen[source]=true;
        queue<int>q;
        q.push(source);
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            if(curr==destination) return true;

            for(auto next:g[curr]){
                if(!seen[next]){
                    seen[next]=true;
                    q.push(next);
                }
            }
        }
        return false;
    }
};
