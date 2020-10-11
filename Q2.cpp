#include<iostream>
using namespace std;

class Rational{
	int num, denom;
	public:
		Rational(){
			num=0;
			denom=0;
		}
		
		void getData(int num, int denom){
			this->num=num;
			this->denom=denom;
		}
		
		Rational operator +(Rational obj){
			Rational temp;
			temp.denom=denom*obj.denom;
			temp.num=(obj.num*denom)+(num*obj.denom);
			
			return temp;
		}
		
		Rational operator /(Rational obj){
			Rational temp;
			temp.denom=obj.num*denom;
			temp.num=num*obj.denom;
			
			return temp;
		}
		
		void operator ==(Rational obj){
			float temp1,temp2;
			temp1=((float)num/(float)denom);
			temp2=((float)obj.num/(float)obj.denom);
			if(temp1==temp2){
				cout<<"They are equal";
			}
			else{
				cout<<"They are unequal";
			}
		}
		
		Rational operator =(Rational obj){
			num=obj.num;
			denom=obj.denom;
		}
		
		void operator <<(Rational obj){
			cout<<obj.num<<"/"<<obj.denom;
		}
		void operator ++(){
			num=num+denom;
		}
		
		void operator ++(int){
			num=num+denom;
		}
		
		friend void display(Rational obj){
			cout<<obj.num<<"/"<<obj.denom;
		}
};

int main(){
	
	Rational r1;
	r1.getData(1,2);
	Rational r2;
	r2.getData(1,3);
	Rational r3;
	r3.getData(1,5);
	Rational r4;
	
	display(r1+r2);
	cout<<endl;
	
	display(r1/r2);
	cout<<endl;
	
	r2==r1;
	cout<<endl;
	
	r4=r2;
	display(r4);
	cout<<endl;
	
	r3<<r3;
	cout<<endl;	
	
	++r3;
	display(r3);
	cout<<endl;

	r3++;
	display(r3);

	return 0;
}
