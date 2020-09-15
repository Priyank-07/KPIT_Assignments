#include<iostream>
using namespace std;

class MyTime{
	protected:
		int HH,MM,SS;
	public:
		MyTime(){
			MM=SS=HH=0;
			
		}
		MyTime(int h,int m,int s){
			HH=h;
			MM=m;
			SS=s;
		}
		void display(){
			cout<<HH<<":"<<MM<<":"<<SS<<endl;
		}
};

int main(){
	
	MyTime obj(12,34,78);
	obj.display();
	return 0;
}
