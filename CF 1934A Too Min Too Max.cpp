#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t>0){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        int ans=abs(v[0]-v[n-1]) + abs(v[n-1]-v[1]) + abs(v[1] - v[n-2]) + abs(v[n-2]-v[0]);
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
