#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///https://codeforces.com/contest/2072/problem/B

int main(){

optimize();
int n;
string a;
int t;
cin>>t;
while(t--){

   cin>>n>>a;
    ll s1 = count(a.begin(),a.end(),'_'),s2 = count(a.begin(),a.end(),'-');
    cout << (s2/2)*((s2+1)/2)*s1 << '\n';
}



return 0;
}


