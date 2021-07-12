#include<bits/stdc++.h>
using namespace std;
float func(float x){
    float p=x*x*x-x-1;
    return p;
}
float check(float x,float y){
    float f1,f2,f3,f4,r,w;
    f1=func(x);
    f2=func(y);
    if(f1*f2<=0){
        while(fabs(y-x)>=0.005){
            f3=func(x);
            f4=func(y);
            r=(x+y)/2;
            w=func(r);

            if((w*f3)<0){
             y=r;
           }
            else if(w*f3>0){
            x=r;
            }
          }
     cout<<x<<endl;
     cout<<y<<endl;
    }
}

int main()
{
    float x,y;
    cout<<"x?"<<endl;
    cin>>x;
    cout<<"y"<<endl;
    cin>>y;

    check(x,y);
    return 0;
}
