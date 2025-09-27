#include<iostream>
using namespace std;
#include<string>
class pntr_obj{
public:
  string name;
  int roll_no;

  pntr_obj(string name,int roll_no){
    this->name=name;
    this->roll_no=roll_no;
  }

  void setdata(string name,int roll_no){
    this->name=name;
    this->roll_no=roll_no;
  }
  void print(){
    cout<<endl<<"................student details................"<<endl;
    cout<<"object invoked: "<<this<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"roll number: "<<roll_no<<endl;
    cout<<"................End............................";
  }

};
int main(){
    pntr_obj t1("rahul yadav",20);
    pntr_obj t2("Mahesh yadav",21);
    pntr_obj t3("Faizan ahmad",22);
    t1.print();
    t2.print();
    t3.print();
    t1.setdata("Shihab",39);
    t1.print();
}