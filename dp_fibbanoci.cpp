#include<bits/stdc++.h>
using namespace std;
int dp[100008];
int fib(int n)
{
	if(n<=1){
		return n;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	return dp[n]=fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		dp[i]=-1;
	}
	cout<<fib(n-1)<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<dp[i]<<" ";
	}
	return 0;
}
