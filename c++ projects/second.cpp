#include<iostream>
using namespace std;
class person{
	public:
		int name;
		int age;
};
class student :public person{
	public:
		void display1(){
		cout<<"the name of the student is"<<endl;
		cin>>name;
		cout<<"the age of the student is"<<endl;
		cin>>age;
		}
		
};
class faculty:public person{
public:
	void display2(){
		cout<<"the name of faculty member is"<<endl;
		cin>>name;
		cout<<"age of faculty member is "<<endl;
		cin>>age;
	}
};
	int main(){
	faculty f;
	student s;
f.display2();
s.display1();
	return 1;
	}
