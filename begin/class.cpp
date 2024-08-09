#include<iostream>
using namespace std;

class Person{
 private:
    float salary;
public:
   string name;
   int age;
   

   void setsalry(float s){
   salary=s;
   };

   int getsalary(){
    return salary;
   }

}simran, tarun;


int simranp(){
tarun.name ="kundi";
tarun.age=28;
tarun.setsalry(4900);

cout<<"salary of the tarun "<<tarun.getsalary()<<endl;
return 0;
}


int main(){
simranp();
};

