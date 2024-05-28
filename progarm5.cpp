//write a program that convert object of another distance class with data member feet and inch(1m=3.3feet and 1 cm=0.4 inch
#include<iostream>
using namespace std;
class Dis1{
	public:
	int feet;
	float inch;
	public:
		void getdata(){
		cout<<"enter feet and inch:";
		cin>>feet>>inch;
		}
	};
		
		class dis{
			public:
			float meter;
			float cm;
			void operator = (Dis1 d1){
				meter= d1.feet / 3.3;
				cm=d1.inch / 0.4;
			}
			void display(){
				cout<<"meteris:"<<meter<<"cm is :"<<cm;
			}
			
		};
main(){
	Dis1 d1;
	dis d2;
	d1.getdata();
	d2=d1;
	d2.display();
}

