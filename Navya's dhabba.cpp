#include<iostream>
using namespace std;
int main()
{
    system("color 4e");
    int i,sq,kq,pq,scq,cq,fq,mq,mcq,s=599, k=499, p=499, sc=599, c=799, f=850, m=550, mc=599, total;
    string name,order, answer;
    
    cout<<"* * * WELCOME TO NAVYA'S DHABBA * * *\n";
    cout<<"\nEnter your name: ";
    cin>>name;
    cout<<"\nEnter the quantity, incase you don't want to order press 0:\n";
    cout<<"1. Soup - Rs.599 - ";
    cin>>sq;
   
    cout<<"2. Kabab - Rs.499 - ";
    cin>>kq;
  
    cout<<"3. Paneer - Rs.499 - ";
    cin>>pq;
    
    cout<<"4. Soyachaap - Rs.599 - ";
    cin>>scq;
   
    cout<<"5. Chicken - Rs.799 - ";
    cin>>cq;
   
   cout<<"6. Fish - Rs.850 - ";
   cin>>fq;
   
   cout<<"7. Mashroom - Rs550 - ";
   cin>>mq;
   
   cout<<"8. Manchurian - Rs.599 - ";
   cin>>mcq;
   cout<<"\nThank you for ordering, food will be served in 10 minutes.\n";
    cout<<"^ ^ ^ NAVYA'S DHABBA ^ ^ ^\n";
    cout<<"\nCustomer name: "<<name<<"\n";
    cout<<"________________________________________\n";
    cout<<"| Item Name | Quantity | Price | Total |\n";
    
    cout<<"|   "<<"Soup"<<"    | "<<sq<<"        | "<<s<<"   |  "<<sq*s<<"  |\n";
    cout<<"|  "<<"Kabab"<<"    | "<<kq<<"        | "<<k<<"   |  "<<kq*k<<"  |\n";
    cout<<"|  "<<"Paneer"<<"   | "<<pq<<"        | "<<p<<"   |  "<<pq*p<<"  |\n";
    cout<<"| "<<"Soyachaap"<<" | "<<scq<<"        | "<<sc<<"   |  "<<scq*sc<<"  |\n";
    cout<<"| "<<"Chicken"<<"   | "<<cq<<"        | "<<c<<"   |  "<<cq*c<<"  |\n";
    cout<<"|   "<<"Fish"<<"    | "<<fq<<"        | "<<f<<"   |  "<<fq*f<<"  |\n";
    cout<<"| "<<"Mashroom"<<"  | "<<mq<<"        | "<<m<<"   |  "<<mq*m<<"  |\n";
    cout<<"| "<<"Manchurian"<<"| "<<mcq<<"        | "<<mc<<"   |  "<<mcq*mc<<"  |\n";
    total=sq*s+kq*k+pq*p+scq*sc+cq*c+fq*f+mq*m+mcq*mc;
    cout<<"|           |          | total = "<<total<<" |";
    return 0;
}