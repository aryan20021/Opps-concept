#include<iostream>
using namespace std;
class A{
 protected:
 	int a,b;
 	public:
 		void getdata(){
 			cout<<"enter value of a and b "<<endl;
 			cin>>a>>b;
		 }
};
class B : public A{
	public:
		void display(){
			int z;
			z=a*b;
			cout<<"the product is:"<<z<<endl;
		}
		
				
		};
		class C : public A{
			public :
				void show(){
					int s;
				s=a+b;
				cout<<"the sum is:"<<s;
				}
};
main()
{
	B a1;
	C a2;
	a1.getdata();
	a1.display();
		a2.getdata();
	a2.show();
}
/*#include<iostream>
using namespace std;
class employee
{
protected:
char name[30];
int number;
public:
void getdata()
{
cout<<"Enter name and number\n";

cin>>name>>number;
}
void putdata()
{
cout<<"Name is"<<name;
cout<<"Number is"<<number;
}
};
class manager: public employee
{
private:
char title[30];
int dues;
public:
void getdata()
{
employee::getdata();
cout<<"Enter title and dues\n";
cin>>title>>dues;
}
void putdata()
{
employee::putdata();
cout<<"Title is"<<title;
cout<<"Dues is"<<dues;
}
};

class scientist: public employee
{
private:
char pubs[30];
public:
void getdata()
{
employee::getdata();
cout<<"Enter publication";
cin>>pubs;
}
void putdata()
{
employee::putdata();
cout<<"publication is"<<pubs;
}
};
class laborer: public employee
{
};
main()
{
manager m1;
scientist s1;
laborer l1;
cout<<"Enter data for manager\n";
m1.getdata();
cout<<"Enter data for scientist\n";
s1.getdata();
cout<<"Enter data for laborer\n";
l1.getdata();
cout<<"Data of manager\n";
m1.putdata();
cout<<"Data of scientist\n";
s1.putdata();
cout<<"Data of laborer\n";
l1.putdata();
}*/
