#include<iostream>
using namespace std;
 class base
  {
    public:
      virtual void show()=0;
      void fun1()
      {
        cout<<"this is the base class";
      }
   };
   class child:public base
   {
   	  public:
   	  	void show()
   	  	{
         cout<<"this is ankit class";
   	  	}
   };
int main()
{
   child obj1;
   base *p;
   p=&obj1;
   p->();
 //  base *b;
   //obj1.show();
   // obj1=&ob;
  // cout<<"\n";
   // obj1.fun1();
   return 0;
}