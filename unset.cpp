#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos,res;
	cin>>num;
	cin>>pos;
	res=num ^ ((pos-1)<<1);
    cout<<res;
	return 0;
}
