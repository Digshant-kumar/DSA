#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of lines: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
         for(int j=n-1-i;j>0;j--)
         {
             cout<<" ";
         }
         for(int j=0;j<=i;j++)
         {
             cout<<"* ";
         }
         cout<<"\n";
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            cout<<" ";
        }
        for(int j=n-1-i;j>0;j--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}