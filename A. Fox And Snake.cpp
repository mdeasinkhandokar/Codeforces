#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;
int a,b;
cin>>a>>b;

int m=(a-1)/2;
if(m%2==1){
    for(int i=0;i<m/2; i++){
    for(int i=0;i<b;i++){
            cout<<'#';

        }
    cout<<endl;

    for(int i=0;i<b-1;i++){
        cout<<'.';

    }
    cout<<'#';
    cout<<endl;
    for(int i=0;i<b;i++){
        cout<<'#';
    }
    cout<<endl;
    cout<<'#';
    for(int i=0;i<b-1;i++){
        cout<<'.';

    }
    cout<<endl;

}
for(int i=0;i<b;i++){
    cout<<'#';

}
//cout<<'#';
cout<<endl;
for(int i=0;i<b;i++){
    cout<<'.';
}
for(int i=0;i<b;i++){
    cout<<'#';
}

}
else{
    for(int i=0;i<m/2; i++){
        for(int i=0;i<b;i++){
            cout<<'#'<<endl;
                    }
                    cout<<endl;
                    for(int i=0;i<b-1;i++){
                        cout<<'.'<<endl;

                    }
                    cout<<'#'<<endl;
                    for(int i=0;i<b-1;i++){
                        cout<<'.'<<endl;

                    }
                    cout<<endl;
    }
    for(int i=0;i<b;i++){
        cout<<'#'<<endl;
    }


    }



 return 0;
}

