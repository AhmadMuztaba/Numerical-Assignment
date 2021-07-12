//not sure....
//x^3-6x+4
#include<bits/stdc++.h>
using namespace std;
float func(float x){
    float p=x*x*x-6*x+4;
return p;
}
float check(float x,float y){
    float z,a,b,c;
    a=func(x);
    b=func(y);
    if(a*b<0.00){
       do{
           z=(x+y)/2;
           c=func(z);
           if(a*c<0.00){
              y=z;
           }
           else if(a*c>0.00){
              x=z;
           }
           cout<<z<<endl;
        }
      while(fabs(x-y)>0.05);
    }
 return 0;
}
int main()
{
    float x0,x1;
    cout<<"x0"<<endl;// try 0.5
    cin>>x0;
    cout<<"x1"<<endl;// try 1.5
    cin>>x1;
    check(x0,x1);
    return 0;
}
