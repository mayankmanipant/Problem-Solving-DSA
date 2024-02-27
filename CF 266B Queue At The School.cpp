#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;

    string s;
    cin>>s;
    while(t>0){
        for(int i=0;i<s.size();){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i+=2;
            }
            else{
                i++;
            }
        }
        t--;
    }
    cout<<s;
}
