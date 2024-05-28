//return by reference 
#include<iostream>
using namespace std;
class dis{
	private:
		int feet;
		float inch;
		public:
			void getdata(){
				cout<<"enter feet and inch:"<<endl;
				cin>>feet>>inch;
			}
			dis& add(dis &d){
				d.feet=feet+ d.feet;
				d.inch =inch+d.inch;
				if(d.inch>=12){
					d.inch=d.inch-12;
					d.feet ++;
				}
				return d;
			}
			void display()
			{
				cout<<feet<<","<<inch;
			}
		};
		main (){
		
		dis d1,d2,d3;
		d1.getdata();
		d2.getdata();
		d3=d1.add(d2);
		d3.display();
	}
		
