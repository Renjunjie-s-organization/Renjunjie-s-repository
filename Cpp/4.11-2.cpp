#include<iostream>
using namespace std;
int main(void) {
    int x;
    cout<<"x=";
    cin>>x;
    if(x>=90){
        cout<<"\n��";
    }
    else if(90>x>=70){
        cout<<"\n��";
    }
    else if(70>x>=60){
        cout<<"\n����";
    }
    else if(60>x){
        cout<<"\n������";
    };
    cin.get();
    cin.get();
    return 0;
}