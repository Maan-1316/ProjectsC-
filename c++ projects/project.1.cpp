
class student //Creating a class Student
{
public:
	int rollno;
	int id;
	int num;
	int d_mark, i_mark, cal_mark, oop_mark, e_mark, total;
	float avg;
	char name[50];
	void getdata();
	void user_write();
	void student_grade();

};
void student::user_write()
{
	cout<< "Enter the name of student:"<<endl;
	cin>>name;
	cout<< "Enter the roll no. of student" <<endl;
	cin >> rollno;
	cout<< "Enter the id:" <<endl;
	cin>>id;
	cout<< "Enter the marks you obtained in DLD is :" <<endl;
	cin>>d_mark;
	cout<< "Enter the marks you obtained in islamic study is :"<<endl;
	cin>>i_mark;
	cout<<"Enter the marks you obtained in calculus is :"<<endl;
	cin>>cal_mark;
	cout<<"Enter the marks you obtained in OOP is :"<<endl;
	cin >>oop_mark;
	cout<<"Enter the marks you obtained in English is :"<<endl;
	cin>>e_mark;
}
void student::getdata()
{
	cout<< "=============================="<<endl;
	cout<< "=       STUDENT RESULT       ="<< endl;
	cout<< "=============================="<< endl;
	cout<< "Student Roll no is: " <<rollno<< endl;
	cout<< "------------------------" <<endl;
	cout<< "Student name is: " <<name<<endl;
	cout<< "------------------------" <<endl;
	cout<< "Student id is: " <<id<<endl;
	cout<< "-------------------------" <<endl;
	cout<< "Student marks in DLD is : " <<d_mark<<endl;
	cout<< "-----------------------------" <<endl;
	cout<< "Student marks in islamic study is: " <<i_mark<<endl;
	cout<< "--------------------------------------" <<endl;
	cout<< "Student mark in calculus is: " <<cal_mark<<endl;
	cout<< "---------------------------------" <<endl;
	cout<< "Student marks in OOP is : " <<oop_mark<<endl;
	cout<< "--------------------------------" <<endl;
	cout<< "student marks in English is : " <<e_mark<<endl;
	cout<< "----------------------------------" <<endl;
	system("pause");
}
void student::student_grade()
{
	cout<< "Enter Student Total numbers: " <<endl;
	cin>>num;
	cout << "---------------------------------" <<endl;
	if (num >= 400) {
		cout << "Grade A" << endl;
	}
	else if (num >= 300) {
		cout<< "Grade B" <<endl;
	}
	else if (num >= 200) {
		cout<< "Grade C" <<endl;
	}
	else if (num >= 100) {
		cout<< "Grade D" <<endl;
	}
	else {
		cout<< "Grade F" <<endl;
	}
	system("pause");
}
class resultsheet :public student
{
public:
	void resultcard()
	{
		this->getdata();
	}
	void percentage()
	{
		cout<< "Enter the marks you obtained in DLD is :" <<endl;
		cin>>d_mark;
		cout<< "Enter the marks you obtained in islamic study is :" <<endl;
		cin>>i_mark;
		cout<< "Enter the marks you obtained in calculus is :" <<endl;
		cin>>cal_mark;
		cout<< "Enter the marks you obtained in OOP is :" <<endl;
		cin>>oop_mark;
		cout<< "Enter the marks you obtained in English is :" <<endl;
		cin>>e_mark;
		total = d_mark + i_mark + cal_mark + oop_mark + e_mark;
		avg = float(total) / 5.0;
		cout<< "Total is: "<< total<<endl;
		cout<< "-------------------------" <<endl;
		cout<<"average of marks is: "<<avg<<endl;
		system("pause");
	}
};
int main()
{
	resultsheet* rptr;
	resultsheet r;
	rptr = &r;
	int select;

	do
	{
		system("cls");
		cout<<"=======MAIN MENU======"<<endl;
		cout<<"1-:-Enter Student Data"<<endl;
		cout<<"2-:-Display the Student Data"<<endl;
		cout<<"3-:-Display Grade of Student"<<endl;
		cout<<"4-:-Display the Percentage of Number"<<endl;
		cout<<"5-:-Exist" << endl;
		cout<<"Select number you want (1/2/3/4/5)?"<<endl;
		cin >>select;
		switch (select)
		{
		case 1:
			rptr->user_write();
			break;
		case 2:
			rptr->resultcard();
			break;
		case 3:
			rptr->student_grade();
			break;
		case 4:
			rptr->percentage();
			break;
		case 5:
			exit(1);
		default:
			cout<<"The number you enter is invalid"<<endl;
		}
	} while (1);
}

