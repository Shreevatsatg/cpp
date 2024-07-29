#include<iostream>
#include<string>
using namespace std;

class teacher{
    private:double salary;//data hiding
    public://in c++ access specifier is set to private by default
    //propertice
    teacher(){//constructor//non parameterizer constructor
        dpt="computr science";
    }
    teacher(string n,string d){//parameterizerd constructor
    name =n;
    dpt=d;

    }
    string name;
    string dpt;
    string subject;
    
    //methods//member functions
    void changedepartment(string newdpt){
        dpt=newdpt;
    }
    void setsalary(double s){//setter function //used to get the data that is set to private
        salary=s;
    }
    double getsalary(){//getter function
        return salary;
    }
};
    int main()
{
    teacher t1("shreevatsa","computer science");//constructor call
    t1.name ="shreevatsa";
    t1.subject ="bca";
    t1.setsalary(25000);
    
    cout<<t1.name<<endl;
    cout<<t1.getsalary()<<endl;

return 0;
}