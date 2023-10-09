#include<iostream>
using namespace std;
class book{
	public:
	int age,contact[100];
	string id;
	int b,doj,source, destination,flight,pnr=0;
	int doj1,source1, destination1, flight1;
	char firstname[50],secondname[50], gender[50];
	public:
	void booking()
	{
	cout<<"Press 1 to book domestic flight.\nPress 2 to book international flight.\nEnter choice: ";
	cin>>b;
    cout<<"Please enter date of journey (DDMMYYYY)";
    cout<<"Enter valid date: ";
    cin>>doj;
    if(b==1)
    {
    	cout<<"1.Mumbai     2.Goa     3.Delhi     4.Bangalore\nEnter source(please enter serial number): ";
    	cin>>source;
    	cout<<"Enter destination(enter serial number): ";
    	cin>>destination;
    	cout<<"\n                         FLIGHTS FOUND\n";
    	cout<<" AIRLINE       DEPARTURE    ARRIVAL       PRICE         CATEGORY\n";
    	cout<<"1.Air India      11:00       13:30      Rs 10,000      Refundable\n";
    	cout<<"2.Indigo         10:00       12:30      Rs 12,000      Refundable\n";
    	cout<<"3.Vistara        14:45       17:05      Rs 9,000       Refundable\n";
    	cout<<"Enter choice (Numerical number): ";
    	cin>>flight;
    	if(flight==1)
    	{
    		cout<<"\nFlight selected: AIR INDIA\n";
    		cout<<"Departure: 11:00\n";
    		cout<<"Arrival: 13:30\n";
		}
		if(flight==2)
		{
			cout<<"\nFlight selected: INDIGO\n";
    		cout<<"Departure: 10:00\n";
    		cout<<"Arrival: 12:30\n";
		}
		if(flight==3)
    	{
    		cout<<"\nFlight selected: VISTARA\n";
    		cout<<"Departure: 14:45\n";
    		cout<<"Arrival: 17:05\n";
		}
	}
	if(b==2)
	{
		cout<<"1.Mumbai     2.Goa     3.Delhi     4.Bangalore\nEnter source(please enter serial number): ";
		cin>>source1;
		cout<<"1.Canada      2.Paris       3.Dubai       4.USA\n";
		cout<<"Enter destination(enter serial number): ";
		cin>>destination1;
		cout<<"                              FLIGHTS FOUND\n";
		cout<<" AIRLINE             DEPARTURE    ARRIVAL        PRICE          CATEGORY\n";
    	cout<<"1.Air Canada          00:35       15:30      Rs 1,00,000       Refundable\n";
    	cout<<"2.Emirates            01:00       12:30      Rs 1,28,000       Refundable\n";
    	cout<<"3.United Airlines     23:45       13:05      Rs 85,000         Refundable\n";
    	cout<<"Enter choice (Numerical number): ";
    	cin>>flight1;
    	if(flight1==1)
    	{
    		cout<<"\nFlight selected: AIR CANADA\n";
    		cout<<"Departure: 00:35\n";
    		cout<<"Arrival: 15:30\n";
		}
		if(flight1==2)
		{
			cout<<"\nFlight selected: EMIRATES\n";
    		cout<<"Departure: 01:00\n";
    		cout<<"Arrival: 12:30\n";
		}
		if(flight1==3)
		{
			cout<<"\nFlight selected: UNITED AIRLINES\n";
    		cout<<"Departure: 23:45\n";
    		cout<<"Arrival: 13:05\n";
		}
	}
    }
    void passenger()
    {
    	cout<<"\nEnter passenger details\nFirst name: ";
    	cin>>firstname;
    	cout<<"Second name: ";
    	cin>>secondname;
    	cout<<"Enter your age: ";
    	cin>>age;
    	cout<<"Gender (male/female): ";
    	cin>>gender;
    	//cout<<"Enter your contact number(10 digits only) : (+91)";
    	//cin>>contact[100];
    	cout<<"Enter mail id: ";
    	cin>>id;
	}
	void payment()
	{
		int pay,cardn;
		int n;
		cout<<"\nHow would you like to pay?\n1.Credit card\n2.Debit card\n3.Netbanking\nEnter choice: ";
		cin>>pay;
		cout<<"Enter card no: ";
		cin>>cardn;
		cout<<"Expiry date: 25/12/25\n";
		cout<<"Enter CVV: ***\n";
		cout<<"Transaction successful !\n";
		pnr++;
		cout<<"\nPNR : "<<pnr<<"\n";
		
		//yaha flight name kaise fetch krna h? and arrival departure kaise lana h?
		/*cout<<"Flight: ";
		cout<<"Name: "<<firstname<<" "<<secondname<<"\n";
		if(b==1)
		{
			cout<<"DOJ: "<<doj<<"\n";
		}
		if(b==2)
		{
			cout<<"DOJ: "<<doj1<<"\n";
		}
		*/
	}
	void display()
	{
		cout<<"\nPassenger name: "<<firstname<<" "<<secondname<<"\n";
		if(b==1)
		{
			cout<<"DOJ: "<<doj<<"\n";
		   	if(flight==1)
    	{
    		cout<<"Flight selected: AIR INDIA\n";
    		cout<<"Departure: 11:00\n";
    		cout<<"Arrival: 13:30\n";
		}
		if(flight==2)
		{
			cout<<"Flight selected: INDIGO\n";
    		cout<<"Departure: 10:00\n";
    		cout<<"Arrival: 12:30\n";
		}
		if(flight==3)
    	{
    		cout<<"Flight selected: VISTARA\n";
    		cout<<"Departure: 14:45\n";
    		cout<<"Arrival: 17:05\n";
		}
		}
		
		if(b==2)
		{
			cout<<"DOJ: "<<doj1<<"\n";
				if(flight1==1)
    	{
    		cout<<"Flight selected: AIR CANADA\n";
    		cout<<"Departure: 00:35\n";
    		cout<<"Arrival: 15:30\n";
		}
		if(flight1==2)
		{
			cout<<"Flight selected: EMIRATES\n";
    		cout<<"Departure: 01:00\n";
    		cout<<"Arrival: 12:30\n";
		}
		if(flight1==3)
		{
			cout<<"Flight selected: UNITED AIRLINES\n";
    		cout<<"Departure: 23:45\n";
    		cout<<"Arrival: 13:05\n";
		}
		}
		cout<<"Gender: "<<gender<<"\n";
		cout<<"Passenger's mail id: "<<id<<"\n\n";
	}
};
int main()
{
	book b1;
	int ans, pnr=0;
	cout<<"~                  WELCOME TO FLIGHT RESERVATION SYSTEM               ~\n~ ~ ~ ~ ~ ~ ~ Book your flight tickets at affordable prices ~ ~ ~ ~ ~ ~ \n";
	do{
		cout<<"Press 1 to book flight.\nPress 2 to cancel flight.\nPress 3 to check flight.\nPress 4 to exit\nENTER YOUR CHOICE: ";
		cin>>ans;system("CLS");
		switch(ans)
		{
			case 1:
			b1.booking();
			b1.passenger();
			b1.payment();
			pnr++;
			b1.display();
			break;
			
			case 2:
			int j;
			cout<<"\nEnter PNR: ";
			cin>>j;
			if(j==pnr)
			{
				pnr--;
			}
			cout<<"\nYour flight has been cancelled.\n\n";
			break;
			
			case 3:
			int p,i;
			cout<<"Enter PNR: ";
			cin>>p;
			for(i=0; i<pnr; i++)
			{
			if(p==pnr)
			{
				b1.display();
			}
		    else{
		    	cout<<"\nNO TICKET FOUND.\n\n";
			}
			break;
		  }
		}
	}
	while(ans!=4);
	return 0;
}