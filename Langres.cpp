#include<bits/stdc++.h>
using namespace std;
int main()
{
    float r;
    float x[6];
    float y[6];
    int i;
    float answer;
    float h,u;

    cout<<"root"<<endl;
    cin>>r;

    cout<<"X"<<endl;
    for(i=0;i<4;i++){
        cin>>x[i];
    }
    cout<<"Y"<<endl;
    for(i=0;i<4;i++){
        cin>>y[i];
    }

    h=((r-x[1])*(r-x[2])*(r-x[3]));

    answer=((h/((x[0]-x[1])*(x[0]-x[2])*(x[0]-x[3])))*y[0])+((h/((x[1]-x[0])*(x[1]-x[2])*(x[1]-x[3])))*y[1])+((h/((x[2]-x[0])*(x[2]-x[1])*(x[2]-x[3])))*y[2])+((h/((x[3]-x[0])*(x[3]-x[2])*(x[3]-x[1])))*y[3]);
    cout<<answer<<endl;


    return 0;
}
