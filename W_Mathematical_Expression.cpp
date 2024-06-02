#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b,c;
    char q,s;
    cin >> a;
    cin >> s;
    cin >> b;
    cin >> q;
    cin >> c;


    if (s == '+'){
        if(a+b==c) {
        cout << "Yes" << endl;
    }
    else
    {
        cout << a+b << endl;
    }
}
else if (s == '-'){
        if(a-b==c) {
        cout << "Yes" << endl;
    }
    else
    {
        cout << a-b << endl;
    }
}else{
       if(a*b==c) {
        cout << "Yes" << endl;
    }
    else
    {
        cout << a*b << endl;
    }
}
}
