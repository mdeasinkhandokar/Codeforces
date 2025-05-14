#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int sum(int x){

int add=0;

while(x!=0){
    int r=x%10;
    add+=r;
    x=x/10;
}

return add;
}


int main(){

optimize();

int t;
cin>>t;
while(t--){
    int x,k;cin>>x>>k;

    int sum1=sum(x);
    if(sum1%k==0)cout<<x<<endl;

    else{
        for(int i=x;i<x+1000;i++){
            int p=sum(i);
            if(p%k==0){
                cout<<i<<endl;
                break;
            }
        }
    }

}


return 0;
}


