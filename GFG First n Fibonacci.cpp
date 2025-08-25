// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int>ans;
        int x=0;
        int y=1;
        if(n==0){
            return ans;
        }
        ans.push_back(x);
        if(n==1){
            return ans;
        }
        ans.push_back(y);
        for(int i=0;i<n-2;i++){
            ans.push_back(ans[i]+ans[i+1]);

        }
        return ans;
    }
};
