//area of rectangle
#include<iostream>
using namespace std;
class area 
{
	private:
		int l,b;
		public:
			int a;
			void getdata()
			{
				cout<<"enter length and breadth:";
				cin>>l>>b;
			}
			void displaydata()
			{
				a=l*b;
				cout<<"the area of rectangle is:"<<a;
			}
};
int main ()
{
	area a1;
	a1.getdata();
	a1.displaydata();
	
}
