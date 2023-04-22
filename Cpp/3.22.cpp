#include<iostream>
using namespace std;
int pdhc(void)
{
     int x;
     cin>>x;
     while (true)
     {
        if (x>=0 and x<=5)
        {
             break;
        }
        else
        {
             cout<<"错误 请输入1-5的值";
             cin>>x;
        };
     };
    return x;
};
void d1(int x)//第一题运算函数
{
     int a,b,c;
     a=x%10;
     b=x/10%10;
     c=x/100;
     cout<<"各位数字的和:"<<a+b+c<<endl;
     cin.get();
    return ;
};
void d2(int x)//第二题运算函数
{
     int a,b,c;
     a=x%10;
     b=x/10%10;
     c=x/100;
     cout<<"答案为:"<<a*100+b*10+c<<endl;
     cin.get();
    return ;
};
void d3(int x)//第三题运算函数
{
    int a,b,c,d,e;
     a=x%10;
     b=x/10%10;
     c=x/100%10;
     d=x/1000%10;
     e=x/10000%10;
     cout<<"答案为:"<<a*10000+b*1000+c*100+d*10+e<<endl;
     cin.get();
    return ;
};
void d4(int x,int y)//第四题运算函数
{
     cout<<"答案为:"<<endl<<y<<endl<<x;
     cin.get();
    return ;
};
void d5(int tou,int jiao)//第五题运算函数
{
     int x,y;
     x  = (tou*4-jiao)/2;
     y  = tou - x;
     cout<<"兔为"<<x<<",鸡为"<<y<<endl;
     cin.get();
    return ;
};
void bshc(int pd){
//第一题主体:
     int a,b;
    if(pd==1){
         cout<<"\n1:输入一个三位数,输出各位数字的和"<<endl;//从这里开始应该是卷子上的第六题 
         cin>>a;
      d1(a);
     }
//第二题主体:
     else if(pd==2){
         cout<<"\n2.输入一个三位数，输出倒数"<<endl;
         cin>>a;
         d2(a);
     }
//第三题主体:
     else if(pd==3){
         cout<<"\n3.输入一个五位数，倒序输出"<<endl;
         cin>>a;
         d3(a);
     }
//第四题主体:
     else if(pd==4){
         cout<<"\n输入两个整数a和b,交换他们的值,然后输出"<<endl
             <<"请输入a:";
         cin>>a;
         cout<<"请输入b:";
         cin>>b;
         d4(a,b);
     }
//第五题主体:
     else if(pd==5){

        cout<<"\n5:鸡兔同笼（结果若为非整数将直接省略小数部分）"<<endl
            <<"请输入头:";
         cin>>a;
        cout<<"请输入脚:";
         cin>>b;
      d5(a,b);
     }
//第一次if时pd没有通过任何布尔值判断式
     else
     {
         cout<<"错误 请重启程序"<<endl;
         cin.get();
     };
};
int main(void)
{
    int a,b,pd;
    cout<<"请输入题号(1-5)";
    pd=pdhc();
    bshc(pd);
    cout<<"\n程序已结束 按下Enter退出main函数";
    cin.get();
    return 0;
};