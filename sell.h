#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string" 

#include "purchase.h"

using namespace std;

//int balance=100000;
//int price;
int sprice;
int loss;
int profit;
string response4;

//int main(){
    int dsell(){
        /*int sell(){
            balance = balance + sprice;
        }*/
        srand(time(0)); 
        sprice = rand()%(((price+10000) - (price-10000)) + 1) + (price-10000);
        if (sprice<price){
            cout<<"Oh Some hard luck this time \n You were unable to make a profit from this property"<<endl;
            loss = price-sprice;
            cout<<"instead you faced a loss of"<<" "<<loss<<" "<<"Pounds \n But don't ever give up you may find a great deal next time"<<endl;
        }
        else if (sprice>price){
            cout<<"Awesome you managed to bring some really nice profit out of the property"<<endl;
            profit = sprice-price;
            cout<<"So you made a profit of "<<" "<<"Pounds \n Congratulations!!!"<<endl;
        }
        balance = balance + sprice;
        cout<<"So after selling this propert you have got"<<" "<<balance<<"Pounds in your bank now"<<endl;
        cout<<"Cool!! \n Should we keep going ??"<<endl;
        cout<<"enter 'y' or 'n'";
        cin>>response4;
        if (response4=="y" || response4=="Y"){
            cout<<"Okay!!! \n Let's find a new house for you :)"<<endl;
            purchase();
        }
        else if(response4=="n" || response4=="N"){
            cout<<"See Ya!!!\n Thank you :)"
        }
    }
//}