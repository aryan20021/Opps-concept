//program  for friend function

#include<iostream>
#include<conio.h>
using namespace std;
class temp 
{
  int a, b, add;
  public:
  void input() 
{
  cout << "Enter the value of a and b:";
  cin>>a>>b;
 }
  friend int ad(temp &t);
  void display() 
 {
   cout << "The sum is :" <<add;
 }
};
  int ad(temp &t) 
{
  t.add = t.a + t.b;
  
   
}
  int main() 
{
   temp t1;
   t1.input();
   ad(t1);
   t1.display();
   return 0;
}
