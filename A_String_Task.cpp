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
    for(auto i:s){
        i=tolower(i);
        if(!(i=='a'|| i=='e'||i=='i'||i=='o'||i=='u'||i=='y')){
            cout<<"."<<i;
        }
    }
}