//Create a class distance with the data member feet and inch. Create the object
//of that class and add two object of the class.
#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		int inch;
		public:
			void getdata(){
				cout<<"enter feet and inch:";
				cin>>feet>>inch;
			}
			void add(Distance d1,Distance d2){
				feet=d1.feet+d2.feet;
				inch=d1.inch+d2.inch;
				if(inch>=12){
					inch=inch-12;
					feet ++;
				}
			//	feet=feet + (inch/12);
			//	inch = inch % 12;				
			
			}
			void display(){
				cout<<feet<<"-"<<inch;
			}
			
			
	
};
main(){

Distance d1, d2, d3;
d1.getdata();
d2.getdata();
d3.add(d1,d2);
d3.display();
}
