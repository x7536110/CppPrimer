#include<iostream>
using namespace std;
int main(int agrc,char* agrv[])
{
	int a,b;
	cin>>a>>b;
	int ans=0;
	for(int i=0;i<a;i++)
	{
		ans+=b;
	}
	cout<<ans<<endl;
	return 0;
}