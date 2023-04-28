#include<iostream> 
using namespace std;
int main(void){
	int x,y,z;
	cin>>x>>y;
	if(x/2==0){
		x=x+1;
	};
	for(;x<=y;){
		z=x+z;
		x=x+2;
	};
	cout<<z;
}
