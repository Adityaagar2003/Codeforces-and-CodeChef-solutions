#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()  {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int x;   cin >> x;
    if(((x/1000)%2)==0){
        cout<<"EVEN"<<endl;
    }else{
        cout<<"ODD"<<endl;

    }
}