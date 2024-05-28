//multilevel inheritance
#include<iostream>
using namespace std;
class add{
	protected:
		int a;
		public:
		void getdata(){
			cout<<"enter the value of a"<<endl;
			cin>>a;
		}
			
};
class sum : public add{
protected:
		int b;
		public:
		void putdata(){
			cout<<"enter the value of b"<<endl;
			cin>>c;
	
		void readdata(){
};
class avg1 : public sum{
	protected:
		int c;
		public:
			cout<<"enter the value of c"<<endl;
			cin>>c;
		}
		
		void display(){
				cout<<"the average of three number is:"<<a+b+c;
			}
};
main(){
	avg1 d1;
	d1.getdata();
	d1.putdata();
	d1.readdata();
	d1.display();
}

