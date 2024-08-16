class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int min_val=INT_MAX;
        int max_val=INT_MIN;
        int max_dis=0;
        for(auto x:arrays){
            int curr_min=x.front();
            int curr_max=x.back();

            if(min_val != INT_MAX){
                max_dis=max(max_dis,abs(curr_max-min_val));
                max_dis=max(max_dis,abs(curr_min-max_val));
            }
            min_val=min(min_val,curr_min);
            max_val=max(max_val,curr_max);
        }
        return max_dis;
    }
};
