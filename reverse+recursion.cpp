/*RECURSION: calling the same function unti th given condition gets satisfied.
factorial of a number*/

//iterative method

#include<bits/stdc++.h>
using namespace std;
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

/*RECURSION: calling the same function unti th given condition gets satisfied.
factorial of a number*/
//Recursive method

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
