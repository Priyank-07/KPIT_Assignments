#include<iostream>
using namespace std;

class Employee{
	protected:
		int emp_id;
		string name;
		float salary;
		int exp;
	public:
		Employee(){// default constructors
			emp_id=000;
			name="no name";
			salary=0.0;
			exp=-1;
		}
		Employee(int id,int xp,float sal,string naam){//parameterized constructors
			emp_id=id;
			exp=xp;
			salary=sal;
			name=naam;
		}
		void display(){
			cout<<"Name:"<<" "<<name<<" Id:"<<" "<<emp_id<<" Salary:"<<" "<<salary<<" "<<" Experience:"<<exp<<endl;
		}
};

int main(){
	Employee obj1;
	obj1.display();//default constructor is called
	Employee obj2(101,5,200.00,"ABC");//parameterized constructor is called
	obj2.display();
	return 0;
}
