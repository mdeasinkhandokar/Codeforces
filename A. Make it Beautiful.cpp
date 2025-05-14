#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;


int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int ar[n+4];
    for(int i=0;i<n;i++) cin>>ar[i];
    if(ar[0]==ar[n-1])cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<ar[0]<<" ";
        for(int i=n-1;i>0;i--)cout<<ar[i]<<" ";
        cout<<endl;
    }
    }





 return 0;
}

