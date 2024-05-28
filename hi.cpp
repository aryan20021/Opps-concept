#include<iostream>
using namespace std;
class converter
{
private:
float len;
public:
void getdata()
{
cout<<"Enter length in km\n";
cin>>len;
}
operator float()
{
float m;
m=len*1000.0;
return(m);
}
};
main()
{
converter c1;
c1.getdata();
float m;
m=c1; //call goes to operator function
cout<<"length in meter is"<<m;
}
