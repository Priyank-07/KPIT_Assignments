#include<iostream>
using namespace std;


class Weather{
	protected:
		float temp;
		float humidity;
		int city_code;
		string city_name;
		float pressure;
	public:
		Weather(){
			temp=0.0;
			humidity=0.0;
			city_code=00000;
			city_name="no";
			pressure=0.0;
		}
		Weather(float f1,float f2,float f3,string s1,int i1){
			temp=f1;
			humidity=f2;
			pressure=f3;
			city_name=s1;
			city_code=i1;
		}
		void display(){
			cout<<"Temperature"<<temp<<" Humidity"<<humidity<<" City Code"<<city_code<<" City Name"<<city_name<<" Pressure"<<pressure<<endl;
		}
		
	
};
int main(){
	Weather obj(38.7,115.4,155.6,"Patna",1234);
	obj.display();
	return 0;
}
