//compile time polymorphism 
/*#include<iostream>
using namespace std;
class A{
	double a,b;
	public:
	void getdata(int x,int y){
		a=x;
		b=y;
		cout<<"the sum is:"<<a+b;
	}
	void getdata(double x,double y){
		a=x;
		b=y;
		cout<<"the sum is :"<<a+b;
	}
};
main(){
	A d,d1;
	d.getdata(3,6);
	d1.getdata(4.5,6.3  );
}*/
//run-time polymorphism 

#include<iostream>
using namespace std;
class A{
	protected:
	int a=3,b=5;
	public:
		//virtual function
	virtual void display(){
		int c;
		c=a+b;
		cout<<"the sum is :"<<c<<endl;
	}
};
class B : public A{
	public:
		void display(){
			cout<<"hello world";
		}
	
	
	
};
main(){
	A *bsp;
	B d1;
	bsp=&d1;
	bsp->display();
}
	
	
	
	
	
	
	

