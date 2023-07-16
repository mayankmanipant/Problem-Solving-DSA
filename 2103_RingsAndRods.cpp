class Solution {
public:
    int countPoints(string rings) {
        int cnt=0;
        set<char>s[10];
        for(int i=0;i<rings.size();i+=2){
                s[rings[i+1]-'0'].insert(rings[i]);
        }

        for(int i=0;i<10;i++){
            if(s[i].size()==3){
                cnt++;
            }
        }
        return cnt;
    }
};
