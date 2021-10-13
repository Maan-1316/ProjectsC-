#include<iostream>
using namespace std;
class mother{
	public:
virtual   void display(){
		cout<<"mother cooks food for his son"<<endl;
	}
};
class child:public mother{
	public:
	void display(){
		cout<<"son eats food"<<endl;
	}
};
int main(){
mother*m;
mother d;
child c;
m=&c;
m-> display();
m->  display();
    return 0;
}
