

/*RECURSION: calling the same function unti th given condition gets satisfied.
factorial of a number
iterative method

int main()
{
int n,fact=1;
cin>>n;
for(int i=1;i<=n;i++)
{
	fact=fact*i;
}	
cout<<fact;
}
*/

//Recursive method
/*
#include<bits/stdc++.h>
using namespace std;
int n;
int fact(int i)
{
	if(i>=n)
	{
		return n;
	}
    return i*fact(i+1);
}

int main(){
cin>>n;
cout<<fact(1);
return 0;
}
*/

/*Back tracking factorial
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int fact=1;
	cin>>n;
	for(int i=n;i>=fact;i--)
	{
		fact=fact*i;
		cout<<fact;
	}
	cout<<fact;

}*/

//back tracking recursion
#include<bits/stdc++.h>
using namespace std;
int fact(int i)
{
	if(i<=1)
	{
		return 1;
	}
	return i*fact(i-1);
}
int main()
{
	int n;cin>>n;
	cout<<fact(n);
	return 0;
}

