#include<iostream>
#include<string>
using namespace std;
class teacher{
private:
    double salary;
public:
    string name;   //attributes /properties of class
    string subject;
    string dept;
    //non-paratemerized construcor
    teacher(){ 
    }
    //paratemerized constructor 
    teacher(string name, string subject, string department, double salary){
       //this points to objects 
       this->name =name;
       this->subject= subject;
       this->dept= department;
       this->salary=salary;
    }
    void getinfo();  //declaration of getinfo method for later defining
    void changedept(string newdept){  //method
      dept=newdept;
    }
    //setter
    void setsalary(double newsalary){
        salary=newsalary;
    }
    //getter
    double getsalary(){
        return salary;
    }
};
void teacher::getinfo(){    //----- Definition outside the class -----
    cout<<"name :"<<name<<endl;
    cout<<"subject: "<<subject<<endl;
    cout<<"department: "<<dept<<endl;
}
int main(){
    teacher t1;  //object
    cout<<"enter name :";
    getline(cin,t1.name); 
    cout<<"enter subject :";
    getline(cin,t1.subject); 
    cout<<"enter department name :";
    getline(cin,t1.dept); 
    system("cls");

    cout<<"..............Teacher details...............";
    cout<<endl;
    t1.getinfo();
    t1.setsalary(200000); 
    cout<<"salary: "<<t1.getsalary();
    cout<<endl<<"...................X.........................";
    cout<<endl;

    teacher t2("john","Math","Computer Science",50000);
    cout<<"..............Teacher details...............";
    cout<<endl;
    /*cout<<"name: "<<t2.name<<endl;
    cout<<"subject: "<<t2.subject<<endl;
    cout<<"department: "<<t2.dept<<endl;*/
    t2.getinfo();
    cout<<"salary: "<<t2.getsalary()<<endl;
    cout<<"...................X........................."<<endl;

    teacher t3(t1);//default copy constructor invoked or called.
    t3.getinfo();
}