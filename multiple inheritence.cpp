//mutliple inheritance
#include<iostream>
using namespace std;
class A{
	protected:
		int x;
		public:
			void getdata(){
				cout<<"enter the value of x"<<endl;
				cin>>x;
			}
};
class B 
{
	protected :
		int y;
		public:
			void readdata()
			{
				cout<<"enter value of y"<<endl;
			cin>>y;
			}
};
class C : public A, public B {
	public:
		void display(){
			int z;
		z = x+y;
		cout<<"the sum is:"<<z;
		}
		
}; 
main(){
	C d1;
	d1.getdata();
	d1.readdata();
	d1.display();
}
