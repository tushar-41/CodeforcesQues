#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,s;
        cin>>n>>s;
        int count = 0;

        vector<int> a(n);
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        int m ;
        m = min(abs(s-a[0])+a[n-1]-a[0],abs(s-a[n-1])+a[n-1]-a[0]);
        cout<<m; 
    }
    return 0;
}