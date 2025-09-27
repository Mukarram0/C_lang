#include<iostream>
using namespace std;
int main(){
    double farenheit;
    double celcius=0;
    cout<<"enter the farenheit values : ";
    cin>>farenheit;
    celcius+=(farenheit - 32) * 5.0/9.0;
    cout<<" celcius: "<<celcius;

}