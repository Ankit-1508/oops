/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>  
using namespace std;  
  
// create a base class1  
class Base_class  
{ 
    // access specifier  
    public:   
    // It is a member function  
    void display()  
    {  
        cout << " It is the first function of the Base class " << endl;  
    }  
};  
  
// create a base class2  
class Base_class2:public Base_class
{  
    // access specifier  
    public:   
    // It is a member function  
    void display2()  
    {  
        cout << " It is the second function of the Base class " << endl;  
    }  
};  
  
/* create a child_class to inherit features of Base_class and Base_class2 with access specifier. */  
class child_class:public Base_class2
{  
      
    // access specifier  
    public:  
    void display3() // It is a member function of derive class  
    {  
        cout << " It is the function of the derived class " << endl;      
    }  
      
};  
  
int main ()  
{  
    // create an object for derived class  
    child_class ch;  
    ch.display(); 
    ch.display2();
    ch.display3();
  return 0;
}  