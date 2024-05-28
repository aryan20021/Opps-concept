//prefix unary operator
/*#include<iostream>
using namespace std;
class add{
	int a,b;
	public:
		void getdata(){
			cout<<"enter a,b\n";
			cin>>a>>b;
			
		}
		void operator ++(){
			int c;
			c=a+b;
			cout<<"the sum is :"<<c;
		}
		
};
main()
{
	add a1;
	a1.getdata();
	++a1;
}*/
//prefix unary operator
/*#include<iostream>
using namespace std;
class add{
	int a,b;
	public:
		void getdata(){
			cout<<"enter a,b\n";
			cin>>a>>b;
			
		}
		void operator ++(int){
			int c;
			c=a+b;
			cout<<"the sum is :"<<c;
		}
		
};
main()
{
	add a1;
	a1.getdata();
	a1++;
}*/
//prefix unary operator
/*#include<iostream>
using namespace std;
class add{
	int a,b;
	public:
		void getdata(){
			cout<<"enter a,b\n";
			cin>>a>>b;
			
		}
		add operator ++(){
			int c;
			c=a+b;
			return *this;
		}
		void display(){
						cout<<"the sum is :"<<c;

		}
		
};
main()
{
	add a1, a2;
	a1.getdata();
	a2=++a1;
	a2.display();
	
}*/


#include<iostream>
using namespace std;
class add
{
private:
int a,b,c;
public:
void getdata()
{
cout<< "Enter a and b\n";
cin>>a>>b;
}
add operator++()
{
c=a+b;
return *this;
}
void display()
{
cout<<"The sum is"<<c;
}
};
main()
{
add s1,s2;
s1.getdata();
s2=++s1;
s2.display();
}

