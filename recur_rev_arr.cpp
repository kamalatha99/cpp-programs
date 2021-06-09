#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rev_arr(int f,int l,int a[])
{
	if(f>=l){
	return;		
	}
	swap(a[f],a[l]);
	return rev_arr(f+1,l-1,a);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	rev_arr(0,n-1,a);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	
}
