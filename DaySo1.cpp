#include <bits/stdc++.h>
using namespace std;
void dequy(int j,int a[], int n) {
    cout<<"[";
    for (int i=0;i<n-j;i++)  {
        a[i]+=a[i+1];
        cout<<a[i];
        if (i != n- j - 1) cout<<" ";
    }
    cout<<"]"<<endl;
    if (j == n -1 ) return ; else dequy(j+1,a,n);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
        int n;
        cin >> n;
        int a[n];
        cout<<"[";
        for (int i=0;i<n;i++) {
            cin >> a[i];
            cout<<a[i];
            if (i!=n - 1) cout<<" ";
        }
        cout<<"]"<<endl;
        if (n != 1) dequy(1,a,n);
    }
}