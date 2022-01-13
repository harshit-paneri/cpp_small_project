#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int random()
{
    srand(time(0));
    return (rand() % 10) + 1;  
}

int main()
{
    while(1){
    int num,y,life=3;
    y=random();
    //cout<<y<<"\n";
    cout<<"<-------Welcome to Guess the Number Game------->"<<"\n";
    cout<<"To start this game plaese choose any number between 1 to 10 : ";
    cin>>num;
    while (life)
    {   
        
        if(num==y){
            cout<<"Perfect\n";
            life=0;
        }
        else{
            cout<<"Oops wrong selection\t\t";
            cout<<"You have "<<life<<" lifes left \n";
            cout<<"Again select any number between 1 to 10 :";
            cin>>num;
            life--;
        }
        
    }
    }
    return 0;
}