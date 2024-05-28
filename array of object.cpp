/*Example of Array of object:
Create a class name employee with data member name and age and member function
getdata() to ask user to enter name and age of employee. Write member function
display() to display data of 10 staff.*/
#include<iostream>
using namespace std;
class employee{
	private :
	string name ;
	int age;
	public:
		void getdata(){
			cout<<"enter and name and age"<<endl;
			cin>>name>>age;
		}
		void display(){
			cout<<name<<"&"<<age<<endl;
		}
		
};
main (){
	employee o1[10];
	int i;
	for (i=1;i<=10;i++)
	{
		o1[i].getdata();
	}
	for (i=1;i<=10;i++)
	{
		o1[i].display();
	}
}
