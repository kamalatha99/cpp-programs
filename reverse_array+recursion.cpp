//reversing an array
#include<bits/stdc++.h>
using namespace std;
/*int main()
{

	int n;cin>>n;
	int a[n];
	int l=0,r=n-1;
	for(int i=0;i<n;i++)
	{
	 cin>>a[i];
	}
	while(l<=r)
	{
		swap(a[l],a[r]);
		l++;
		r--;
	}
	for(int j=0;j<n;j++)
	{
	 cout<<a[j]<<" ";
	}
	return 0;
}
*/
void rev(int a[],int l,int r)
{
	if(l>=r)
	{
		return;
	}
	swap(a[l],a[r]);
	return rev(a,l+1,r-1);
	
}
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	rev(a,0,n-1);
	for(int j=0;j<n;j++)cout<<a[j]<<" ";
	return 0;
}
