#include <iostream>
using std::cout;
using std::endl;
int main(int argc,char* argv[])
{
	int ans=0;
	int cur=50;
	while(cur<=100)
	{
		ans+=cur;
		cur++;
	}
	cout<<ans<<endl;
	return 0;
}