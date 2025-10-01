#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char sentence[100],find[20],replace[20],result[200];
    int pos=-1;
    cout<<"enter a string :"<<endl;
    cin.getline(sentence,100);
    cout<<"enter a string for matching : "<<endl;
    cin.getline(find,20);
    cout<<"enter a string for replacing : "<<endl;
    cin.getline(replace,20);
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
    int Rlen=0;
    cout<<"length of the find string is  : "<<flen<<endl;
     while(replace[Rlen]!='\0')
    {
        Rlen++;
        
    }
    cout<<"length of the replace string is  : "<<Rlen<<endl;
    for(int i=0;i<=Slen-flen;i++)
    {
        for(int j=0;j<flen;j++)
        {
            if(sentence[i+j]!=find[j])
            {
                break;
            }
            if(j==flen-1)
            {
            pos=i;
            break;
            }
        }
    }
    int k=0;
    if(pos!=-1){
     for(int i=0;i<pos;i++)
    {
    result[k++]=sentence[i];
    }
    result[k]='\0';
    strcat(result,replace);
    strcat(result,sentence+pos+flen);
    cout<<"updated sentence is : "<<result;
    }
    else {
    cout << "String not found!" << endl;
    }
    

    return 0;

  
}
