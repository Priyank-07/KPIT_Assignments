#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
	
	protected:
		double s1,s2,s3;
	public:
		Triangle(){
			s1=0;
			s2=0;
			s3=0;
		}
		Triangle(int i1,int i2,int i3){
			s1=i1;
			s2=i2;
			s3=i3;
		}
		
		bool eligibility(){
			if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2){
				return true;
			}else{
				return false;
			}
			
		}
		void area(){
			double s=(s1+s2+s3)/2;
			cout<<"area"<<endl;
			cout<<sqrt(s*(s-s1)*(s-s2)*(s-s3))<<endl;
		}
		void circumference(){
			cout<<"perimeter"<<endl;
			cout<<s1+s2+s3<<endl;
		}
};
int main(){
	Triangle obj(12,15,16);
	if(obj.eligibility()){
		obj.area();
	    obj.circumference();
	}else{
		cout<<"No triangle Possible";
	}
	
	return 0;
}
