#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();

ll t;
cin>>t;

while(t--){
    ll a,b;
    cin>>a>>b;
    if(2LL*a <=b){
        cout<<a<<" "<<2LL*a<<endl;

    }
    else
        cout<<-1<<" "<<-1<<endl;

}


return 0;
}


