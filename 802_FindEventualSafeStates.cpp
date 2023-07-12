class Solution {
public:
    bool dfs(int s,vector<bool>&visited,vector<bool>&dfsvisited,vector<vector<int>>& graph,vector<bool>&p){
        visited[s]=true;
        dfsvisited[s]=true;
        vector<int>data=graph[s];
        for(auto x:data){
            if(!visited[x]){
                if(dfs(x,visited,dfsvisited,graph,p)){
                    return p[s]=true;
                }
            }
            else if(visited[x] && dfsvisited[x]){
                return p[s]=true;
            }
        }
        dfsvisited[s]=false;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        int n=graph.size();
        vector<bool>visited(n,false), dfsvisited(n,false);
        vector<bool>p(n,false);

        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,visited,dfsvisited,graph,p);
            }
        }

        for(int i=0;i<n;i++){
            if(!p[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
