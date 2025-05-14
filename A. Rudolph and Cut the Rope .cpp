#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;

            int pos=x-y;
            ans+=pos>0;

        }
        cout<<ans<<endl;
    }







return 0;








}
