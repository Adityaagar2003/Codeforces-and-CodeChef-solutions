#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()  {
    ios::sync_with_stdio(false); cin.tie(NULL);
string a,b;
cin>>a>>b;

for(int i=0;i<a.size();i++){
    a[i]=tolower(a[i]);
    b[i]=tolower(b[i]);

}
if(a==b){
    cout<<0<<endl;
}else if(a<b){
    cout<<-1<<endl;

}else{
    cout<<1<<endl;

}
}