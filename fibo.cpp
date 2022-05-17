#include<bits/stdc++.h>
using namespace std;
int f0 = 0, f1 = 1;
int fibo(int n) {
	if (n==0) return 0;
	if (n == 1) return 1;
	return fibo(n-1) + fibo(n-2);
}
int fibo2(int n) {
	int f;
	if (n<=1) return n;
	else {
		for (int i=2;i<=n;i++) {
			f = f0 + f1;
			f0= f1;
			f1 = f;
		}
	}
	return f;
}
int main () {
	int n;
	cin >> n;
	cout<<fibo(n)<<endl;
	cout<<fibo(n);
}

