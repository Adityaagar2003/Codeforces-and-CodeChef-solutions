#include<iostream>
using namespace std;
int main(){
    long long int a,b,c;
    cin>>a>>b>>c;
    
    int maxi=max(max(a,b),c);
    int mini=min(min(a,b),c);

cout<<mini<<" "<<maxi;
}