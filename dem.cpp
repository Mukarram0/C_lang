#include<iostream>
#include<string>
using namespace std;

class student {
private:
    int mobileno;
public:
    string name ;
    string subject;
    int rollno ;

    student(string name, string subject,int rollno){
       //this points to objects 
       this->name =name;
       this->subject= subject;
       this->rollno= rollno;
    }

    //copy constructor
    student(student &std){
        this->name=std.name;
        this->subject=std.subject;
        this->rollno = std.rollno;
    }
    void changename(string &newname){
        name=newname;
    }
    void changesub(string  newsub){
        subject=newsub;
    }
    void getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"subjcet :"<<subject<<endl;
        cout<<"Roll number :"<<rollno<<endl;
    }

};
int main(){
    student s1("john","science",22);
    student s2(s1);
    s2.getinfo();
        
}