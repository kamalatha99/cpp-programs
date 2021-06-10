#include<bits/stdc++.h>
using namespace std;
bool isprime(int n,int i=2)
{
	if(n<=2){
		if(n==2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(n%i==0)
	{
		return false;
	}
	if(i*i>n)
	{
		return true;
	}
	isprime(n,i+1);
}
int main()
{
	int n;
	cin>>n;
	cout<<isprime(n);
	return 0;
}
