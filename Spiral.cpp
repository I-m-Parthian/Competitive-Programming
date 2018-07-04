#include<iostream>
using namespace std;
int size=4;
int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

void printMatrix(int m,int n)
{
  int left=0,right=n-1;
  int top=0,bottom=m-1;
  int dir=0;
  while(left<=right&&top<=bottom)
  {
    if(dir==0)
    {
      for(int i=left;i<=right;i++)
        cout<<mat[top][i]<<"\t";
      top++;dir=1;
    }
    else if(dir==1)
    {
      for(int i=top;i<=bottom;i++)
        cout<<mat[i][right]<<"\t";
      right--;dir=2;
    }
    else if(dir==2)
    {
      for(int i=right;i>=left;i--)
        cout<<mat[bottom][i]<<"\t";
      bottom--;dir=3;
    }
    else if(dir==3)
    {
      for(int i=bottom;i>=top;i--)
        cout<<mat[i][left]<<"\t";
      left++;dir=0;
    }
  }
}

int main()
{
    printMatrix(4,4);
    cout<<endl;
    return 0;
}
