#include<bits/stdc++.h>
using namespace std;
int main()
{
    float r;
    float x[6];
    float y[6];
    float y1[5];
    float y2[4];
    float y3[3];
    float y4[2];
    int i;
     float answer;
    float h,u;

    cout<<"root"<<endl;
    cin>>r;
    cout<<"Temparature"<<endl;
    for(i=0;i<5;i++){
        cin>>x[i];
    }
    cout<<"Pressure"<<endl;
    for(i=0;i<5;i++){
        cin>>y[i];
    }
    for(i=0;i<4;i++){
        y1[i]=y[i+1]-y[i];
    }
    for(i=0;i<3;i++){
        y2[i]=y1[i+1]-y1[i];
    }
    for(i=0;i<2;i++){
        y3[i]=y2[i+1]-y2[i];
    }
    for(i=0;i<1;i++){
        y4[i]=y3[i+1]-y3[i];
    }

    h=x[1]-x[0];
     u=((r-x[0])/h);


     answer=y[0]+(u*y1[0])+(u*(u-1)*(y2[0]/2))+(u*(u-1)*(u-2)*(y3[0]/6))+(u*(u-1)*(u-2)*(u-3)*(y4[0]/24));
     cout<<answer<<endl;

    return 0;
}
