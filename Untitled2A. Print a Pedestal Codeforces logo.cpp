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

    int a,b,c;
   a=n/3;
   b=a;
   c=a;
   int x=n%3;
   x+=3;
   a--;
   b--;
   c--;
   if(x==3)a+=2,b+=1;
   else if(x==4)a+=3,b+=1;
   else if(x==5)a+=3,b+=2;
   cout<<b<<" "<<a<<" "<<c<<endl;


}





 return 0;
}


