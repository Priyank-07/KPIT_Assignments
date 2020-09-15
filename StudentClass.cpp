#include<iostream>
using namespace std;

class Student{
	protected:
		int rollno;
		string name;
		float score;
		string specialization;
	public:
		Student(){// default constructors
			rollno=000;
			name="no name";
			score=0.0;
			specialization="nothing";
		}
		Student(int roll,string naam,float skore,string spec){//parameterized constructors
			rollno=roll;
			name=naam;
			score=skore;
			specialization=spec;
		}
		void display(){
			cout<<"Name:"<<" "<<name<<" Roll:"<<" "<<rollno<<" Score:"<<" "<<score<<" "<<" Specialization:"<<specialization<<endl;
		}
};

int main(){
	Student obj1;
	obj1.display();//default constructor is called
	Student obj2(101,"ABC",88.6,"CSE");//parameterized constructor is called
	obj2.display();
	return 0;
}
