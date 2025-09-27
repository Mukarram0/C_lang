#include<iostream>
using namespace std;
int calculator(float num1,char operations,float num2){
float total;
    switch(operations){
    case '*':{
        total=num1*num2;
        cout<<num1<<operations<<num2<<" ="<<total;
        break;
    }
    case '+':{
        total=num1+num2;
        cout<<num1<<operations<<num2<<" ="<<total;
        break;
    }
    case '-':{
        total=num1-num2;
        cout<<num1<<operations<<num2<<" ="<<total;
        break;
    }
    case '/':{
        total=num1/num2;
        cout<<num1<<operations<<num2<<" ="<<total;
        break;
    }
    case '%':{
        bool isintnum1,isintnum2;
        isintnum1=((int)num1==num1);
        isintnum2=((int)num2==num2);
        if(num2==0){
            cout<<"Error: Division by zero is not allowed.";
            return 0;
        }
        else if(isintnum1&&isintnum2){
         cout<<num1<<operations<<num2<<" ="<<(int)num1%(int)num2;
        }
        else{
            cout<<"operations is not valid for the given expression";
        }
        break;
    }
    default:{
        cout<<"invalid operations.";
    }
    }
    return 0;
}
int main(){
    float num1,num2;
    char operations;
    cout<<"enter the num1 and operations and then num2: "<<endl;
    cin>>num1>>operations>>num2;
    system("cls");
    calculator(num1,operations,num2);
    return 0;
}