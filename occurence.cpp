#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char sentence[100],find[20];
    int pos=-1;
    cout<<"enter a string :"<<endl;
    cin.getline(sentence,100);
    cout<<"enter a string for matching : "<<endl;
    cin.getline(find,20);
    int Slen=0;
    while(sentence[Slen]!='\0')
    {
        Slen++;
        
    }
    cout<<"length of the sentence is  : "<<Slen<<endl;
    int flen=0;
    while(find[flen]!='\0')
    {
        flen++;
        
    }
    if(Slen<1)
    {
        cout << "Empty sentence!" << endl;
        return 0;
    }
    if(flen<1)
    {
        cout << "Empty search string!" << endl;
        return 0;
    }
    cout<<"length of the find string is  : "<<flen<<endl;
    int count=0,j=0;
    for(int i=0;i<=Slen-flen;i++)
    {
        for( j=0;j<flen;j++)
        {
            if(sentence[i+j]!=find[j])
            {
                break;
            }
        }
        if(j==flen)
            {
           count++;
           i+=flen-1;
        }
    }
    cout<<"occurence of the word-> "<<find<<" in the sentence is "<<count;

    return 0;

  
}
