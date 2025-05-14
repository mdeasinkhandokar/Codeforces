#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;

int t;
cin>>t;
while(t--){

    int n,r,b;
    cin>>n>>r>>b;

    int x=r/(b+1);
    int y=r%(b+1);


    while(b--){
            int z=x;
    if(y!=0) z++,y--;
    for(int i=0;i<z;i++)
    cout<<"R";
    cout<<"B";
    }
    if(y!=0)x++;
    for(int i=0;i<x;i++)
        cout<<"R";
 cout<<endl;
    }


















 return 0;
}


