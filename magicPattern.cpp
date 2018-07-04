/*
  Created By: Parth Aggarwal
  On : 4/07/18
  for N=4
  Output:
  4 4 4 4 4 4 4
  4 3 3 3 3 3 4
  4 3 2 2 2 3 4
  4 3 2 1 2 3 4
  4 3 2 2 2 3 4
  4 3 3 3 3 3 4
  4 4 4 4 4 4 4
*/
#include<iostream>
using namespace std;
int main()
{
  int N;
  cin>>N;
  int n=2*N-1;
  int mat[n][n];
  int left=0,right=n-1;
  int top=0,bottom=n-1;
  int dir=0;
  N++;
  while(left<=right&&top<=bottom)
  {
    if(dir==0)
    {
      N--;
      for(int i=left;i<=right;i++)
        mat[top][i]=N;
      top++;dir=1;
    }
    else if(dir==1)
    {
      for(int i=top;i<=bottom;i++)
        mat[i][right]=N;
      right--;dir=2;
    }
    else if(dir==2)
    {
      for(int i=right;i>=left;i--)
        mat[bottom][i]=N;
      bottom--;dir=3;
    }
    else if(dir==3)
    {
      for(int i=bottom;i>=top;i--)
        mat[i][left]=N;
      left++;dir=0;
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
      cout<<mat[i][j];
    cout<<endl;
  }
  return 0;
}
