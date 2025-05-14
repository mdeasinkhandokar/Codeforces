    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long

    void solve(){
        ll n;
        cin>>n;
        vector<ll> arr(n);

        for(int i=0;i<n;i++)
            cin>>arr[i];

        ll p=1,j=0;
        while(j<n){
            int f=0;
            for(int k=j+1;k<min(n,p);k++){
                if(arr[k]<arr[k-1]){
                    cout<<"NO\n";
                    return ;
                }
            }
            j=p;
            p*=2;
        }
        cout<<"YES\n";
    }


    int main(){
        ll t;
        cin>>t;

        while(t--)
        solve();

        return 0;
    }
