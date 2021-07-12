#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x[6];
    float y[6];
    float y1[5];
    float y2[4];
    float y3[3];
    float y4[2];
    int i;

    cout<<"x"<<endl;
    for(i=0;i<5;i++){
        cin>>x[i];
    }
    cout<<"y"<<endl;
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
    cout<<"y0"<<endl;
    for(i=0;i<1;i++){
        y4[i]=y3[i+1]-y3[i];
    }
    cout<<"y1"<<endl;
    for(i=0;i<4;i++){
        cout<<y1[i]<<endl;
    }
    cout<<"y2"<<endl;
    for(i=0;i<3;i++){
         cout<<y2[i]<<endl;
    }
    cout<<"y3"<<endl;
     for(i=0;i<2;i++){
         cout<<y3[i]<<endl;
    }
    cout<<"y4"<<endl;
     for(i=0;i<1;i++){
         cout<<y4[i]<<endl;
    }
    return 0;
}
