#include<iostream>
using namespace std;
int pdhc(void)
{
     int x;
     cin>>x;
     while (true)
     {
        if (x>=0 and x<=8)
        {
             break;
        }
        else
        {
             cout<<"错误 请输入1-8的值";
             cin>>x;
        };
     };
    return x;
};
void d1(int x)//第一题运算函数
{
    if(x>0){
        cout<<"正数";
    }
    else{
        cout<<"负数";
    };
    cin.get();
    return ;
};
void d2(int x)//第二题运算函数
{
    if(x%2==0){
        cout<<"偶数";
    }
    else{
        cout<<"奇数";
    };
    cin.get();
    return ;
};
void d3(int x,int y)//第三题运算函数
{
    if(x>y){
        cout<<"\na>b";
    }
    else if(x<y){
        cout<<"\na<b";
    }
    else if(x=y){
        cout<<"\na=b";
    }
    else{
        cout<<"错误 无法得出结果";
    }
    cin.get();
    return ;
};
void d4(int x)//第四题运算函数
{
    if (x%400==0 or x%4/100!=0){
        cout<<"输入值是闰年";
    }
    else {
        cout<<"输入值不是闰年";
    };
    cin.get();
    return ;
};
void d5(int x)//第五题运算函数
{
    if(x>=18){
        cout<<"已成年";
    }
    else{
        cout<<"未成年";
    };
    cin.get();
    return ;
};
void d6(int x)//第六题运算函数
{
    if(x<1000 and x>99){
        cout<<"输入值是三位数";
    }
    else{
        cout<<"输入值不是三位数";
    };
    cin.get();
    return ;
};
void d7(int x,int y,int z)//第七题运算函数
{
    if (x+y>z or x+z>y or z+y>x){
        cout<<"输入值可以合成三角形";
    }
    else {
        cout<<"输入值无法合成三角形";
    };
    cin.get();
    return ;
};
void d8(int x)//第八题运算函数
{
    if(1<=x<=15){
        x=x*6;
        cout<<"运费为"<<x;
    }
    else if (15<x<=100){
        x=15*6+(x-15)*9;
        cout<<"运费为"<<x;
    }
    else {
        cout<<"错误输入数据 数据应大于0 小于100";
    };
    cin.get();
    return ;
};
void bshc(int pd){
//第一题主体:
     int a,b,c;
    if(pd==1){
        cout<<"1. 输入一个整数，判断是否是正数\n";
        cin>>a;
        d1(a);
     }
//第二题主体:
     else if(pd==2){
        cout<<"2. 输入一个整数，判断是奇数还是偶数\n";
        cin>>a;
        d2(a);
     }
//第三题主体:
     else if(pd==3){
        cout<<"3. 输入两个数，输出其中较大的那个数"<<endl
            <<"a:";
            cin>>a;
        cout<<"\nb:";
            cin>>b;
        d3(a,b);
     }
//第四题主体:
     else if(pd==4){
        cout<<"4. 判断闰年。输入一个正整数，表示年份，判断这一年是平年还是闰年。"<<endl;
        cin>>a;
        d4(a);
     }
//第五题主体:
     else if(pd==5){
        cout<<"5. 国家法定成年年龄为 18 岁，也就是说，一个人满 18 岁就是成年人了。编写程序，根据输入年龄，判断某个人是否成年。"<<endl;
        cin>>a;
        d5(a);
     }
//第六题主体:
     else if(pd==6){
        cout<<"6. 输入一个正整数，判断是否是三位数。"<<endl;
        cin>>a;
        d6(a);
     }
//第七题主体:
     else if(pd==7){
                cout<<"7. 输入3个正整数，表示3根小木棍长度，判断是否能拼成一个三角形。"<<endl
            <<"a=";
            cin>>a;
        cout<<"b=";
            cin>>b;
        cout<<"c=";
            cin>>c;
        d7(a,b,c);
     }
//第八题主体:
     else if(pd==8){
        cout<<"春节快到了，小白和爸爸一起来到邮局，打算给家住外地的爷爷、奶奶家里捎点年货。邮局的阿姨介绍，托运包裹的运费标准是：包裹重量不大于15 公斤时，每公斤6 元；超过 15 公斤后，其超过部分每公斤 9 元。现已知包裹的重量为 X 公斤，请同学们和小白一起帮助邮局的阿姨计算一下，包裹的运费 Y应为多少元？"<<endl
            <<"x=";
            cin>>a;
            d8(a);
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
    cout<<"请输入题号(1-8)";
    pd=pdhc();
    bshc(pd);
    cout<<"\n程序已结束 按下Enter退出main函数";
    cin.get();
    return 0;
};