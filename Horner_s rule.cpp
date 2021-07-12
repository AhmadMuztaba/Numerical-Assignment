//F(X)=x^3-4X^2+X+6 evaluating using Horner's rule at x=2;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a3,a2,a1,a0,p0,p1,p2,p3,x;

    cout<<"x?"<<endl;
    cin>>x;
    cout<<"n?"<<endl;
    cin>>n;
    cout<<"a3?"<<endl;
    cin>>a3;
    cout<<"a2?"<<endl;
    cin>>a2;
    cout<<"a1?"<<endl;
    cin>>a1;
    cout<<"a0?"<<endl;
    cin>>a0;

    p3=a3;
    p2=(p3*x)+a2;
    p1=(p2*x)+a1;
    p0=(p1*x)+a0;

    cout<<p0<<endl;

return 0;
}

