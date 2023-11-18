#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"CALCULATOR"<<"\n";
    cout<<"Enter The Choice 1 - Addition"<<"\n";
    cout<<"Enter The Choice 2 - Subtraction"<<"\n";
    cout<<"Enter The Choice 3 - Multiplication"<<"\n";
    cout<<"Enter The Choice 4 - Division"<<"\n";
    int n;
    cin>>n;
    int ans,n1,n2;
    switch(n)
    {
        case 1:
        cout<<"Enter the number 1 : ";
        cin>>n1;
        cout<<"Enter the number 2 : ";
        cin>>n2;
        ans=n1+n2;
        cout<<"The addition of "<<n1<<" and "<<n2<<" is : "<<ans;
        break;

        case 2:
        cout<<"Enter the number 1 : ";
        cin>>n1;
        cout<<"Enter the number 2 : ";
        cin>>n2;
        ans=n1-n2;
        cout<<"The subtraction of "<<n1<<" and "<<n2<<" is : "<<ans;
        break;

        case 3:
        cout<<"Enter the number 1 : ";
        cin>>n1;
        cout<<"Enter the number 2 : ";
        cin>>n2;
        ans=n1*n2;
        cout<<"The multiplication of "<<n1<<" and "<<n2<<" is : "<<ans;
        break;

        case 4:
        cout<<"Enter the number 1 : ";
        cin>>n1;
        cout<<"Enter the number 2 : ";
        cin>>n2;
        ans=n1/n2;
        cout<<"The division of "<<n1<<" and "<<n2<<" is : "<<ans;
        break;

        default :
        cout<<"The Choice Entered Is Invalid";
    }
}
