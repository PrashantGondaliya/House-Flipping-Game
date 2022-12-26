#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string" 

using namespace std;

int repairs;
int balance;
int rn;
int tamount;
int sprice;

string response8;

int sell();

int ftreasure(){
    cout<<"You wanna try your luch huh!!"<<endl;
    cout<<"Okay but finding a treasure will definitely damage the property and it would take some money for repairs."<<endl;
    repairs = rand()%((7500 - 3000) + 1) + 3000;
    cout<<"so this treasure hunt will cost you a amount of"<<" "<<repairs<<" "<<"Pounds"<<endl;
    cout<<"Are you still interested in trying your LUCK ;)"<<endl;
    //void ret();{
            cout<<"Enter 'y' or 'n'"<<endl;
            cin>>response8;
            if ((response8 == "y" || response8 == "Y") && balance<repairs){
                cout<<"Sorry but you can not afford the treasure hunt"<<endl;
                cout<<"Unfortunately you have to sell the property the way it is"<<endl;
                sell();
            }
            else if (response8=="y" || response8=="Y"){
                rn = rand()%((8 - 1) + 1) + 1;
                if (rn == 7){
                    cout<<"Woah!!!....You found the treasure \n Lucky Day I guess"<<endl;
                    tamount = rand()%((25000 - 10000) + 1) + 10000;
                    cout<<"you found a treasure worth"<<" "<<tamount<<" "<<"Pounds"<<endl;
                    sell();
                    balance = (balance-repairs) + tamount + sprice;
                    cout<<"So your bank balance after all the repairs is"<<" "<<balance<<"Pounds"<<endl;
                }
                else{
                cout<<"I think it's not a lucky day for you \n Sorry to inform that you were unable to find any treasure at this property"<<endl;
                cout<<"Better luck next time :)"<<endl;
                sell();
                balance = (balance + sprice) - repairs;
                cout<<"Your bank ba;ance after repairing and selling the house is"<<" "<<balance<<" "<<"Pounds"<<endl;
                }
            }
            else if (response8=="n" || response8=="N"){
                cout<<"Okay no worries you have always got an option to sell it out the way it is"<<endl;
                sell();
            }
            else {
                cout<<"Please enter a valid answer \n i.e. Either y or n";
                //ret();
            }
        //}
    }
}