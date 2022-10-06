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
    int num=11;
    while(num!=0){
    int y,life=3;
    y=random();
    //cout<<y<<"\n";
    cout<<"\n\n<-------Welcome to Guess the Number Game------->"<<"\n";
    cout<<"\nTo start this game plaese choose any number between 1 to 10 (0 to exit the game): ";
    cin>>num;
    if(num==0)
    {
        cout<<"\nThank you for playing!!!";
        break;
    }
    while (life)
    {   
        
        if(num==y){
            cout<<"\nPerfect\n";
            life=0;
        }
        else{
            life--;
            cout<<"\nOops wrong selection\t\t";
            cout<<"You have "<<life<<" lifes left \n";
            if(life==0)
            {
                continue;
            }
            cout<<"\n\nAgain select any number between 1 to 10 :";
            cin>>num;
        }
        
    }
    }
    return 0;
}