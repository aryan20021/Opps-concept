//Create a class time and add two time objects and return new time object.
#include<iostream>
using namespace std;
class time{
	private:
		int h,m;
		public:
			void getdata()
			{
				cout<<"enter hour and min:"<<endl;
				cin>>h>>m;
			}
			time add(time d2){
				h=h+d2.h;
				m=m+d2.m;
				if(m>59){
					m=m-60;
					h ++;
				}
				return *this;
			}
			void display(){
				cout<<h<<","<<m;
			}
			
};
main(){
		time d1,d2,d3;
		d1.getdata();
		d2.getdata();
		d3=d1.add(d2);
		d3.display();
		
}
