//friend class
#include<iostream>
using namespace std;
class A{
	private :
		int a,b;
		friend class B;
};
class B{
	private:
		int c;

		public:
			void getdata(A e){
				cout<<"enter the value of a \n";
				cin>> e.a;
				cout<<"enter the value of b \n";
				cin>>e.b;
			}
			void display(){
				c= e.a+e.b;
				cout <<"the sum is:"<<c;
			}
};
main(){
	B d1; 
	A d2;
	d1.getdata(d2);
	d1.display();
	return 0;
	
}
