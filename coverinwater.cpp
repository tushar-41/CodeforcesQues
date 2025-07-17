#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> a(n);
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        int count = 0;
        bool isCons = false;
        for(int i=0 ; i<n ; i++){
            if(a[i] == '.' && (a[i+1] == '.' && i<=n-1) && (a[i+2] == '.' && i<=n-2)){
                isCons = true;
                break;
            }else if(a[i] == '.'){
                count++;
            }
        }
    if(isCons){
        cout<<2<<endl;
    }else{
        cout<<count<<endl;
    }
    }
}