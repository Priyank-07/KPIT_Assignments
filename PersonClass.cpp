#include<iostream>
#include<string>
using namespace std;

class Person{
	protected:
		string name;
		int age;
		char gender;
		int id;
	public:
		Person(){
			name="no name";
			age=0;
			id=0;
			gender='N';
		}
	/*	void setter(string name1,char gender1,int id1,int age1){
			name=name1;
			gender=gender1;
			id=id1;
			age=age1;
		}*/
		void setter_name(string name1){
			name=name1;
		}
		void setter_id(int id1){
			name=id1;
		}
		void setter_age(int age1){
			name=age1;
		}
		void setter_gender(char gender1){
			name=gender1;
		}
		int getter_age(){
			return age;
		}
		int getter_id(){
			return id;
		}
		string getter_name(){
			return name;
		}
		
		char getter_gender(){
			return gender;
		}
		void display(){
			cout<<"Name:"<<" "<<"ID:"<<" "<<"Age:"<<" "<<"Gender:"<<endl;
		}
};

int main(){
	Person obj;
//	cout<<obj.getter_name();
	obj.setter_name("ABC");
	cout<<obj.getter_name()<<endl;
	obj.setter_age(50);
	cout<<obj.getter_age()<<endl;
	obj.setter_gender('M');
	cout<<obj.getter_gender()<<endl;
	obj.setter_id(101);
	cout<<obj.getter_id()<<endl;


//	obj.display();
	return 0;
}
