#include<iostream>
using namespace std;
int main()
{
    long long n,m,h,a,s,x,y,z;
    cin>>n;
    cin>>m;
    cin>>h;
    cin>>a;

    x = n/a;
    if(n%a>0)
    x=x+1;

    y= m/a;
    if(m%a>0)
    y=y+1;

    z=h/a;
    if(h%a>0)
    z=z+1;

    s=x*y*z;
    cout<<s;
    cin.get();
    cin.get();
    return 0;  
};