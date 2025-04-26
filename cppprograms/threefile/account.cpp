#include<iostream>
#include"account.h"

using namespace std;
 
account :: account()
{
    count=0;
	accountNumber=0;
	name="";
	balance=0;
}
account :: account(int accountNumber,string name ,double balance)
{
	accountNumber=accountNumber;
	name=name;
	balance=balance;
    count++;
    
}
void account ::accept()
{
	//cout<<"Enter the Account Number :"<<endl;
	accountNumber=count;
	cout<<"Enter the name of Account Holder"<<endl;
	cin>>name;
	cout<<"Enter the balance"<<endl;
	cin>>balance;
}
void account :: Display()
{
	cout<<"The Account number is "<<accountNumber<<endl;
	cout<<name<<" is a Account holder name "<<endl;
	cout<<"Balance "<<balance<<endl;
}
void account :: withdrawal()
{

    if(this->accountNumber==accountNumber && this->balance>0)
    {
    cout<<"Enter the ammount for widrawal"<<endl;
    double a=0;
    cin>>a;
    if(a<=balance && a>0)
    {
    cout<<"Balance is : "<<balance-a<<endl;
    }
    else cout<<"Invalid Withdrawal "<<endl;
    }
}
void account :: Deposite()
{
    cout<<"Enter the Ammount for Deposite "<<endl;
    double d=0;
    cin>>d;
    cout<<"Balance is : "<<balance+d<<endl;
}
/*int account :: transaction()
{
    int a=0;
    cout<<"Enter the option to make transactio "<<endl;
    cout<<"press 1 for the widrawal \npress 2 for Deposite \npress 3 for the account details of all account holders"<<endl;
    cin>>a;
    switch(a)
    {
        case 1: arr[i].widrawal
    }
}*/
