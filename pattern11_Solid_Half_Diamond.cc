#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of lines: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        int k=n;
        for(int j=0;j<=i;j++)
        {
            
            cout<<k--;
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++)
    {
        int k=n;
        for(int j=n-i-1;j>=0;j--)
        {
            cout<<k--;
        }
        cout<<"\n";
    }

    return 0;
}