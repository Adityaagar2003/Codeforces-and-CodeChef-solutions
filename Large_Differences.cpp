#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int originalsum(int a[],int n){
                int sum=0;
             for(int i=0;i< n-1;i++){
                sum+=abs(a[i]-a[i+1]);
            }
            return sum;
}

signed main()  {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc;   cin >> tc;
    while(tc--){

            int n,k;
            cin>>n>>k;
            int a[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
            }

        int ori=originalsum(a,n);
            int maxsum=ori;
            for(int i=0;i<n;i++){
                int curr=a[i];
                int temp;

                if(curr!=1){
                    a[i]=1;
                    temp=originalsum(a,n);
                    maxsum=max(temp,maxsum);

                    a[i]=curr;
                }
                if(curr!=k){
                    a[i]=k;
                    temp=originalsum(a,n);
                    maxsum=max(temp,maxsum);
                    a[i]=curr;
                }
            }
cout<<maxsum<<endl;

      }
}