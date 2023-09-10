class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(),piles.rend());
        int n=piles.size();
        int m=n-(n/3);

        int sum=0;
        for(int i=1;i<=m;){
            sum+=piles[i];
            i=i+2;
        }
        return sum;
    }
};
