#include<iostream>
#include<string>
using namespace std;



class Account{
	protected:
		int acc_no;
		string name;
		float balance;
	public:
		//default constructors
		Account(){
			acc_no=00000;
			name="no name";
			balance=0.00;
		}
		//parameterized constructors
		Account(int a,string b,float c){
			acc_no=a;
			name=b;
			balance=c;
		}
		//function for debit
		void debit( float db){
			balance-=db;
			cout<<"Remaining balance:"<<" "<<balance<<endl;
		}
		//function for credit
		void credit(float cd){
			balance+=cd;
			cout<<"New balance:"<<" "<<balance<<endl;
		}
		//function to display account information
		void enquiry(){
			cout<<"Hello"<<" "<<name<<" your account no. is "<<" "<<acc_no <<" and balance is: "<<" "<<balance<<endl;
		}
};

int main(){
	
	Account obj(12345,"ABC",1234.5); //object created
	obj.enquiry();//checking for initial account information
	obj.debit(200.5);//debiting amount
	obj.credit(400.10); //crediting amount
	obj.enquiry();//checking updated information
	
	
	return 0;
}
