#include<iostream>
using namespace std ;
int main ()
{
    int n, i,j ;
    cin>>n;
    for(i=0;i<n;i++)
    {
     for(j=0;j<i;j++)
      {
          cout<<" "; 
      }
      for(j=0;j<n*2-i*2-1;j++)
      {
          cout<<j+1; 
      }
      cout<<endl ;
    }
}