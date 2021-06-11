#include<bits/stdc++.h>
using namespace std;
void printn(int n)
{
	if(n<1)
	{
		return;
	}
	cout<<n<<" ";//prints n to 1(tail recursion)
	printn(n-1);
	cout<<endl;
	cout<<n<<" ";//prints 1 to n(non tail recursion)
}
int main()
{
	int n;
	cin>>n;
	printn(n);
	return 0;
}
/*non tail recursion
1.calls f(5)-->waits
2.calls f(4)-->waits
3.calls f(3)-->waits
4.calls f(2)-->waits
5.calls f(1)-->waits
6.condition fails
f(1)=1     f(2)=2     f(3)=3    f(4)=4    f(5)=5
trace backsafter chid call there is anoter function to be calledf(2)and so on....
*/

/*tail recursion
1.calls f(5)-->prints 5--------parent
2.calls f(4)-->prints 4-------child-----parent
3.calls f(3)-->prints 3-------child
4.calls f(2)-->prints 2
5.calls f(1)-->prints 1
6.condition fails
*/
