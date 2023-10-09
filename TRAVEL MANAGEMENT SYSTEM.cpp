#include<iostream>
using namespace std;
class options{
	public:
	int hotelp,sum,days;
	int price;
	int choice,book,adult, children,activity;
	string place,hotel,checkin,checkout,service;
	char name[50];
	public:
	void opt()
	{
		cout<<"\n                 Choose your favourite location from the following places:\n";
		cout<<"                         1.Goa   2.Pune   3.Gurgaon   4.Delhi\n";
		cout<<"                               ENTER YOUR CHOICE: ";
		cin>>choice;
		if(choice==1)
		{
			place="Goa";
		}
		if(choice==2)
		{
			place="Pune";
		}
		if(choice==3)
		{
			place="Gurgaon";
		}
		if(choice==4)
		{
			place="Delhi";
		}
	}
	void hb()
	{
		cout<<"\n                                  BOOKING OF HOTEL\n";
		cout<<"                          Choose any hotel from the following:";
		cout<<"\n                             1.Hotel luxuria - Rs15,000";
		cout<<"\n                             2.Casa E palace - Rs17,000";
		cout<<"\n                             3.Ramada plazaa - Rs14,000";
		cout<<"\n                             4.Radison hotel - Rs18,000";
		cout<<"\n                                ENTER YOUR CHOICE: ";
		cin>>book;
		if(book==1)
		{
			hotel="HOTEL LUXURIA";
			hotelp=15000;
		}
		if(book==2)
		{
			hotel="CASA E PALACE";
			hotelp=17000;
		}
		if(book==3)
		{
			hotel="RAMADA PLAZAA";
			hotelp=14000;
		}
		if(book==4)
		{
			hotel="RADISON HOTEL";
			hotelp=18000;
		}
	}

	void details()
	{
		cout<<"\n                                   USER DETAILS";
		cout<<"\n                                 Enter your name: ";
		cin>>name;
		cout<<"                              No. of people travelling";
		cout<<"\n                                    ADULTS: ";
		cin>>adult;
		cout<<"                                    CHILDREN: ";
		cin>>children;
		cout<<"\n                                ( ENTER WEEK DAY )";
		cout<<"\n                                 Check-in day: ";
		cin>>checkin;
		cout<<"                                 Check-out day: ";
		cin>>checkout;
		cout<<"                                 Total days of stay: ";
		cin>>days;
	}
	
	void other()
	{
		cout<<"\n                                 OTHER SERVICES:\n";
		cout<<"                        Choose from the following services:";
		cout<<"\n                               1.Trekking - Rs5,000";
		cout<<"\n                        2.Bonfire with live music - Rs4,500";
		cout<<"\n                            3.Night clubbing - Rs5,500";
		cout<<"\n                                4.Hiking - Rs5,000";
		cout<<"\n                                   5.NONE";
		cout<<"\n                              ENTER YOUR CHOICE: ";
		cin>>activity;
		if(activity==1)
		{
			service="        Trekking       ";
			price=5000;
		}
		if(activity==2)
		{
			service="Bonfire with live music";
			price=4500;
		}
		if(activity==3)
		{
			service="    Night clubbing     ";
			price=5500;
		}
		if(activity==4)
		{
			service="        Hiking         ";
			price=5000;
		}
		if(activity==5)
		{
			service="          None         ";
			price=0;
		}
	}
	void invoice()
	{
		cout<<"_____________________________________________________________________________\n";
		cout<<"                               DETAILS\n";
		cout<<"                     Name of the person: "<<name<<endl;
		cout<<"                            Destination: "<<place<<endl;
		cout<<"                      Adults travelling: "<<adult<<endl;
		cout<<"                    Children travelling: "<<children<<endl;
		cout<<"                           Check-in day: "<<checkin<<endl;
		cout<<"                          Check-out day: "<<checkout<<endl;
     	cout<<"//////////////////////////////////////////////////////////////////////////////\n";
		cout<<"                                INVOICE                                     \n";
		cout<<"             HOTEL                 -                Price                   \n";
		cout<<"           "<<hotel<<"                            "<<hotelp<<"                   \n";	
		cout<<"                                                                            \n";
	    cout<<"           EXTRA SERVICES          -                Price                   \n";
		cout<<"    "<<service<<"                         "<<price<<"                    \n";
		cout<<"//////////////////////////////////////////////////////////////////////////////\n";	
		cout<<"------------------------------------------------------------------------------\n";
		sum=(hotelp+price)*days;
		cout<<"|                       Total amount: "<<sum<<"                                  |\n";
		cout<<"|                            Tax    : 18%                                    |\n";
		cout<<"|               Total payable amount: "<<sum+sum*0.18<<"                                  |\n";
		cout<<"------------------------------------------------------------------------------\n";
	}
};
int main()
{
	system("color b0");
	options o;
	int start,i;
	char ans;
	cout<<"~                             WELCOME TO APEX TRAVEL COMPANY                                  ~\n";
	cout<<"_______________________________________________________________________________________________\n";
	cout<<"|                                  LOGIN CREDENTIALS:                                         |\n";
	cout<<"|                               Enter username: magnum123                                     |";
	cout<<"\n|                               Enter password: ********                                      |\n";
	cout<<"|_____________________________________________________________________________________________|\n";
	do{
	cout<<"                           Press 1 to start planning your trip: ";
	cin>>start;
	if (start==1)
	{
		o.opt();
		o.hb();
		o.details();
		o.other();
		system("CLS");
		o.invoice();
		cout<<"\n                     Would you like to book again ?(y/n)";
		cin>>ans;
		if(ans=='y')
		{
			system("CLS");
		}
	}
	}
	while(ans!='n');
	{
		cout<<"\n                     Thank you for using our services! ";
	}
	return 0;
}