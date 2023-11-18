#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"GUESS THE NUMBER GAME"<<endl;
    cout<<endl;
    srand(time(nullptr));
    cout<<"GUESS A NUMBER RANGING FROM 1 TO 100"<<endl<<endl;
    int secretNumber = 1 + (rand() % 100);
    int attempt=0;
    int choice;
    for(int i=0;i<1000;i++)
    {
        cout<<"Enter Your Predicted Number: ";
        cin>>choice;

        if(choice<0 || choice>100)
        {
            cout<<"Invalid Number. Please Enter A Number Ranging From 1 to 100"<<endl<<endl;
        }
        else
        {
            if (choice == secretNumber)
            {
                attempt++;
                cout<<"---------------------------------------------------------------------------";
                cout<<endl;
                cout<<"Hurrah! You Have Find It."<<endl;
                cout<<"The secret number is "<<secretNumber<<endl;
                cout<<"---------------------------------------------------------------------------"<<endl;
                cout<<"No of attempts made : "<<attempt<<endl;
                break;
            }
            else
            {
                if(choice > secretNumber)
                {
                    attempt++;
                    cout<<endl;
                    cout<<"Try with a smaller number..."<<endl<<endl;
                }
                else if(choice < secretNumber)
                {
                    attempt++;
                    cout<<endl;
                    cout<<"Try with a larger number..."<<endl<<endl;
                }
            }
        }
    }
}
