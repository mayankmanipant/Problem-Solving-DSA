class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        int count=0;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size();i++){
            if(K>=arr[i]){
                count++;
                K-=arr[i];
            }
            else{
                break;
            }
        }
        return count;
    }
};
