#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int i=0,j=0,total_time=0,max_books=0;
    
    while(j<n){
        total_time+=a[j];
        
        while(total_time>t){
            total_time-=a[i];
            i++;
        }
        max_books=max(max_books,j-i+1);
        j++;
    }

    cout<<max_books;
}
