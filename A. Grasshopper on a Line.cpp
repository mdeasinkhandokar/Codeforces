#include<iostream>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){

optimize();

int t;
cin>>t;

while(t--){
    int x,k;
    cin>>x>>k;

    if(x<k||x%k!=0){
        cout<<1<<endl;
       cout<<x<<endl;
           continue;


        }
        cout<<2<<endl;
        cout<<1<<" "<<(x-1)<<endl;
    }

}








