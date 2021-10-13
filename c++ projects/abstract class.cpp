#include<iostream>
using namespace std;
class bank {
	public:
	virtual voiddeposit() =0;
	virtual void withdrawal() =0;
};
class checking :public bank{
	public:
	int x;
	int y;
	void deposit(){
		int x=8;
		cout<<"deposit amount is"<<x<<endl;
		void withdraw(){
			int y=9;
			cout<<"withdraw amount is"<<y<<endl;
		}
	}
};
class saving :public bank ,checking{
	public:
		int z; 
		int d;
	void deposit(){
			int z=5;
			cout<<"monthly interset ammount is"<<z<<endl;
		void withdraw()
		{
				int d=3;
				cout<<"monthly withdraw amout is"<<d<<endl;
			}
		}
};
int main(){
	saving s;
	s.deposit();
	s.withdrawal();
	return 0;
}

