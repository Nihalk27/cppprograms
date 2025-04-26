#include<iostream>
using namespace std;
void charcheck(char ch)
{
    if( ch >=65 && ch <=90)
    {
        cout<<ch<<" is a capital letter"<<endl;
    }
    else if(ch >=97 && ch <= 122)
    {
        cout<<ch<<" is a small letter "<<endl;
    }
    else 
    {
        cout<<"Invalid input";
    }

}
int main()
{
    cout<<"Enter the letter"<<endl;
    char ch;
    cin>>ch;
    charcheck(ch);
    return 0;
}