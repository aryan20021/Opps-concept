/*#include<iostream>
using namespace std;
template<class T>
void add(T a, T b){
	int c;
	c=a+b;
	cout<<"the sum is :"<<c;
}
main(){
	float p=4.6, q=3.4;
	add(p,q);
}
*/
//class function 
#include<iostream>
using namespace std;
template<class T1, class T2>
class add {
	T1 a;
	T2 b;
	public:
		 getdata(T1 x,T2 y){
			a=x;
			b=y;
		}
		void display(){
			int c;
			c=a+b;
			cout<<"the sum is :"<<c;
		}
		
};
main(){
	add<float,float> B;
	B.getdata(4.0,4.1);
	B.display();
}
	


