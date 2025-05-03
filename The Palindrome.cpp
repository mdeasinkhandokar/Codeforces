#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


///https://www.hackerearth.com/problem/algorithm/the-palindrome-2/



int main(){

optimize();

int t;
cin>>t;
while(t--){

    string s;
    cin>>s;

    string tmp=s;
    reverse(tmp.begin(),tmp.end());
    if(tmp==s){
        cout<<"Yes"<<endl;

    }else{
        cout<<"No"<<endl;

    }
}


return 0;
}


