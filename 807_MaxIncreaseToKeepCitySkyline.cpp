class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> rowMax;
        vector<int> colMax;
        int sum=0;

        for(int i=0;i<grid.size();i++){
            int rm=0;
            for(int j=0;j<grid.size();j++){
                rm=max(rm,grid[i][j]);
            }
            rowMax.push_back(rm);
        }

        for(int i=0;i<grid.size();i++){
            int cm=0;
            for(int j=0;j<grid.size();j++){
                cm=max(cm,grid[j][i]);
            }
            colMax.push_back(cm);
        }

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]>=rowMax[i] && grid[i][j]>=colMax[j])  continue;
                else{
                    if(rowMax[i]<colMax[j]){
                        sum+=abs(grid[i][j]-rowMax[i]);
                    }
                    else{
                        sum+=abs(grid[i][j]-colMax[j]);
                    }
                }
            }
        }
        return sum;
    }
};
