class Solution {
public:
static bool cmp(vector<int>&a,vector<int>&b){
    if(a[1]==b[1]){
        return a[0]<b[0];
    }
    return a[1]<b[1];
}
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),cmp);
        
        int count=1;
        int e=intervals[0][1];
    
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=e){
                count++;
                e=max(e,intervals[i][1]);
            }
        }
        return n-count;
    }
};
