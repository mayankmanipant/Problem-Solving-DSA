class Solution {
public:
    int minDeletions(string s) {
        vector<int>freq(26,0);
        int ans=0;
        for(auto x:s){
            freq[x-'a']++;
        }

        priority_queue<int>pq;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                pq.push(freq[i]);
            }
        }

        while(pq.size()>1){
            int topele=pq.top();
            pq.pop();
            if(topele==pq.top()){
                if(topele-1>0){
                    pq.push(topele-1);
                }
                ans++;
            }
        }
        return ans;
    }
};
