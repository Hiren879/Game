#include <iostream>
#include <conio.h>

using namespace std;
main()
{
cout<<"Let’s Play a Game"<<endl;
cout<<"Here are the RULES"<<endl;
cout<<"You have 21 sticks, you and Computer are playing the game."<<endl;
cout<<"Both of you can select either 1,2,3 or 4 Sticks at a time !"<<endl;
cout<<"One who will pick the last stick will LOSSE the game..So be careful..!!"<<endl;
cout<<"Let's play the game"<<endl;

int uturn,count_stick; //uturn-> to take users input, count_stick -> sticks picked up by computer
int i,ch;
int flag=1;
int a=0;
while(flag==1)
{
    for(i=1;i<=4;i++)
    {
        cout<<endl<<"You Turn. Pick Up The Sticks."<<endl;
        cout<<"You : ";
        cin>>uturn;
        cout<<endl<<"You picked up "<<uturn<<" Sticks"<<endl;

    if(uturn>=5)
    {
    cout<<"Ooopss..You can only pick either 1,2,3 or 4 sticks at a time.."<<endl;
    break;
    }
    else
    {
    count_stick=5-uturn;
    }

    cout<<"Computer: "<<count_stick<<endl;
    cout<<"Computer Picked Up "<<count_stick<<" Sticks"<<endl;
    }
    cout<<endl<<"So you pick the last stick so you losse the game..TRY AGAIN to win..!!";
    cout<<"Want to Try Again?"<<endl<<endl;
    cout<<"Press 1 To Continue"<<endl<<"Press 2 to Exit"<<endl;
    cin>>flag;

}
getch();
}
