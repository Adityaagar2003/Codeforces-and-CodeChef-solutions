#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()  {
    ios::sync_with_stdio(false); cin.tie(NULL);

int n;
cin>>n;
while(n--){
    string s;
    cin>>s;
    int n=s.length();
    if(n>10){
        cout<<s[0]<<n-2<<s[n-1]<<endl;
    }else{
        cout<<s<<endl;
    }
}

      }
