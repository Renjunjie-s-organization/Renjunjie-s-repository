#include<iostream>
using namespace std;
void d6(int);
void d7(int);
void d8(int);
void d9(int);
void d10(void);
int main(void)
{
    int a,b,c,d,e;
    cout<<endl<<"输入一个三位数，输出各位数字的和"<<endl;
    cin>>a;
    d6(a);
    cout<<endl<<"输入一个三位数，倒序输出。"<<endl;
    cin>>b;
    cin.get();
    return 0;
};
void d6(int x)
{
    int a,b,c;
    a=x%10;
    b=x/10%10;
    c=x/100;
    cout<<"各位数字的和:"<<a+b+c;
    void d10(void);
    cin.get();
    return ;
};
void d10(void)
{
    int tu,ji,tou;
    cout<<"请分别输入兔、鸡、头";
    cin >>tu
        >>ji
        >>tou;
    tu = (tou*4)/2;
    ji = tou - ju;
    
}