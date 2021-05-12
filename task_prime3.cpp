#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,fc=0;
	cin>>n;
    long int num=sqrt(n);
    cout<<num;
	for(i=2;i<=num;i++)
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
