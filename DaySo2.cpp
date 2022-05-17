#include <bits/stdc++.h>
using namespace std;
void dequy(int j,int a[], int n,string &s) {
    s+="[";
    for (int i=0;i<n-j;i++)  {
        a[i]+=a[i+1];
        s= s+ to_string(a[i]);
        if (i != n- j - 1) s+=" ";
    }
    s+="]@";
    if (j == n -1 ) return ; else dequy(j+1,a,n,s);
}
string ReverseWord(string s) {
    string s1[100],result;
    s+=" ";
    int found = s.find("@"),i=0 ;
    while ( found !=string::npos ) {
        s1[i] = s.substr(0,found);
        s.erase(0,found + 1);
        found = s.find("@");
        i++;
    }
    for (int j= i-1;j>=0;j--) result= result  + s1[j] + " ";
    return result;

}
int main()
{
	int t;
	cin >> t;
	while (t--) {
        int n;
        cin >> n;
        int a[n];
        string s;
        s+="[";
        for (int i=0;i<n;i++) {
            cin >> a[i];
            s= s+ to_string(a[i]);  
            if (i!=n - 1) s+=" ";
        }
        s+="]@";
        if (n != 1) dequy(1,a,n,s);
        s = ReverseWord(s);
        cout<<s<<endl;
    }
}