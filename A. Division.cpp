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

    if(1900<=n){
        cout<<"Division 1"<<endl;


    }
   else if(n>=1600){
       cout<<"Division 2"<<endl;
    }
    else  if(n>=1400){
             cout<<"Division 3"<<endl;

    }
else {
         cout<<"Division 4"<<endl;
    }


}




 return 0;
}

