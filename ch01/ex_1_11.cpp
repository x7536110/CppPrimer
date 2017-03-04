#include<iostream>
using namespace std;
int main(int agrc,char* agrv[])
{
	int num1,num2;
	int num3;
	cin>>num1>>num2;
	if(num1>num2)
		num3=num1,num1=num2,num2=num3;
	for(int i=num1;i<num2;i++)
	{
		cout<<i<<" ";
	}
	return 0;
}