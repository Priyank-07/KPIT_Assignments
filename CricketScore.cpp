#include<iostream>
using namespace std;

class Cricket{
	
	protected:
		int balls,runs;
		double rr;
	public:
		Cricket(){
			balls=0;
			runs=0;
		}
		Cricket(int b,int r){
			balls=b;
			runs=r;
		}
		void setter(int b,int r){
			balls=balls+b;
			runs=runs+r;
			
		}
		int getter(){
			return runs;
		}
		void run_rate(){
			cout<<(double)runs/balls<<endl;
		}
};

int main(){
	Cricket obj(102,138);
	int balls,runs;
	int exit=1;
	do{
		cout<<"Balls delivered";
		cin>>balls;
		cout<<"Runs scored";
		cin>>runs;
		obj.setter(balls,runs);
		cout<<obj.getter()<<endl;
		cin>>exit;
	}while(exit!=0);
	cout<<"Run rate: ";
	obj.run_rate();
	
	return 0;
}
