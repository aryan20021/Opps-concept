//create a class account with data member acc no ,balance and min balance (static)
//1. Write a program according to the specification given below:

//- Create a class Account with data members acc no, balance, and min_balance(static)

//- Include methods for reading and displaying values of objects

// Define static member function to display min_balance 



//Create array of objects to store data of 5 accounts and read and display values of each object
/*#include<iostream>
using namespace std;
class  account {
	int acc no,balance;
	static int min balance;
	
};*/

// include the method for reading and displaying value of object
#include<iostream>
using namespace std;
class  account {
	private:
	int accno,balance;
	static int minbalance;
	public:
		void getdata(){
			cout<<"enter acc,balance and min balance "<<endl;
			cin>>accno>>balance>>minbalance;
		}
		void display(){
			cout<<"acc  is"<<accno<<", balanceis:"<<balance<<" and min balanceis"<<minbalance;
		}
	
};
main(){
	account d1;
	d1.getdata();
	d1.display();
}
// Define static member function to display min_balance 
/*#include<iostream>
using namespace std;
class account{
	static int min_balance;
	public:
		static void display()
		{
			cout<<"min balance is :"<<min_balance;
		}
	}; 
	int account::min_balance=500;
	main(){
		account d1;
		account::display();
	}

//Create array of objects to store data of 5 accounts and read and display values of each object
#include<iostream>
using namespace std;
class  account {
private:
	int accno,balance;
	static int minbalance;
	public:
		void getdata(){
			cout<<"enter acc and balance "<<endl;
			cin>>accno>>balance;
		}
		void display(){
			cout<<"acc  is"<<accno<<", balanceis:"<<balance<<" and min balanceis"<<minbalance;
		}
	
};
int account::minbalance=100;
 int main(){
	account d1[5];
	int i;
	for(i=1;i<=5;i++){
		d1[i].getdata();
	}
for(i=1;i<=5;i++){
	d1[i].display();
}
}
