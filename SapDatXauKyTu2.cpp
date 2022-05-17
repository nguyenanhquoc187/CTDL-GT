#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
        int d;
        cin >> d >> a;
		int n=a.size(),b[26]={},s=0;
		for(int i=0;i<n;i++){
			b[a[i]-'A']++;
			s=max(s,b[a[i]-'A']);
		}
		if( (s- 1)*(d-1)<=a.size() - s) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}