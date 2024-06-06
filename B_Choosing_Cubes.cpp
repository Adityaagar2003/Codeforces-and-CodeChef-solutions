#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()  {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc;   cin >> tc;
    while(tc--){

         int n,f,k;
         cin>>n>>f>>k;
         vector<int> a(n);  
        
  for(int i=0;i<n;i++){
    cin>>a[i];
    
  }
  int fav_val = a[f - 1];
        sort(a.rbegin(), a.rend());
        
        int co_fav = count(a.begin(), a.begin() + k, fav_val);
        int tot_fav = count(a.begin(), a.end(), fav_val);
        
        if (tot_fav == co_fav) {
            cout << "YES" << endl;
        } else if (co_fav == 0) {
            cout << "NO" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }
}
