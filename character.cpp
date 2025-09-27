#include<iostream>
using namespace std;
void Character(){
    char ch;
    int ascii;
    cout<<"enter the character:\t";
    cin>>ch;
    ascii=(int)ch;//type casting
    if(ascii>=65&&ascii<=90){
        cout<<ch<<" is a capital letter.";
    }
    if(ascii>=97&&ascii<=122){
        cout<<ch<<" is a small letter.";
    }
    if(ascii>=48&&ascii<=57){
        cout<<ch<<" is a digit.";
    }
    if(ascii>=0&&ascii<=47
        ||ascii>=58&&ascii<=64
        ||ascii>=91&&ascii<=96
        ||ascii>=123&&ascii<=127){

        cout<<ch<<" is a special character";
    }


}
int main(){
    Character();
    return 0;
}