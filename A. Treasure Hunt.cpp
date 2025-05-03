///https://codeforces.com/contest/2090/problem/A

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();
int t;
cin>>t;

while(t--){

        int x,y,a;
cin>>x>>y>>a;
a=a%(x+y);
if(a<x){
    cout<<"NO"<<endl;
}else{

cout<<"YES"<<endl;

}



}



return 0;
}

