class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }

        int sum=0;
        bool oddcount=false;
        for(auto &x:mp){
            if(x.second%2==0){
                sum+=x.second;
            }
            else{                     //for odd count
                sum+=x.second-1;
                oddcount=true;
            }
        }
        if(oddcount){       //if odd count is found then increase the len by 1
            sum+=1;
        }
        return sum;
    }
};
