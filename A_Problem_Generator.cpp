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

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
int prob=0;
int pro[7]={0}; 

for(auto i:a){
    if(i=='A'){
        pro[0]++;
    }
    else if(i=='B'){
        pro[1]++;
    }else if(i=='B'){
        pro[1]++;
    }else if(i=='C'){
        pro[2]++;
    }else if(i=='D'){
        pro[3]++;
    }else if(i=='E'){
        pro[4]++;
    }else if(i=='F'){
        pro[5]++;
    }else {
        pro[6]++;
    }
}
for (auto j: pro)
{
    if(j<m){
        prob+=m-j;
    }
}
cout<<prob<<endl;


    }
}