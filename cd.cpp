#include<iostream>
using namespace std;
class add{
      protected:
      	int a,b;
      	public :
      		
			  void display(){
					int c;
					c=a+b;
					cout<<"the sum is :"<<c;
				}
		};
		class sum : public add{
			public :
				sum(int x,int y){
					
      			a=x;
      			b=y;
			  }
	};
		main(){
			  	sum d1(2,3);
			  	
			  	d1.display();
			  }
			  
			  
			  
			 
