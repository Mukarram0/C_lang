#include<iostream>
using namespace std;
int main(){
    int year,month;
    cout<<"enter month and year: ";
    cin>>month>>year;
    switch (month){
        case 1:{
            cout<<"31 days in the given month.";
            break;
        }
        case 2:{
                (year%4==0&&year%400==0||year%100!=0)?
                cout<<"29 days in the given month.":
                cout<<"28 days in the given month.";
                break;
            }
        case 3:{
            cout<<"31 days in the given month.";
            break;
        }
        case 4:{
            cout<<"30 days in the given month.";
            break;
        }
        case 5:{
            cout<<"31 days in the given month.";
            break;
        }
        case 6:{
            cout<<"30 days in the given month.";
            break;
        }
        case 7:{
            cout<<"31 days in the given month.";
            break;
        }
        case 8:{
            cout<<"31 days in the given month.";
            break;
        }
        case 9:{
            cout<<"30 days in the given month.";
            break;
        }
        case 10:{
            cout<<"31 days in the given month.";
            break;
        }
        case 11:{
            cout<<"31 days in the given month.";
            break;
        }
        case 12:{
            cout<<"31 days in the given month.";
            break;
        }
        default:{
            cout<<"invalid entry.";
            break;
        }

        

    }

}