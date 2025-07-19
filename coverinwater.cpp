#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        int count = 0;
        bool flag = true;
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        for(int i=0 ; i<n ; i++){
            if(a[i] == 1) continue;
            if(a[i] == 0){
                count++;
                if(count>k){
                    cout<<count<<endl;
                    flag = false;
                    break;
                }
                if(a[i+2] == 1) continue;
            }
        }
        if(flag) cout<<0<<endl;
    }
    return 0;
}