// overloading assignment operator
#include<iostream>
using namespace std;
class marks
{
private:
int m1,m2;
public:
marks(int i, int j)
{
m1=i;
m2=j;
}
void operator = (marks &m4)
{
m1=m4.m1;
m2=m4.m2;
}
void display()
{
cout<<"marks in 1st subject"<<m1<<endl;
cout<<"marks in 2nd subject"<<m2<<endl;

}
};
main()
{
marks m3(60,75);
marks m4(55,49);
cout<<"marks of first student\n";
m3.display();
cout<<"marks of second studnet\n";
m4.display();
m3 = m4;
cout<<"marks of first subject\n";
m3.display();
}
