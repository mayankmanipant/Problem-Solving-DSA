class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());

        int res=0,i=0;
        int n=events.size();

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int d=1;d<=100000;d++){
            //remove all the events that have ended
            while(!pq.empty() && pq.top()<d){
                pq.pop();
            }
            
            // add all the events that starts today
            while(i<n && events[i][0]==d){
                pq.push(events[i][1]);
                i++;
            }
            
            //attend the event that ends the earliest
            if(!pq.empty()){
                pq.pop();
                res++;
            }
        }
        return res;
    }
};
