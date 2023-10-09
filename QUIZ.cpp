#include<iostream>
using namespace std;
int main()
{
	string name;
	int i,answer, score=0;
	cout<<"Quiz\n";
	cout<<"RULES:\n1. YOU'LL GET 5 QUESTIONS.\n2. YOU HAVE TO WRITE THE OPTION NUMBER OUT OF THE FOUR IN THE ANSWER.\n\n";
	cout<<"Please enter your name: ";
	cin>>name;
	cout<<"\nYOUR TIME STARTS NOW.\n";
	cout<<"\nQ.1 Who is the best singer? \n";
	cout<<"1. Karan Aujla  2. Prem dhillon  3. Diljit dosanjh  4.Satinder sartaj\n";
	
    
    	cout<<"Enter your answer: ";
	    cin>>answer;

	
	if(answer==1)
	{
		cout<<"\nThat is correct!";
		score+=10;
	}
	else
	{
		cout<<"\nOops! The correct answer is Karan Aujla.";
	}
	
	cout<<"\n\nQ.2 Which place is also called the place of love?\n";
	cout<<"1. London  2. Paris  3.New york  4. Canada\n";
   cout<<"Enter your answer: ";
	    cin>>answer;
	    
	    if(answer==2)
	    {
	    	cout<<"\nThat is correct!";
		    score+=10;
		}
		else{
			
			cout<<"\nOops! The correct answer is Paris.";
		}
		
		cout<<"\n\nQ.3 Who was awarded as the best dancer in UAE?\n";
		cout<<"1.Kritika khurana  2.Nidhi Kumar  3. Naina Batra  4. Manpreet toor\n";
		 cout<<"Enter your answer: ";
	    cin>>answer;
	    
	    if(answer==2)
	    {
	    	cout<<"\nThat is correct!";
		    score+=10;
		}
		else{
			
			cout<<"\nOops! The correct answer is Nidhi Kumar.";
		}
		
		cout<<"\n\nQ.4 Which of the films was superhit?\n";
		cout<<"1.DDLJ  2.Kuch kuch hota hai  3. YJHD  4. Jab we met\n";
		 cout<<"Enter your answer: ";
	    cin>>answer;
	    
	    if(answer==4)
	    {
	    	cout<<"\nThat is correct!";
		    score+=10;
		}
		else{
			
			cout<<"\nOops! The correct answer is Jab we met.";
		}
		
		cout<<"\n\nQ.5 Which was Lord Rama's birth place?\n";
		cout<<"1.Vrindavan  2.Ayodhya  3. Mithila  4. Sri lanka\n";
		 cout<<"Enter your answer: ";
	    cin>>answer;
	    
	    if(answer==2)
	    {
	    	cout<<"\nThat is correct!";
		    score+=10;
		}
		else{
			
			cout<<"\nOops! The correct answer is Ayodhya.";
		}
		
		cout<<"\n\nYour final score is "<<score<<".";
		if(score<=30)
		{
			cout<<"\nSorry but you haven't qualified for the next round!";
		}
		else
		{
			cout<<"\nCongratulations! You are now qualified for the next round.";
		}
	return 0;
}