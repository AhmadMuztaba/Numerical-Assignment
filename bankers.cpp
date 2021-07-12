#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    int i,j,p,g,z;
    getline(cin,n);
    cin>>p;
    for(i=0;i<n.size();i++){
        if(n[i]=='.'){
            break;
        }
    }

        if(n[i+p+1]>'5'){
            n[i+p]=n[i+p]+1;
        }
        if(n[i+p+1]=='5'){
            if(n[i+p]%2!=0){
              n[i+p]=n[i+p]+1;
            }
        }

        g=i+p+1;
    for(z=0;z<g;z++){
        cout<<n[z];
    }
   return 0;
}
