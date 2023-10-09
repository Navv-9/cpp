#include<iostream>
using namespace std;
class introduction{
	public:
    int ans;
    void question(int i)
    {
    int j;
    int w=0,d=0;
	char loop;
		
	for(j=0; j<4; j++)
	{
	cout<<"Press 1 to check balance.\nPress 2 for withdrawl.\nPress 3 for depositing money.\nPress 4 to exit.\n";
    cout<<"What would you like to enter? "; 
    cin>>i;
    ans=i;

	if(ans==1)
	{
		cout<<"Your balance is 1000 Rs.";
	}
	if(ans==2)
	{
		cout<<"How much would you like to withdraw? ";
		cin>>w;
		cout<<"\nCurrent balance is: "<<1000-w+d;
	}
	if(ans==3)
	{
		cout<<"How much money would you like to deposit? ";
		cin>>d;
		cout<<"\nCurrent balance is: "<<1000+d-w;
	}
	if(ans==4)
	{
		break;
	}
	cout<<"\nWould you like to continue? (Y/N) ";
	cin>>loop;
	
	if(loop=='Y' || loop=='y')
	{
		continue;
	}
	if(loop=='N' || loop=='n')
	{
		break;
	}
}
}

};
int main()
{ 
int i, j;
char b;
	cout<<"WELCOME TO HDFC BANK\n";
    introduction a;
    a.question(i);
   
	return 0;
}