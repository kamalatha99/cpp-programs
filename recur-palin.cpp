#include<bits/stdc++.h>
using namespace std;
/*palindrome
	num=121
	after reversing num=121
	same number returned */
bool palin(int f,int l,string word)
{
	if(f>=l)
	{
		return true;
	}
	if(word[f]!=word[l])
	{
		return false; 
	}
	return palin(f+1,l-1,word);
}
int main(){
	string word;
	cin>>word;
	int n=word.size();
	cout<<palin(0,n-1,word);
//	cout<<word;
	return 0;
	
}
