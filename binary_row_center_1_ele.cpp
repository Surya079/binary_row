#include<iostream>
using namespace std;
binary_square(int row,int col)
{
    if(row<0&&col<0==true)
    {
        cout<<"please enter the valid row and column..";
    }
    else
    {
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           if(i==0||i==row-1||j==0||j==col-1)
            {
                cout<<"0";
            }
            else
            {
                 cout<<"1";
            }

        }
        cout<<"\n";
    }
   }
}
int main()
{
    int row,col;
    cout<<("enter the row and columns :");
    cin>>row>>col;
    binary_square(row,col);



}



