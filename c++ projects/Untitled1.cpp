#include<iostream>
using namespace std;
class student{
	public:
		char name[14];
		int roll_number;
		void getinformation();
		void setinformation(){
			cout<<"The name of student"<<endl;
			cin>>name;
			cout<<"roll number of student"<<endl;
			cin>>roll_number;
	
		}
		
};
void student::getinformation(){
cout<<"the name of student    "<<name<<endl;
cout<<"the roll number of student   "<<roll_number<<endl;	
}
class exam:public student{
	public:
		int phy;
		int oop;
		int eng;
		void setmarks(){
			cout<<"marks of physics"<<endl; 
			cin>>phy;
			cout<<"marks of oop"<<endl;
			cin>>oop;
			cout<<"marks of english"<<endl;
			cin>>eng;		
			
		}
		void getmarks(){

				cout<<"marks of physics   "<<phy<<endl;
				cout<<"marks of oop    "<<oop<<endl;
					cout<<"marks of english   "<<eng<<endl;
		}
};
class result:public exam,public student{
	public:
		this->getinformation();
		this->getmarks();
};
int main(){
	result* vptr;
	result e;
	student t;
	vptr=&e;
	vptr->setinformation();
	
	vptr->setmarks();
	vptr->getmarks();
	return 0;
}
