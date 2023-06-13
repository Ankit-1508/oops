#include<iostream>
using namespace std;
   class a
   {
   private:
	int x,y,z;
    public:
	a(int a,int b,int c)
	{
		x=a;b=y;z=c;
	}
	display()
	{cout<<x<<y<<z;}
   };
  int main()
  {
  	a obj1;
    obj1.fun(10,15,20);
  	obj1.display()
    
  }
