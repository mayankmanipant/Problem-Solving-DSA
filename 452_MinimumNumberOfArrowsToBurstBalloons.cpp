class Solution {
public:
static bool cmp(vector<int>&a,vector<int>&b){
    if(a[1]==b[1]) return a[0]<b[0];
    return a[1]<b[1];
}
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int e=points[0][1];
        int count=1;

        for(int i=1;i<points.size();i++){
            if(e<=points[i][1] && e>=points[i][0]) continue;
            else{
                count++;
                e=points[i][1];
            }
        }
        return count;
    }
};
