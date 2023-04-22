#include<iostream>
using namespace std;
int main(void){
    int x,y;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    if(x<80){
        cout<<"\nC";
    }
    else if(x>=80 and y<80){
        cout<<"\nB";
    }
    else if(x>=80 and y>=80){
        cout<<"\nA";
    }
    else{
        cout<<"´íÎó ÖØÆô³ÌÐò";
    };
    cin.get();
    cin.get();
    return 0;
}