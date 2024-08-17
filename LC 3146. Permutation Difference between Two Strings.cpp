class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum=0;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]= i;
        }
        for(int i=0;i<t.size();i++){
            mp2[t[i]]= i;
        }
        for(int i=0;i<s.size();i++){
            sum+=abs(mp1[s[i]] - mp2[s[i]]);
        }
        return sum;
    }
};

// Another Apporoach where space is saved

class Solution {
public:
    int findPermutationDifference(string s, string t) {
         int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            // Find the index of character s[i] in string t
            int indexInT = t.find(s[i]);
            
            sum += abs(i - indexInT);
        }
        return sum;
    }
};
