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
    float y5[1];
    int i;
     float answer;
    float h,u;

    cout<<"root"<<endl;
    cin>>r;
    cout<<"year"<<endl;
    for(i=0;i<6;i++){
        cin>>x[i];
    }
    cout<<"Population"<<endl;
    for(i=0;i<6;i++){
        cin>>y[i];
    }
    for(i=0;i<5;i++){
        y1[i]=y[i+1]-y[i];
    }
    for(i=0;i<4;i++){
        y2[i]=y1[i+1]-y1[i];
    }
    for(i=0;i<3;i++){
        y3[i]=y2[i+1]-y2[i];
    }
    for(i=0;i<2;i++){
        y4[i]=y3[i+1]-y3[i];
    }
    for(i=0;i<1;i++){
        y5[i]=y4[i+1]-y4[i];
    }

    h=x[1]-x[0];
     u=((r-x[5])/h);


     answer=y[5]+(u*y1[4])+(u*(u+1)*(y2[3]/2))+(u*(u+1)*(u+2)*(y3[2]/6))+(u*(u+1)*(u+2)*(u+3)*(y4[1]/24))+(u*(u+1)*(u+2)*(u+3)*(u+4)*(y5[0]/120));
     cout<<answer<<endl;

    return 0;
}
