#include<iostream>
#include<string>
using namespace std;
class flight{
public:
    int flight_number;
    string source;
    string destination;
    int fare;

    flight(int flight_number,string source,string destination,int fare)
    {
        this->flight_number=flight_number;
        this->source=source;
        this->destination=destination;
        this->fare=fare;
    }

    void display(){
        cout<<endl<<".................Passenger details................."<<endl;
        cout<<"flight number : "<<this->flight_number<<endl;
        cout<<"coming from: "<<this->source<<endl;
        cout<<"going to : "<<this->destination<<endl;
        cout<<"Ticket price : "<<this->fare<<endl;
        cout<<"........................X.........................."<<endl;
    }
};
int main(){
    flight f1(1245,"Patna","New Delhi",4000);
    f1.display();

}