#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	int f=0,l=n-1 ,flag;
	while(f<=l){
		if(s[f]!=s[l]){
			cout<<"not palin";
			break;
		}
		else{
			flag=1;
		}
			f++;
			l--;
	}
	if(flag==1){
	cout<<"palin"<<" ";
	cout<<s<<" ";}
	return 0;
	
}
