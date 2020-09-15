#include<iostream>
#include<cmath>
using namespace std;

class Point{
	protected:
		double x,y;
	public:
		Point(){
			x=0;
			y=0;
		}
		Point(double xx,double yy){
			x=xx;
			y=yy;
		}
		void display(){
			cout<<"x co-ordinate is:"<<x<<"y co-ordinate is:"<<y<<endl;
			cout<<"("<<x<<","<<y<<")"<<endl;
			
		}
		void cal_origin(){
			cout<<"Distance from origin "<<sqrt(x*x+y*y )<<endl;
		}
		void quadrant(){
			if(x<0 && y<0){
				cout<<"III quadrant";
			}else if(x>0 && y<0){
				cout<<"IV quadrant";
			}else if(x>0 && y>0){
				cout<<"I quadrant";
			}else{
				cout<<"II quadrant";
			}
		}
};

int main(){
	Point obj(4,5);
	obj.display();
	obj.cal_origin();
	obj.quadrant();
	return 0;
}
