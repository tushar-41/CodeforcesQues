#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        
        int strength_j = a[j-1];
        int stronger_count = 0;
        
        for(int i=0 ; i<n ; i++){
            if(a[i] > stronger_count){
                stronger_count = a[i];
            }
        }    
        
        if (k >= 2){
            cout << "YES\n";
        }else{
            if(a[j-1] == stronger_count){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }  
    }   
    return 0;
}
