#include<bits/stdc++.h>
using namespace std;
class teacher{
    private:
    double salary;
    public:
    //attributr/properrties
     string name;
     string dept;
     string subject;

     //methods/member functions
     void changedept(string newdept){
        dept=newdept;
     }
     void setsalary(double s){
        salary=s;
     }
     double getsalary(){
        return salary;
     }
};
int main(){
    teacher t1; // t1 is the object
    t1.name="Nehal";
    t1.dept="cse";
    t1.subject="c++";
    t1.setsalary(50000);
    cout << t1.name<<endl;
    cout << t1.dept<<endl;
    cout << t1.subject<<endl;
    cout << t1.getsalary()<<endl;

    return 0;
}