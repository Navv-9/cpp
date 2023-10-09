#include<iostream>
using namespace std;
class emp{
	public:
	int empno;
	char empname[30];
	public:
	void get()
	{
		cout<<"\nEnter employee id: ";
		cin>>empno;
		cout<<"Enter employee name: ";
		cin>>empname;
	}
};
class fulltime: public emp{
	public:
	float daily_rate;
	int days, salary;
	public:
	void getdata()
	{
	    cout<<"Enter per day salary: ";
		cin>>daily_rate;
		cout<<"Enter no. of days: ";
		cin>>days;
	}
	void cal(){
		salary=daily_rate*days;
		cout<<"\nSalary : "<<salary;
	}
	void show()
	{
		cout<<"\nEmployee id: "<<empno;
		cout<<"\nEmployee name: "<<empname;
		cout<<"\nSalary: "<<salary;
		cout<<"\nStatus: FULLTIME";
		
	}
};
class partime:public emp{
	public:
	int hr_rate;
	int working_hr, salary1;
	public:
	void get1()
	{
		cout<<"Enter hourly salary: ";
		cin>>hr_rate;
		cout<<"Enter working hours: ";
		cin>>working_hr;
		
	}
	void cal1()
	{
		salary1=hr_rate*working_hr;
		cout<<"\nSalary: "<<salary1<<endl;
	}
	void show1()
	{
		cout<<"\nEmployee id: "<<empno;
		cout<<"\nEmployee name: "<<empname;
		cout<<"\nSalary: "<<salary1;
		cout<<"\nStatus: PART TIME"<<endl;
	}
};
int main()
{
	int const cnt=5;
	int v1=0, v2=0;
	fulltime f1[cnt];
	partime p1[cnt];
	int x,i;
	do
	{
		cout<<"Press 1 to enter record.\nPress 2 to display record.\nPress 3 to search record.\nPress 4 to quit.\n";
        cout<<"What would you like to enter? ";
        cin>>x;
        switch(x)
        {
        case 1:
        	int y;
        	cout<<"\nPress 1 if you're a full time employe.\nPress 2 if you're a part time employee.\nENTER: ";
        	cin>>y;
        	switch(y)
        	{
        		case 1:
        			f1[v1].get();
        			f1[v1].getdata();
        			f1[v1].cal();
        			v1++;
        			break;
        			
        		case 2:
        			p1[v2].get();
        			p1[v2].get1();
        			p1[v2].cal1();
        			v2++;
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
			}
		break;
		
		case 3:
		int a;
		cout<<"\nEnter employee id: ";
		cin>>a;
		for(int i=0; i<v1; i++)
		{
			if(f1[i].empno==a)
			{
				f1[i].show();
			}
				if(p1[i].empno==a)
			{
				p1[i].show1();
			}
		}
		
		}
	}
	while(x!=4);
	return 0;
}