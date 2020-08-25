#include <iostream>
using namespace std;
 
int main ()
{
	int n;
	cin>>n;
	string cl;
	int value=0;
	for (int i=1; i<=n; i++)
	{
		cin>>cl;
		if (cl=="++X") ++value;
		if (cl=="X++") value++;
		if (cl=="--X") --value;
		if (cl=="X--") value--;
	}
	cout<<value;
	return 0;
}
