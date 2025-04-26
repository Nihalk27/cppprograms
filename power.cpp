#include<iostream>
using namespace std;
int power(int a,int b)
{
    int c=1;
     for(int i=0;i<b;i++)
    {
        c=c*a;
    }
    return c;

}
int main()
{
    int num1,num2 ;
    cout<<"Enter the Number and its power"<<endl;
    cin>>num1>>num2;
    power(num1,num2);// we can skip this step and write directly
    cout<<"power is "<<power(num1,num2);
    return 0;
}