#include<iostream>
using namespace std;
class A
{
	private:
		int x;
		int y;
	public:
		A(int x,int y)
		{
			this->x=x;
			this->y=y;
	    }
	    void display()
	    {
	    	cout<<"x="<<x<<endl;
	    	cout<<"y="<<y<<endl;
		}
};
int main()
{
   A *ptr=new A(10,30);
   ptr->display();
   cout<<ptr;
   return 0;
}
