#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()  {
    ios::sync_with_stdio(false); cin.tie(NULL);

    char x;   cin >> x;
 if(x>=48&&x<=57){

    cout<<"IS DIGIT"<<endl;
 }else{
    cout<<"ALPHA"<<endl;
    if(x>=65&&x<=91){
    cout<<"IS CAPITAL"<<endl;

    }else{
    cout<<"IS SMALL"<<endl;

    }
 }
}