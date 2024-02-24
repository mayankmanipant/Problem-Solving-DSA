#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,res=0,count=0;
    cin>>n;
    vector<int>coins(n);

    for(int i=0;i<n;i++){
        cin>>coins[i];
        sum+=coins[i];
    }
    int div=sum/2;

    sort(coins.begin(),coins.end());

    for(int i=n-1;i>=0;i--){
        count++;
        res+=coins[i];
        if(res>div){
            cout<<count;
            break;
        }
    }
}
