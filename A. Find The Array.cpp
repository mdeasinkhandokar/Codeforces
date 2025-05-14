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
    int sum=0;
    int cnt=0;
    int i=1;
    while(sum<n){
        cnt++;
        sum+=i;
        i+=2;
    }
    cout<<cnt<<endl;
}





 return 0;
}


