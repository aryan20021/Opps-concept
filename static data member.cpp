//example of static data member
#include<iostream>
using namespace std;
class inc{
	static int count ;
	public:
		void getdata(){
			count++;
			
		}
		void display(){
			cout<<"count is"<<count<<endl;
		}
};
int inc::count=0;
main()
{
	inc i1,i2,i3;
	i1.getdata();
	i2.getdata();
	i3.getdata();
	i1.display();
	i2.display();
	i3.display();
}
