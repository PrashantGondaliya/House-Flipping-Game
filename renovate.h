#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string" 

using namespace std;

string response5;
string response6;
string response7;

int balance;
int price;
int cost;
int rsprice;

int rsell(){
    cout<<"so you dediced to Renovate the property and then sell it \n A wise decision"<<endl;
    srand(time(0));
    if (price>50000 && price<65000){
        cost = rand()%(((price+7500) - (price+3000)) + 1) + (price+3000);
    }
     else if (price>65000 && price<80000){
        cost = rand()%(((price+10000) - (price+5000)) + 1) + (price+5000);
    }
     else if (price>80000){
        cost = rand()%(((price+15000) - (price+7500)) + 1) + (price+7500);
    }
    cout<<"According to the expert it would cost you"<<" "<<cost<<" "<<"Pounds \n would you like to spend the amount of money on this property??"<<endl;
    rsprice = (price+cost) + (rand()%((((price+cost)+15000) - ((price+cost)+5000)) + 1) + ((price+cost)+5000));
    //void arenovate(){
        cout<<"Please enetr your decision in 'y' or 'n'"
        cin>>response5;
        if ((response5 == "y" || response5 == "Y") && balance<price){
            cout<<"Sorry!! But unfortunately you cannot afford the amount "<<endl;
            cout<<"You can either try finding a treasure or can just simply sell this property"<<endl;
            //void rna(){
                cout<<"So what is your choice \n 1. Sell \n 2. Try for treasure"<<endl;
                cin>>response6;
                if (response6 =='1' || response6 =='1.'){
                    sell();
                }
                else if(response6 =='2' || response6=='2.'){
                    ftreasure();
                }
                else{
                    please enter '1' or '2';
                    rna();
                }
            //}
        
        }
        else if (response5=="y" || response5=="Y"){
            cout<<"You managed to Renovate this property into a great place to live"<<endl;
            cout<<"Which costed you just"<<" "<<cost<<" "<<"Pounds \n Well Done!!"<<endl;
            cout<<"And then...Boom!!!"<<endl;
            cout<<"You sold the property for a great price of"<<" "<<rsprice<<" "<<"Pounds"<<endl;
            cout<<"Congratulations for the Deal"<<endl;
            balance = balance + rsprice;
            cout<<"Your bank account is shining with"<<" "<<balance<<" "<<"Pounds in it. \n Perfect!!!"<<endl;
        }
        else if (response5=="n" || response5=="N"){
            cout<<"You can either try finding a treasure and then sell it or can just simply sell this property"<<endl;
            void nor(){
                cout<<"So what is your choice \n 1. Sell \n 2. Try for treasure"<<endl;
                cin>>response7;
                if (response7=='1' || response7=='1.'){
                    sell();
                }
                else if(response7=='2' || response7=='2.'){
                    ftreasure();
                }
                else{
                    cout<<"please enter '1' or '2'";
                    //nor();
                }
        }
        
    //}
    else {
            cout<<"Please enter either 'y' or 'n' \n thank you"<<endl;
            arenovate();
        }
    //}
    //cost = rand()%(((0.70*price) - 0.40*price) + 1) + (0.40*price);
}