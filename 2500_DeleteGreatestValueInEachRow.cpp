class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        unordered_map<int,priority_queue<int>>mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                mp[i].push(grid[i][j]);
            }
        }

        int sum=0;
        for(int i=0;i<grid[0].size();i++){
            int m=-1;
            for(int j=0;j<grid.size();j++){
                int temp=mp[j].top();
                mp[j].pop();
                m=max(m,temp);
            }
            sum+=m;
        }
        return sum;
    }
};
