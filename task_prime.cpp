#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=2;i<=n-1;i++)
	{
		if (n%i==0)
		{
			cout<<"not a prime number";
			break;
		}
		else
		{
			cout<<"prime";
			break;
		}
	}
	return 0;
}
