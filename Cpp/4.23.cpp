#include<bits/stdc++.h>
int main(){
    while(1){
    int a,x;
    using namespace std;
    srand(time(0));
    a=rand()%9+0;
    cout<<"�����Ϊ"<<time(0)<<endl;
    cout<<"���ֵΪ"<<a<<endl;
    cout<<"���������:";
    cin>>x;
    if (x==a){
        cout<<"Yes,you are right\n";
    }
    else if(x>a){
        cout<<"It's too big\n";
    }
    else if(x<a){
        cout<<"It's too little\n";
    };
    cin.get();
    cin.get();
    }
    return 0;
}