//  constructor
#include<iostream>
using namespace std;
class rectangle {
	private:
		int a,b;
		public:
			//paramerterized constructor
			rectangle(int len,int bre)
			{
				a = len;
				b = bre;
			}
			//copy constructor
			rectangle(rectangle &r2){
				a = r2.a;
				b = r2.b;
			}
			void dispalydata(){
				cout<<"the area of rectangle is:"<<a*b;
				
			}
			
			
};
 int main (){
	rectangle r1(2,8);
	rectangle r2 =r1;
 	r2.dispalydata();
	return 0;
}

