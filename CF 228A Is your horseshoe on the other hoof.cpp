#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(4);
    unordered_map<int,int>mp;
    for(int i=0;i<4;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int n=mp.size();
    cout<<4-n;
}
