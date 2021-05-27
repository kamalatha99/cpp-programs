#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cap,pos;
	cin>>cap;
	int a[cap];
	int n,flag;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			 pos=i;
			 flag=1;
		}
	}
	if(flag==1){
	for(int j=pos;j<=n;j++)
	{
		a[j]=a[j+1];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";}
	n--;
}
else{
	cout<<"no element found to be deleted";
	return -1;
}}
