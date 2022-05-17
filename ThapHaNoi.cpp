#include <bits/stdc++.h>
using namespace std;
char a='A',b='B',c='C';
void chuyen(int n, char a, char c) {
    // cout<<a<<" -> "<<c<<endl;
    cout<<"Chuyen dia thu "<< n << " tu coc " << a <<" sang coc "<<c<<endl;
}
void thap_ha_noi(int n, int a, int b, int c) {
    if (n==1) chuyen(1,a,c);
    else {
        thap_ha_noi(n-1,a,c,b);
        chuyen(n,a,c);
        thap_ha_noi(n-1,b,a,c);
    }
}
int main() {
    int n;
    cin >> n;
    thap_ha_noi(n,a,b,c);
}
