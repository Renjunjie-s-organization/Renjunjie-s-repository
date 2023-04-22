#include<iostream>
using namespace std;
float A(float a){
    if(a-(long long)a==0)
    return 1;
    else
    return 0;
};
int main()
{
    long long n,m,h,a,x,y;
    float z,l;
    cout<<"第一题\nn=";
    cin>>n;
    cout<<"m=";
    cin>>m;
    cout<<"h=";
    cin>>h;
    cout<<"a=";
    cin>>a;
    x = n*m*h;
    y = a*a*a;
    z = x/y;
    if(A(z)==0){
        cout<<"输出值为x="<<z;
    }
    else{
         cout<<"输出值为x="<<x;
    };
    cin.get();
    cin.get();
    return 0;  
};