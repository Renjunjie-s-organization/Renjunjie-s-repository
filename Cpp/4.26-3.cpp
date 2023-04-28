#include<iostream>
using namespace std;
int main(void){
	int n,m=1,z=1;
	int x=0,y=0; 
	cin>>n;
	for(;z<=n;z++)
	{
		cin>>x;
		if(x>=y){
			y=x;
		};
		if (n<=z){
		break; 
	};	
	};
	cout<<y;
	return 0;
}
