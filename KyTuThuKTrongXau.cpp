#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        long long x= pow(2,n);
        while (1) {
            if (k == x/2 ) {    
                cout<<(char) (n+'A' -1);
                break;
            } 
            if (k > x/2) {
                k = k - x/2;
            }
            n--;
            x = pow(2,n);
            
        }
        cout<<endl;
    }
}