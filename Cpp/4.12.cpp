#include<bits/stdc++.h>
using namespace std;
int main(void){
    while(1){
    int a,b;
    srand(time(0));//定义随机值 随机刻来源于时间(1970标准)
    a=rand()%3+1;//随机值取为1-3的数 并且赋给a
    cout<<"随机刻为"<<time(0)<<endl;
    cout<<"随机值为"<<a<<endl;
    cout<<"1=石头 2=剪刀 3=布 \nb=";
    cin>>b;
    if(a==b){
        cout<<"It’s a tie!";
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