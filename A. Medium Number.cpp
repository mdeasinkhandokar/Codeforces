#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){


Faster;
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;

int d=((a+b+c)-max({a,b,c})-min({a,b,c}));
cout<<d<<endl;

}
 return 0;
}

