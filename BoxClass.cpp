#include<iostream>
using namespace std;

class Box{
	protected:
		float length,breadth,height;
	public:
		Box(){
			length=0;
			breadth=0;
			height=0;
		}
		Box(float l,float b,float h){
			length=l;
			breadth=b;
			height=h;
		}
		void calVolume(){
			cout<<"Volume is:"<<" "<<length*breadth*height<<endl;
		}
		void calSurfaceArea(){
			cout<<"Surface Area is:"<<" "<<2*(length*breadth+breadth*height+length*height)<<endl;
		}
		void state(){
			cout<<"length"<<length<<" breadth"<<breadth<<" height"<<height<<endl;
		}
};

int main(){
	Box obj(12.4,6.5,2.1);
	obj.state();
	obj.calVolume();
	obj.calSurfaceArea();
	return 0;
}
