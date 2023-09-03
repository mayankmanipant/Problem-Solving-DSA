class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int ans=0,count=0;
        for(int i=0;i<arr.size();i++){
            if(i>=2 && (((arr[i-2]>arr[i-1])&&(arr[i-1]<arr[i])) || ((arr[i-2]<arr[i-1])&&(arr[i-1]>arr[i])))) count++;
            else if(i>=1 && arr[i-1]!=arr[i]) count=2;
            else count=1;
            ans=max(ans,count);
        }
        return ans;
    }
};
