#include<iostream>
using namespace std;

class Vehicle{
	protected:
		string mode,fuelLvL;
		double temp,speed;
		int rpm;
	public:
		Vehicle(){
			mode="Na";
			fuelLvL="Na";
			temp=0.0;
			speed=0.0;
			rpm=0;
		}
		Vehicle(string mode1,string fuelLvL1,double temp1,double speed1,int rpm1){
			mode=mode1;
			fuelLvL=fuelLvL1;
			temp=temp1;
			speed=speed1;
			rpm=rpm1;
		}
		void displayState(){
			cout<< " Mode:"<<mode<<" Fuel level "<<fuelLvL<<" Temp "<<temp<<" Speed "<<speed<<" kmph "<<" RPM "<<rpm;
		}
};

int main(){
	Vehicle obj("Manual","Mid",150.7,78.7,440);
	obj.displayState();
	return 0;
}
