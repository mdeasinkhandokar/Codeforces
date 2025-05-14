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
    if(n==1){
        cout<<2<<endl;
        continue;

    }

    if(n==2 || n==3){
        cout<<1<<endl;
        continue;
    }
    if(n%3==0){
        cout<<n/3<<endl;

    }else if(n%3==1){

    cout<<(2+(n-4)/3)<<endl;
    }
    else if(n%3==2){
        cout<<(1+(n/3))<<endl;
    }




}






 return 0;
}

