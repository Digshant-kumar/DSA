#include<iostream>
using namespace std;

int main()
{
    
    int n;
    cout<<"Enter number: why should i enter do it by yourself ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }


    return 0;
}
