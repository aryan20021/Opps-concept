#include<iostream>
using namespace std;
class inc {
	static int count;
	public:
		void getdata(){
			count++;
		}
		static void display(){
			cout<<"count is"<<count;
		 
};
 int inc::count = 0;
main(){
	inc i1,i2,i3;
	i1.getdata();
	i2.getdata();
	i3.getdata();
	inc::display();
	inc::display();
	inc::display();
	}
	
