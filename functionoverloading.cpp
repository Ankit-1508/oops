#include<iostream>
using namespace std;
class A
{
  public:
   virtual void fun()
    {
      cout<<"this is base class function";//this is called the late binding 
    }
};
class B:public A 
{
  public:
  	void fun()
  	{
  	  cout<<"this is child class func";
  	}
};
 int main()
 {
   A *p;
   B ob1;
   p=&ob1;
   p->fun();
  return 0;
}
