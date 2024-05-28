//Create a class time with required data member and member function to display
//the time formal in HH:MM: SS. Add the two time object given by the user.
#include<iostream>
using namespace std;
class time{
	int hh,mm,ss;
	public:
		void getdata(){
			cout<<"enter hour,min and sec:";
			cin>>hh>>mm>>ss;
		}
		void add(time d1,time d2 ){
			hh=d1.hh+d2.hh;
			mm=d1.mm+d2.mm;
			ss=d1.ss+d2.ss;
			if(mm>59){
				mm=mm-60;
				hh++;
			}
			if(ss>59){
				ss=ss-60;
				mm++;
			}
		 
		
		}
		void display(){
			cout<<hh<<":"<<mm<<":"<<ss;
		}
};
main (){

time d1,d2,d3;
d1.getdata();
d2.getdata();
d3.add(d1,d2);
d3.display();
}

