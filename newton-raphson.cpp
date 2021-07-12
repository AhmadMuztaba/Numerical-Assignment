#include<bits/stdc++.h>
using namespace std;
float func(float x){
      float p=x*x*x-6*x+4;
   return p;
}
float func1(float x){
     float g=3*x*x-6;
     return g;
}
float check(float x0){
 float x1,a,b,temp;
 do{
    a=func(x0);
    b=func1(x0);
    x1=x0-(a/b);

    temp=x0;
    x0=x1;
    x1=temp;

 }
 while(fabs(x1-x0)>=0.005);
 cout<<x0<<endl;

return 0;
}

int main(){
float x0;
cout<<"x0 ="<<endl;
cin>>x0;
check(x0);
return 0;
}
