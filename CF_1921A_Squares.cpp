#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int mx=-1001,mnx=1001,my=-1001,mny=1001;
        for(int i=0;i<4;i++){
            int x,y;
            cin>>x>>y;
            mx=max(x,mx);
            mnx=min(x,mnx);
            my=max(y,my);
            mny=min(y,mny);
        }
        cout<<(mx-mnx)*(my-mny)<<endl;
        t--;
    }
}
