#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,c;
        cin>>n>>c;
        vector<long long>a(n);
        int ans = 0;
        bool flag = true;
        for(int i=0 ; i<n ; i++) cin>>a[i];
        for(int i=0 ; i<n ; i++){
            if(a[i]>c && flag){
                ans+=1;
                for(int j=i+1 ; j<n ; j++){
                    if(2*(a[j])>c){
                        ans+=1;
                    }
                }
            }else if(a[i]<=c && flag){
                for(int j=i+1 ; j<n ; j++){
                    if(2*(a[j])>c){
                        ans+=1;
                    }
                }
            }
            flag = false;
        }
        cout<<ans<<endl;
    }
    return 0;
}