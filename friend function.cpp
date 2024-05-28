//friend function
/*#include<iostream>
using namespace std;
class sample{
	private:
		int a,b;
		public:
		void setdata(){
			cout<<"enter the value of a and b:"<<endl;
			cin>>a>>b;
		}
		friend float  mean (sample m);
};
float mean (sample m){
	return (m.a+m.b)/2;
}
main(){
	sample x;
	x.setdata();
	cout<<"the mean is"<<mean(x);
}*/
#include<iostream>
using namespace std;
class add{
	int a,b,dd;
	public :
		void gatdata(){
			cout<<"enter the value of a and b :"<<endl;
			cin>>a>>b;
			
		}
		void putdata(){
	int z;
			
			cout<<"the sum  of two numbe is :"<<dd;
		}
		friend int dd(add x);
	
};
int dd(add x){
	dd =x.a +x.b;
	return dd;
	
}

main (){
	add d1;
	d1.gatdata();
	dd(d1);
	d1.putdata();
	

	return 0;
}









