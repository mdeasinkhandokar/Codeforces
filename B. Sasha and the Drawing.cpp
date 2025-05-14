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
    int n,k;
    cin>>n>>k;

    int total=4*n-2;

    if(total ==k)cout<<2*n<<endl;
    else if(k%2==0)cout<<k/2<<endl;
    else cout<<k/2+1<<endl;

}



return 0;
}


