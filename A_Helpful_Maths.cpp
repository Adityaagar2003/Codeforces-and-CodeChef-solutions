#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()  {
    ios::sync_with_stdio(false); cin.tie(NULL);

    string s;
    cin>>s;
    string r;
    for(int i=0;i<s.size();i+=2){
        r+=s[i];
    }
    sort(r.begin(),r.end());
    for (int i = 0; i < r.size()-1; i++)
    {
        cout<<r[i]<<"+";
    }
    cout<<r.back();
    
}