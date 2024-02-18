class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int i=0,j=0;
        int ans=INT_MAX,count=0;

        while(j < n){
            if(blocks[j]=='W')  
                    count++;
            if(j-i+1 >= k){
                ans=min(ans,count);
                if(blocks[i]=='W'){
                    count--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
