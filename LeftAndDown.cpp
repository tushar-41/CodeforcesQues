#include<bits/stdc++.h>
#include <numeric>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        int g = gcd(a,b);
        int need = max((a+k-1)/k,(b+k-1)/k);
        if(g >= need) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}