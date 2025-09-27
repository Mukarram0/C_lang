#include<iostream>
using namespace std;
int main(){
    char ascii;
    int asciiValue;
    cout<<"enter a character: ";
    cin>>ascii;
    asciiValue=int(ascii);//casting operator(changes data type)
    cout<<"Ascii value of the character is "<<asciiValue;
    return 0;
}