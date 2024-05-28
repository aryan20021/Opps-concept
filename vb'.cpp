#include<iostream>
using namespace std;
class A
{
	private:
		
		int a,b;
		public:
			void setvalue(){
				 a=5;
			 b=5;
		}
		
			
			friend int B(A x);
			
};
int B(A x){
	return (x.a + x.b);
}
main(){
	A d1;
	d1.setvalue();
	cout<<"the sum is "<<B(d1);
	
	return 0;
}
