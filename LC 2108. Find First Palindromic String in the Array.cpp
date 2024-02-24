class Solution {
public:
    string rev(string str)
    {
        string res="";
        for (int i=str.length()-1;i >= 0;i--){
            res+=str[i];
        }
    return res;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto x:words){
            if(x == rev(x)){
                return x;
            }
        }
        return "";
    }
};
