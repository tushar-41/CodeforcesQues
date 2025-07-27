#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        vector<char> final;
        int t = 0;
        int f = 0;
        int n = 0;
        for(char c:a){
            if(c == 'T') t++;
            else if(c == 'F') f++;
            else if(c == 'N') n++;
            else final.push_back(c);
        }
        for(int i=1 ; i<=t ; i++) cout<<"T";
        for(int i=1 ; i<=f ; i++) cout<<"F";
        for(int i=1 ; i<=n ; i++) cout<<"N";
        for(char o:final) cout<<o;
        cout<<endl;
    }
    return 0;
}