//find the average of three number using parameterized   and copy constructor
#include<iostream>
using namespace std;
class avg{
	private:
		float a,b,c;
		public:
			//parameterized constructor
			avg(int one,int two,int three)
			{
				a = one;
				b = two;
				c = three;
				
			}
			//copy constructor
			avg(avg &r2){
				a =	r2.a;
				b = r2.b;
				c = r2.c;
			}
			void display(){
				float sum;
			sum = (a+b+c)/3;
			cout<<"the average of three number is :"<<sum;
			}
			
};
main(){
	avg r1(4,5,1);
	avg r2 (r1);
r2.display();
return 0;
}

