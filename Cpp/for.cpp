#include<iostream>
using namespace std;
int main(void) 
{
    int x[11]{'1','2','3','4','5','6','7','8','9','10','\0'};
    for (int i = 0; i < 11; i++)
    {
        cout<<x[i]<<endl;
    };
    cin.get();
    return 0;
}