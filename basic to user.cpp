#include<iostream>
using namespace std;
class converter
{
private:
int meter;
public:
converter()
{
meter=0;
}
converter(float km )
{
meter=km*1000;
}
void display()
{
cout<<"Meter is :"<<meter;
}
};
main()
{
converter c1;
float km;
cout<<"enter distance in km:";
cin>>km;
converter c2 =km; // call goes to constructor passing argument as km
c2.display();
}

