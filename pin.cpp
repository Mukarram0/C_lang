#include<iostream>
using namespace std;
int main(){
    int userpin,pin,c=3;
    cout<<"enter a pin: ";
    cin>>userpin;
    system("cls");
    do{
        cout<<"enter your pin: ";
        cin>>pin;
        if(pin!=userpin){
            cout<<"you have entered incorrect pin."<<endl;
            cout<<"you have "<<c-1<<" attempts left."<<endl;
            cout<<endl;
            c--;
        }
    }while(c>0&&pin!=userpin);
    if(c>0){
        cout<<"you have entered coorrect pin.";
    }
    else{
        cout<<"Blocked......";
    }
        
    return 0;
}