#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    char name[50];
    public:
    void emp()
    {
        cout<<"Enter employee name: ";
        cin>>name;
        cout<<"Enter employee id: ";
        cin>>id;
    }
};
class fulltime:public employee{
    public:
    int perdaysalary, days;
    int salary,s;
    public:
    void ft()
    {
        cout<<"Enter your per day salary: ";
        cin>>perdaysalary;
        cout<<"Enter no. of days: ";
        cin>>days;
        salary=perdaysalary*days;
        cout<<"\nSalary: "<<salary<<endl;
        salary=s;
    }
    void show()
    {
        cout<<"\nEmployee name: "<<name;
        cout<<"\nEmployee id: "<<id;
        cout<<"\nSalary: "<<salary;
        cout<<"\nStatus: FULLTIME"<<endl;
    }
};
class part_time:public employee{
	public:
	int working_hr, hr;
	int salary1,s1;
	public:
	void pt()
	{
		cout<<"Enter your hourly salary: ";
		cin>>working_hr;
		cout<<"Enter no. of hours: ";
		cin>>hr;
		salary1=working_hr*hr;
		cout<<"\nSalary: "<<salary1<<endl;
		salary1=s1;
	}
	void show1()
	{
		cout<<"Employee name: "<<name<<endl;
		cout<<"Employee id: "<<id<<endl;
		cout<<"Salary: "<<salary1<<endl;
		cout<<"Status: PART TIME"<<endl;
	}
};
int main()
{
	system("color F0");
	int const cnt=5;
	int v1=0, v2=0;
	int s,s1;
	fulltime f1[cnt];
	part_time p1[cnt];
	int i, ans;
	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * *EMPLOYEE MANAGEMENT SYSTEM* * * * * * * * * * * * * * * * * * * * * * *\n";
	do
	{
		cout<<"Press 1 to enter details.\nPress 2 to view the employee data.\nPress 3 for searching in the data base.\nPress 4 to quit.\nENTER YOUR CHOICE: ";
		cin>>ans;
		switch(ans)
		{
			case 1:
		    int y;
			cout<<"Press 1 if you're a full time employee.\nPress 2 if you're a part time employee.\nENTER CHOICE: ";
			cin>>y;
			switch(y)
			{
				case 1:
				f1[v1].emp();
				f1[v1].ft();
				cout<<"\n";
				if(s>=1000)
				{
					v1++;
				}
				break;
				
				case 2:
				p1[v2].emp();
				p1[v2].pt();
				cout<<"\n";
				if(s1>=1000)
				{
					v2++;
				}
				break;
			}
			break;
			
			case 2:
			for(i=0; i<v1; i++)
			{
				f1[i].show();
				cout<<"\n";
			}
			for(i=0; i<v2; i++)
			{
				p1[i].show1();
				cout<<"\n";
			}
			break;
			
			case 3:
			int x;
			cout<<"Enter the ID you want to search: ";
			cin>>x;
			for(i=0; i<v1; i++)
			{
				if(x==f1[i].id)
				{
					f1[i].show();
					cout<<"\n";
				}
			    else
			    {
			    cout<<"Sorry! There is no employee with this ID.\n";
				cout<<"\n";
				}
			}
			for(i=0; i<v2; i++)
			{
					if(x==p1[i].id)
				{
					p1[i].show1();
					cout<<"\n";		
				}
				else
				{
				cout<<"Sorry! There is no employee with this ID.\n";
				cout<<"\n";
				}
			}
			break;
		}
	} 
	while(ans!=4);
    return 0;
}