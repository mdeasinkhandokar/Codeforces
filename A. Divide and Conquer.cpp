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
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];

    }
    if(sum %2==0){
        cout<<0<<endl;
        continue;
    }
    int ans=INT_MAX;

    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            int x=a[i];
            int cnt=0;

            while((x%2==1)){
                x/=2;
                cnt++;

            }
            ans=min(ans,cnt);


        }
    }
    for(int i=0;i<n;i++){
    if(a[i]%2==0){
        int x=a[i],cnt=0;
         while(x>0 &&(x%2==0)){
            x/=2;
            cnt++;

         }
         ans=min(ans,cnt);

    }

}
cout<<ans<<endl;
}


return 0;
}


