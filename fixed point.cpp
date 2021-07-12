#include<bits/stdc++.h>
using namespace std;
float func(float x){
   float p=cos(x)-3*x+1;
   return p;
}
float func1(float x){
    float p=(cos(x)+1)/3;
    return p;
}
int main(){
    float x,x1;
  cout<<"initial value x="<<endl;
  cin>>x;

  do{
    x1=func1(x);
    cout<<"x1= "<<x1<<" x="<<x<<endl;

    x=x1;
  }
  while(func(x1)>0.0005);
  cout<<x<<endl;
 return 0;
}
