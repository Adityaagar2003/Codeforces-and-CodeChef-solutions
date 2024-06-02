#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    int y=n;
    int m=n;
    int d=(m%365)%30;
    int year=y/365;
    int month=(m%365)/30;

cout<<year<<" years"<<endl;
cout<<month<<" months"<<endl;
cout<<d<<" days"<<endl;

}