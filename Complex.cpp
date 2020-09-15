#include<iostream>
using namespace std;
class Complex{
	protected:
		int real,img;
	public:
		Complex(){
			real=0;
			img=0;
		}
		Complex(int r,int i){
			real=r;
			img=i;
		}
		void display(){
			cout<<real<<""<<"+i"<<img<<endl;
		}
		void add(int k,int m){
			cout<<real+k<<""<<"+i"<<img+m<<endl;
		}
		void substract(int k,int m){
			cout<<real-k<<""<<"+i"<<img-m<<endl;
		}
		void multiply(int k,int m){
			cout<<(real*k-img*m)<<""<<"+i"<<(real*k)+(img*m)<<endl;
		}
		
};
int main(){
	Complex obj(2,4);
	obj.display();
	obj.add(3,4);
	obj.multiply(3,4);
	obj.substract(3,4);
	
	
	return 0;
}
