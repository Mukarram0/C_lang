#include<iostream>
#include<string>
using namespace std;
void display(void* a,char type)
{
    switch(type)
    {
        case 'i':
        {
            cout<<*((int*)a)<<endl;
            break;
        }
        case 'c':
        {
            cout<<*((char*)a)<<endl;
            break;
        }
        case 'd':
        {
            cout<<*((double*)a)<<endl;
            break;
        }
        case 's':
        {
            cout<<*((string*)a)<<endl;
            break;
        }
        default:
        {
            cout<<"invalid choice or type.";
            break;
        }  
    }
    
}
int main(){
    int a=2;
    char b='=';
    string c="hello world ";
    double d=2.0;
    display(&a,'i');
    display(&b,'c');
    display(&c,'s');
    display(&d,'d');
}