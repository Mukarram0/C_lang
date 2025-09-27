#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a string :";
    cin.getline(str,100);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    cout<<"length : "<<len<<endl;
    bool ispalindrome=true;
    for( int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i])
        {
            ispalindrome=false;
            break;
        }
    }
    if(ispalindrome)
    {
        cout<<"entered string is a palindrome. ";

    }
    else{
        cout<<"entered string is not a palindrome. ";

    }
}
