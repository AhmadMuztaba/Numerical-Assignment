//don't know if it is right
#include<bits/stdc++.h>
using namespace std;
float county(int a,string n,int count){
   int i;
   int h=0;
   for(i=a-1;i>=0;i--){
                    if(h==0){
                        if(n[i]=='0'){
                            count--;
                        }
                        if(n[i]!='0'){
                            h=1;
                        }
                    }
                }
                return count;
}
int main(){
    string n;
    int a,i;
    int g=0;
    int p=0;
    int h=0;
    int al=0;
    int count=0;
    getline(cin,n);
    a=n.size();
    for(i=0;i<a;i++){
            if(n[i]!='0'||p==1){
              if(n[i]=='.'){
                    g=1;
                  continue;
             }
             count++;
             p=1;
          }
          if(i==(a-1)){
            if(g==0){
                count=county(a,n,count);
            }
          }
    }
    cout<<count<<endl;
    return 0;
}
