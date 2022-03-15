#include<iostream>
using namespace std;
int main()
{
	int n,s;
	cout<<"Nhap so dien la: "; cin>>n;
	if(n>=0 && n<=100) s=n*2000;
	else if(n<=200) s=n*2500;
	else if(n<=300) s=n*3000;
	else if(n>300) s=n*5000;
	cout<<"So tien dien la:"<<s;
	return 0;
}
