//binary operator overloading

#include<iostream>
using namespace std;

class Complex{
	float real, img;
	public:
		Complex(){
			real=0.0;
			img=0.0;
		}
		
		getData(float real, float img){
			this->real=real;
			this->img=img;
		}
		
		Complex operator -(Complex obj){
			Complex temp;
			temp.real=real-obj.real;
			temp.img=img-obj.img;
	
			return temp;
		}
		
		void operator -(){
			real--;
			img--;
		}
		
		void display(){
			cout<<"The Complex Nmber after subtraction is: ";
			cout<<" "<<real<<" + "<<img<<" i";
		}
};

int main(){
	
	Complex c1;
	c1.getData(3,4);
	Complex c2;
	c2.getData(2,3);
	
	-c2;
	c2.display();
	cout<<endl;
	
	Complex c3=c1-c2;
	c3.display();
	
	return 0;
}

