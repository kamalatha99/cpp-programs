#include<bits/stdc++.h>
using namespace std;
void fun1(int n){
	if(n==0){
		return;
	}
	cout<<"kammi"<<endl;
	fun1(n-1);
}

int main(){
	int n=5;
	fun1(n);
	return 0;
} 
