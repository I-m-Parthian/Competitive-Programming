/*
  Created By: Parth Aggarwal
  On : 4/07/18
  Floyd's triangle in reverse order
  for n=4
  output:
  10 9 8 7
  6 5 4
  3 2
  1
*/
#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int count=1;
  for(int i=1;i<=n;i++)
    for(int j=1;j<=i;j++)
      count++;
  count--;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i+1;j++)
      cout<<count--<<"\t";
    cout<<endl;
  }
}
