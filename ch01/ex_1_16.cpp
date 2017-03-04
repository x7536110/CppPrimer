#include <iostream>
using namespace std;
int main(int agrc,char* agrv[])
{
	int sum=0;
	int temp=0;
	while(cin>>temp)
		sum+=temp;
	cout<<sum<<endl;
	return 0;
}