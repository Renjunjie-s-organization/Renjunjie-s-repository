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
             cout<<"���� ������1-5��ֵ";
             cin>>x;
        };
     };
    return x;
};
void d1(int x)//��һ�����㺯��
{
     int a,b,c;
     a=x%10;
     b=x/10%10;
     c=x/100;
     cout<<"��λ���ֵĺ�:"<<a+b+c<<endl;
     cin.get();
    return ;
};
void d2(int x)//�ڶ������㺯��
{
     int a,b,c;
     a=x%10;
     b=x/10%10;
     c=x/100;
     cout<<"��Ϊ:"<<a*100+b*10+c<<endl;
     cin.get();
    return ;
};
void d3(int x)//���������㺯��
{
    int a,b,c,d,e;
     a=x%10;
     b=x/10%10;
     c=x/100%10;
     d=x/1000%10;
     e=x/10000%10;
     cout<<"��Ϊ:"<<a*10000+b*1000+c*100+d*10+e<<endl;
     cin.get();
    return ;
};
void d4(int x,int y)//���������㺯��
{
     cout<<"��Ϊ:"<<endl<<y<<endl<<x;
     cin.get();
    return ;
};
void d5(int tou,int jiao)//���������㺯��
{
     int x,y;
     x  = (tou*4-jiao)/2;
     y  = tou - x;
     cout<<"��Ϊ"<<x<<",��Ϊ"<<y<<endl;
     cin.get();
    return ;
};
void bshc(int pd){
//��һ������:
     int a,b;
    if(pd==1){
         cout<<"\n1:����һ����λ��,�����λ���ֵĺ�"<<endl;//�����￪ʼӦ���Ǿ����ϵĵ����� 
         cin>>a;
      d1(a);
     }
//�ڶ�������:
     else if(pd==2){
         cout<<"\n2.����һ����λ�����������"<<endl;
         cin>>a;
         d2(a);
     }
//����������:
     else if(pd==3){
         cout<<"\n3.����һ����λ�����������"<<endl;
         cin>>a;
         d3(a);
     }
//����������:
     else if(pd==4){
         cout<<"\n������������a��b,�������ǵ�ֵ,Ȼ�����"<<endl
             <<"������a:";
         cin>>a;
         cout<<"������b:";
         cin>>b;
         d4(a,b);
     }
//����������:
     else if(pd==5){

        cout<<"\n5:����ͬ���������Ϊ��������ֱ��ʡ��С�����֣�"<<endl
            <<"������ͷ:";
         cin>>a;
        cout<<"�������:";
         cin>>b;
      d5(a,b);
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
    cout<<"���������(1-5)";
    pd=pdhc();
    bshc(pd);
    cout<<"\n�����ѽ��� ����Enter�˳�main����";
    cin.get();
    return 0;
};