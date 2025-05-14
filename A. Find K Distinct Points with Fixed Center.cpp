#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void code(){

int x,y,k;
cin>>x>>y>>k;

if(k%2){
    cout<<x<<" "<<y<<endl;

  k--;
}







for(int i=1;i<k/2+1;i++){
    cout<<x-i<<" "<<y-i<<endl;
    cout<<x+i<<" "<<y+i<<endl;
}

}

int main(){

optimize();

int t=1;
cin>>t;
while(t--){


    code();
}


return 0;
}



