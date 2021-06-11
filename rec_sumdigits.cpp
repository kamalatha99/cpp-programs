#include<bits/stdc++.h>
using namespace std;
int sum_digits(int num)
{
	if(num==0)
	{
		return 0;
	}
	return num%10+sum_digits(num/10);
}
int main()
{
	int num;
	cin>>num;
	cout<<sum_digits(num);
	return 0;
}
