#include<iostream>
using namespace std;
int main(void) {
    int x;
    cout<<"x=";
    cin>>x;
    if(x>=90){
        cout<<"\n优";
    }
    else if(90>x>=70){
        cout<<"\n良";
    }
    else if(70>x>=60){
        cout<<"\n及格";
    }
    else if(60>x){
        cout<<"\n不及格";
    };
    cin.get();
    cin.get();
    return 0;
}