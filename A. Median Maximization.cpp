
/*
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;
int t;
cin>>t;
while(t--){

  ll n,s;
  cin>>n>>s;
  ll mid=(n+1)/2;
  mid=n-(mid-1);
  ll ans=s/mid;
  cout<<ans<<endl;



}






 return 0;
}
*/





#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;

int n,t1=0,t2=1,nexterm=0;
cin>>n;
for(int i=0;i<n;i++){
    if(i==1){
        cout<<t1<<", ";
    }
    if(i==2){
        cout<<t2<<",";
        continue;

    }
    nexterm=t1+t2;
    t1=t2;
    t2=nexterm;
    cout<<nexterm<<" ,";
}


 return 0;
}












