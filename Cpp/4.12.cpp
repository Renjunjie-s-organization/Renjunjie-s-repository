#include<bits/stdc++.h>
using namespace std;
int main(void){
    while(1){
    int a,b;
    srand(time(0));//�������ֵ �������Դ��ʱ��(1970��׼)
    a=rand()%3+1;//���ֵȡΪ1-3���� ���Ҹ���a
    cout<<"�����Ϊ"<<time(0)<<endl;
    cout<<"���ֵΪ"<<a<<endl;
    cout<<"1=ʯͷ 2=���� 3=�� \nb=";
    cin>>b;
    if(a==b){
        cout<<"It��s a tie!";
    }
    else if(a>b){
        cout<<"You lost!";
    }
    else if(a<b){
        cout<<"You win!";
    };
    cin.get();
    cin.get();
    };
    return 0;
}