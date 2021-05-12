#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,fc=0;
	cin>>n;
	for(i=2;i<=n-1;i++)
	{
		if (n%i==0)
		{
			fc++;
        }
	}
	cout<<"factors="<<fc<<endl;
	if(fc==0)
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not a prime";
	}
	return 0;
}
