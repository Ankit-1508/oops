#include<iostream>
using namespace std;
 int main()
 {
  int beg,end;
  cin>>beg>>end;
  for(int i=beg;i<=end;i++)
  	  {
  	      int count=0;
  	    for(int j=2;j<=i;j++)
  	    	 {
              if(i%j==0)
               {count++;}
  	    	 }
  	        if(count==1)
  	         {cout<<i<<" ";}
  	  }
 }