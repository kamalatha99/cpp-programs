#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=6,p,x,ind;
	int arr[n]={9,10,12,30,99};
	cout<<"enter position for the element";
	cin>>p;
	cout<<"enter element:";
	cin>>x;
	ind=p-1;
	for(int i=n-1;i>=ind;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[ind]=x;
	for(int j=0;j<=n-1;j++)
	{
		cout<<arr[j]<<" ";
	}
	return 0;
}
