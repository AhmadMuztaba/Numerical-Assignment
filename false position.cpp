#include<bits/stdc++.h>
using namespace std;
float func(float x){
     float p=(x*x)-x-2;
  return p;
}
float check(float x1,float x2){
    float x0,c,a,b;
     while(fabs(x2-x1)>=0.005){

        a=func(x1);
        b=func(x2);

        x0=(x1-((a*(x2-x1))/(b-a)));
         c=func(x0);
        if(c*a<=0.00){
            x2=x0;
        }
        else if(c*a>0.00){
            x1=x0;
        }
     }
    cout<<x0<<endl;
     return 0;
}
int main()
{
    float x1,x2;
    cout<<"x1 ="<<endl;
    cin>>x1;
    cout<<"x2= "<<endl;
    cin>>x2;
    check(x1,x2);
}
