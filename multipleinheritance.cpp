#include<iostream>
using namespace std;
class base1
{
   public:
    void fun1()
	{
      cout<<"i am in the base1 class";
	}
    int x;
   	base1()
   	  {x=8;
   	   cout<<"constructor of the base1 is called";
   	  	}
};
class base2
{

   public:
   	 void fun2()
	 {
		cout<<"i am in teh base class 2"
	 }
	int y;
   	base2()
   	  {y=8;
   	  	 cout<<"constructor of the base2 is called";

   	  }
};
class derived:public base1,public base2
{
public:
    void fun2()
	{
	 cout<<"i am in the derived clsss";
	}
	int z;
	 derived()
	 {
      z=x+y;
       cout<<"constructor of the derived class  is called";
	 }
  void output()
  {
   cout<<z;
  }
};
int main()
{
  derived obj1;
  obj1.output();
  obj1.fun1();
}