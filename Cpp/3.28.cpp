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
             cout<<"���� ������1-8��ֵ";
             cin>>x;
        };
     };
    return x;
};
void d1(int x)//��һ�����㺯��
{
    if(x>0){
        cout<<"����";
    }
    else{
        cout<<"����";
    };
    cin.get();
    return ;
};
void d2(int x)//�ڶ������㺯��
{
    if(x%2==0){
        cout<<"ż��";
    }
    else{
        cout<<"����";
    };
    cin.get();
    return ;
};
void d3(int x,int y)//���������㺯��
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
        cout<<"���� �޷��ó����";
    }
    cin.get();
    return ;
};
void d4(int x)//���������㺯��
{
    if (x%400==0 or x%4/100!=0){
        cout<<"����ֵ������";
    }
    else {
        cout<<"����ֵ��������";
    };
    cin.get();
    return ;
};
void d5(int x)//���������㺯��
{
    if(x>=18){
        cout<<"�ѳ���";
    }
    else{
        cout<<"δ����";
    };
    cin.get();
    return ;
};
void d6(int x)//���������㺯��
{
    if(x<1000 and x>99){
        cout<<"����ֵ����λ��";
    }
    else{
        cout<<"����ֵ������λ��";
    };
    cin.get();
    return ;
};
void d7(int x,int y,int z)//���������㺯��
{
    if (x+y>z or x+z>y or z+y>x){
        cout<<"����ֵ���Ժϳ�������";
    }
    else {
        cout<<"����ֵ�޷��ϳ�������";
    };
    cin.get();
    return ;
};
void d8(int x)//�ڰ������㺯��
{
    if(1<=x<=15){
        x=x*6;
        cout<<"�˷�Ϊ"<<x;
    }
    else if (15<x<=100){
        x=15*6+(x-15)*9;
        cout<<"�˷�Ϊ"<<x;
    }
    else {
        cout<<"������������ ����Ӧ����0 С��100";
    };
    cin.get();
    return ;
};
void bshc(int pd){
//��һ������:
     int a,b,c;
    if(pd==1){
        cout<<"1. ����һ���������ж��Ƿ�������\n";
        cin>>a;
        d1(a);
     }
//�ڶ�������:
     else if(pd==2){
        cout<<"2. ����һ���������ж�����������ż��\n";
        cin>>a;
        d2(a);
     }
//����������:
     else if(pd==3){
        cout<<"3. ������������������нϴ���Ǹ���"<<endl
            <<"a:";
            cin>>a;
        cout<<"\nb:";
            cin>>b;
        d3(a,b);
     }
//����������:
     else if(pd==4){
        cout<<"4. �ж����ꡣ����һ������������ʾ��ݣ��ж���һ����ƽ�껹�����ꡣ"<<endl;
        cin>>a;
        d4(a);
     }
//����������:
     else if(pd==5){
        cout<<"5. ���ҷ�����������Ϊ 18 �꣬Ҳ����˵��һ������ 18 ����ǳ������ˡ���д���򣬸����������䣬�ж�ĳ�����Ƿ���ꡣ"<<endl;
        cin>>a;
        d5(a);
     }
//����������:
     else if(pd==6){
        cout<<"6. ����һ�����������ж��Ƿ�����λ����"<<endl;
        cin>>a;
        d6(a);
     }
//����������:
     else if(pd==7){
                cout<<"7. ����3������������ʾ3��Сľ�����ȣ��ж��Ƿ���ƴ��һ�������Ρ�"<<endl
            <<"a=";
            cin>>a;
        cout<<"b=";
            cin>>b;
        cout<<"c=";
            cin>>c;
        d7(a,b,c);
     }
//�ڰ�������:
     else if(pd==8){
        cout<<"���ڿ쵽�ˣ�С�׺Ͱְ�һ�������ʾ֣��������ס��ص�үү�����̼����ӵ�������ʾֵİ��̽��ܣ����˰������˷ѱ�׼�ǣ���������������15 ����ʱ��ÿ����6 Ԫ������ 15 ������䳬������ÿ���� 9 Ԫ������֪����������Ϊ X �����ͬѧ�Ǻ�С��һ������ʾֵİ��̼���һ�£��������˷� YӦΪ����Ԫ��"<<endl
            <<"x=";
            cin>>a;
            d8(a);
     }
//��һ��ifʱpdû��ͨ���κβ���ֵ�ж�ʽ
     else
     {
         cout<<"���� ����������"<<endl;
         cin.get();
     };
};
int main(void)
{
    int a,b,pd;
    cout<<"���������(1-8)";
    pd=pdhc();
    bshc(pd);
    cout<<"\n�����ѽ��� ����Enter�˳�main����";
    cin.get();
    return 0;
};