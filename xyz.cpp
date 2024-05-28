/*#include<iostream>
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
	account d1;
	d1.getdata();
	d1.display();
	return 0;
}*/

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
	}*/
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


