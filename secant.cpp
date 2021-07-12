#include<bits/stdc++.h>
using namespace std;
float func(float x){
  float p=x*x-4*x-10;
  return p;
}

float check(float x0,float x1){
    float x2,a0,a1,a2,temp;

    do {
    a0=func(x0);
    a1=func(x1);
    x2=(x1-((a1*(x1-x0))/(a1-a0)));
    x0=x1;
    temp=x2;
    x2=x1;
    x1=temp;
    }
    while(fabs(x2-x1)>=0.001);
    cout<<x2<<endl;
}
int main()
{
    float x0,x1;
    cout<<"x0"<<endl;
    cin>>x0;
    cout<<"x1"<<endl;
    cin>>x1;
    check(x0,x1);
}
