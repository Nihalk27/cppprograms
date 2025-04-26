#include<iostream>
using namespace std;
class account
{
	private :
        static int count;
		int accountNumber;
		string name;
		double balance;
	public :
		account();
		account(int accountNumber,string name ,double balance);
		void accept();
		void Display();
        void withdrawal(int accno);
        void Deposite();
       
};