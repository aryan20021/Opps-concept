//file-handling
//writing into the file
#include<iostream>
#include<fstream>
using namespace std;
main(){
		string srg;
	fstream sum;
	sum.open("shrijan.txt");
	sum<<"my name is shrijan neupane:";
	sum<<"I live in manigram";
	sum.close();

sum.open("shrijan.txt");
getline(sum, srg);
cout<<srg;
sum.close();
}  
//reading from the file
/*#include<iostream>
#include<fstream>
using namespace std;
 main(){
	string srg;
	fstream add;
	add.open("shrijan.txt");
	getline(add, srg);
	//add>>srg;
	cout<<srg;
	
	add.close();
}
/*#include<iostream>
#include<fstream>
using namespace std;
main(){
    int a,b;
	ofstream sum;
	sum.open("shrijan.txt");
cout<<"enter the data";
cin>>a>>b;
sum<<a<<b<<endl;
sum.close();
}*/
