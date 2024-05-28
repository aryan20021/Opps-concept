//execption handling 
//example 
#include<iostream>
using namespace std;
main(){
	int a,b;
	cout<<"enter value of a and b\n";
	cin>>a>>b;
	try {
		if(b==0){
			//throw (b);
		}
		else {
			cout<<"result is "<<(a/b);
		}
	}
	catch (int x){
		cout<<"divide by zero exception "<< x;
	}
}
/*#include<iostream>
using namespace std;
void num(int k)
{
try
{
if(k==0)throw k;
else
if(k>0) throw 'p';
else
if(k<0)throw 1.3 ;
cout<<" try block\n";
}
catch(char g)
{
cout<<"Caught a Positive value\n";
}
catch(int j)
{
cout<<"caught an null value\n";
}
catch(double f)
{
cout<<"Caught a Negative value\n";
}
cout<<"****try catch****\n";
}
main()
{
cout<<"Demo of multiple catches\n";
num(0);
num(5);
num(-1);

}
*/
