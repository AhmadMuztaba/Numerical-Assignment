//polynomial of x^3-7x^2+15x-9=0 at x=3
#include<bits/stdc++.h>
using namespace std;
int main()
{
  float a3,a2,a1,a0,b0,b1,b2,b3,x;
  char s1,s2,s3,s0;
  cout<<"x="<<endl;
  cin>>x;
  cout<<"a3="<<endl;
  cin>>a3;
  cout<<"a2="<<endl;
  cin>>a2;
  cout<<"a1="<<endl;
  cin>>a1;
  cout<<"a0"<<endl;
  cin>>a0;

  b3=0;
  b2=a3+(b3*x);
  b1=a2+(b2*x);
  b0=a1+(b1*x);

  if(b0>0){
    s0='+';
  }
  if(b0<0){
    s0=' ';
  }
  if(b1>0){
    s1='+';
  }
  if(b1<0){
    s1=' ';
  }
  cout<<"so the answer is:"<<endl;
  cout<<b2<<"X^2"<<s1<<b1<<"X"<<s0<<b0<<endl;

  return 0;
}
