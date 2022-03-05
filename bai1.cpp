//bai1:tinhsonut
#include <iostream>
using namespace std;
int main (){
	int n, s;
	cin>>n;
	s=0;
	while (n>0)
	{
	s=s+n%10;
	n=n/10;}
	cout<<"so nut: "<<s%10;
	return 0;
}
