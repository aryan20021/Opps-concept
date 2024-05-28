#include<iostream>
using namespace std;
class A{
 protected:
 	int a,b;
 	public:
 		void getdata(){
 			cout<<"enter value of a and b "<<endl;
 			cin>>a>>b;
		 }
};
class B : public A{
	public:
		void display(){
			int z;
			z=a*b;
			cout<<"the product is:"<<z<<endl;
		}
		
				
		};
		class C : public A{
			public :
				void show(){
					int s;
				s=a+b;
				cout<<"the sum is:"<<s;
				
				}
};
main()
{
	B a1;
	C a2;
	a1.getdata();
	a1.display();
		a2.getdata();
	a2.show();
}
