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
    int x,e=0,o=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0)e++;
        else o++;

    }
    cout<<min(e,o)<<endl;
}





 return 0;
}


