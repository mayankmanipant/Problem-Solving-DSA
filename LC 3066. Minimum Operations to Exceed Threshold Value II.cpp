class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long int count=0;
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
        for(auto x:nums){
            pq.push(x);
        }
        while(pq.top()<k){
            long long int x=pq.top();
            pq.pop();
            long long int y=pq.top();
            pq.pop();
            long long int num=x*2+y;
            pq.push(num);
            count++;
        }
        return count;
    }
};
