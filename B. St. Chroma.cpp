
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
    int n,x;
    cin>>n>>x;

    if(n==1){
        cout<<0<<endl;
        return 1;

    }
    for(int i=0;i<n;i++){
        if(i!=x)
            cout<<i<< " ";
        }
        if(x<n)
            cout<<x<<endl;

        else
            cout<<endl;

}

return 0;
}

