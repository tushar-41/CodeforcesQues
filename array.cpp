#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0 ; i<n ; i++) cin>>a[i];
        int min_element = INT_MAX;
        for(int i=0 ; i<n ; i++){
            min_element = min(abs(a[i]),min_element);
        }
        cout<<min_element<<endl;
    }
    return 0;
}