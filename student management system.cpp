//studnt management system
//1 add new student, 2 display record 3 search student 4 update student 5 delete student 6 exit enter choice
// multiple inheritence jo marzi
#include<iostream>
using namespace std;
class student{
	public:
	int rollno;
	char name[100],mom[100],dad[100];
	public:
	void intro()
	{
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your roll no: ";
		cin>>rollno;
		cout<<"Enter Father's name': ";
		cin>>dad;
		cout<<"Enter Mother's name: ";
		cin>>mom;
		cout<<"Thank you!";
	}
};
class get:public student{
	public:
	void show()
	{
		cout<<"\nStudent name: "<<name;
		cout<<"\nStudent roll no: "<<rollno;
		cout<<"\nStudent's father is: "<<dad;
		cout<<"\nStudent's mother is: "<<mom<<endl;
	}

};
int main()
{
	system("color F4");
	int const cnt=6;
	get s1[cnt];
	int s=0;
	int i, ans;
	cout<<"* * * * * * * * * * * * * * * * * * * *Welcome to the student management system* * * * * * * * * * * * * * * * * * * \n";
	do{
		cout<<"\nPress 1 to add new student.\nPress 2 to display record.\nPress 3 to search student.\nPress 4 to update student.\nPress 5 to delete student data.\nPress 6 to EXIT.\nENTER CHOICE: ";
		cin>>ans;
		
		switch(ans)
		{
			case 1:
			s1[s].intro();
			cout<<"\n";
			s++;
			break;
			
			case 2:
			for(i=0; i<s; i++)
			{
			s1[i].show();
			cout<<"\n";
			}
			break;
			
			case 3:
			int x;
			cout<<"Enter the roll no. you want to search: ";
			cin>>x;
			for(i=0; i<s; i++)
			{
				if(x==s1[i].rollno)
			    {
				cout<<"Details of the student are:\n";
				s1[i].show();
			    } 
			    //if(x!=s1[i].rollno)
			    //{
			    //	cout<<"\nOops! There is no student registered to this roll no.\n";
				//}
			}
			break;
			
			case 4:
			int y;
			cout<<"Enter the roll no. of the student whose details you want to update: ";
			cin>>y;
			for(i=0; i<s; i++)
			{
				if(y==s1[i].rollno)
				{
				cout<<"Details of the student are:\n";
				s1[i].show();
				s--;
				cout<<"\nTo update, please fill the details again: \n";
				s1[i].intro();
				s++;
				}
		    }
		    break;
		    
		    case 5:
		    int z;
		    cout<<"Enter the roll no. whose details you want to delete: ";
		    cin>>z;
		    for(i=0; i<s; i++)
		    {
		    	if(z==s1[i].rollno)
		      {
		    	s1[i].show();
		    	cout<<"\nThe details have been deleted.\nThank you!\n";
		        s--;
			  }
			
			}
		    
		}
	}
	while(ans!=6);
	return 0;
}