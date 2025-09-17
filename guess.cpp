#include<iostream>
using namespace std;
int main(){
    int hostusernum,guessusernum;
    cout<<"enter a number: ";
    cin>>hostusernum;
    system("cls");
    cout<<"guess the number :";
    cin>>guessusernum;
    (hostusernum==guessusernum)?cout<<"Congrats! you have won this round.":cout<<"Sorry! you have lost this round. ";
    /*if(hostusernum==guessusernum){
        cout<<"Congrats! you have won this round. ";
    }
    else 
    cout<<"Sorry! you have lost this round. ";*/
    return 0;
}