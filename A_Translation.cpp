#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()  {
    ios::sync_with_stdio(false); cin.tie(NULL);

    string s,t;
    cin>>s>>t;
    reverse(t.begin(),t.end());
    if(s==t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;

    }
}