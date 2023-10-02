class Solution {
public:
int findSum(int n){
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;
        int ans=1;
        for(int i=lowLimit;i<=highLimit;i++){
            int n=findSum(i);
            if(mp.find(n)!=mp.end()){
                ans=max(ans,mp[n]+1);
            }
            mp[n]++;
        }
        return ans;
    }
};
