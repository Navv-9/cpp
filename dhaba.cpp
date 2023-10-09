#include<iostream>
using namespace std;
class student 
{
	public:
	int id;
	string name;
	float salary;
	void information(int i, string n, float s)
	{
		id=i;
		name=n;
		salary=s;
	}
	void display()
	{
		cout<<id<<" "<<name<<" "<<salary<<endl;
	}
};
int main()
{
	//objects of the class student
	student e1,e2, e3;
	e1.information(101,"Navu",100007.3);
	e2.information(139,"Khushi",14500.456);
	e3.information(110,"Muma",95000.34);
	cout<<"Student portal:\nID  NAME  SALARY\n";
	e1.display();
	e2.display();
	e3.display();
	return 0;
}