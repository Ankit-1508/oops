#include<bits/stdc++.h>
using namespace std;
 bool checkpallindrom(string s,int i,int j)
  {
     if(s[i]!=s[j])
     	{return false;}
     else if(i>j)
     	{return true;}
       else
        {return checkpallindrom(s,i+1,j-1);}
  }
int main()
{
  string s;
  cin>> s;
  bool ans=checkpallindrom(s,0,s.length()-1);
  cout<<ans;
  return 0;
}