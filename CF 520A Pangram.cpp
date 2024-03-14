#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<26) {cout<<"NO";}

    else{
        unordered_map<char,int>mp;
        for(auto x:s){
            x=tolower(x);
            mp[x]++;
        }
        if(mp.size()==26) cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}
