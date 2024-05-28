//call by reference
#include <iostream>
using namespace std;
class dis{
	private:
		int feet,inch;
		public:
			void getdata(){
				cout<<"enter feet and inch:"<<endl;
				cin>>feet>>inch;
				
			}
			void display(){
				cout<<"feet is:"<<feet<<", inch is:"<<inch;
			}
			void add(dis &d1,dis &d2){
				feet=d1.feet+d2.feet;
				inch=d1.inch+d2.inch;
				feet= feet + (inch/12);
				inch= inch%12;
			}
			
};
    int main(){
	dis d1,d2,d3;
	d1.getdata();
	d2.getdata();
	d3.add(d1,d2);
	d3.display();
	return 0;
}
