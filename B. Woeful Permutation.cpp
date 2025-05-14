#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();
int t;
cin>>t;
while(t--){
    int n; cin>>n;

    if(n==1){
        cout<<1<<endl;
        continue;

    }
    if(n==2){
        cout<<"2 1"<<endl;
        continue;

    }
    vector<int>ans(n);

    for(int i=0;i<n;i++){
        ans[i]=i+1;

    }
    for(int i=0;i<n;i+=2){
        if(n%2!=0 && i==0){
            i++;

        }
        if(i+1<n){
            swap(ans[i],ans[i+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}




return 0;
}


