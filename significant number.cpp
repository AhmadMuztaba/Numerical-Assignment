#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    int a,i;
    int p=0;
    int al=0;
    int count=0;
    getline(cin,n);
    a=n.size();
    for(i=0;i<a;i++){
            if(n[i]!='0'||p==1){
              if(n[i]=='.'){
                  continue;
             }
             count++;
             p=1;
          }
    }
    cout<<count<<endl;
    return 0;
}
