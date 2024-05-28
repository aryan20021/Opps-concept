/*# Create a class distance with two data members feet and inch. Use appropriate member function
to input data, add two distance objects and also return the distance object. Use‘+’ operator to add
the distance object.*/
#include<iostream>
using namespace std;
class disa{
	int feet,inch;
	public:
		void getdata(){
			cout<<"enter feet and inch"<<endl;
			cin>>feet>>inch;
			
		}
		disa operator + (disa d2){
			feet=feet+d2.feet;
			inch=inch+d2.inch;
			return *this;
			
		}
		void display(){
			cout<<"the feet is:"<<feet<<", the inch is:"<<inch;
		}
};
main(){
	disa d1,d2,d3;
	d1.getdata();
	d2.getdata();
	d3 = d1 + d2;
	d3.display();
}
