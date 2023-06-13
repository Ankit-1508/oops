#include<iostream>
using namespace std;
class base1
{
   public:
    int x;
   	base1()
   	  {x=8;
   	   cout<<"constructor of the base1 is called";
   	  	}
};
class derived:public base1
{
public:
	int y;
	derived()
	{
	  y=x*5;
	 cout<<"constructor of the derived class is called";
	}
   void display()
   {cout<<y;}
};
int main()
{
  derived obj1;
  obj1.display();
}