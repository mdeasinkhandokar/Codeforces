#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);



///https://codeforces.com/problemset/problem/2065/B

int main(){

optimize();

int t;
cin>>t;

while(t--){

    string s;
    cin>>s;

    int n=s.size();

    for(int i=0;i<n-1;i++){
        if(s[i+1]==s[i]){
            n=1;
        }
    }
    cout<<n<<endl;
}




return 0;
}


