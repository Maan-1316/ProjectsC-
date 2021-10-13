#include<iostream>
using namespace std;
class person{
	public:
		int name;
		int age;
		void display();
};
 void person::display(){
	cout<<"the name of person is"<<endl;
	cin>>name;
	cout<<"the age of person  is"<<endl;
	cin>>age;
}

class student:virtual public  person {
	public:
		display1(){
		
	cout<<"the name of student is" <<endl;
	cin>>name;
	cout<<"the age of student is"<<endl;
	cin>>age;
}
};
class faculty:virtual  public person{
	public:
		display2(){
		cout<<"the name of faculty is"<<endl;
		cin>>name;
		cout<<"the age of faculty is "<<endl;
		cin>>age;
}
class child:virtual public faculty , public  student{
	public:
		int name;
		int age;
	display3(){
		cout<<"the name of faculty"<<endl;
		cin>>name;
		cout<<"the age of faculty"<<endl;
		cin>>age;
	}
};
int main(){
	person c;
	c.display();
	student s;
	s.display1();
	faculty f;
	f.display2();
	child a;
	a.display3();
		return 0;
}

	
	
