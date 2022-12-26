#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string" 

//#include "sell.h";

using namespace std;

int price;
int balance=100000;
string response1;
string response2;
string response3;

int purchase(){
    srand(time(0)); 
    price = rand()%((90000 - 50000) + 1) + 50000;
    if (price>50000 && price<65000){
        cout<<"Would you like buy an low end house for"<<" "<<price<<" "<<" Pounds ??"<<endl;
    }
    else if (price>65000 && price<80000){
        cout<<"You found a new Mid Range House for"<<" "<<price<<" "<<"Pounds ??"<<endl;
    }
    else if (price>80000){
        cout<<"You found a new Mid Range House for"<<" "<<price<<" "<<"Pounds ??"<<endl;
    }
    cout<<"Would you like to make a purchase ??"<<endl;
    cout<<"You have got"<<" "<<balance<<" "<<"Pounds in your banck account"<<endl;
    //void subp(){
        cout<<"enter 'y' or 'n'"<<endl;
    cin>>response1;
    
    if ((response1 == "y" || response1 == "Y") && balance<price){
        cout<<"Sorry you cannot make this purchase, as you don't have enough funds to buy it"<<endl;
        cout<<"But Don't be sad you may find a property fitting in your budget"<<endl;
    }
    else if (response1=="y" || response1=="Y"){
          cout<<"Congratulations you just bought the property"<<endl;
          cout<<"What are your further plans for the property \n 1. Renovate and sell the property \n 2. Try to look for any Treasure \n 3. Sell it out directly"<<endl;
          cout<<"Select any one of the above given options"<<endl;
          cin>>response2;
    }
        else if (response1=="n" || response1=="N"){
        cout<<"No Worries, we don't think this was the only property available"<<endl;
        cout<<"Select any one of the given options \n a. Look for more Properties \n b. quit the game"<<endl;
        cin>>response3;
    }
    else{
        cout<<"Please enter a valid answer \n i.e. Either y or n";
        //subp();
    }

    //}
        return 0;
}
    

