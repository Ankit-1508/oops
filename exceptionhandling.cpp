//Exception handling in c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"enter the two numbers";
  cin>>a>>b;
  try{
  	if(b==0)
  	 throw b;
    else
    {
      c=a/b;
      cout<<"result"<<c;
    }
  }
  catch(int x)
  {
     cout<<"can't divide by"<<x;
  }
  return 0;
}