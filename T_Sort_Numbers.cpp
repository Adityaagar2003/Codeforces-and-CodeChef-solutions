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

    int a, b, c;
    cin >> a >> b >> c;
    int x=a,y=b,z=c;
    if(a>b){
        swap(a,b);
    }
    if(b>c){
        swap(b,c);
        if(a>b){
            swap(a,b);
        }

        
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<" "<<endl;
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }
    
//     if (a < b && a < c)
//     {
//         cout << a << endl;
//         if (b < c)
//         {
//             cout << b << endl;
//             cout << c << endl;
//         }else{
//             cout << c << endl;
//             cout << b << endl;
            
//         }
//         cout<<" "<<endl;
//         cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;

//     }
//    else if (b < a && b < c)
//     {
//         cout << b << endl;
//         if (a < c)
//         {
//             cout << a << endl;
//             cout << c << endl;
//         }else{
//             cout << c << endl;
//             cout << a << endl;

//         }
//         cout<<" "<<endl;
//         cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;
//     }
//     else
//     {
//         cout << c << endl;
//         if (a < b)
//         {
//             cout << a << endl;
//             cout << b << endl;
//         }else{
//             cout << b << endl;
//             cout << a << endl;

//         }
//         cout<<" "<<endl;
//         cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;
//     }
}