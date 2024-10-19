class Solution {
public:

    int square(int n){
        int sum=0;
        while(n!=0){
            int rem=n%10;
            sum += rem*rem;
            n=n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_map<int,int>mp;
        while(n!=1){
            if(mp.find(n)!=mp.end())
                return false;
            else{
                mp[n]++;
                n=square(n);
            }
        }
        return true;
    }
};
