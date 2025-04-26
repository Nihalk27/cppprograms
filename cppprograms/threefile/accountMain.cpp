#include<iostream>
#include"account.h"
int main ()
{
	int size=0;
	cout<<"Enter the Number of account to add "<<endl;
	cin>>size;
	account *arr = new account[size];
	for(int i=0 ;i<size;i++)
	{
		arr[i].accept();
	}
    cout<<"enter the account Number for withdraw "<<endl;
    int accno;
    cin>> accno;
    arr[accno].withdrawal();
	
	cout<<"all done"<<endl;
	return 0;
}