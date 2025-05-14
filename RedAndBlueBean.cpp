#include<bits/stdc++.h>
using namespace std;



int main(){

int t;
cin>>t;

while(t--){

    long long a,b,c;
    cin>>a>>b>>c;

    long long x;
 if(c==0){
    if( a==b)cout<< "YES"<<endl;
    else cout<< "NO"<<endl;
    continue;

 }
else {
    long long  aa=max(a,b);
    long long bb =min(a,b);
    c++;
    x=bb*c;
    if(x>=aa)cout<< "YES"<<endl;
    else cout<<"NO"<<endl;
}
}

return 0;


}














