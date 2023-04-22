#include<iostream>
using namespace std;
int main(void){
    int y;
    enum xy{zero=0,one=1,two=2,};
    y=xy(0)+xy(1)+xy(2);
    cout<<y;
    cin.get();
    return 0;
}
