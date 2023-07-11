class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        ans.push_back(first);
        int temp=first;
        for(int i=0;i<encoded.size();i++){
            temp=encoded[i]^temp;
            ans.push_back(temp);
        }
        return ans;
    }
};
